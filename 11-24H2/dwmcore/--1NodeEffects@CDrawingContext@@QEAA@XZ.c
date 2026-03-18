/*
 * XREFs of ??1NodeEffects@CDrawingContext@@QEAA@XZ @ 0x180079B90
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDrawingContext::NodeEffects::~NodeEffects(CDrawingContext::NodeEffects *this)
{
  CRectanglesShape *v2; // rdi
  CPolygonShape *(__fastcall *v3)(CPolygonShape *, char); // rax

  if ( *((_BYTE *)this + 16) )
  {
    v2 = (CRectanglesShape *)*((_QWORD *)this + 1);
    if ( v2 )
    {
      v3 = **(CPolygonShape *(__fastcall ***)(CPolygonShape *, char))v2;
      if ( (char *)v3 == (char *)CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::~CRectanglesShape(v2);
        CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v2);
      }
      else if ( (char *)v3 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
      {
        CRoundedRectangleShape::~CRoundedRectangleShape(v2);
        CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v2);
      }
      else if ( v3 == CPolygonShape::`scalar deleting destructor' )
      {
        CPolygonShape::`scalar deleting destructor'(v2, 1);
      }
      else
      {
        v3(v2, 1);
      }
    }
  }
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
}
