/*
 * XREFs of ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x14009B3C0
 * Callers:
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x14009B6B0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionBuffer::NotifyOfDwmTermination(CCompositionBuffer *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 32LL))(*((_QWORD *)this + 37));
}
