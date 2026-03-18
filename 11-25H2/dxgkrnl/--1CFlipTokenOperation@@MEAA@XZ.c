/*
 * XREFs of ??1CFlipTokenOperation@@MEAA@XZ @ 0x140008B20
 * Callers:
 *     ??_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z @ 0x140007DB0 (--_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x140008A74 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ??_GCFlipTokenOperation@@MEAAPEAXI@Z @ 0x14009C6C0 (--_GCFlipTokenOperation@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipTokenOperation::~CFlipTokenOperation(CFlipTokenOperation *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &CFlipTokenOperation::`vftable';
  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ObfDereferenceObject(v1);
}
