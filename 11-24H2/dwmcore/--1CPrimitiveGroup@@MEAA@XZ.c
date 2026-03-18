/*
 * XREFs of ??1CPrimitiveGroup@@MEAA@XZ @ 0x1801C9CEC
 * Callers:
 *     ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x1801C9CA0 (--_ECPrimitiveGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA074 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA118 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA14C (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroup::~CPrimitiveGroup(CPrimitiveGroup *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  CCachedVisualImage *v5; // rcx

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
  v5 = (CCachedVisualImage *)*((_QWORD *)this + 49);
  if ( v5 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v5, v3, v4);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 11));
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 12));
  CPrimitiveGroup::ReleaseHeatMap(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 328);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 264);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 200);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 136);
  CResource::~CResource(this);
}
