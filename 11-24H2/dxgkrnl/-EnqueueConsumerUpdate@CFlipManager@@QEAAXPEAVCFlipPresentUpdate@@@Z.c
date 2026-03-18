/*
 * XREFs of ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140019398
 * Callers:
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001927C (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     ?Enqueue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001942C (-Enqueue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetTracingId@CFlipManager@@QEAAIXZ @ 0x14009E7B4 (-GetTracingId@CFlipManager@@QEAAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManager::EnqueueConsumerUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v2; // rbx
  void (__fastcall *v4)(_QWORD, PRKEVENT); // rdi
  PRKEVENT v5; // rbx
  unsigned int TracingId; // eax

  v2 = this + 19;
  if ( (_QWORD *)*v2 == v2 )
    KeSetEvent(this[36], 1, 0);
  CFlipObjectQueue<CFlipPresentUpdate>::Enqueue(v2);
  v4 = *(void (__fastcall **)(_QWORD, PRKEVENT))(DxgkGetWin32kImportTable() + 168);
  this[21] = (PRKEVENT)((char *)this[21] + 1);
  v5 = this[21];
  TracingId = CFlipManager::GetTracingId((CFlipManager *)this);
  v4(TracingId, v5);
  this[30] = (PRKEVENT)((char *)this[30] + 1);
}
