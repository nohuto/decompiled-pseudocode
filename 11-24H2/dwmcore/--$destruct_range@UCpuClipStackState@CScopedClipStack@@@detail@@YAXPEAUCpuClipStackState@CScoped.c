/*
 * XREFs of ??$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScopedClipStack@@0@Z @ 0x1801B44B0
 * Callers:
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180078A10 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180078DB0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x180078EC0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x180078FD0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800790C0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall detail::destruct_range<CScopedClipStack::CpuClipStackState>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  CRectanglesShape *v4; // rdi
  CRectanglesShape *v5; // rcx
  void (__fastcall *v6)(CRectanglesShape *, __int64); // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *(_BYTE *)(v3 + 8) )
      {
        v4 = *(CRectanglesShape **)v3;
        if ( *(_QWORD *)v3 )
        {
          v5 = *(CRectanglesShape **)v3;
          v6 = **(void (__fastcall ***)(CRectanglesShape *, __int64))v4;
          if ( (char *)v6 == (char *)CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::~CRectanglesShape(v5);
            CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v4);
          }
          else if ( (char *)v6 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(v5);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v4);
          }
          else if ( (char *)v6 == (char *)CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v5, 1);
          }
          else
          {
            v6(v5, 1LL);
          }
        }
      }
      *(_QWORD *)v3 = 0LL;
      *(_BYTE *)(v3 + 8) = 0;
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
}
