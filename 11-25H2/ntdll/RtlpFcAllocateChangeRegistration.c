/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x180003278
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180003190 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpAllocWork @ 0x180046F70 (TpAllocWork.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpFcAllocateChangeRegistration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 Heap; // rax
  __int64 v6; // rbx

  v3 = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
  v6 = Heap;
  if ( Heap )
  {
    if ( (int)TpAllocWork(Heap + 40, RtlpFcChangeRegistrationCallback, Heap, 0LL) < 0 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v6);
    }
    else
    {
      *(_QWORD *)(v6 + 16) = a1;
      v3 = v6;
      *(_QWORD *)(v6 + 24) = a2;
    }
  }
  return v3;
}
