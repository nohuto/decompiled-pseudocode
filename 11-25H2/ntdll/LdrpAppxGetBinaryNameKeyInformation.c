/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x180133340
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x180118F10 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r9
  int v10; // ebx
  __int64 Heap; // rax
  _QWORD v13[3]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+98h] [rbp+20h] BYREF

  v13[0] = 1441812LL;
  v14 = 0;
  v13[1] = L"BinaryName";
  v6 = 0LL;
  v7 = 0LL;
  v8 = NtQueryValueKey(a1, v13, 2LL, 0LL, 0, &v14);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741789 )
    {
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v14);
      v7 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      v10 = NtQueryValueKey(a1, v13, 2LL, Heap, v14, &v14);
      if ( v10 < 0 )
      {
LABEL_14:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7, v9);
        return (unsigned int)v10;
      }
      if ( *(_DWORD *)(v7 + 4) != 1
        || *(_DWORD *)(v7 + 8) < 4u
        || (v6 = v7 + 12, *(_WORD *)(v7 + 12 + 2 * ((unsigned __int64)*(unsigned int *)(v7 + 8) >> 1) - 2)) )
      {
        v10 = -1073739509;
        goto LABEL_14;
      }
    }
    if ( v10 >= 0 )
    {
      *a2 = v6;
      *a3 = v7;
      return (unsigned int)v10;
    }
    if ( !v7 )
      return (unsigned int)v10;
    goto LABEL_14;
  }
  return (unsigned int)-1073739509;
}
