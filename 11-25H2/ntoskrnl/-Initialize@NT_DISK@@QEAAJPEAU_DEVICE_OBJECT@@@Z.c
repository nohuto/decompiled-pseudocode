/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x140701F58
 * Callers:
 *     IoCreateDisk @ 0x1407020E0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x140702190 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140702290 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x140702460 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x140702510 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1407025F0 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x1407026A0 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x140702750 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1407028C0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1406925D0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x140692768 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
 */

__int64 __fastcall NT_DISK::Initialize(NT_DISK *this, struct _DEVICE_OBJECT *a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned __int8 v5; // r8
  unsigned int v6; // r9d

  *((_QWORD *)this + 49) = a2;
  result = SC_DISK::Initialize(this);
  if ( (int)result >= 0 )
    return SC_DISK::InitializePartitionCache(this, v4, v5, v6);
  return result;
}
