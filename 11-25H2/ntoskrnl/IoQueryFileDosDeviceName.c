/*
 * XREFs of IoQueryFileDosDeviceName @ 0x1408BF2A0
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x1404BC760 (CcMmLogLostDelayedWriteError.c)
 *     EtwpGetDriverDataDosPath @ 0x1404D43AC (EtwpGetDriverDataDosPath.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14072BD14 (PiDrvDbQuerySystemPathWin32.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     IopQueryNameInternal @ 0x1408BF6D0 (IopQueryNameInternal.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  int v2; // ebx
  __int64 v5; // rdx
  _OBJECT_NAME_INFORMATION *Pool2; // rdi
  __int64 v7; // r8
  NTSTATUS v8; // ebx
  int v10; // [rsp+30h] [rbp-18h]
  int i; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208;
  for ( i = 208; ; v2 = i )
  {
    Pool2 = (_OBJECT_NAME_INFORMATION *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      break;
    LOBYTE(v10) = 0;
    LOBYTE(v7) = 1;
    v8 = IopQueryNameInternal(FileObject, v5, v7, Pool2, v2, &i, v10);
    if ( !v8 )
    {
      *ObjectNameInformation = Pool2;
      return v8;
    }
    ExFreePoolWithTag(Pool2, 0);
    if ( v8 != -2147483643 )
      return v8;
  }
  return -1073741670;
}
