/*
 * XREFs of MiSetPfnOldestWsleLeafAge @ 0x1402E3C1C
 * Callers:
 *     MiRebuildPageTableAges @ 0x1402E3D14 (MiRebuildPageTableAges.c)
 *     MiLockActivePageTableInList @ 0x1403CF89C (MiLockActivePageTableInList.c)
 * Callees:
 *     MiInsertActivePageTableLinksTail @ 0x1402E24F8 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1402E2CB8 (MiRemoveActivePageTableLinks.c)
 */

void __fastcall MiSetPfnOldestWsleLeafAge(__int64 a1, __int64 a2, unsigned __int8 a3, __int16 a4, int a5)
{
  __int64 v5; // rbx

  v5 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(a2 + 36) & 0x4000000) != 0 )
    MiRemoveActivePageTableLinks(a1, a2, a5);
  *(_QWORD *)a2 = v5 & 0xFC001FFFFFFFFFFFuLL | ((a4 & 0x3FF | ((unsigned __int64)(a3 & 7) << 10)) << 45);
  MiInsertActivePageTableLinksTail(a1, a2, a3, a5);
}
