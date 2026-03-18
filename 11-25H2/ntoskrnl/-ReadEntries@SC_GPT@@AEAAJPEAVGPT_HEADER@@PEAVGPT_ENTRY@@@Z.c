/*
 * XREFs of ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14069127C
 * Callers:
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z @ 0x1406911E8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAVGPT_ENTRY@@@Z.c)
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x140691718 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 * Callees:
 *     crc32 @ 0x1404F120C (crc32.c)
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069294C (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 */

__int64 __fastcall SC_GPT::ReadEntries(SC_DISK **this, struct GPT_HEADER *a2, struct GPT_ENTRY *a3)
{
  unsigned int v4; // esi
  int Sectors; // ebx

  v4 = *((_DWORD *)a2 + 20) * *((_DWORD *)a2 + 21);
  Sectors = SC_DISK::ReadSectors(
              *this,
              (-*((_DWORD *)*this + 59) & (v4 + *((_DWORD *)*this + 59) - 1)) >> *((_DWORD *)*this + 60),
              *((_QWORD *)a2 + 9),
              a3);
  if ( Sectors >= 0 && (unsigned int)crc32(0LL, (__int64)a3, v4) != *((_DWORD *)a2 + 22) )
    return (unsigned int)-1073741774;
  return (unsigned int)Sectors;
}
