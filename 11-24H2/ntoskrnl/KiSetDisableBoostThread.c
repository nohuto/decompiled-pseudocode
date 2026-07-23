/*
 * XREFs of KiSetDisableBoostThread @ 0x140446F84
 * Callers:
 *     KeSetDisableBoostProcess @ 0x140446DDC (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x140446EE4 (KeSetDisableBoostThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetForegroundBoost @ 0x14044762C (KiSetForegroundBoost.c)
 *     KiClearForegroundBoost @ 0x1404476C0 (KiClearForegroundBoost.c)
 */

__int64 __fastcall KiSetDisableBoostThread(__int64 a1, int a2, __int64 a3)
{
  unsigned int v6; // edi
  signed __int8 v7; // cf
  unsigned int v8; // edi
  __int64 result; // rax
  unsigned int v10; // eax
  __int64 v11; // r9

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v6);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( a2 )
    v7 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 3u);
  else
    v7 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 3u);
  v8 = v7;
  if ( a2 != v7 && (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 136LL) & 0x2000) != 0 )
  {
    if ( a2 )
      KiClearForegroundBoost(a1);
    else
      KiSetForegroundBoost(a1);
    v10 = KiComputeThreadPriority(a1, 0, 0);
    KiSetPriorityThread((_KTHREAD *)a1, a3, v10, v11);
  }
  result = v8;
  *(_QWORD *)(a1 + 64) = 0LL;
  return result;
}
