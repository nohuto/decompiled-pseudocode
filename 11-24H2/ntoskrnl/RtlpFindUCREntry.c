/*
 * XREFs of RtlpFindUCREntry @ 0x1405F0AE8
 * Callers:
 *     RtlpFindAndCommitPages @ 0x1405E9D48 (RtlpFindAndCommitPages.c)
 *     RtlpInsertUCRBlock @ 0x1405EABE8 (RtlpInsertUCRBlock.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x1405F056C (RtlpHeapHandleError.c)
 *     RtlpHeapFindListLookupEntry @ 0x1405F0C38 (RtlpHeapFindListLookupEntry.c)
 */

_QWORD *__fastcall RtlpFindUCREntry(__int64 a1, unsigned __int64 a2)
{
  __int64 **v3; // rcx
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r8
  _QWORD *result; // rax

  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    RtlpHeapHandleError();
  }
  v3 = *(__int64 ***)(a1 + 320);
  if ( v3 )
  {
    v4 = a2 >> 12;
    while ( 1 )
    {
      v5 = *((unsigned int *)v3 + 2);
      if ( v4 < v5 )
        break;
      if ( !*v3 )
      {
        LODWORD(v4) = v5 - 1;
        return (_QWORD *)RtlpHeapFindListLookupEntry(a1, (_DWORD)v3, 0, v4, a2);
      }
      v3 = (__int64 **)*v3;
    }
    return (_QWORD *)RtlpHeapFindListLookupEntry(a1, (_DWORD)v3, 0, v4, a2);
  }
  else
  {
    for ( result = *(_QWORD **)(a1 + 240); (_QWORD *)(a1 + 240) != result; result = (_QWORD *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (_QWORD *)(a1 + 240);
  }
}
