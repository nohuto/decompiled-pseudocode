/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C42D0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18000F570 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C50B0 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18017CE60 (-GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1801E9D10 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?HasTransform@CGeometry@@MEBA_NXZ @ 0x18022CA20 (-HasTransform@CGeometry@@MEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1802467D8 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  const struct D2D_SIZE_F *v4; // rsi
  int (*v6)(CRegionGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  unsigned int v8; // ebx
  bool (__fastcall *v9)(CGeometry *__hidden); // rax
  bool HasTransform; // al
  CShape *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  char *v15; // rdi
  CRoundedRectangleShape *(__fastcall *v16)(CRoundedRectangleShape *, char); // rax
  __int64 v17; // rax
  CCachedVisualImage *v18; // rcx
  void (*v19)(void); // rax
  char *v20; // rsi
  __int64 v21; // rax
  CPathData *v22; // rcx
  void (*v23)(void); // rax
  _QWORD *Value; // rsi
  HANDLE v25; // rax
  HANDLE ProcessHeap; // rax
  struct CShape *v27; // rax
  CThreadContext *v28; // rax
  CThreadContext *v29; // rax
  CPolygonShape *v30; // rcx
  struct CShape *v31; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v32[4]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v33; // [rsp+60h] [rbp-19h]
  __int64 v34; // [rsp+70h] [rbp-9h]
  int v35; // [rsp+78h] [rbp-1h]
  __int64 v36; // [rsp+7Ch] [rbp+3h]
  __int128 v37; // [rsp+90h] [rbp+17h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+27h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = 0LL;
  if ( *((_BYTE *)this + 132) )
    v4 = a2;
  v6 = *(int (**)(CRegionGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 216LL);
  if ( (char *)v6 == (char *)CRectangleGeometry::GetShapeDataCore )
  {
    ShapeDataCore = CRectangleGeometry::GetShapeDataCore(this, v4, a3);
  }
  else if ( v6 == CRegionGeometry::GetShapeDataCore )
  {
    ShapeDataCore = CRegionGeometry::GetShapeDataCore(this, v4, a3);
  }
  else if ( v6 == CPathGeometry::GetShapeDataCore )
  {
    ShapeDataCore = CPathGeometry::GetShapeDataCore(this, v4, a3);
  }
  else
  {
    ShapeDataCore = ((__int64 (__fastcall *)(CGeometry *, const struct D2D_SIZE_F *))v6)(this, v4);
  }
  v8 = ShapeDataCore;
  if ( ShapeDataCore < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeDataCore, 0xFAu, 0LL);
    return v8;
  }
  v9 = *(bool (__fastcall **)(CGeometry *__hidden))(*(_QWORD *)this + 232LL);
  if ( v9 == CProxyGeometry::HasTransform )
  {
    if ( !CGeometry::HasTransform(this) && !*((_QWORD *)this + 18) )
      return v8;
  }
  else
  {
    if ( v9 == CGeometry::HasTransform )
      HasTransform = CGeometry::HasTransform(this);
    else
      HasTransform = v9(this);
    if ( !HasTransform )
      return v8;
  }
  v37 = 0LL;
  v38 = 0LL;
  if ( *(_QWORD *)a3 )
  {
    (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 224LL))(
      this,
      v4,
      &v37);
    v12 = *(CShape **)a3;
    v32[0] = v37;
    v36 = 0x28083F800000LL;
    v33 = _xmm;
    v32[2] = *((_QWORD *)&v37 + 1);
    v34 = v38;
    v32[1] = 0LL;
    v32[3] = 0LL;
    v35 = 0;
    v31 = 0LL;
    v13 = CShape::CopyShape(v12, (const struct CMILMatrix *)v32, &v31);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x108u, 0LL);
      return v8;
    }
    if ( *((_BYTE *)a3 + 8) )
    {
      v15 = *(char **)a3;
      if ( *(_QWORD *)a3 )
      {
        v16 = **(CRoundedRectangleShape *(__fastcall ***)(CRoundedRectangleShape *, char))v15;
        if ( (char *)v16 == (char *)CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v15 = &CRectanglesShape::`vftable';
          v17 = (__int64)(*((_QWORD *)v15 + 3) - *((_QWORD *)v15 + 2)) >> 4;
          if ( v17 )
            *((_QWORD *)v15 + 3) -= 16 * v17;
          v18 = (CCachedVisualImage *)*((_QWORD *)v15 + 7);
          if ( v18 )
          {
            v19 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
            if ( (char *)v19 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
                v18,
                (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
                v14);
            else
              v19();
            *((_QWORD *)v15 + 7) = 0LL;
          }
          v20 = (char *)*((_QWORD *)v15 + 2);
          v21 = (__int64)(*((_QWORD *)v15 + 3) - (_QWORD)v20) >> 4;
          if ( v21 )
            *((_QWORD *)v15 + 3) -= 16 * v21;
          *((_QWORD *)v15 + 2) = 0LL;
          if ( v20 == v15 + 40 )
            v20 = 0LL;
          if ( v20 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v20);
          }
          v22 = (CPathData *)*((_QWORD *)v15 + 1);
          if ( v22 )
          {
            *((_QWORD *)v15 + 1) = 0LL;
            v23 = *(void (**)(void))(*(_QWORD *)v22 + 16LL);
            if ( (char *)v23 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v22);
            else
              v23();
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v28 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v28 || (v29 = CThreadContext::CThreadContext(v28), (Value = v29) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v29);
          }
          if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
          {
            *(_QWORD *)v15 = Value[7];
            ++*((_DWORD *)Value + 13);
            v27 = v31;
            Value[7] = v15;
            *(_QWORD *)a3 = v27;
            *((_BYTE *)a3 + 8) = 1;
            return v8;
          }
          v25 = GetProcessHeap();
          HeapFree(v25, 0, v15);
        }
        else
        {
          if ( v16 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(*(CRoundedRectangleShape **)a3);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v15);
            *(_QWORD *)a3 = v31;
            *((_BYTE *)a3 + 8) = 1;
            return v8;
          }
          v30 = *(CPolygonShape **)a3;
          if ( v16 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v30, 1);
            *(_QWORD *)a3 = v31;
            *((_BYTE *)a3 + 8) = 1;
            return v8;
          }
          v16(v30, 1);
        }
      }
    }
    *(_QWORD *)a3 = v31;
    *((_BYTE *)a3 + 8) = 1;
  }
  return v8;
}
