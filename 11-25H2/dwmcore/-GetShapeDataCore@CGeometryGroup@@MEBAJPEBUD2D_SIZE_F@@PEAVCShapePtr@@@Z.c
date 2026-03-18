/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1802A5D40
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058F30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800AB910 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1801CD460 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  CRectanglesShape *v3; // rbx
  unsigned int v4; // edi
  int v6; // eax
  CRectanglesShape *v9; // rax
  int ShapeData; // eax
  int v11; // eax
  unsigned int i; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v16; // [rsp+20h] [rbp-28h]
  struct CShape *v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0;
  v17 = 0LL;
  v6 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 10) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  if ( (((unsigned __int8)v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6) & 6) == 2 )
  {
    ShapeData = CGeometry::GetShapeData(**((CGeometry ***)this + 21), a2, a3);
    v4 = ShapeData;
    if ( ShapeData < 0 )
    {
      v16 = 47;
LABEL_19:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, ShapeData, v16, 0LL);
    }
    else
    {
      v11 = CShape::CopyShape(*(CShape **)a3, 0LL, &v17);
      v4 = v11;
      if ( v11 >= 0 )
      {
        for ( i = 1; ; ++i )
        {
          v3 = v17;
          if ( i >= *((_DWORD *)this + 40) )
            break;
          v13 = *((_QWORD *)this + 21);
          v17 = 0LL;
          ShapeData = CGeometry::GetShapeData(*(CGeometry **)(v13 + 8LL * i), a2, a3);
          v4 = ShapeData;
          if ( ShapeData < 0 )
          {
            v16 = 57;
            goto LABEL_19;
          }
          ShapeData = CShape::Combine(v3, v14, *(CRoundedRectangleShape **)a3, 0LL, 1, &v17);
          v4 = ShapeData;
          if ( ShapeData < 0 )
          {
            v16 = 65;
            goto LABEL_19;
          }
          if ( v3 )
            (**(void (__fastcall ***)(CRectanglesShape *, __int64))v3)(v3, 1LL);
        }
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x30u, 0LL);
      v3 = v17;
    }
  }
  else
  {
    v9 = (CRectanglesShape *)CRectanglesShape::operator new();
    if ( v9 )
    {
      *((_QWORD *)v9 + 1) = 0LL;
      *(_QWORD *)v9 = &CRectanglesShape::`vftable';
      *((_QWORD *)v9 + 2) = (char *)v9 + 40;
      *((_QWORD *)v9 + 3) = (char *)v9 + 40;
      *((_QWORD *)v9 + 4) = (char *)v9 + 56;
      *((_QWORD *)v9 + 7) = 0LL;
      v3 = v9;
LABEL_4:
      CShapePtr::~CShapePtr((CRectanglesShape **)a3);
      *(_QWORD *)a3 = v3;
      v3 = 0LL;
      *((_BYTE *)a3 + 8) = 1;
      goto LABEL_20;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x25u, 0LL);
  }
LABEL_20:
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (2 * (*((_DWORD *)this + 10) >> 1) - 2)) & 6;
  if ( v3 )
    (**(void (__fastcall ***)(CRectanglesShape *, __int64))v3)(v3, 1LL);
  return v4;
}
