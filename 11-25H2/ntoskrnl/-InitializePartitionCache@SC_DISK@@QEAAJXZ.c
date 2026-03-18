/*
 * XREFs of ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140692768
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140701F58 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x140692990 (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140701E20 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 */

__int64 __fastcall SC_DISK::InitializePartitionCache(
        SC_DISK *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  void *v5; // rax

  v5 = SC_ENV::Allocate(1 << *((_DWORD *)this + 60), a2, a3, a4);
  *((_QWORD *)this + 33) = v5;
  if ( v5 )
    return SC_DISK::ResetPartitionCache(this);
  else
    return 3221225626LL;
}
