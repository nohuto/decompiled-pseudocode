/*
 * XREFs of ?RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BF38
 * Callers:
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x18003BE38 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18005CA8C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 * Callees:
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A4CC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 */

__int64 __fastcall RmHamFindHostByPid(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  int HostByProcessHandle; // ebx
  void *ProcessHandle; // [rsp+20h] [rbp-50h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+28h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  ProcessHandle = 0LL;
  ClientId.UniqueThread = 0LL;
  ClientId.UniqueProcess = (HANDLE)a2;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  HostByProcessHandle = NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
  if ( HostByProcessHandle >= 0 )
  {
    HostByProcessHandle = RmHamFindHostByProcessHandle(a1, ProcessHandle, 0, a4);
    if ( HostByProcessHandle >= 0 )
      HostByProcessHandle = 0;
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)HostByProcessHandle;
}
