/*
 * XREFs of ?Complete@CFlipWaitedConsumerReturn@@UEAAXXZ @ 0x140007CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x140007D1C (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipWaitedConsumerReturn::Complete(CFlipWaitedConsumerReturn *this)
{
  FlipManagerObject::ConsumerAdjustUsageReference(*((FlipManagerObject **)this + 1), *((_QWORD *)this + 2), 0);
  (*(void (__fastcall **)(CFlipWaitedConsumerReturn *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
