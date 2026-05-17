/*
 * XREFs of RtlCreateUserSecurityObject @ 0x180133850
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x1800CE250 (RtlCreateAndSetSD.c)
 */

__int64 __fastcall RtlCreateUserSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        _DWORD *a6,
        _QWORD *a7)
{
  void *ProcessHeap; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10[3]; // [rsp+50h] [rbp-18h] BYREF

  v10[0] = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, v10);
  if ( (int)result >= 0 )
  {
    v9 = RtlpNewSecurityObject(0LL, (_OWORD *)v10[0], a7, 0LL, 0, a5, 0, (void *)0xFFFFFFFFFFFFFFFCLL, a6);
    RtlFreeHeap((__int64)ProcessHeap, 0, v10[0]);
    return v9;
  }
  return result;
}
