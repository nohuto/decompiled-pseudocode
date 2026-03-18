/*
 * XREFs of ??1CFlipQueuedObject@@MEAA@XZ @ 0x140008AE0
 * Callers:
 *     ??1CFlipConsumerMessage@@MEAA@XZ @ 0x14000899C (--1CFlipConsumerMessage@@MEAA@XZ.c)
 *     ??1CFlipPresentUpdate@@UEAA@XZ @ 0x140008A74 (--1CFlipPresentUpdate@@UEAA@XZ.c)
 *     ??_ECFlipQueuedObject@@MEAAPEAXI@Z @ 0x14009B9E0 (--_ECFlipQueuedObject@@MEAAPEAXI@Z.c)
 *     ??_ECFlipPresentCancel@@UEAAPEAXI@Z @ 0x14009C670 (--_ECFlipPresentCancel@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipQueuedObject::~CFlipQueuedObject(CFlipQueuedObject *this)
{
  _QWORD *v1; // rdx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  *(_QWORD *)this = &CFlipQueuedObject::`vftable';
  v1 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v2 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
}
