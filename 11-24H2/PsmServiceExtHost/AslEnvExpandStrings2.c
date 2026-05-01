/*
 * XREFs of AslEnvExpandStrings2 @ 0x1800A668C
 * Callers:
 *     SdbpResolveMatchingFile @ 0x18009BCE8 (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslEnvExpandStrings @ 0x1800A64B4 (AslEnvExpandStrings.c)
 *     AslpEnvResolveVars @ 0x1800A6E24 (AslpEnvResolveVars.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        __int64 a1,
        wchar_t *a2,
        _WORD *a3,
        unsigned __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  wchar_t *v10; // rdi
  wchar_t *Heap; // rbp
  int v12; // ebx
  _QWORD *v13; // r14
  __int16 v14; // r12
  __int16 v15; // r13
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+20h]

  v21 = a4;
  v8 = -1LL;
  LODWORD(v20) = 0;
  v9 = -1LL;
  v10 = a2;
  Heap = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  v15 = a6;
  if ( (unsigned int)AslpEnvResolveVars(a2, a6, a7, (__int64)&v20) != -1073741789 )
  {
    v16 = -1073741595;
LABEL_19:
    AslLogCallPrintf(1LL);
    goto LABEL_20;
  }
  if ( v12 != (_DWORD)v20 )
  {
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * (unsigned int)v20);
    if ( !Heap )
    {
      v16 = -1073741801;
      goto LABEL_19;
    }
    v17 = -1LL;
    do
      ++v17;
    while ( v10[v17] );
    v16 = AslpEnvResolveVars(v10, v15, v14, (__int64)&v20);
    if ( v16 < 0 )
      goto LABEL_19;
    v10 = Heap;
  }
  do
    ++v8;
  while ( v10[v8] );
  v16 = AslEnvExpandStrings(a1, v10, v8, a3, v21, v13);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741789 )
    goto LABEL_19;
LABEL_20:
  AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return (unsigned int)v16;
}
