/*
 * XREFs of LdrpGetModuleInfoFromVirtualMemory @ 0x1800F3BC4
 * Callers:
 *     LdrpMUIEtwOutput @ 0x18011554C (LdrpMUIEtwOutput.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     wcsrchr @ 0x180127C50 (wcsrchr.c)
 *     ZwQueryVirtualMemory @ 0x1801620F0 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpGetModuleInfoFromVirtualMemory(
        __int64 a1,
        void *a2,
        unsigned __int16 a3,
        _DWORD *a4,
        _QWORD *a5,
        _DWORD *a6,
        _BYTE *a7)
{
  size_t v8; // rbx
  unsigned __int64 Heap; // rbp
  __int64 v12; // rsi
  int v13; // edi
  __int64 v14; // rax
  size_t v15; // r8
  wchar_t *v16; // rax
  _WORD *v17; // rbx
  _QWORD *v18; // r14
  __int64 v19; // rsi
  void *v20; // rax
  size_t v22; // [rsp+68h] [rbp+10h] BYREF

  v8 = a3;
  v22 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, a3);
  if ( !Heap )
    return (unsigned int)-1073741801;
  v12 = -1LL;
  v13 = ZwQueryVirtualMemory(-1LL, a1, 2LL, Heap, v8, &v22);
  if ( v13 >= 0 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(*(_QWORD *)(Heap + 8) + 2 * v14) );
    v15 = 2 * v14 + 2;
    v22 = v15;
    if ( v15 >= v8 )
    {
      v13 = -2147483643;
      goto LABEL_13;
    }
    memmove(a2, *(const void **)(Heap + 8), v15);
    v16 = wcsrchr((const wchar_t *)a2, 0x5Cu);
    if ( !v16 )
    {
      v13 = -1073741767;
      goto LABEL_13;
    }
    v17 = v16 + 1;
    do
      ++v12;
    while ( v17[v12] );
    v18 = a5;
    v19 = (unsigned int)(2 * v12);
    if ( a5 )
    {
      v20 = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v19 + 2);
      *v18 = v20;
      if ( !v20 )
      {
        v13 = -1073741801;
        goto LABEL_13;
      }
      memmove(v20, v17, v19 + 2);
    }
    if ( a6 )
      *a6 = v19;
    if ( a4 )
      *a4 = 2 * (((char *)v17 - (_BYTE *)a2) >> 1);
    if ( a7 )
      *a7 = 1;
  }
LABEL_13:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)v13;
}
