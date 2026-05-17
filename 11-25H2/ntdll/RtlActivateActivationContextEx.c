/*
 * XREFs of RtlActivateActivationContextEx @ 0x180091780
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1800900F0 (RtlCaptureStackBackTrace.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x1800918D0 (RtlpAllocateActivationContextStackFrame.c)
 *     RtlAddRefActivationContext @ 0x180091E70 (RtlAddRefActivationContext.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlActivateActivationContextEx(__int64 a1, __int64 a2, void *a3, unsigned __int64 *a4)
{
  char v5; // si
  void *v6; // rbx
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // r14
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  ULONG BackTraceHash; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v5 = a1;
  if ( a4 )
    *a4 = 0LL;
  v6 = &unk_180175458;
  if ( a3 != (void *)-3LL )
    v6 = a3;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 || v6 == (void *)-1LL || !a4 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a2 + 712);
  result = RtlpAllocateActivationContextStackFrame(a1, v7, &v14);
  if ( (int)result >= 0 )
  {
    v9 = v14;
    *(_DWORD *)(v14 + 16) = 40;
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v9 + 16) = 43;
      RtlAddRefActivationContext(v6);
    }
    if ( RtlpCaptureActivationContextActivationStacks )
    {
      v10 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)(v9 + 32), &BackTraceHash);
      if ( v10 >= 8 )
        goto LABEL_15;
    }
    else
    {
      v10 = 0;
    }
    memset_thunk_772440563353939046((void *)(v9 + 8 * (v10 + 4LL)), 0, 8LL * (8 - v10));
LABEL_15:
    *(_QWORD *)v9 = *(_QWORD *)v7;
    result = 0LL;
    *(_QWORD *)(v9 + 8) = v6;
    v11 = *(unsigned int *)(v7 + 28);
    v12 = v11 | ((unsigned __int64)(*(_DWORD *)(v7 + 32) & 0xFFFFFFF) << 32) | 0x1000000000000000LL;
    *(_DWORD *)(v7 + 28) = v11 + 1;
    *(_QWORD *)(v9 + 24) = v12;
    *a4 = v12;
    *(_QWORD *)v7 = v9;
  }
  return result;
}
