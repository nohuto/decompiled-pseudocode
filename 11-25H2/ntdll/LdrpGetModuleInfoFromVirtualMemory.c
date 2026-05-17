/*
 * XREFs of LdrpGetModuleInfoFromVirtualMemory @ 0x1800F5954
 * Callers:
 *     LdrpMUIEtwOutput @ 0x180118730 (LdrpMUIEtwOutput.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     wcsrchr @ 0x180129730 (wcsrchr.c)
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  __int64 Heap; // rbp
  __int64 v12; // rsi
  int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rax
  size_t v16; // r8
  wchar_t *v17; // rax
  _WORD *v18; // rbx
  _QWORD *v19; // r14
  __int64 v20; // rsi
  void *v21; // rax
  size_t v23; // [rsp+68h] [rbp+10h] BYREF

  v8 = a3;
  v23 = 0LL;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, a3);
  if ( !Heap )
    return (unsigned int)-1073741801;
  v12 = -1LL;
  v13 = ZwQueryVirtualMemory(-1LL, a1, 2LL, Heap, v8, &v23);
  if ( v13 >= 0 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(*(_QWORD *)(Heap + 8) + 2 * v15) );
    v16 = 2 * v15 + 2;
    v23 = v16;
    if ( v16 >= v8 )
    {
      v13 = -2147483643;
      goto LABEL_13;
    }
    memmove(a2, *(const void **)(Heap + 8), v16);
    v17 = wcsrchr((const wchar_t *)a2, 0x5Cu);
    if ( !v17 )
    {
      v13 = -1073741767;
      goto LABEL_13;
    }
    v18 = v17 + 1;
    do
      ++v12;
    while ( v18[v12] );
    v19 = a5;
    v20 = (unsigned int)(2 * v12);
    if ( a5 )
    {
      v21 = (void *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v20 + 2);
      *v19 = v21;
      if ( !v21 )
      {
        v13 = -1073741801;
        goto LABEL_13;
      }
      memmove(v21, v18, v20 + 2);
    }
    if ( a6 )
      *a6 = v20;
    if ( a4 )
      *a4 = 2 * (((char *)v18 - (_BYTE *)a2) >> 1);
    if ( a7 )
      *a7 = 1;
  }
LABEL_13:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v14);
  return (unsigned int)v13;
}
