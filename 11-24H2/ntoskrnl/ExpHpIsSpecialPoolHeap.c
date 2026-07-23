/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x14048BD84
 * Callers:
 *     ExIsSpecialPoolAddress @ 0x14048BD64 (ExIsSpecialPoolAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *i; // rax

  v1 = 0;
  for ( i = qword_140EEEE40; (__int64)i < (__int64)qword_140EEEE60; ++i )
  {
    if ( a1 == *i )
      return 1;
  }
  return v1;
}
