/*
 * XREFs of MiObtainProtoReference @ 0x14023BBE8
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14023A108 (MiFinishMdlForMappedFileFault.c)
 *     MiHandleCollidedFault @ 0x14023B504 (MiHandleCollidedFault.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiTranslatePageForCopy @ 0x1403961F0 (MiTranslatePageForCopy.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFlushWaitForReadInProgress @ 0x1404C9D74 (MiFlushWaitForReadInProgress.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x140211B30 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14023C190 (MiAreChargesNeededToLockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx
  unsigned int v3; // edi
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h]

  v2 = (volatile signed __int32 *)(a1 + 24);
  v3 = 0;
  if ( (a2 & 1) != 0 )
  {
    while ( _interlockedbittestandset64(v2, 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v2 < 0 );
    }
  }
  else
  {
    while ( _interlockedbittestandset64(v2, 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
        {
          HvlNotifyLongSpinWait(v3);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v2 < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(a1, 1) )
  {
    v6 = *(_DWORD *)(a1 + 32);
    LOWORD(v6) = v6 + 1;
    *(_DWORD *)(a1 + 32) = v6;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v2, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
