/*
 * XREFs of MiSetSlabTypeIdentifiers @ 0x14048D8F4
 * Callers:
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiChangeSlabEntryIdentity @ 0x14067ACD0 (MiChangeSlabEntryIdentity.c)
 *     MiCreateBootSlabEntries @ 0x140C47CFC (MiCreateBootSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140C483BC (MmUpdateSlabRangeType.c)
 * Callees:
 *     <none>
 */

char __fastcall MiSetSlabTypeIdentifiers(unsigned __int64 a1, __int64 a2, int a3, char a4, int a5)
{
  char v5; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r9
  _BYTE *i; // r8

  v5 = 0;
  if ( a3 != 9 )
    v5 = a3 + 1;
  v7 = (a1 + a2 - 1) >> 9;
  v8 = qword_140E3CF00 + 2 * v7;
  for ( i = (_BYTE *)(qword_140E3CF00 + 2 * (a1 >> 9)); (unsigned __int64)i <= v8; i += 2 )
  {
    *i = v5;
    LOBYTE(v7) = (a5 != 0 ? 0x80 : 0) | a4 & 0x7F;
    i[1] = v7;
  }
  return v7;
}
