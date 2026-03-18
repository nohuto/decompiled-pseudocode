/*
 * XREFs of ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18005B678
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18005C390 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x18005CAE0 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18005D134 (-GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18005F9E0 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CTrimPathOperation@@QEAA@XZ @ 0x18012B430 (--0CTrimPathOperation@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::GetTrimmedShapeData(CGeometry *this, CShape **a2, struct CShapePtr *a3)
{
  CPathData *v4; // rdi
  CPathData *v5; // rbx
  unsigned int v8; // r14d
  CShape *v9; // rsi
  int SimplifiedPathData; // eax
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 (__fastcall *v14)(CPathData *); // rax
  __int64 (__fastcall *v15)(CPathData *); // rax
  struct CPathData *v17; // [rsp+30h] [rbp-D0h] BYREF
  struct CPathData *v18; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v19[400]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v8 = 0;
  CTrimPathOperation::CTrimPathOperation((CTrimPathOperation *)v19);
  v9 = *a2;
  if ( v9 )
  {
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v18);
    SimplifiedPathData = CShape::GetSimplifiedPathData(v9, &v18);
    v8 = SimplifiedPathData;
    if ( SimplifiedPathData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SimplifiedPathData, 0x120u, 0LL);
      v4 = v18;
    }
    else
    {
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v17);
      v4 = v18;
      v11 = CTrimPathOperation::Trim(
              (CTrimPathOperation *)v19,
              v18,
              *((float *)this + 30),
              *((float *)this + 31),
              *((float *)this + 32),
              &v17);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x121u, 0LL);
      }
      else
      {
        v12 = MIDL_user_allocate(0x18uLL);
        v13 = v12;
        if ( v12 )
        {
          v12[1] = 0LL;
          v5 = v17;
          *v12 = &CPathSegmentsShape::`vftable';
          v12[2] = v5;
          wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>(v12 + 2);
          CShapePtr::~CShapePtr(a3);
          *(_QWORD *)a3 = v13;
          *((_BYTE *)a3 + 8) = 1;
          goto LABEL_6;
        }
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x124u, 0LL);
      }
      v5 = v17;
    }
  }
LABEL_6:
  std::vector<unsigned char>::_Tidy(v19);
  if ( v5 )
  {
    v14 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v5 + 16LL);
    if ( v14 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v5);
    else
      v14(v5);
  }
  if ( v4 )
  {
    v15 = *(__int64 (__fastcall **)(CPathData *))(*(_QWORD *)v4 + 16LL);
    if ( v15 == CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v4);
    else
      v15(v4);
  }
  return v8;
}
