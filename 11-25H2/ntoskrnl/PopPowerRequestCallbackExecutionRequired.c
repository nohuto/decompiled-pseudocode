/*
 * XREFs of PopPowerRequestCallbackExecutionRequired @ 0x140A1E2C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackExecutionRequired(__int64 a1, __int64 a2, char a3)
{
  char v4; // al
  int v5; // ebx
  char *v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-8h]

  if ( (_DWORD)a2 == 3 )
  {
    v4 = PopPowerRequestPdcNotifiedExecutionRequired;
    v5 = 2;
    v6 = &PopPowerRequestPdcNotifiedExecutionRequired;
  }
  else
  {
    v6 = &PopPowerRequestPdcNotifiedSystemRequired;
    v5 = 1;
    if ( !PopPowerRequestConvertSystemToExecution )
      goto LABEL_6;
    v4 = PopPowerRequestPdcNotifiedSystemRequired;
  }
  a2 = qword_140E672A0;
  if ( qword_140E672A0 && v4 != a3 )
  {
    LOBYTE(a1) = a3;
    guard_dispatch_icall_no_overrides(a1);
    *v6 = a3;
  }
LABEL_6:
  PopAcquirePolicyLock(a1, a2);
  if ( a3 )
    v7 = v5 | dword_140F0A9B0;
  else
    v7 = ~v5 & dword_140F0A9B0;
  dword_140F0A9B0 = v7;
  if ( !v7 )
    dword_140F0A9D0 = dword_140F0A9A8;
  PopCheckResiliencyScenarios();
  return PopReleasePolicyLock(v9, v8, v10, v11, v13);
}
