/*
 * XREFs of MiObtainProtoReference @ 0x14033DEAC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiHandleCollidedFault @ 0x14033D7C8 (MiHandleCollidedFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MiTranslatePageForCopy @ 0x1403783E0 (MiTranslatePageForCopy.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiFlushWaitForReadInProgress @ 0x1404C9AA4 (MiFlushWaitForReadInProgress.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14022E1E0 (MiChargeForLockedPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiAreChargesNeededToLockPage @ 0x14033E460 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiObtainProtoReference(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx
  int v3; // edi
  __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h]

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
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
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
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)v2 < 0 );
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(a1) || (unsigned int)MiChargeForLockedPage(a1, 1, v5, v6) )
  {
    v8 = *(_DWORD *)(a1 + 32);
    LOWORD(v8) = v8 + 1;
    *(_DWORD *)(a1 + 32) = v8;
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v2, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
