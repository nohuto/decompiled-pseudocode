/*
 * XREFs of ?GetSimplifiedPathData@CShape@@QEBAJPEAPEAVCPathData@@@Z @ 0x18017EB04
 * Callers:
 *     ?GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z @ 0x18017D04C (-GetTrimmedShapeData@CGeometry@@AEBAJAEBVCShapePtr@@PEAV2@@Z.c)
 * Callees:
 *     ?Release@?$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x180017D30 (-Release@-$CMILCOMBaseT@UID2D1GeometrySink@@U1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathData(CShape *this, struct CPathData **a2)
{
  unsigned int v2; // esi
  struct CPathData *v5; // rbx
  CPathData *v6; // rcx
  void (*v7)(void); // rax
  CPathData *v8; // rcx
  void (*v9)(void); // rax
  __int64 (__fastcall *v11)(CShape *, struct CPathData **); // rbx
  int v12; // eax
  struct CPathData *v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0LL;
  if ( !*((_QWORD *)this + 1) )
  {
    v11 = *(__int64 (__fastcall **)(CShape *, struct CPathData **))(*(_QWORD *)this + 104LL);
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v13);
    v12 = v11(this, &v13);
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x446u, 0LL);
      v8 = v13;
      goto LABEL_9;
    }
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)this + 1, (signed __int64)v13, 0LL) )
      v13 = 0LL;
  }
  v5 = (struct CPathData *)*((_QWORD *)this + 1);
  if ( v13 != v5 )
  {
    if ( v5 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*((_QWORD *)this + 1));
    v6 = v13;
    v13 = v5;
    if ( v6 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
      if ( (char *)v7 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
        CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v6);
      else
        v7();
    }
  }
  v8 = 0LL;
  *a2 = v13;
LABEL_9:
  if ( v8 )
  {
    v13 = 0LL;
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release )
      CMILCOMBaseT<ID2D1GeometrySink,ID2D1GeometrySink,CMilObjectDeleter>::Release(v8);
    else
      v9();
  }
  return v2;
}
