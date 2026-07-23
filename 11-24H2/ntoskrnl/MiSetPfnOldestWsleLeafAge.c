/*
 * XREFs of MiSetPfnOldestWsleLeafAge @ 0x14039234C
 * Callers:
 *     MiLockActivePageTableInList @ 0x14039094C (MiLockActivePageTableInList.c)
 *     MiRebuildPageTableAges @ 0x140392C6C (MiRebuildPageTableAges.c)
 * Callees:
 *     MiInsertActivePageTableLinksTail @ 0x140392798 (MiInsertActivePageTableLinksTail.c)
 *     MiRemoveActivePageTableLinks @ 0x1403929A8 (MiRemoveActivePageTableLinks.c)
 */

__int64 __fastcall MiSetPfnOldestWsleLeafAge(__int64 a1, unsigned __int64 *a2, __int64 a3, __int16 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbx
  char v8; // bp

  v5 = *a2;
  v8 = a3;
  if ( (*((_DWORD *)a2 + 9) & 0x4000000) != 0 )
    MiRemoveActivePageTableLinks(a1, a2, a5);
  LOBYTE(a3) = v8;
  *a2 = v5 & 0xFC001FFFFFFFFFFFuLL | ((a4 & 0x3FF | ((unsigned __int64)(v8 & 7) << 10)) << 45);
  return MiInsertActivePageTableLinksTail(a1, a2, a3, a5);
}
