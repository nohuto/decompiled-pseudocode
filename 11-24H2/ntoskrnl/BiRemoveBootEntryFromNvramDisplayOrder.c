/*
 * XREFs of BiRemoveBootEntryFromNvramDisplayOrder @ 0x140815D18
 * Callers:
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
 * Callees:
 *     BiRemoveEntryFromBootOrder @ 0x140815DAC (BiRemoveEntryFromBootOrder.c)
 *     BiQueryBootEntryOrder @ 0x1409A6E98 (BiQueryBootEntryOrder.c)
 *     BiSetBootEntryOrder @ 0x1409A7FB8 (BiSetBootEntryOrder.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiRemoveBootEntryFromNvramDisplayOrder(__int64 a1)
{
  int v2; // esi
  ULONG v3; // ebx
  ULONG Count; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  Count = 0;
  P = 0LL;
  v2 = BiQueryBootEntryOrder(&P, &Count);
  if ( v2 >= 0 )
  {
    v3 = Count;
    BiRemoveEntryFromBootOrder(P, &Count, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 8LL));
    if ( v3 != Count )
      v2 = BiSetBootEntryOrder((PULONG)P, Count);
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  return (unsigned int)v2;
}
