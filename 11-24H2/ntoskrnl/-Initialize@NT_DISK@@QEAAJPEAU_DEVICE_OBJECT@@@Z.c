/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14070B9D8
 * Callers:
 *     IoCreateDisk @ 0x14070BB60 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x14070BC10 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14070BD10 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x14070BEE0 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x14070BF90 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x14070C070 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x14070C120 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x14070C1D0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14070C330 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14069EA00 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14069EB98 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int8 v5; // r8

  *((_QWORD *)this + 49) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this, v4, v5);
  return result;
}
