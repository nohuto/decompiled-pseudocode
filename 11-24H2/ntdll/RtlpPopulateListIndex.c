/*
 * XREFs of RtlpPopulateListIndex @ 0x1800A9058
 * Callers:
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlpExtendListLookup @ 0x1800A9610 (RtlpExtendListLookup.c)
 * Callees:
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18002FA80 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180031DD0 (RtlpHeapHandleError.c)
 *     RtlpHeapAddListEntry @ 0x1800A9240 (RtlpHeapAddListEntry.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 *i; // rbp
  unsigned __int64 v9; // rsi
  __int64 j; // r15
  unsigned __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v6 = 2 * v5;
    if ( !*(_DWORD *)(a2 + 12) )
      v6 = v5;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v6) = 0LL;
    v7 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1) >> 5;
    result = (unsigned int)~(1 << ((*(_BYTE *)(a2 + 8) - *(_BYTE *)(a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v7) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, (unsigned __int64)(i - 2));
    }
    v9 = *((unsigned __int16 *)i - 4);
    for ( j = a2; ; j = *(_QWORD *)j )
    {
      v11 = *(unsigned int *)(j + 8);
      if ( v9 < v11 )
        break;
      if ( !*(_QWORD *)j )
      {
        LODWORD(v9) = v11 - 1;
        break;
      }
    }
    if ( *(_QWORD *)a2 )
    {
      v12 = *(_DWORD *)(a2 + 8);
      v13 = v12 - 1;
      if ( *((unsigned __int16 *)i - 4) < v12 )
        v13 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, 1, i, v13, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, j, 1, (_DWORD)i, v9, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(j + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v9 - *(_DWORD *)(j + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v9 - *(_BYTE *)(j + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = RtlpHeapHandleError();
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      result = *(unsigned int *)(a1 + 136);
      *((_DWORD *)i - 2) ^= result;
    }
  }
  return result;
}
