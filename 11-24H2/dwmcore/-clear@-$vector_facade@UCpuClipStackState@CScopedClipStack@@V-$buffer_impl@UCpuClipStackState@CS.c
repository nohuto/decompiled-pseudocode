/*
 * XREFs of ?clear@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180079EF0
 * Callers:
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180139778 (--1CScopedClipStack@@QEAA@XZ.c)
 * Callees:
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x180079260 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18007A2E0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ??_ECRoundedRectangleShape@@UEAAPEAXI@Z @ 0x18007A500 (--_ECRoundedRectangleShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rbp
  CPolygonShape *(__fastcall *v6)(CPolygonShape *, char); // rax
  CRectanglesShape *v7; // rcx

  v1 = *a1;
  result = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( result )
  {
    result = (a1[1] - *a1) >> 3;
    v4 = 8 * result;
    v5 = 8 * result + v1;
    while ( v1 != v5 )
    {
      if ( *(_BYTE *)(v1 + 8) )
      {
        v7 = *(CRectanglesShape **)v1;
        if ( *(_QWORD *)v1 )
        {
          v6 = **(CPolygonShape *(__fastcall ***)(CPolygonShape *, char))v7;
          if ( (char *)v6 == (char *)CRectanglesShape::`scalar deleting destructor' )
          {
            result = (unsigned __int64)CRectanglesShape::`scalar deleting destructor'(v7, 1u);
          }
          else if ( (char *)v6 == (char *)CRoundedRectangleShape::`vector deleting destructor' )
          {
            result = (unsigned __int64)CRoundedRectangleShape::`vector deleting destructor'(v7, 1u);
          }
          else if ( v6 == CPolygonShape::`scalar deleting destructor' )
          {
            result = (unsigned __int64)CPolygonShape::`scalar deleting destructor'(v7, 1);
          }
          else
          {
            result = (__int64)v6(v7, 1);
          }
        }
      }
      *(_QWORD *)v1 = 0LL;
      *(_BYTE *)(v1 + 8) = 0;
      v1 += 40LL;
    }
    a1[1] -= v4;
  }
  return result;
}
