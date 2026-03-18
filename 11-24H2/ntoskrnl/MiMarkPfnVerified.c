/*
 * XREFs of MiMarkPfnVerified @ 0x140436D24
 * Callers:
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiRevertValidPte @ 0x140237FA0 (MiRevertValidPte.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140690750 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiValidateImagePfn @ 0x140957464 (MiValidateImagePfn.c)
 *     MiCreateDescriptorPfns @ 0x140C50FF4 (MiCreateDescriptorPfns.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140C568E8 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 *     MiValidateKernelHalLargePageRange @ 0x140C5BE30 (MiValidateKernelHalLargePageRange.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x14021CE30 (MiGetPagePrivilege.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeSetPagePrivilege @ 0x14036C260 (KeSetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x1403A00D0 (MiSetPfnIdentity.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

char __fastcall MiMarkPfnVerified(ULONG_PTR a1, char a2)
{
  char v2; // di
  unsigned __int8 v4; // r14
  unsigned __int64 v5; // rbp
  char result; // al
  unsigned int v7; // esi
  __int64 v8; // rdx
  int v9; // r9d
  unsigned int v10; // r9d
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v11 = 0LL;
  v4 = 17;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  if ( (a2 & 4) == 0 )
  {
    if ( (a2 & 0x40) != 0 )
    {
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v7);
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
      v4 = MiLockPageInline(a1);
    }
  }
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && _bittest64(&MiFlags, 0xFu) )
    {
      if ( *(__int64 *)(a1 + 40) >= 0 && (MiFlags & 0x4000) != 0 )
      {
        v8 = (__int64)(*(_QWORD *)(a1 + 8) << 25) >> 16;
        *(_QWORD *)&v11 = v8;
      }
      else
      {
        v8 = v11;
      }
      v9 = v2 & 1;
      if ( (v2 & 1) != 0 )
        v2 &= ~1u;
      v10 = 4 * v9 + 2;
      if ( (v2 & 0x20) != 0 )
      {
        v10 |= 0x40u;
        if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && (*(_DWORD *)(a1 + 16) & 4) == 0 )
          v10 |= 0x400u;
      }
      if ( (int)KeSetPagePrivilege(v5, v8, &v11, v10) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v5, 0LL, 0LL);
    }
  }
  result = (*(_QWORD *)(a1 + 40) >> 60) & 7;
  if ( result != 3 )
    result = MiSetPfnIdentity(a1, 3u);
  if ( (v2 & 1) != 0 && _bittest64(&MiFlags, 0xFu) )
  {
    MiGetPagePrivilege(a1, 1, (unsigned __int64 *)&v11);
    result = KeSetPagePrivilege(v5, 0LL, &v11, 4u);
  }
  if ( (v2 & 4) == 0 )
    return MiUnlockPage(a1, v4);
  return result;
}
