/*
 * XREFs of NdisDeregisterPoll @ 0x1400D5A10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??_GNdisPoll@@QEAAPEAXI@Z @ 0x1400D59C0 (--_GNdisPoll@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisDeregisterPoll(NdisPoll *P)
{
  KIRQL CurrentIrql; // al
  int v3; // edx

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
    ndisBugCheckEx(0x2EuLL, 2uLL, CurrentIrql, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      1,
      13,
      (struct _GUID *)&WPP_6e9ab13774253042015e4c400df4b426_Traceguids,
      (char)P);
  }
  NdisPoll::`scalar deleting destructor'(P, 0);
  ExFreePoolWithTag(P, 0);
}
