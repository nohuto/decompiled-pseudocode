/*
 * XREFs of RtlpHpGCTimerEnable @ 0x1801408D0
 * Callers:
 *     RtlEnableHeapGC @ 0x18013FB10 (RtlEnableHeapGC.c)
 * Callees:
 *     TpReleaseTimer @ 0x180088160 (TpReleaseTimer.c)
 *     TpAllocTimer @ 0x1800896F0 (TpAllocTimer.c)
 */

__int64 __fastcall RtlpHpGCTimerEnable(__int64 a1, _TP_POOL *a2)
{
  unsigned int v2; // ebx
  NTSTATUS v3; // eax
  _TP_TIMER *v4; // rcx
  TP_CALLBACK_ENVIRON_V3 CallbackEnviron; // [rsp+20h] [rbp-50h] BYREF
  PTP_TIMER Timer; // [rsp+80h] [rbp+10h] BYREF

  Timer = 0LL;
  *(&CallbackEnviron.Version + 1) = 0;
  if ( Context )
  {
    return 255;
  }
  else
  {
    memset(&CallbackEnviron.CleanupGroup, 0, 44);
    CallbackEnviron.Pool = a2;
    CallbackEnviron.Version = 3;
    CallbackEnviron.Size = 72;
    CallbackEnviron.CallbackPriority = TP_CALLBACK_PRIORITY_LOW;
    v3 = TpAllocTimer(&Timer, (PTP_TIMER_CALLBACK)RtlpHpGCTimerCallback, &Context, &CallbackEnviron);
    v4 = Timer;
    v2 = v3;
    if ( v3 >= 0 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Context, (signed __int64)Timer, 0LL) )
      {
        v4 = Timer;
        v2 = 255;
      }
      else
      {
        v4 = 0LL;
        v2 = 0;
      }
    }
    if ( v4 )
      TpReleaseTimer(v4);
  }
  return v2;
}
