/*
 * XREFs of ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14070DE38
 * Callers:
 *     IoCreateDisk @ 0x14070DFC0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x14070E070 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x14070E170 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x14070E340 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x14070E3F0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x14070E4D0 (IoSetPartitionInformationEx.c)
 *     IoVerifyPartitionTable @ 0x14070E580 (IoVerifyPartitionTable.c)
 *     IoWritePartitionTable @ 0x14070E630 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x14070E7A0 (IoWritePartitionTableEx.c)
 * Callees:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14069D970 (-Initialize@SC_DISK@@UEAAJXZ.c)
 *     ?InitializePartitionCache@SC_DISK@@QEAAJXZ @ 0x14069DB08 (-InitializePartitionCache@SC_DISK@@QEAAJXZ.c)
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
