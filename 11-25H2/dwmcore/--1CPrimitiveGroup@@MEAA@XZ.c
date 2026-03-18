/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x18013001C
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x18012FFD0 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x1800781CC (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x18012F844 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1801300E4 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180130118 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  CResource *v3; // rcx

  *(_QWORD *)this = &CPrimitiveGroup::`vftable'{for `CContent'};
  *((_QWORD *)this + 9) = &CPrimitiveGroup::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 10) = &CPrimitiveGroup::`vftable'{for `IDirtyRectSource'};
  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  CPrimitiveGroup::ReleaseColorResources(this);
  v3 = (CResource *)*((_QWORD *)this + 49);
  if ( v3 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 11));
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 12));
  CPrimitiveGroup::ReleaseHeatMap(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 328);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 264);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 136);
  CResource::~CResource(this);
}
