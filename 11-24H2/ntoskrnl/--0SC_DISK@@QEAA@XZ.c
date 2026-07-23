/*
 * XREFs of ??0SC_DISK@@QEAA@XZ @ 0x14069E51C
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
 *     ??0SC_DEVICE@@QEAA@XZ @ 0x14069F98C (--0SC_DEVICE@@QEAA@XZ.c)
 */

SC_DISK *__fastcall SC_DISK::SC_DISK(SC_DISK *this)
{
  __int64 v1; // rcx
  SC_DISK *result; // rax
  _BYTE v3[20]; // [rsp+20h] [rbp-28h] BYREF

  SC_DEVICE::SC_DEVICE(this);
  *(_DWORD *)(v1 + 256) = 2;
  *(_QWORD *)v1 = &SC_DISK::`vftable';
  memset(v3, 0, sizeof(v3));
  *(_DWORD *)(v1 + 304) = -1;
  *(_DWORD *)(v1 + 308) = -1;
  result = (SC_DISK *)v1;
  *(_OWORD *)(v1 + 216) = *(_OWORD *)v3;
  *(_DWORD *)(v1 + 200) = 0;
  *(_QWORD *)(v1 + 232) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  *(_OWORD *)(v1 + 288) = 0LL;
  *(_DWORD *)(v1 + 240) = 0;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_OWORD *)(v1 + 272) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  return result;
}
