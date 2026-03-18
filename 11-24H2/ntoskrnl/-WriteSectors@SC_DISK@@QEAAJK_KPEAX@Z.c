/*
 * XREFs of ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14069E0EC
 * Callers:
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14069CAB8 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x14069CD88 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14069E6A4 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x14069ED84 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SC_DISK::WriteSectors(SC_DISK *this, int a2, __int64 a3, void *a4)
{
  if ( !a4 )
    a4 = (void *)*((_QWORD *)this + 33);
  return guard_dispatch_icall_no_overrides(
           this,
           a3 << *((_DWORD *)this + 60),
           (unsigned int)(a2 << *((_DWORD *)this + 60)),
           a4);
}
