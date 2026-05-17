/*
 * XREFs of RtlDeleteHashTable @ 0x1800E5790
 * Callers:
 *     RtlpCreateHashTable @ 0x1800E55F4 (RtlpCreateHashTable.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteHashTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v7; // ebp
  __int64 *v8; // rsi

  v5 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 8) <= 0x80u )
  {
    if ( !v5 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( v5 )
  {
    v7 = 0;
    v8 = *(__int64 **)(a1 + 32);
    do
    {
      if ( !*v8 )
        break;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *v8, a4);
      ++v7;
      ++v8;
    }
    while ( v7 < 0x10 );
LABEL_3:
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5, a4);
  }
LABEL_4:
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, a4);
  return result;
}
