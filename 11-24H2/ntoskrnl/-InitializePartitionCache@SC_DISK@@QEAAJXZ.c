/*
 * XREFs of ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14069EB98
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14070B9D8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x14069EDC4 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070B8A0 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 */

__int64 __fastcall SC_DISK::InitializePartitionCache(SC_DISK *this, unsigned int a2, unsigned __int8 a3)
{
  void *v4; // rax

  v4 = SC_ENV::Allocate(1 << *((_DWORD *)this + 60), a2, a3, 1u);
  *((_QWORD *)this + 33) = v4;
  if ( v4 )
    return SC_DISK::ResetPartitionCache(this);
  else
    return 3221225626LL;
}
