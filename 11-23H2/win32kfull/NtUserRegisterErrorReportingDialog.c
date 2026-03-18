/*
 * XREFs of NtUserRegisterErrorReportingDialog @ 0x1C01D8A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z @ 0x1C01F38A0 (-_RegisterErrorReportingDialog@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall NtUserRegisterErrorReportingDialog(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct tagWND *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v10 = 0;
  if ( v5 )
    v10 = _RegisterErrorReportingDialog(v5, v3);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
