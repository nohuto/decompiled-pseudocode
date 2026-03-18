/*
 * XREFs of NtUserRegisterTouchpadCapableWindow @ 0x14029B7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline @ 0x14027F22C (Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserRegisterTouchpadCapableWindow(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v5 = EnterCrit(0LL, 0LL);
  v13[0] = 0;
  v14 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v13, v6);
  v7 = ValidateHwndStrict(a1);
  v8 = v7;
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 16);
    if ( v9 != v5 )
    {
LABEL_3:
      UserSetLastError(87);
      goto LABEL_17;
    }
    if ( (unsigned int)Feature_TouchpadPublicApis3__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( a2 )
        *(_DWORD *)(v8 + 380) |= 0x800u;
      else
        *(_DWORD *)(v8 + 380) &= ~0x800u;
    }
    else
    {
      v10 = *(_DWORD *)(v8 + 380);
      if ( a2 )
      {
        if ( (v10 & 0x800) == 0 )
        {
          if ( *(_WORD *)(v9 + 1264) == 0xFFFF )
            goto LABEL_3;
          *(_DWORD *)(v8 + 380) = v10 | 0x800;
          ++*(_WORD *)(v9 + 1264);
        }
      }
      else if ( (v10 & 0x800) != 0 )
      {
        *(_DWORD *)(v8 + 380) = v10 & 0xFFFFF7FF;
        if ( !*(_WORD *)(v9 + 1264) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 21000);
        --*(_WORD *)(v9 + 1264);
      }
    }
    v4 = 1LL;
  }
LABEL_17:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
