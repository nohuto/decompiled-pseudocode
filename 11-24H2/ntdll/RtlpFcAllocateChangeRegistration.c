/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x18002CA58
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18002C970 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TpAllocWork @ 0x180048850 (TpAllocWork.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
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
