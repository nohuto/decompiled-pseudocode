/*
 * XREFs of CitEnableKeyboardDelegation @ 0x1C0234A34
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x1C0141F20 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1C0033220 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C00CA074 (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage @ 0x1C00D660C (Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage.c)
 */

void __fastcall CitEnableKeyboardDelegation(int a1, __int64 a2, __int64 a3)
{
  struct _CIT_PROCESS *v4; // rbx
  const char *v5; // rdx
  struct _CIT_PROCESS *v6; // rax
  struct _CIT_PROCESS *v7; // rdi

  if ( !xmmword_1C0293D20 )
    return;
  if ( a2 )
  {
    if ( a1 && a3 && a2 != a3 )
    {
      v4 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a2, (const char *)a2);
      v6 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a3, v5);
      v7 = v6;
      if ( v4 && v6 )
      {
        if ( (unsigned int)Feature_Ni_FixCitInputDelegationAV__private_IsEnabledDeviceUsage() )
        {
          if ( *((_QWORD *)v4 + 3) )
            CitpClearDelegation(v4);
        }
        *((_QWORD *)v4 + 3) = v7;
        *((_QWORD *)v7 + 2) = v4;
      }
      return;
    }
    CitpClearDelegation(*(struct _CIT_PROCESS **)(a2 + 944));
  }
  if ( a3 )
    CitpClearDelegation(*(struct _CIT_PROCESS **)(a3 + 944));
}
