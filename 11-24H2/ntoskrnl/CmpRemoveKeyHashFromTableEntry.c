/*
 * XREFs of CmpRemoveKeyHashFromTableEntry @ 0x1409E5920
 * Callers:
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x1409E58BC (CmpRemoveKeyHashFromDeletedKcbTable.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRemoveKeyHashFromTableEntry(__int64 a1, __int64 a2)
{
  __int64 *i; // rdx
  __int64 v3; // rax

  for ( i = (__int64 *)(a2 + 16); i; i = (__int64 *)(v3 + 8) )
  {
    v3 = *i;
    if ( !*i )
      break;
    if ( v3 == a1 )
    {
      *i = *(_QWORD *)(v3 + 8);
      return;
    }
  }
}
