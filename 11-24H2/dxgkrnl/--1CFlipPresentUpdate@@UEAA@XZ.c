/*
 * XREFs of ??1CFlipPresentUpdate@@UEAA@XZ @ 0x140017F74
 * Callers:
 *     ??_GCFlipPresentUpdate@@UEAAPEAXI@Z @ 0x140017F30 (--_GCFlipPresentUpdate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipQueuedObject@@MEAA@XZ @ 0x140017FE0 (--1CFlipQueuedObject@@MEAA@XZ.c)
 *     ??1CFlipTokenOperation@@MEAA@XZ @ 0x140018020 (--1CFlipTokenOperation@@MEAA@XZ.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x140019DE8 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 */

void __fastcall CFlipPresentUpdate::~CFlipPresentUpdate(CFlipPresentUpdate *this)
{
  void *v2; // rcx
  CFlipPropertySetBase *v3; // rcx

  *(_QWORD *)this = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
  *((_QWORD *)this + 2) = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (CFlipPropertySetBase *)*((_QWORD *)this + 7);
  if ( v3 )
    CFlipPropertySetBase::Release(v3);
  CFlipQueuedObject::~CFlipQueuedObject((CFlipPresentUpdate *)((char *)this + 16));
  CFlipTokenOperation::~CFlipTokenOperation(this);
}
