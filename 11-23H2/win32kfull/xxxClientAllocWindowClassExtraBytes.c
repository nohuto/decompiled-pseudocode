/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C007622C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxValidateClassAndSize @ 0x1C00DF5B4 (xxxValidateClassAndSize.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E808 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122A54 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  volatile void **v15; // rcx
  ULONG64 v16; // rdx
  volatile void *v17; // rdi
  __int64 CurrentProcessWow64Process; // rax
  int v20; // [rsp+88h] [rbp+10h] BYREF
  int v21; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v22; // [rsp+98h] [rbp+20h] BYREF

  v3 = (unsigned int)Length;
  v4 = 0LL;
  v22 = 0LL;
  v20 = 0;
  v21 = Length;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6682LL);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() || (v9 = 1, !IS_USERCRIT_OWNED_AT_ALL()) )
    v9 = 0;
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  EtwTraceBeginCallback(123LL);
  v10 = KeUserModeCallback(123LL, &v21, 4LL, &v22, &v20);
  EtwTraceEndCallback(123LL);
  if ( v9 )
    EnterSharedCrit(v12, v11, v13);
  else
    EnterCrit(0LL, 0LL);
  if ( v10 < 0 || v20 != 24 )
    return 0LL;
  v15 = (volatile void **)v22;
  v16 = v22 + 8;
  if ( v22 + 8 < v22 || v16 > MmUserProbeAddress )
    v15 = (volatile void **)MmUserProbeAddress;
  v17 = *v15;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v16, v14);
  ProbeForRead(v17, v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) == 0 )
    return v17;
  return (volatile void *)v4;
}
