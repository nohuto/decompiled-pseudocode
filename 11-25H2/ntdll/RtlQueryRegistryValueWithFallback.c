/*
 * XREFs of RtlQueryRegistryValueWithFallback @ 0x180121CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlQueryRegistryValueWithFallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        void *a6,
        _DWORD *a7)
{
  unsigned int v12; // r15d
  _DWORD *Heap; // rdi
  __int64 v14; // r9
  int v15; // ebx
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  if ( !a1 && !a2 )
    return 3221225485LL;
  if ( a4 >= 0xFFFFFFF0 )
    return (unsigned int)-1073741675;
  v12 = a4 + 16;
  Heap = (_DWORD *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, a4 + 16);
  if ( Heap )
  {
    v15 = -1073741772;
    if ( !a1 || (v15 = NtQueryValueKey(a1, a3, 2LL, Heap, v12, &v16), v15 == -1073741772) )
    {
      if ( !a2 )
      {
LABEL_20:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v14);
        return (unsigned int)v15;
      }
      v15 = NtQueryValueKey(a2, a3, 2LL, Heap, v12, &v16);
    }
    if ( (int)(v15 + 0x80000000) < 0 || v15 == -2147483643 )
    {
      if ( a5 )
        *a5 = Heap[1];
      if ( v15 >= 0 )
      {
        if ( a4 < Heap[2] )
          v15 = -2147483643;
        else
          memmove(a6, Heap + 3, (unsigned int)Heap[2]);
      }
      *a7 = Heap[2];
    }
    goto LABEL_20;
  }
  return (unsigned int)-1073741801;
}
