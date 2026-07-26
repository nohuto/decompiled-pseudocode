/*
 * XREFs of ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1400A4978
 * Callers:
 *     ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1400A46F0 (-ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     NdisMTriggerPDDrainNotification @ 0x1400A4F10 (NdisMTriggerPDDrainNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

void __fastcall ndisTriggerPDDrainNotification(ULONG_PTR BugCheckParameter3)
{
  int v1; // edx

  v1 = 0;
  if ( _InterlockedExchange((volatile __int32 *)(BugCheckParameter3 + 56), 0) != 1 )
    ndisBugCheckEx(0x23uLL, 3uLL, BugCheckParameter3, *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 32) + 48LL));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
  {
    LOBYTE(v1) = 5;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v1,
      29,
      31,
      (struct _GUID *)&WPP_bb899958c3b83c4be5ffe2f3031e3faa_Traceguids,
      *(_QWORD *)(BugCheckParameter3 + 48));
  }
  KeSetEvent(*(PRKEVENT *)(BugCheckParameter3 + 64), 2, 0);
}
