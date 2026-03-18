/*
 * XREFs of ?OnInput@CBasePTPEngine@@UEAAJPEAUPTPInput@@@Z @ 0x1C00E7110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBasePTPEngine::OnInput(CBasePTPEngine *this, struct PTPInput *a2)
{
  return (*(__int64 (__fastcall **)(CBasePTPEngine *, struct PTPInput *))(*(_QWORD *)this + 48LL))(this, a2);
}
