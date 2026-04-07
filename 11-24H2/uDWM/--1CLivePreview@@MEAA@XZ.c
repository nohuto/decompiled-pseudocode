/*
 * XREFs of ??1CLivePreview@@MEAA@XZ @ 0x1800C7A54
 * Callers:
 *     ??_GCLivePreview@@MEAAPEAXI@Z @ 0x1800C7BF0 (--_GCLivePreview@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CTimelineBase@@QEAAKXZ @ 0x180012270 (-Release@CTimelineBase@@QEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18004942C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180049578 (-_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ.c)
 */

void __fastcall CLivePreview::~CLivePreview(void **this, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rdi
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  CTimelineBase *v15; // rcx
  CBaseObject *v16; // rcx
  void *v17; // rcx

  *this = &CLivePreview::`vftable';
  CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)this, a2, a3);
  v4 = *((_DWORD *)this + 72) - 1;
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 40LL * v4;
    do
    {
      v7 = *(CBaseObject **)((char *)this[33] + v6 + 8);
      if ( v7 )
      {
        CBaseObject::Release(v7);
        *(_QWORD *)((char *)this[33] + v6 + 8) = 0LL;
      }
      v8 = *(CBaseObject **)((char *)this[33] + v6 + 16);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *(_QWORD *)((char *)this[33] + v6 + 16) = 0LL;
      }
      v6 -= 40LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
  v9 = (CBaseObject *)this[50];
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)this[51];
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)this[52];
  if ( v11 )
    CBaseObject::Release(v11);
  v12 = (CBaseObject *)this[53];
  if ( v12 )
    CBaseObject::Release(v12);
  v13 = (CBaseObject *)this[54];
  if ( v13 )
    CBaseObject::Release(v13);
  v14 = (CBaseObject *)this[55];
  if ( v14 )
    CBaseObject::Release(v14);
  v15 = (CTimelineBase *)this[49];
  if ( v15 )
    CTimelineBase::Release(v15);
  v16 = (CBaseObject *)this[60];
  if ( v16 )
    CBaseObject::Release(v16);
  CLivePreview::_ReleasePerMonitorResources((CLivePreview *)this);
  v17 = this[56];
  if ( v17 )
  {
    std::_Deallocate<16,0>(
      v17,
      (const struct std::nothrow_t *)(((_BYTE *)this[58] - (_BYTE *)v17) & 0xFFFFFFFFFFFFFFF8uLL));
    this[56] = 0LL;
    this[57] = 0LL;
    this[58] = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 45);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 41);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 37);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 33);
  CRenderDataVisual::~CRenderDataVisual(this);
}
