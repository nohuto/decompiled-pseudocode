/*
 * XREFs of ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016494C
 * Callers:
 *     PowerConnectionEvent @ 0x14014C44C (PowerConnectionEvent.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014CEA4 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x140091FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EEEC8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     RIMSetSystemInputMode @ 0x14011D91C (RIMSetSystemInputMode.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall SetInputModeWithCrit(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 UserSessionState; // rdi
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rcx
  __int64 InputBuffer; // [rsp+38h] [rbp-50h] BYREF
  int v7; // [rsp+40h] [rbp-48h]
  _BYTE v8[48]; // [rsp+48h] [rbp-40h] BYREF

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  if ( !*(_BYTE *)(UserSessionState + 528) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1646LL);
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>((__int64)v8);
  *(_DWORD *)(UserSessionState + 2788) = v1 == 2;
  *(_DWORD *)(UserSessionState + 2784) = v1 == 1;
  DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v8);
  v4 = *(volatile signed __int32 **)(W32GetUserSessionState(v3) + 19928);
  if ( v1 == 2 )
  {
    _InterlockedOr(v4, 0x4000u);
LABEL_5:
    _InterlockedAnd(*(volatile signed __int32 **)(W32GetUserSessionState(v4) + 19928), 0xFFFFDFFF);
    goto LABEL_6;
  }
  _InterlockedAnd(v4, 0xFFFFBFFF);
  if ( v1 != 1 )
    goto LABEL_5;
  _InterlockedOr(*(volatile signed __int32 **)(W32GetUserSessionState(v4) + 19928), 0x2000u);
LABEL_6:
  RIMSetSystemInputMode(v1);
  InputBuffer = 28LL;
  if ( v1 )
    v7 = (v1 != 1) + 1;
  else
    v7 = 0;
  return ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0xCu, 0LL, 0);
}
