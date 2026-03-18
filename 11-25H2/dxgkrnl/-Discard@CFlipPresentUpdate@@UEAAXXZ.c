/*
 * XREFs of ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x14009E420
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x14009E45C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipPresentUpdate::Discard(CFlipPresentUpdate *this)
{
  FlipManagerObject *v2; // rcx

  v2 = (FlipManagerObject *)*((_QWORD *)this + 1);
  if ( v2 )
    FlipManagerObject::ProcessDiscardedProducerPresentUpdate(v2, this);
  (*(void (__fastcall **)(CFlipPresentUpdate *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
