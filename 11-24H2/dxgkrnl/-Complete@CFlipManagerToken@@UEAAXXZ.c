/*
 * XREFs of ?Complete@CFlipManagerToken@@UEAAXXZ @ 0x14004DF50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManagerToken::Complete(LARGE_INTEGER *this)
{
  this[3].LowPart = 2;
  this[4] = KeQueryPerformanceCounter(0LL);
  (*(void (__fastcall **)(LARGE_INTEGER))(*(_QWORD *)this[8].QuadPart + 8LL))(this[8]);
  this[8].QuadPart = 0LL;
}
