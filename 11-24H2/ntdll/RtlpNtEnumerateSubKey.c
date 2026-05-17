/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x1800F5610
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     NtEnumerateKey @ 0x1801622D0 (NtEnumerateKey.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 Heap; // rbx
  unsigned int v7; // esi
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ecx
  int v12; // [rsp+78h] [rbp+10h] BYREF

  Heap = 0LL;
  v12 = 0;
  v7 = 0;
  if ( !*(_WORD *)(a2 + 2)
    || (v7 = *(unsigned __int16 *)(a2 + 2) + 16,
        (Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7)) != 0) )
  {
    v8 = NtEnumerateKey(a1, a3, 0LL, Heap, v7, &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -2147483643 )
        goto LABEL_9;
    }
    else
    {
      if ( !Heap )
        return v9;
      if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) >= *(_DWORD *)(Heap + 12) )
      {
        v10 = *(unsigned __int16 *)(Heap + 12);
        *(_WORD *)a2 = v10;
        memmove(*(void **)(a2 + 8), (const void *)(Heap + 16), v10);
LABEL_10:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v9;
      }
      v9 = -2147483643;
    }
    *(_WORD *)a2 = v12 - 16;
LABEL_9:
    if ( Heap )
      goto LABEL_10;
    return v9;
  }
  return 3221225495LL;
}
