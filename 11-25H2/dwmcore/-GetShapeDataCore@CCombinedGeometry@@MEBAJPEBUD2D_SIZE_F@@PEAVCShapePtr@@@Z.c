/*
 * XREFs of ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18021A830
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCombinedGeometry::GetShapeDataCore(
        CCombinedGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  CGeometry *v8; // rcx
  CGeometry *v9; // rcx
  int v10; // eax
  CComplexShape *v11; // rbx
  int ShapeData; // eax
  int v14; // eax
  CRectanglesShape *v15; // [rsp+30h] [rbp-20h] BYREF
  char v16; // [rsp+38h] [rbp-18h]
  CRectanglesShape *v17; // [rsp+40h] [rbp-10h] BYREF
  char v18; // [rsp+48h] [rbp-8h]
  CComplexShape *v19; // [rsp+70h] [rbp+20h] BYREF

  v3 = *((_DWORD *)this + 10);
  v4 = 0;
  v17 = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  v18 = 0;
  v16 = 0;
  *((_DWORD *)this + 10) = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  if ( (((unsigned __int8)v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6) & 6) == 2 )
  {
    v8 = (CGeometry *)*((_QWORD *)this + 21);
    if ( v8 && (v14 = CGeometry::GetShapeData(v8, a2, (struct CShapePtr *)&v17), v4 = v14, v14 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x3Fu, 0LL);
    }
    else
    {
      v9 = (CGeometry *)*((_QWORD *)this + 22);
      if ( v9 && (ShapeData = CGeometry::GetShapeData(v9, a2, (struct CShapePtr *)&v15), v4 = ShapeData, ShapeData < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, 0x44u, 0LL);
      }
      else
      {
        v10 = CShape::Combine(v17, (__int64)a2, v15, 0LL, *((_DWORD *)this + 40), &v19);
        v4 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x50u, 0LL);
        }
        else
        {
          v11 = v19;
          CShapePtr::~CShapePtr(a3);
          v19 = 0LL;
          *a3 = v11;
          *((_BYTE *)a3 + 8) = 1;
        }
      }
    }
  }
  else
  {
    CShapePtr::~CShapePtr(a3);
    *a3 = 0LL;
    *((_BYTE *)a3 + 8) = 1;
  }
  if ( v19 )
    (**(void (__fastcall ***)(CComplexShape *, __int64))v19)(v19, 1LL);
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (2 * (*((_DWORD *)this + 10) >> 1) - 2)) & 6;
  CShapePtr::~CShapePtr(&v15);
  CShapePtr::~CShapePtr(&v17);
  return v4;
}
