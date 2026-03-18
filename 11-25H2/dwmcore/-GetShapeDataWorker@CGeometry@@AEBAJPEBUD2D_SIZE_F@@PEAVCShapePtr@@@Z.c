/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058AB0
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x180035440 (-InternalRelease@-$CMILRefCountBaseT@UID2D1GeometrySink@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059890 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?HasTransform@CGeometry@@MEBA_NXZ @ 0x18005B260 (-HasTransform@CGeometry@@MEBA_NXZ.c)
 *     ?GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18005B330 (-GetShapeDataCore@CPathGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18005E150 (-GetShapeDataCore@CRegionGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180251704 (--0CThreadContext@@AEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, const struct D2D_SIZE_F *a2, struct CShapePtr *a3)
{
  const struct D2D_SIZE_F *v4; // rsi
  __int64 (__fastcall *v6)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  unsigned int v8; // ebx
  bool (__fastcall *v9)(CGeometry *__hidden); // rax
  bool HasTransform; // al
  CShape *v12; // rcx
  int v13; // eax
  char *v14; // rdi
  void *(__fastcall *v15)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  __int64 v16; // rax
  CResource *v17; // rcx
  void (*v18)(void); // rax
  char *v19; // rsi
  __int64 v20; // rax
  CPathData *v21; // rcx
  void (*v22)(void); // rax
  _QWORD *Value; // rsi
  HANDLE v24; // rax
  HANDLE ProcessHeap; // rax
  struct CShape *v26; // rax
  CThreadContext *v27; // rax
  CThreadContext *v28; // rax
  CPolygonShape *v29; // rcx
  struct CShape *v30; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v31[4]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v32; // [rsp+60h] [rbp-19h]
  __int64 v33; // [rsp+70h] [rbp-9h]
  int v34; // [rsp+78h] [rbp-1h]
  __int64 v35; // [rsp+7Ch] [rbp+3h]
  __int128 v36; // [rsp+90h] [rbp+17h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+27h]
  void *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = 0LL;
  if ( *((_BYTE *)this + 132) )
    v4 = a2;
  v6 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)this + 216LL);
  if ( v6 == CRectangleGeometry::GetShapeDataCore )
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataCore, 0xFAu, 0LL);
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
  v36 = 0LL;
  v37 = 0LL;
  if ( *(_QWORD *)a3 )
  {
    (*(void (__fastcall **)(CGeometry *, const struct D2D_SIZE_F *, __int128 *))(*(_QWORD *)this + 224LL))(
      this,
      v4,
      &v36);
    v12 = *(CShape **)a3;
    v31[0] = v36;
    v35 = 0x28083F800000LL;
    v32 = _xmm;
    v31[2] = *((_QWORD *)&v36 + 1);
    v33 = v37;
    v31[1] = 0LL;
    v31[3] = 0LL;
    v34 = 0;
    v30 = 0LL;
    v13 = CShape::CopyShape(v12, (const struct CMILMatrix *)v31, &v30);
    v8 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x108u, 0LL);
      return v8;
    }
    if ( *((_BYTE *)a3 + 8) )
    {
      v14 = *(char **)a3;
      if ( *(_QWORD *)a3 )
      {
        v15 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v14;
        if ( v15 == CRectanglesShape::`scalar deleting destructor' )
        {
          *(_QWORD *)v14 = &CRectanglesShape::`vftable';
          v16 = (__int64)(*((_QWORD *)v14 + 3) - *((_QWORD *)v14 + 2)) >> 4;
          if ( v16 )
            *((_QWORD *)v14 + 3) -= 16 * v16;
          v17 = (CResource *)*((_QWORD *)v14 + 7);
          if ( v17 )
          {
            v18 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
            if ( (char *)v18 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
              CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v17);
            else
              v18();
            *((_QWORD *)v14 + 7) = 0LL;
          }
          v19 = (char *)*((_QWORD *)v14 + 2);
          v20 = (__int64)(*((_QWORD *)v14 + 3) - (_QWORD)v19) >> 4;
          if ( v20 )
            *((_QWORD *)v14 + 3) -= 16 * v20;
          *((_QWORD *)v14 + 2) = 0LL;
          if ( v19 == v14 + 40 )
            v19 = 0LL;
          if ( v19 )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v19);
          }
          v21 = (CPathData *)*((_QWORD *)v14 + 1);
          if ( v21 )
          {
            *((_QWORD *)v14 + 1) = 0LL;
            v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
            if ( (char *)v22 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
              CMILRefCountBaseT<ID2D1GeometrySink,CMilObjectDeleter>::InternalRelease(v21);
            else
              v22();
          }
          Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
          if ( !Value )
          {
            v27 = (CThreadContext *)MIDL_user_allocate(0x1C0uLL);
            if ( !v27 || (v28 = CThreadContext::CThreadContext(v27), (Value = v28) == 0LL) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x28u, 0LL);
              ModuleFailFastForHRESULT(-2147024882, retaddr);
            }
            TlsSetValue(CThreadContext::s_dwTlsIndex, v28);
          }
          if ( *((_DWORD *)Value + 13) < *((_DWORD *)Value + 12) )
          {
            *(_QWORD *)v14 = Value[7];
            ++*((_DWORD *)Value + 13);
            v26 = v30;
            Value[7] = v14;
            *(_QWORD *)a3 = v26;
            *((_BYTE *)a3 + 8) = 1;
            return v8;
          }
          v24 = GetProcessHeap();
          HeapFree(v24, 0, v14);
        }
        else
        {
          if ( v15 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(*(CRoundedRectangleShape **)a3);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v14);
            *(_QWORD *)a3 = v30;
            *((_BYTE *)a3 + 8) = 1;
            return v8;
          }
          v29 = *(CPolygonShape **)a3;
          if ( v15 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v29, 1u);
            *(_QWORD *)a3 = v30;
            *((_BYTE *)a3 + 8) = 1;
            return v8;
          }
          v15(v29, 1u);
        }
      }
    }
    *(_QWORD *)a3 = v30;
    *((_BYTE *)a3 + 8) = 1;
  }
  return v8;
}
