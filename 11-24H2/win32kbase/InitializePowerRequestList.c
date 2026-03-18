/*
 * XREFs of InitializePowerRequestList @ 0x1402E5290
 * Callers:
 *     Win32kBaseUserInitialize @ 0x140167110 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?InitializePowerWatchdogTimeouts@@YAHXZ @ 0x14013FE9C (-InitializePowerWatchdogTimeouts@@YAHXZ.c)
 *     ?CreatePowerWatchdog@@YAJPEAPEAX@Z @ 0x14019D00C (-CreatePowerWatchdog@@YAJPEAPEAX@Z.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  NTSTATUS result; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-38h] BYREF
  char v17; // [rsp+48h] [rbp+10h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v17 = 0;
  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &v17, 1u);
  UserSessionState = W32GetUserSessionState(v2);
  *(_BYTE *)(UserSessionState + 528) = v17;
  if ( !(unsigned int)InitializePowerWatchdogTimeouts()
    || (v5 = W32GetUserSessionState(v4), result = CreatePowerWatchdog((PVOID)(v5 + 544)), result >= 0)
    && (v8 = W32GetUserSessionState(v7), result = CreatePowerWatchdog((PVOID)(v8 + 552)), result >= 0) )
  {
    v9 = W32GetUserSessionState(v4);
    Object = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    *(_QWORD *)(v9 + 520) = Object;
    if ( result >= 0 )
    {
      v10 = Win32AllocPoolZInitImpl(64LL, 0x38uLL, 0x6F707355u);
      *(_QWORD *)(W32GetUserSessionState(v11) + 512) = v10;
      if ( *(_QWORD *)(W32GetUserSessionState(v12) + 512) )
      {
        v14 = *(_QWORD *)(W32GetUserSessionState(v13) + 512);
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_DWORD *)(v14 + 16) = 0;
        *(_DWORD *)v14 = 1;
        KeInitializeEvent((PRKEVENT)(v14 + 24), SynchronizationEvent, 0);
        *(_DWORD *)(W32GetUserSessionState(v15) + 2728) = 1;
        _InterlockedOr(v16, 0);
        return 0;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
