/*
 * XREFs of _lambda_1a4d461b071b17a49d9b71157d22f5c1_::operator() @ 0x1803A8B2C
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_88a858cd4cb28562f278f25c97312609___::Invoke @ 0x1803A9830 (CAsyncCallbackWithLambda__lambda_88a858cd4cb28562f278f25c97312609___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ @ 0x1800F27F0 (-WriteCortanaAvailabilityToRegistry@CortanaAvailability@@YAJXZ.c)
 *     ?CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ @ 0x1802CDD9C (-CortanaStoreAppExperienceManager_WNFReentrancyGuard@CortanaProactiveTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1a4d461b071b17a49d9b71157d22f5c1_::operator()(
        CortanaAvailability *a1,
        unsigned __int8 *a2,
        unsigned int *a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 340LL) )
  {
    CortanaProactiveTelemetry::CortanaStoreAppExperienceManager_WNFReentrancyGuard((__int64)a1);
    *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 1;
    return 0LL;
  }
  else
  {
    *(_WORD *)(v4 + 340) = 1;
    while ( 1 )
    {
      v6 = CortanaAvailability::WriteCortanaAvailabilityToRegistry(a1, a2, a3);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x149,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        result = v7;
        goto LABEL_8;
      }
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 341LL) )
        break;
      *(_BYTE *)(*(_QWORD *)a1 + 341LL) = 0;
    }
    result = 0LL;
LABEL_8:
    *(_BYTE *)(v4 + 340) = 0;
  }
  return result;
}
