/*
 * XREFs of ??1CFlipConsumerMessage@@MEAA@XZ @ 0x14000899C
 * Callers:
 *     ??_ECFlipConsumerMessage@@MEAAPEAXI@Z @ 0x140008900 (--_ECFlipConsumerMessage@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipPropertySetBase@@MEAA@XZ @ 0x1400089D8 (--1CFlipPropertySetBase@@MEAA@XZ.c)
 *     ??1CFlipQueuedObject@@MEAA@XZ @ 0x140008AE0 (--1CFlipQueuedObject@@MEAA@XZ.c)
 */

void __fastcall CFlipConsumerMessage::~CFlipConsumerMessage(CFlipConsumerMessage *this)
{
  CFlipQueuedObject *v2; // rcx

  *(_QWORD *)this = &CFlipConsumerMessage::`vftable'{for `CFlipPropertySetBase'};
  v2 = (CFlipConsumerMessage *)((char *)this + 40);
  *(_QWORD *)v2 = &CFlipConsumerMessage::`vftable'{for `CFlipQueuedObject'};
  CFlipQueuedObject::~CFlipQueuedObject(v2);
  CFlipPropertySetBase::~CFlipPropertySetBase(this);
}
