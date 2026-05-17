/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x180131860
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x180115D20 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  int v8; // eax
  int v9; // ebx
  __int64 Heap; // rax
  _QWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+20h] BYREF

  v12[0] = 1441812LL;
  v13 = 0;
  v12[1] = L"BinaryName";
  v6 = 0LL;
  v7 = 0LL;
  v8 = NtQueryValueKey(a1, v12, 2LL, 0LL, 0, &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741789 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v13);
      v7 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      v9 = NtQueryValueKey(a1, v12, 2LL, Heap, v13, &v13);
      if ( v9 < 0 )
      {
LABEL_14:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
        return (unsigned int)v9;
      }
      if ( *(_DWORD *)(v7 + 4) != 1
        || *(_DWORD *)(v7 + 8) < 4u
        || (v6 = v7 + 12, *(_WORD *)(v7 + 12 + 2 * ((unsigned __int64)*(unsigned int *)(v7 + 8) >> 1) - 2)) )
      {
        v9 = -1073739509;
        goto LABEL_14;
      }
    }
    if ( v9 >= 0 )
    {
      *a2 = v6;
      *a3 = v7;
      return (unsigned int)v9;
    }
    if ( !v7 )
      return (unsigned int)v9;
    goto LABEL_14;
  }
  return (unsigned int)-1073739509;
}
