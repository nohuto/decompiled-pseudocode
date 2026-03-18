/*
 * XREFs of ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x14009D5F0
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x14009D8E0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::NotifyOfDwmTermination(CCompositionBuffer *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 32LL))(*((_QWORD *)this + 37));
}
