/*
 * XREFs of ??1SC_DISK@@UEAA@XZ @ 0x14069E604
 * Callers:
 *     ??_GSC_DISK@@UEAAPEAXI@Z @ 0x14069E700 (--_GSC_DISK@@UEAAPEAXI@Z.c)
 *     ??_ENT_DISK@@UEAAPEAXI@Z @ 0x14070B860 (--_ENT_DISK@@UEAAPEAXI@Z.c)
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
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14069F9F4 (--1SC_DEVICE@@UEAA@XZ.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_DISK::~SC_DISK(SC_DISK *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)this = &SC_DISK::`vftable';
  v2 = *((_QWORD *)this + 48);
  if ( v2 )
    PspUserApcKernelRoutine(v2);
  v3 = *((_QWORD *)this + 47);
  if ( v3 )
    PspUserApcKernelRoutine(v3);
  v4 = *((_QWORD *)this + 46);
  if ( v4 )
    PspUserApcKernelRoutine(v4);
  v5 = *((_QWORD *)this + 45);
  if ( v5 )
    PspUserApcKernelRoutine(v5);
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
    PspUserApcKernelRoutine(v6);
  v7 = *((_QWORD *)this + 43);
  if ( v7 )
    PspUserApcKernelRoutine(v7);
  v8 = *((_QWORD *)this + 42);
  if ( v8 )
    PspUserApcKernelRoutine(v8);
  v9 = *((_QWORD *)this + 41);
  if ( v9 )
    PspUserApcKernelRoutine(v9);
  v10 = *((_QWORD *)this + 40);
  if ( v10 )
    PspUserApcKernelRoutine(v10);
  v11 = *((_QWORD *)this + 39);
  if ( v11 )
    PspUserApcKernelRoutine(v11);
  v12 = *((_QWORD *)this + 37);
  if ( v12 )
    PspUserApcKernelRoutine(v12);
  v13 = *((_QWORD *)this + 33);
  if ( v13 )
    PspUserApcKernelRoutine(v13);
  SC_DEVICE::~SC_DEVICE(this);
}
