/*
 * XREFs of ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801A8190
 * Callers:
 *     ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802BFA90 (-Simplify@CPathData@@QEBAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??4?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z @ 0x1800AC7A0 (--4-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801A84B8 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::GetD2DGeometry(CPathData *this, struct ID2D1Factory *a2, struct ID2D1Geometry **a3)
{
  __int64 (__fastcall *v3)(struct CMILPoolResource *); // rdx
  __int64 *v4; // r14
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 (__fastcall *v9)(CResource *); // r8
  CResource *v10; // rbx
  CResource *v11; // rcx
  __int64 (__fastcall *v12)(CGlobalDrawingContext *); // rax
  CResource *v13; // rcx
  __int64 (__fastcall *v14)(CGlobalDrawingContext *); // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64 *, CResource **); // rbx
  int v18; // eax
  CResource *v19; // rbx
  __int64 (__fastcall *v20)(CResource *, struct ID2D1GeometrySink **); // rdi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  struct ID2D1GeometrySink *v24; // rcx
  CResource *v25; // [rsp+70h] [rbp+28h] BYREF
  struct ID2D1GeometrySink *v26; // [rsp+78h] [rbp+30h] BYREF

  v26 = a2;
  v3 = CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease;
  v4 = (__int64 *)*((_QWORD *)this + 5);
  v6 = 0;
  v7 = *((_QWORD *)this + 7);
  v25 = 0LL;
  v9 = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease;
  if ( v7 && v4 == *((__int64 **)this + 5) )
  {
    v10 = (CResource *)*((_QWORD *)this + 7);
    if ( v25 == v10 )
      goto LABEL_12;
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct CMILPoolResource *), __int64 (__fastcall *)(CResource *)))(*(_QWORD *)v10 + 8LL))(
        *((_QWORD *)this + 7),
        CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease,
        CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease);
      v3 = CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease;
      v9 = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease;
    }
    v11 = v25;
    v25 = v10;
    if ( !v11 )
      goto LABEL_12;
    v12 = *(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v11 + 16LL);
    if ( v12 == CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v11);
      goto LABEL_12;
    }
    if ( v12 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v11);
      goto LABEL_12;
    }
    if ( v12 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v11);
LABEL_12:
      *a3 = v25;
      v25 = 0LL;
      goto LABEL_13;
    }
LABEL_31:
    ((void (__fastcall *)(CResource *, __int64 (__fastcall *)(struct CMILPoolResource *), __int64 (__fastcall *)(CResource *)))v12)(
      v11,
      v3,
      v9);
    goto LABEL_12;
  }
  v16 = *v4;
  v26 = 0LL;
  v17 = *(__int64 (__fastcall **)(__int64 *, CResource **))(v16 + 80);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v25);
  v18 = v17(v4, &v25);
  v6 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x67u, 0LL);
    v24 = v26;
    if ( v26 )
      goto LABEL_35;
  }
  else
  {
    v19 = v25;
    v20 = *(__int64 (__fastcall **)(CResource *, struct ID2D1GeometrySink **))(*(_QWORD *)v25 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
    v21 = v20(v19, &v26);
    v6 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x68u, 0LL);
    }
    else
    {
      v22 = CPathData::PushIntoSink(this, v26);
      v6 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x6Au, 0LL);
      }
      else
      {
        v23 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v26 + 72LL))(v26);
        v6 = v23;
        if ( v23 >= 0 )
        {
          if ( v4 == *((__int64 **)this + 5) )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, (signed __int64)v25, 0LL) )
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=(&v25, *((CGlobalDrawingContext **)this + 7));
            else
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 8LL))(*((_QWORD *)this + 7));
          }
          v11 = v26;
          if ( !v26 )
            goto LABEL_12;
          v26 = 0LL;
          v12 = *(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v11 + 16LL);
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x6Cu, 0LL);
      }
    }
    v24 = v26;
    if ( v26 )
    {
      v26 = 0LL;
LABEL_35:
      (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v24 + 16LL))(v24);
    }
  }
LABEL_13:
  v13 = v25;
  if ( !v25 )
    return v6;
  v25 = 0LL;
  v14 = *(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v13 + 16LL);
  if ( v14 == CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
  {
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v13);
    return v6;
  }
  if ( v14 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
  {
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v13);
    return v6;
  }
  if ( v14 != CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
  {
    ((void (__fastcall *)(CResource *, __int64 (__fastcall *)(struct CMILPoolResource *), __int64 (__fastcall *)(CResource *)))v14)(
      v13,
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease,
      v9);
    return v6;
  }
  CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v13);
  return v6;
}
