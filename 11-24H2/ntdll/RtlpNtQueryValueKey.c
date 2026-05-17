/*
 * XREFs of RtlpNtQueryValueKey @ 0x1800F3600
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpNtQueryValueKey(__int64 a1, _DWORD *a2, void *a3, int *a4)
{
  int v4; // eax
  __int64 Heap; // rax
  _DWORD *v10; // rbx
  int v11; // eax
  int v12; // edi
  _OWORD v14[3]; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v14[0] = 0LL;
  if ( a4 )
    v4 = *a4;
  v15 = v4 + 12;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(v4 + 12));
  v10 = (_DWORD *)Heap;
  if ( Heap )
  {
    v11 = NtQueryValueKey(a1, v14, 2LL, Heap, v15, &v15);
    if ( v11 == -1073741772 )
    {
      v12 = 0;
      v10[2] = 0;
      v10[1] = 0;
    }
    else
    {
      v12 = v11;
      if ( v11 < 0 && v11 != -2147483643 )
      {
LABEL_13:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
        return (unsigned int)v12;
      }
    }
    if ( a4 )
      *a4 = v10[2];
    if ( a2 )
      *a2 = v10[1];
    if ( v12 >= 0 )
    {
      if ( a3 )
        memmove(a3, v10 + 3, (unsigned int)v10[2]);
    }
    goto LABEL_13;
  }
  return 3221225626LL;
}
