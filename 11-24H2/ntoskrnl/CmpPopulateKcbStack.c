/*
 * XREFs of CmpPopulateKcbStack @ 0x140970CD0
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x14090A1FC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpPopulateKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 i; // r9
  __int64 v5; // rdx

  result = *(unsigned __int16 *)(a2 + 66);
  *(_WORD *)(a1 + 2) = result;
  v3 = *(__int16 *)(a2 + 66);
  if ( (_WORD)v3 )
  {
    for ( i = *(_QWORD *)(a2 + 192); i; LOWORD(v3) = v3 - 1 )
    {
      v5 = *(_QWORD *)(i + 16);
      if ( (__int16)v3 >= 2 )
      {
        result = *(_QWORD *)(a1 + 24);
        *(_QWORD *)(result + 8LL * (__int16)v3 - 16) = v5;
      }
      else
      {
        *(_QWORD *)(a1 + 8LL * (__int16)v3 + 8) = v5;
      }
      i = *(_QWORD *)(i + 24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v3 + 8) = a2;
  }
  return result;
}
