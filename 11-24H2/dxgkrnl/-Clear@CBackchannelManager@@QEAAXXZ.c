/*
 * XREFs of ?Clear@CBackchannelManager@@QEAAXXZ @ 0x140046798
 * Callers:
 *     ??1CBackchannelManager@@UEAA@XZ @ 0x1400465B0 (--1CBackchannelManager@@UEAA@XZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1400466FC (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ @ 0x1400467E8 (-Dequeue@-$CFlipObjectQueue@VCFlipConsumerMessage@@@@QEAAPEAVCFlipConsumerMessage@@XZ.c)
 */

void __fastcall CBackchannelManager::Clear(CBackchannelManager *this)
{
  _QWORD *v2; // rdi
  CFlipPropertySetBase *v3; // rax

  v2 = (_QWORD *)((char *)this + 8);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (CFlipPropertySetBase *)CFlipObjectQueue<CFlipConsumerMessage>::Dequeue(v2);
    CFlipPropertySetBase::Release(v3);
  }
  *((_DWORD *)this + 6) = 0;
  KeResetEvent(*((PRKEVENT *)this + 4));
}
