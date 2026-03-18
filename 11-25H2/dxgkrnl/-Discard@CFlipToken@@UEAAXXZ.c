/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x140034BA0
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x140034B10 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14000F050 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x14000F46C (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  char v2; // al

  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  v2 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, v2);
}
