/*
 * XREFs of ??1CSurfaceDrawListBrush@@UEAA@XZ @ 0x18019D0E4
 * Callers:
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18019D07C (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18019D0A8 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSurfaceDrawListBrush::~CSurfaceDrawListBrush(CSurfaceDrawListBrush *this)
{
  __int64 v2; // rcx
  CEffectIntermediateProducer *v3; // rcx
  void (*v4)(void); // rax

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (CEffectIntermediateProducer *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v3);
    }
    else if ( (char *)v4 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
    }
    else
    {
      v4();
    }
  }
}
