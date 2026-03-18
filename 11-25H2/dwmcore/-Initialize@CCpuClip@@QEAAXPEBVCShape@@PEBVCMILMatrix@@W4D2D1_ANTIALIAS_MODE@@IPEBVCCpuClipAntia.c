/*
 * XREFs of ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x1801BD390
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x1800D4880 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCpuClip::Initialize(
        CCpuClip *this,
        const struct CShape *a2,
        const struct CMILMatrix *a3,
        enum D2D1_ANTIALIAS_MODE a4,
        unsigned int a5,
        const struct CCpuClipAntialiasSinkContext *a6)
{
  CRectanglesShape *v10; // rdi
  CPolygonShape *(__fastcall *v11)(CPolygonShape *, char); // rax

  if ( *((_BYTE *)this + 24) )
  {
    v10 = (CRectanglesShape *)*((_QWORD *)this + 2);
    if ( v10 )
    {
      v11 = **(CPolygonShape *(__fastcall ***)(CPolygonShape *, char))v10;
      if ( v11 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v10);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v10);
      }
      else if ( v11 == CRoundedRectangleShape::`vector deleting destructor' )
      {
        CRoundedRectangleShape::~CRoundedRectangleShape(v10);
        CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v10);
      }
      else if ( v11 == CPolygonShape::`scalar deleting destructor' )
      {
        CPolygonShape::`scalar deleting destructor'(v10, 1);
      }
      else
      {
        v11(v10, 1);
      }
    }
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  *((_DWORD *)this + 26) = a5;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 25) = a4;
  *((_QWORD *)this + 1) = a6;
  *((_BYTE *)this + 108) = 0;
  if ( a3 )
  {
    *((_OWORD *)this + 2) = *(_OWORD *)a3;
    *((_OWORD *)this + 3) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 4) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 5) = *((_OWORD *)a3 + 3);
    *((_DWORD *)this + 24) = *((_DWORD *)a3 + 16);
  }
  else
  {
    *((_QWORD *)this + 4) = 1065353216LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = 0;
    *(_QWORD *)((char *)this + 52) = 1065353216LL;
    *(_QWORD *)((char *)this + 60) = 0LL;
    *((_DWORD *)this + 17) = 0;
    *((_QWORD *)this + 9) = 1065353216LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
    *((_DWORD *)this + 23) = 1065353216;
    *((_BYTE *)this + 97) &= 0xE9u;
    *((_BYTE *)this + 97) |= 0x29u;
    *((_BYTE *)this + 96) = -86;
  }
}
