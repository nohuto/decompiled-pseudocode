/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x180003278
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180003190 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpAllocWork @ 0x180046F70 (TpAllocWork.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

PTP_WORK *__fastcall RtlpFcAllocateChangeRegistration(_TP_WORK *a1, _TP_WORK *a2)
{
  PTP_WORK *v3; // rdi
  PTP_WORK *Heap; // rax
  PTP_WORK *v6; // rbx

  v3 = 0LL;
  Heap = (PTP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v6 = Heap;
  if ( Heap )
  {
    if ( TpAllocWork(Heap + 5, RtlpFcChangeRegistrationCallback, Heap, 0LL) < 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v6[2] = a1;
      v3 = v6;
      v6[3] = a2;
    }
  }
  return v3;
}
