/*
 * XREFs of ?Evaluate@CScalarForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@PEAUIAccelerator@@M@Z @ 0x180213CAC
 * Callers:
 *     ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x18017E940 (-Integrate@CScalarForceEvaluator@@AEAA-AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScalarForceEvaluator::Evaluate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(a3 + 8);
  *(float *)(a2 + 4) = (*(float (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 16LL))(a4, a3);
  return a2;
}
