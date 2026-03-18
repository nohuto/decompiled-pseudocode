/*
 * XREFs of ??1CFlipTokenOperation@@MEAA@XZ @ 0x140018020
 * Callers:
 *     ??_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z @ 0x1400172B0 (--_ECFlipWaitedConsumerReturn@@UEAAPEAXI@Z.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x140017F74 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ??_GCFlipTokenOperation@@MEAAPEAXI@Z @ 0x14009EA20 (--_GCFlipTokenOperation@@MEAAPEAXI@Z.c)
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
