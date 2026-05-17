/*
 * XREFs of RtlCreateUserSecurityObject @ 0x180135330
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x180065F40 (RtlCreateAndSetSD.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlCreateUserSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        __int64 a6,
        _QWORD *a7)
{
  void *ProcessHeap; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11[3]; // [rsp+50h] [rbp-18h] BYREF

  v11[0] = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, v11);
  if ( (int)result >= 0 )
  {
    v9 = RtlpNewSecurityObject(0LL, (_OWORD *)v11[0], a7, 0LL, 0, a5, 0, -4LL, a6);
    RtlFreeHeap((__int64)ProcessHeap, 0, v11[0], v10);
    return v9;
  }
  return result;
}
