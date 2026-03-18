/*
 * XREFs of NtCreateCpuPartition @ 0x1407757E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwMakePermanentObject @ 0x1406A8710 (ZwMakePermanentObject.c)
 *     ZwMakeTemporaryObject @ 0x1406A8730 (ZwMakeTemporaryObject.c)
 *     PsCreateCpuPartition @ 0x14077643C (PsCreateCpuPartition.c)
 *     PspQueryAndCheckCpuPartitionName @ 0x140776D0C (PspQueryAndCheckCpuPartitionName.c)
 *     PspReferenceCpuPartitionByHandle @ 0x140776EF0 (PspReferenceCpuPartitionByHandle.c)
 *     ObOpenObjectByPointer @ 0x140854F10 (ObOpenObjectByPointer.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 */

__int64 __fastcall NtCreateCpuPartition(HANDLE *a1, unsigned int a2, __int64 a3, __int128 *a4, int a5)
{
  char v7; // r12
  ULONG_PTR v8; // r10
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v10; // rcx
  int PermanentObject; // edi
  __int64 v13; // r8
  PVOID v14; // r14
  __int64 v15; // rdx
  HANDLE Handle; // [rsp+48h] [rbp-60h] BYREF
  HANDLE v18; // [rsp+50h] [rbp-58h] BYREF
  PVOID v19; // [rsp+58h] [rbp-50h] BYREF
  PVOID Object; // [rsp+60h] [rbp-48h] BYREF
  __int128 v21; // [rsp+68h] [rbp-40h]

  v21 = 0LL;
  v7 = 0;
  v19 = 0LL;
  v8 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v10 = (__int64)a1;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  while ( a5 )
  {
    if ( PreviousMode )
    {
      if ( ((unsigned __int8)a4 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = *a4;
    }
    else
    {
      v21 = *a4;
    }
    if ( (unsigned __int8)v21 == 1LL )
    {
      if ( v8 )
      {
LABEL_15:
        PermanentObject = -1073741811;
        goto LABEL_27;
      }
      v8 = *((_QWORD *)&v21 + 1);
    }
    else
    {
      if ( (unsigned __int8)v21 != 2LL )
        goto LABEL_15;
      v7 = BYTE8(v21);
    }
    ++a4;
    --a5;
  }
  if ( !v8 )
    v8 = -1LL;
  PermanentObject = PspReferenceCpuPartitionByHandle(v8, (__int64)&v19);
  if ( PermanentObject >= 0 )
  {
    LOBYTE(v13) = PreviousMode;
    PermanentObject = PsCreateCpuPartition(a3, a2, v13, 0LL, v19, &Object, &v18);
    if ( PermanentObject >= 0 )
    {
      v14 = Object;
      PermanentObject = PspQueryAndCheckCpuPartitionName(Object);
      if ( PermanentObject >= 0 )
      {
        if ( !v7
          || (PermanentObject = ObOpenObjectByPointer(v14, 0x200u, 0LL, 0xF0007u, PsCpuPartitionType, 0, &Handle),
              PermanentObject >= 0)
          && (PermanentObject = ZwMakePermanentObject((__int64)Handle, v15), PermanentObject >= 0) )
        {
          *a1 = v18;
          v18 = 0LL;
        }
      }
    }
  }
LABEL_27:
  if ( v19 )
    ObfDereferenceObjectWithTag(v19, 0x50707350u);
  if ( Handle )
    ZwClose(Handle);
  if ( v18 )
    ObCloseHandle(v18, PreviousMode);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)PermanentObject;
}
