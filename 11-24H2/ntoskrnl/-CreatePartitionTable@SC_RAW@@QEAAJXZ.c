/*
 * XREFs of ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x14069FE34
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x14069E738 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069F17C (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall SC_RAW::CreatePartitionTable(SC_DISK **this)
{
  __int64 v2; // rbx
  int v3; // edx

  v2 = *((_QWORD *)*this + 33);
  memset_0((void *)(v2 + 446), 0, 0x40uLL);
  *(_DWORD *)(v2 + 440) = 0;
  *(_WORD *)(v2 + 510) = 0;
  v3 = SC_DISK::WriteSectors(*this, 1LL, 0LL, 0LL);
  if ( v3 >= 0 && *((_DWORD *)*this + 64) == 1 )
  {
    memset_0(*((void **)*this + 33), 0, 1 << *((_DWORD *)*this + 60));
    v3 = SC_DISK::WriteSectors(*this, 1LL, 1LL, 0LL);
    if ( v3 >= 0 && (*((_DWORD *)*this + 50) & 1) == 0 )
      return (unsigned int)SC_DISK::WriteSectors(*this, 1LL, *((_QWORD *)*this + 31) - 1LL, 0LL);
  }
  return (unsigned int)v3;
}
