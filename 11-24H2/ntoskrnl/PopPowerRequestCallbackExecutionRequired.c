/*
 * XREFs of PopPowerRequestCallbackExecutionRequired @ 0x140A27260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopPowerRequestCallbackExecutionRequired(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  char v5; // al
  int v6; // ebx
  char *v7; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-8h]

  v4 = a3;
  if ( (_DWORD)a2 == 3 )
  {
    v5 = PopPowerRequestPdcNotifiedExecutionRequired;
    v6 = 2;
    v7 = &PopPowerRequestPdcNotifiedExecutionRequired;
  }
  else
  {
    v7 = &PopPowerRequestPdcNotifiedSystemRequired;
    v6 = 1;
    if ( !PopPowerRequestConvertSystemToExecution )
      goto LABEL_6;
    v5 = PopPowerRequestPdcNotifiedSystemRequired;
  }
  a2 = qword_140E67580;
  if ( qword_140E67580 && v5 != (_BYTE)a3 )
  {
    LOBYTE(a1) = a3;
    guard_dispatch_icall_no_overrides(a1, qword_140E67580, a3, a4);
    *v7 = v4;
  }
LABEL_6:
  PopAcquirePolicyLock(a1, a2);
  if ( v4 )
    v8 = v6 | dword_140F0BD90;
  else
    v8 = ~v6 & dword_140F0BD90;
  dword_140F0BD90 = v8;
  if ( !v8 )
    dword_140F0BDB0 = dword_140F0BD88;
  PopCheckResiliencyScenarios();
  return PopReleasePolicyLock(v10, v9, v11, v12, v14);
}
