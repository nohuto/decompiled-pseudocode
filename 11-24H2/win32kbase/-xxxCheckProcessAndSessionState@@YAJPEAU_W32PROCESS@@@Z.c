/*
 * XREFs of ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x14015D194
 * Callers:
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 * Callees:
 *     IsGreIsCurrentProcessSystemCriticalSupported @ 0x14005907C (IsGreIsCurrentProcessSystemCriticalSupported.c)
 *     GreIsCurrentProcessSystemCritical @ 0x140059274 (GreIsCurrentProcessSystemCritical.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140091E28 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     IsCurrentSessionServiceSession @ 0x14012AA48 (IsCurrentSessionServiceSession.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A2B00 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline @ 0x1401A3D38 (Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall xxxCheckProcessAndSessionState(PEPROCESS *a1)
{
  NTSTATUS InformationProcess; // edi
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // si
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  int (*v11)(void); // rax
  void *ProcessInheritedFromUniqueProcessId; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int (*v15)(void); // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  unsigned int (__fastcall *v19)(_QWORD); // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 (*v22)(void); // rax
  int v23; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct _KPROCESS *v28; // rcx
  HANDLE v29; // rbx
  struct _CLIENT_ID ClientId; // [rsp+38h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-29h] BYREF
  _DWORD ProcessInformation[16]; // [rsp+78h] [rbp+7h] BYREF
  void *ProcessHandle; // [rsp+E0h] [rbp+6Fh] BYREF

  InformationProcess = 0;
  v3 = 0;
  if ( (int)IsGreIsCurrentProcessSystemCriticalSupported() >= 0 && (unsigned int)GreIsCurrentProcessSystemCritical() )
    return 0LL;
  v6 = 1;
  if ( !*(_QWORD *)(W32GetUserGdiSessionState(v4) + 40) )
    goto LABEL_10;
  if ( !*(_QWORD *)(W32GetUserSessionState(v5) + 63584) )
    goto LABEL_10;
  UserSessionState = W32GetUserSessionState(v7);
  if ( (*(_DWORD *)(UserSessionState + 69192) & 0x40000) == 0 )
    goto LABEL_10;
  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v9, v8) + 24) + 2552LL);
  if ( !v11 || v11() < 0 || (*(_DWORD *)(UserSessionState + 69192) & 0x10000000) != 0 )
    return 0LL;
  v3 = 1;
LABEL_10:
  if ( (unsigned int)IsCurrentSessionServiceSession() )
    goto LABEL_32;
  ProcessHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  ProcessInheritedFromUniqueProcessId = (void *)PsGetProcessInheritedFromUniqueProcessId(*a1);
  if ( !ProcessInheritedFromUniqueProcessId )
    goto LABEL_32;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueThread = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ClientId.UniqueProcess = ProcessInheritedFromUniqueProcessId;
  InformationProcess = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( InformationProcess >= 0 )
  {
    InformationProcess = ZwQueryInformationProcess(
                           ProcessHandle,
                           ProcessImageInformation,
                           ProcessInformation,
                           0x40u,
                           0LL);
    if ( InformationProcess >= 0 )
    {
      v15 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v14, v13) + 48) + 1896LL);
      if ( v15 )
      {
        if ( v15() >= 0 )
        {
          v18 = ProcessInformation[8];
          v19 = *(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v17, v16) + 48) + 1904LL);
          if ( !v19 || !v19(v18) )
            InformationProcess = -1073741790;
        }
      }
    }
    ZwClose(ProcessHandle);
    if ( InformationProcess >= 0 )
      goto LABEL_32;
  }
  if ( InformationProcess == -1073741813 || InformationProcess == -1073741558 )
  {
    InformationProcess = 0;
LABEL_32:
    if ( (unsigned int)Feature_Servicing_UmfdDeadlockFix__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !*(_QWORD *)(W32GetUserGdiSessionState(v25) + 40)
        || !*(_QWORD *)(W32GetUserSessionState(v26) + 63584)
        || (v28 = *(struct _KPROCESS **)(W32GetUserGdiSessionState(v27) + 40), v28 == *a1)
        || (v29 = *(HANDLE *)(W32GetUserSessionState(v28) + 63584), v29 == PsGetProcessId(*a1)) )
      {
        v6 = 0;
      }
      *((_BYTE *)a1 + 296) = v6;
    }
    return (unsigned int)InformationProcess;
  }
  if ( !v3 )
    goto LABEL_32;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&ProcessHandle, 1);
  v22 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 24) + 2560LL);
  if ( v22 )
  {
    v23 = v22();
    InformationProcess = v23;
    if ( v23 == 259 )
    {
      InformationProcess = 0;
    }
    else if ( v23 >= 0 )
    {
      HYDRA_HINT(0x10000000LL);
    }
  }
  else
  {
    InformationProcess = -1073741637;
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&ProcessHandle);
  return (unsigned int)InformationProcess;
}
