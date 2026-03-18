/*
 * XREFs of ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x1801A4ABC
 * Callers:
 *     ??_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x1801A4A70 (--_ECGlobalCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ @ 0x1801A46EC (-TryGetVtrSurfaceManager@@YAPEAVIVtrSurfaceManager@@XZ.c)
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1801A4EB8 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::~CGlobalCompositionSurfaceInfo(CGlobalCompositionSurfaceInfo *this)
{
  struct IVtrSurfaceManager *VtrSurfaceManager; // rax

  *(_QWORD *)this = &CGlobalCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CGlobalCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CGlobalCompositionSurfaceInfo::`vftable';
  VtrSurfaceManager = TryGetVtrSurfaceManager();
  if ( VtrSurfaceManager )
    (*(void (__fastcall **)(struct IVtrSurfaceManager *, char *))(*(_QWORD *)VtrSurfaceManager + 16LL))(
      VtrSurfaceManager,
      (char *)this + 40);
  CGlobalCompositionSurfaceInfo::CBindInfo::~CBindInfo((CGlobalCompositionSurfaceInfo *)((char *)this + 112));
  CCompositionSurfaceInfo::~CCompositionSurfaceInfo(this);
}
