/*
 * XREFs of ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800A8EA0
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??Y?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z @ 0x1801D9450 (--Y-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z.c)
 *     ??$move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1802552B8 (--$move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array_iterator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rbx
  CRectanglesShape *v9; // rdi
  CRectanglesShape *v10; // rcx
  void *(__fastcall *v11)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  __int128 v12; // [rsp+20h] [rbp-88h] BYREF
  __int64 v13; // [rsp+30h] [rbp-78h]
  __int128 v14; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+50h] [rbp-58h]
  _BYTE v16[32]; // [rsp+60h] [rbp-48h] BYREF

  v1 = *a1;
  v3 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1 - 40) >> 3);
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v5 = v3 + 1;
  if ( v3 + 1 > v4 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1800A9045LL);
  }
  result = (a1[1] - *a1) >> 3;
  v7 = v1 + 8 * result;
  if ( v5 != v4 )
  {
    *((_QWORD *)&v12 + 1) = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
    *(_QWORD *)&v12 = v1;
    v13 = 0LL;
    stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator+=(&v12, v3);
    v14 = v12;
    v15 = v13;
    result = std::move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
               v16,
               v1 + 40 * v5,
               v7,
               &v14);
  }
  v8 = v7 - 40;
  do
  {
    if ( *(_BYTE *)(v8 + 8) )
    {
      v9 = *(CRectanglesShape **)v8;
      if ( *(_QWORD *)v8 )
      {
        v10 = *(CRectanglesShape **)v8;
        v11 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v9;
        if ( v11 == CRectanglesShape::`scalar deleting destructor' )
        {
          CRectanglesShape::~CRectanglesShape(v10);
          result = CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v9);
        }
        else if ( v11 == CRoundedRectangleShape::`vector deleting destructor' )
        {
          CRoundedRectangleShape::~CRoundedRectangleShape(v10);
          result = CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v9);
        }
        else if ( v11 == CPolygonShape::`scalar deleting destructor' )
        {
          result = (__int64)CPolygonShape::`scalar deleting destructor'(v10, 1u);
        }
        else
        {
          result = (__int64)v11(v10, 1u);
        }
      }
    }
    *(_QWORD *)v8 = 0LL;
    *(_BYTE *)(v8 + 8) = 0;
    v8 += 40LL;
  }
  while ( v8 != v7 );
  a1[1] -= 40LL;
  return result;
}
