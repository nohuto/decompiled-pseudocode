/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1801396C0
 * Callers:
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180139580 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180139DF8 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x18013A3D8 (--1CInteraction@@MEAA@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18013A9B0 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x18022C7A0 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AB7E0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ReleaseInterface<CWeakReference<CVisual>>(CResourceWeakRef **a1)
{
  CResourceWeakRef *v2; // rcx
  __int64 (__fastcall *v3)(CResource *); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v2 + 16LL);
    if ( v3 == CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::InternalRelease(v2);
    }
    else
    {
      if ( v3 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      {
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
        *a1 = 0LL;
        return;
      }
      ((void (*)(void))v3)();
    }
    *a1 = 0LL;
  }
}
