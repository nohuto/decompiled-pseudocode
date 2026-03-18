/*
 * XREFs of RIMOpenDev @ 0x1401D2344
 * Callers:
 *     rimOnPnpArrived @ 0x14017E1FC (rimOnPnpArrived.c)
 * Callees:
 *     RIMApiSetIsRemoteConnection @ 0x140063C6C (RIMApiSetIsRemoteConnection.c)
 *     RIMIsRunningOnDesktop @ 0x1400A8A78 (RIMIsRunningOnDesktop.c)
 *     RIMOpenDevWorker @ 0x14012D31C (RIMOpenDevWorker.c)
 *     RIMCloseDev @ 0x14013AFB8 (RIMCloseDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsCrossSessionDevice @ 0x1401D2770 (rimIsCrossSessionDevice.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4, int a5)
{
  __int64 v9; // rcx
  unsigned int v10; // r14d
  int v11; // eax
  HANDLE v12; // rcx
  NTSTATUS v13; // edi
  __int64 v14; // rcx
  PVOID *Object; // [rsp+20h] [rbp-68h]
  PVOID v17; // [rsp+40h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK v18; // [rsp+48h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+8h] BYREF

  v10 = *(_DWORD *)(W32GetUserSessionState(a1) + 320);
  if ( *(_DWORD *)(a1 + 48) == 2 && (unsigned int)RIMApiSetIsRemoteConnection(v9) )
  {
    a5 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1234);
  }
  *(_DWORD *)(a1 + 168) |= 0x100u;
  Handle = 0LL;
  v18 = 0LL;
  v11 = RIMOpenDevWorker(a1, a2, a3, a4, (__int64)Object, v10, &Handle, &v18);
  v12 = Handle;
  v13 = v11;
  *(_DWORD *)(a1 + 272) = v11;
  *(_QWORD *)(a1 + 208) = v12;
  *(struct _IO_STATUS_BLOCK *)(a1 + 240) = v18;
  if ( v11 >= 0 )
  {
    v17 = 0LL;
    v13 = ObReferenceObjectByHandle(v12, 0, (POBJECT_TYPE)IoFileObjectType, 0, &v17, 0LL);
    *(_QWORD *)(a1 + 216) = v17;
    if ( v13 >= 0 && !RIMIsRunningOnDesktop(v14) && (unsigned int)rimIsCrossSessionDevice(a1) )
    {
      RIMCloseDev(a1);
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v13;
}
