/*
 * XREFs of BiRemoveBootEntryFromNvramDisplayOrder @ 0x140805A60
 * Callers:
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 * Callees:
 *     BiRemoveEntryFromBootOrder @ 0x140805AF4 (BiRemoveEntryFromBootOrder.c)
 *     BiSetBootEntryOrder @ 0x140A258D0 (BiSetBootEntryOrder.c)
 *     BiQueryBootEntryOrder @ 0x140A2609C (BiQueryBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiRemoveBootEntryFromNvramDisplayOrder(__int64 a1)
{
  int v2; // esi
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0;
  P = 0LL;
  v2 = BiQueryBootEntryOrder(&P, &v5);
  if ( v2 >= 0 )
  {
    v3 = v5;
    BiRemoveEntryFromBootOrder(P, &v5, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 8LL));
    if ( v3 != v5 )
      v2 = BiSetBootEntryOrder(P, v5);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  return (unsigned int)v2;
}
