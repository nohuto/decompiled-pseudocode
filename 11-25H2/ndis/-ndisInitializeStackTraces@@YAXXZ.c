/*
 * XREFs of ?ndisInitializeStackTraces@@YAXXZ @ 0x140154F4C
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void ndisInitializeStackTraces(void)
{
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = &::HashTable;
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Reserved);
  *((_BYTE *)&WPP_MAIN_CB.Reserved + 11) = 4;
  dword_140126858 = 0;
  *(_WORD *)((char *)&WPP_MAIN_CB.Reserved + 9) = 0;
  *((_BYTE *)&WPP_MAIN_CB.Reserved + 8) = RtlCreateHashTable(&HashTable, 0, 0);
}
