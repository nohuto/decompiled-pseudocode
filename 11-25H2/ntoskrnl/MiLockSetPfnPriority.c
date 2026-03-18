/*
 * XREFs of MiLockSetPfnPriority @ 0x140379880
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiUpdateOldPteWorker @ 0x140441E30 (MiUpdateOldPteWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, char a2)
{
  int v4; // edi
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h]

  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
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
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v6 = *(_DWORD *)(a1 + 32);
  HIBYTE(v6) ^= (a2 ^ HIBYTE(v6)) & 7;
  *(_DWORD *)(a1 + 32) = v6;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
