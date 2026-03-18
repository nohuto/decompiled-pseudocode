/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x140296380
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012B408 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1402DE61C (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, volatile void *Address)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  InteractiveControlManager *v12; // rax
  _QWORD v14[3]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD Src[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp-18h]

  memset(Src, 0, sizeof(Src));
  v16 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v14, 1LL);
  v7 = 0;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6);
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v12 = InteractiveControlManager::Instance(v11, v10);
    if ( (int)InteractiveControlManager::GetDeviceInfo(v12, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)Src) >= 0 )
    {
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        Address = (volatile void *)MmUserProbeAddress;
      RtlCopyVolatileMemory((void *)Address, Src, 0x28uLL);
      v7 = 1;
    }
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
