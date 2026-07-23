/*
 * XREFs of CmpSortedValueEnumStackAdvance @ 0x140A1CED8
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140457F40 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x140A1CF08 (CmpSortedValueEnumStackAdvanceInternal.c)
 */

__int64 __fastcall CmpSortedValueEnumStackAdvance(void *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = CmpSortedValueEnumStackAdvanceInternal(a1);
    if ( (int)result < 0 )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 16LL) & 2) == 0 )
      return 0LL;
  }
  return result;
}
