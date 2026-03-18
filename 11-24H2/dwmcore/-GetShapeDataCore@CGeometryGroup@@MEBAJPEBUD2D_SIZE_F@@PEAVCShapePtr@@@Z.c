/*
 * XREFs of ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18029BF80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800C4750 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1801449F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1801BBAF0 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometryGroup::GetShapeDataCore(
        CGeometryGroup *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  struct CShape *v3; // rbx
  unsigned int v4; // edi
  int v6; // eax
  struct CShape *v9; // rax
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
      v11 = CShape::CopyShape(*a3, 0LL, &v17);
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
          ShapeData = CShape::Combine((__int64)v3, v14, (__int64)*a3, 0LL, 1, &v17);
          v4 = ShapeData;
          if ( ShapeData < 0 )
          {
            v16 = 65;
            goto LABEL_19;
          }
          if ( v3 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
        }
        goto LABEL_4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x30u, 0LL);
      v3 = v17;
    }
  }
  else
  {
    v9 = (struct CShape *)CRectanglesShape::operator new();
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
      CShapePtr::~CShapePtr(a3);
      *a3 = v3;
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
    (**(void (__fastcall ***)(struct CShape *, __int64))v3)(v3, 1LL);
  return v4;
}
