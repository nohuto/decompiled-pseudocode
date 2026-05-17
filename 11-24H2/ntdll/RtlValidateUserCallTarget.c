/*
 * XREFs of RtlValidateUserCallTarget @ 0x180004930
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180112FB0 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     CfgAddressToBitState @ 0x180003274 (CfgAddressToBitState.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 */

__int64 __fastcall RtlValidateUserCallTarget(unsigned __int64 a1, _DWORD *a2)
{
  char v3; // di
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  int v8; // eax
  int v10; // eax

  v3 = a1;
  v4 = CfgAddressToBitState(a1, (const signed __int64 *)qword_1801EA508);
  v7 = 0;
  if ( !v4 )
    goto LABEL_8;
  v8 = v4 - 1;
  if ( v8 )
  {
    v10 = v8 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        *a2 = 8;
        return 1;
      }
    }
    else
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v6, v5, 0LL) )
      {
        *a2 = 16;
        return v7;
      }
      if ( (v3 & 0xF) == 0 )
      {
        *a2 = 4;
        return 1;
      }
    }
LABEL_8:
    *a2 = 2;
    return v7;
  }
  LOBYTE(v7) = (v3 & 0xF) == 0;
  *a2 = (v7 ^ 1) + 1;
  return v7;
}
