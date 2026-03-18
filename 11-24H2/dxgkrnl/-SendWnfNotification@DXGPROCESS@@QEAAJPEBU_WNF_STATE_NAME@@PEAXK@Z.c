/*
 * XREFs of ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401ED894
 * Callers:
 *     ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401BB7FC (-Reset@DXGDEVICE@@QEAAXE@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401BBA38 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::SendWnfNotification(DXGPROCESS *this, struct _WNF_STATE_NAME *a2, void *a3)
{
  unsigned int v3; // ebx
  bool v5; // zf
  void *ProcessID; // rax
  NTSTATUS v7; // edi
  unsigned int updated; // eax
  struct _CLIENT_ID ClientId; // [rsp+58h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  void *ProcessHandle; // [rsp+B0h] [rbp+6Fh] BYREF

  ProcessHandle = a2;
  v3 = 0;
  v5 = (*((_BYTE *)this + 408) & 1) == 0;
  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  if ( v5 )
    ProcessID = (void *)DXGPROCESS::GetProcessID(this);
  else
    ProcessID = PsGetProcessId(PsInitialSystemProcess);
  ClientId.UniqueProcess = ProcessID;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  if ( v7 >= 0 )
  {
    updated = ZwUpdateWnfStateData(&WNF_DX_DEVICE_REMOVAL, a3, 4LL, 0LL, ProcessHandle, 0, 0);
    if ( updated != -1073741431 )
      v3 = updated;
    ZwClose(ProcessHandle);
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, ClientId.UniqueProcess);
    WdLogGlobalForLineNumber = 2814;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to open process handle for process id 0x%I64x",
      (__int64)ClientId.UniqueProcess,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
}
