/*
 * XREFs of CitEnableKeyboardDelegation @ 0x1401971A8
 * Callers:
 *     NtMITSetInputDelegationMode @ 0x14016B1B0 (NtMITSetInputDelegationMode.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z @ 0x1400B3D28 (-CitpProcessEnsureContext@@YAPEAU_CIT_PROCESS@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1400B5E4C (-CitpClearDelegation@@YAXPEAU_CIT_PROCESS@@@Z.c)
 */

void __fastcall CitEnableKeyboardDelegation(__int64 a1, struct _CIT_PROCESS **a2, struct _CIT_PROCESS **a3)
{
  int v5; // esi
  struct _CIT_PROCESS *v6; // rdi
  struct _CIT_PROCESS *v7; // rax
  struct _CIT_PROCESS *v8; // rbx

  v5 = a1;
  if ( !CitIsEnabled(a1) )
    return;
  if ( a2 )
  {
    if ( v5 && a3 && a2 != a3 )
    {
      v6 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a2);
      v7 = CitpProcessEnsureContext((struct tagPROCESSINFO *)a3);
      v8 = v7;
      if ( v6 && v7 )
      {
        if ( *((_QWORD *)v6 + 3) )
          CitpClearDelegation(v6);
        if ( *((_QWORD *)v8 + 2) )
          CitpClearDelegation(v8);
        *((_QWORD *)v6 + 3) = v8;
        *((_QWORD *)v8 + 2) = v6;
      }
      return;
    }
    CitpClearDelegation(a2[115]);
  }
  if ( a3 )
    CitpClearDelegation(a3[115]);
}
