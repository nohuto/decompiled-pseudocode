/*
 * XREFs of ?Update@CScalarForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180227830
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x18012AE78 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

float __fastcall CScalarForce::Update(CScalarForce *this, float a2, struct CExpressionValueStack *a3, int a4)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-28h] BYREF

  CScalarForceEvaluator::AdvanceToTime(
    (CScalarForce *)((char *)this + 16),
    a2 - *((float *)this + 24),
    *((struct IAccelerator **)this + 13),
    a4);
  return *(float *)((*(__int64 (__fastcall **)(CScalarForce *, _BYTE *))(*(_QWORD *)this + 32LL))(this, v6) + 4);
}
