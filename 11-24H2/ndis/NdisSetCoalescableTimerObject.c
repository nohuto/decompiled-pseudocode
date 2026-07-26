/*
 * XREFs of NdisSetCoalescableTimerObject @ 0x140089CE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqill @ 0x14004DF50 (WPP_RECORDER_SF_qqill.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall NdisSetCoalescableTimerObject(
        NDIS_HANDLE TimerObject,
        LARGE_INTEGER DueTime,
        LONG MillisecondsPeriod,
        PVOID FunctionContext,
        ULONG Tolerance)
{
  _QWORD *v6; // rsi
  KIRQL v10; // al
  _QWORD *v11; // r8
  _QWORD *v12; // rdx
  int Dpc; // [rsp+20h] [rbp-48h]

  v6 = (_QWORD *)*((_QWORD *)TimerObject + 24);
  if ( **((_BYTE **)TimerObject + 3) == 17 && !v6 )
    return 0;
  if ( FunctionContext )
    *((_QWORD *)TimerObject + 23) = FunctionContext;
  else
    *((_QWORD *)TimerObject + 23) = *((_QWORD *)TimerObject + 22);
  if ( v6 && (*(_BYTE *)(v6[470] + 26LL) & 2) != 0 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(v6 + 235);
    v11 = (_QWORD *)v6[70];
    v12 = v11;
    if ( v11 )
    {
      while ( v12 != TimerObject )
      {
        v12 = (_QWORD *)*v12;
        if ( !v12 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      *(_QWORD *)TimerObject = v11;
      v6[70] = TimerObject;
    }
    KeReleaseSpinLock(v6 + 235, v10);
  }
  if ( MillisecondsPeriod )
    *((_BYTE *)TimerObject + 200) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqill(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      DueTime.QuadPart,
      *(__int64 *)&MillisecondsPeriod,
      (__int64)FunctionContext,
      Dpc);
  return KeSetCoalescableTimer(
           (PKTIMER)((char *)TimerObject + 32),
           DueTime,
           MillisecondsPeriod,
           Tolerance,
           (PKDPC)((char *)TimerObject + 96));
}
