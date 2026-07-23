/*
 * XREFs of MiMarkPfnVerified @ 0x1404297A4
 * Callers:
 *     MiRevertValidPte @ 0x140212130 (MiRevertValidPte.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140691820 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiValidateImagePfn @ 0x14093AE5C (MiValidateImagePfn.c)
 *     MiCreateDescriptorPfns @ 0x140C53184 (MiCreateDescriptorPfns.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C58A78 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 *     MiValidateKernelHalLargePageRange @ 0x140C5DFC0 (MiValidateKernelHalLargePageRange.c)
 * Callees:
 *     MiSetPfnIdentity @ 0x140216B00 (MiSetPfnIdentity.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeSetPagePrivilege @ 0x140492188 (KeSetPagePrivilege.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

char __fastcall MiMarkPfnVerified(ULONG_PTR a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned __int8 v6; // r14
  ULONG_PTR v7; // rbp
  char result; // al
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // r9
  unsigned __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  *(_OWORD *)v13 = 0LL;
  v6 = 17;
  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  if ( (a2 & 4) == 0 )
  {
    if ( (a2 & 0x40) != 0 )
    {
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v9 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v9);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    else
    {
      v6 = MiLockPageInline(a1, a2, a3, a4);
    }
  }
  if ( (v4 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
      v4 &= ~2u;
    if ( (v4 & 2) != 0 && _bittest64(&MiFlags, 0xFu) )
    {
      if ( *(__int64 *)(a1 + 40) >= 0 && (MiFlags & 0x4000) != 0 )
      {
        v10 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
        v13[0] = v10;
      }
      else
      {
        v10 = v13[0];
      }
      v11 = v4 & 1;
      if ( (v4 & 1) != 0 )
        v4 &= ~1u;
      v12 = (unsigned int)(4 * v11 + 2);
      if ( (v4 & 0x20) != 0 )
      {
        v12 = (unsigned int)v12 | 0x40;
        if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && (*(_DWORD *)(a1 + 16) & 4) == 0 )
          LODWORD(v12) = v12 | 0x400;
      }
      if ( (int)KeSetPagePrivilege(v7, v10, v13, v12) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v7, 0LL, 0LL);
    }
  }
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result != 3 )
    result = MiSetPfnIdentity(a1, 3u);
  if ( (v4 & 1) != 0 && _bittest64(&MiFlags, 0xFu) )
  {
    MiGetPagePrivilege(a1, 1, v13);
    result = KeSetPagePrivilege(v7, 0LL, v13, 4LL);
  }
  if ( (v4 & 4) == 0 )
    return MiUnlockPage(a1, v6);
  return result;
}
