/*
 * XREFs of RtlpNtEnumerateSubKey @ 0x1800F7190
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtEnumerateKey @ 0x180163860 (NtEnumerateKey.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpNtEnumerateSubKey(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 Heap; // rbx
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // r9
  unsigned int v10; // esi
  unsigned int v11; // ecx
  int v13; // [rsp+78h] [rbp+10h] BYREF

  Heap = 0LL;
  v13 = 0;
  v7 = 0;
  if ( !*(_WORD *)(a2 + 2)
    || (v7 = *(unsigned __int16 *)(a2 + 2) + 16,
        (Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, v7)) != 0) )
  {
    v8 = NtEnumerateKey(a1, a3, 0LL, Heap, v7, &v13);
    v10 = v8;
    if ( v8 < 0 )
    {
      if ( v8 != -2147483643 )
        goto LABEL_9;
    }
    else
    {
      if ( !Heap )
        return v10;
      if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) >= *(_DWORD *)(Heap + 12) )
      {
        v11 = *(unsigned __int16 *)(Heap + 12);
        *(_WORD *)a2 = v11;
        memmove(*(void **)(a2 + 8), (const void *)(Heap + 16), v11);
LABEL_10:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v9);
        return v10;
      }
      v10 = -2147483643;
    }
    *(_WORD *)a2 = v13 - 16;
LABEL_9:
    if ( Heap )
      goto LABEL_10;
    return v10;
  }
  return 3221225495LL;
}
