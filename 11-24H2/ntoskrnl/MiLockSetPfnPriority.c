/*
 * XREFs of MiLockSetPfnPriority @ 0x1404300D0
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiUpdateOldPteWorker @ 0x1403FA800 (MiUpdateOldPteWorker.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiLockSetPfnPriority(__int64 a1, char a2)
{
  unsigned int v4; // edi
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
        HvlNotifyLongSpinWait(v4);
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
