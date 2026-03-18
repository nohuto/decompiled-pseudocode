/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180094BF0
 * Callers:
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180094AB0 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180095328 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x180095454 (--1CInteraction@@MEAA@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180095A30 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x1802215F0 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800799C0 (-InternalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ReleaseInterface<CWeakReference<CVisual>>(CResourceWeakRef **a1, __int64 a2, __int64 a3)
{
  CResourceWeakRef *v4; // rcx
  __int64 (__fastcall *v5)(CCachedVisualImage *, __int64, __int64); // rax

  v4 = *a1;
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v5 == (char *)CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
    {
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::InternalRelease(v4);
    }
    else
    {
      if ( v5 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      {
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
          v4,
          (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
          a3);
        *a1 = 0LL;
        return;
      }
      ((void (*)(void))v5)();
    }
    *a1 = 0LL;
  }
}
