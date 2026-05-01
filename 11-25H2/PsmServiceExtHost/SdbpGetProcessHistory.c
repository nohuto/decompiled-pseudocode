/*
 * XREFs of SdbpGetProcessHistory @ 0x180094DC8
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x18009B5C0 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslEnvVarQuery @ 0x1800A6924 (AslEnvVarQuery.c)
 *     memmove_0 @ 0x1800A780E (memmove_0.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(__int64 a1, _WORD *a2, _WORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // r13d
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rbp
  _WORD *Heap; // rdi
  _WORD *v12; // r14
  _WORD *result; // rax
  _WORD *v14; // rcx
  _WORD *v15; // rdi
  size_t v16; // rbx
  _WORD *v17; // rdi

  v5 = -1LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  do
    ++v5;
  while ( a3[v5] );
  v7 = AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 17LL);
  v8 = v5 + v6;
  if ( v7 == -1073741789 )
    v9 = (unsigned int)(v8 + 2);
  else
    v9 = (unsigned int)(v8 + 1);
  v10 = 2 * v9;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v9);
  v12 = Heap;
  if ( Heap )
  {
    *Heap = 0;
    if ( v7 == -1073741789 && (int)AslEnvVarQuery(a1, L"__PROCESS_HISTORY", 17LL) >= 0 )
    {
      v14 = &Heap[v10];
      v15 = v14 - 1;
      if ( *(v14 - 1) != 59 )
      {
        v15 = &v12[v10];
        *v14 = 59;
      }
      Heap = v15 + 1;
    }
    v16 = (unsigned int)v6;
    memmove_0(Heap, a2, v16 * 2);
    v17 = &Heap[v16];
    memmove_0(v17, a3, 2LL * (unsigned int)v5);
    result = v12;
    v17[(unsigned int)v5] = 0;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  return result;
}
