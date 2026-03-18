/*
 * XREFs of ?AdvanceToTime@CVector3ForceEvaluator@@QEAA?AUD2DVector3@@MPEAUIAccelerator@@00@Z @ 0x1801CC9FC
 * Callers:
 *     ?Update@CVector3Force@@QEAA?AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z @ 0x1801CC97C (-Update@CVector3Force@@QEAA-AUD2DVector3@@MPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x18017E758 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 */

__int64 __fastcall CVector3ForceEvaluator::AdvanceToTime(
        __int64 a1,
        __int64 a2,
        float a3,
        struct IAccelerator *a4,
        struct IAccelerator *a5,
        struct IAccelerator *a6)
{
  int v8; // r9d
  int v9; // r9d
  float v10; // xmm0_4
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  *(float *)a2 = CScalarForceEvaluator::AdvanceToTime((CScalarForceEvaluator *)a1, a3, a4, (int)a4);
  *(float *)(a2 + 4) = CScalarForceEvaluator::AdvanceToTime((CScalarForceEvaluator *)(a1 + 68), a3, a5, v8);
  v10 = CScalarForceEvaluator::AdvanceToTime((CScalarForceEvaluator *)(a1 + 136), a3, a6, v9);
  result = a2;
  *(float *)(a2 + 8) = v10;
  return result;
}
