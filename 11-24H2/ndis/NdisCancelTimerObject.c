/*
 * XREFs of NdisCancelTimerObject @ 0x1400500E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 */

BOOLEAN __stdcall NdisCancelTimerObject(NDIS_HANDLE TimerObject)
{
  __int64 v2; // rax
  BOOLEAN v3; // di
  __int64 v4; // rax
  KIRQL v6; // r8
  _QWORD *i; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      12,
      (struct _GUID *)&WPP_037b04c1fd7031ba45b974c76174bf7c_Traceguids,
      *((_QWORD *)TimerObject + 3),
      (char)TimerObject);
  v2 = *((_QWORD *)TimerObject + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 3688) & 8) != 0 )
      return 0;
    v3 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
    v4 = *((_QWORD *)TimerObject + 24);
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3760) + 26LL) & 2) != 0 && v3 )
    {
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
      for ( i = (_QWORD *)(*((_QWORD *)TimerObject + 24) + 560LL); *i; i = (_QWORD *)*i )
      {
        if ( (NDIS_HANDLE)*i == TimerObject )
        {
          *i = *(_QWORD *)TimerObject;
          break;
        }
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(*((_QWORD *)TimerObject + 24) + 1880LL), v6);
    }
  }
  else
  {
    v3 = KeCancelTimer((PKTIMER)((char *)TimerObject + 32));
  }
  if ( *((_BYTE *)TimerObject + 200) )
    KeFlushQueuedDpcs();
  return v3;
}
