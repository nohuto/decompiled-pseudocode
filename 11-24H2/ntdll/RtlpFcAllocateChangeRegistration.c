/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x180097C08
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180097B20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     TpAllocWork @ 0x18001BE50 (TpAllocWork.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 */

unsigned __int64 __fastcall RtlpFcAllocateChangeRegistration(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 Heap; // rax
  unsigned __int64 v6; // rbx

  v3 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v6 = Heap;
  if ( Heap )
  {
    if ( (int)TpAllocWork((_QWORD *)(Heap + 40), (__int64)RtlpFcChangeRegistrationCallback, Heap, 0LL) < 0 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
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
