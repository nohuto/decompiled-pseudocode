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

__int64 __fastcall RtlpNtEnumerateSubKey(HANDLE KeyHandle, __int64 a2, ULONG a3)
{
  unsigned __int16 *Heap; // rbx
  ULONG Length; // esi
  NTSTATUS v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ecx
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF

  Heap = 0LL;
  ResultLength = 0;
  Length = 0;
  if ( !*(_WORD *)(a2 + 2)
    || (Length = *(unsigned __int16 *)(a2 + 2) + 16,
        (Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length)) != 0LL) )
  {
    v8 = NtEnumerateKey(KeyHandle, a3, KeyBasicInformation, Heap, Length, &ResultLength);
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
      if ( (unsigned int)*(unsigned __int16 *)(a2 + 2) >= *((_DWORD *)Heap + 3) )
      {
        v10 = Heap[6];
        *(_WORD *)a2 = v10;
        memmove(*(void **)(a2 + 8), Heap + 8, v10);
LABEL_10:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
        return v9;
      }
      v9 = -2147483643;
    }
    *(_WORD *)a2 = ResultLength - 16;
LABEL_9:
    if ( Heap )
      goto LABEL_10;
    return v9;
  }
  return 3221225495LL;
}
