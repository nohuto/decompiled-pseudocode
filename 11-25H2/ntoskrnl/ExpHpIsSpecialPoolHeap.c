/*
 * XREFs of ExpHpIsSpecialPoolHeap @ 0x1403C6C70
 * Callers:
 *     ExIsSpecialPoolAddress @ 0x1403C6C50 (ExIsSpecialPoolAddress.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpHpIsSpecialPoolHeap(__int64 a1)
{
  unsigned int v1; // edx
  __int64 *i; // rax

  v1 = 0;
  for ( i = qword_140EEE980; (__int64)i < (__int64)qword_140EEE9A0; ++i )
  {
    if ( a1 == *i )
      return 1;
  }
  return v1;
}
