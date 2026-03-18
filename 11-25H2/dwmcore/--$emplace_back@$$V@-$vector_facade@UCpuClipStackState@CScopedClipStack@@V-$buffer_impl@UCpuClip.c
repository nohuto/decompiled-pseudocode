/*
 * XREFs of ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800AA830
 * Callers:
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x180081C70 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800A6FE0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z @ 0x1800AACE0 (-Free@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAXPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z @ 0x1800AADF0 (-Free@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAXPEAX@Z.c)
 *     ??1CRoundedRectangleShape@@UEAA@XZ @ 0x1800AAEE0 (--1CRoundedRectangleShape@@UEAA@XZ.c)
 *     ??_GCPolygonShape@@UEAAPEAXI@Z @ 0x1800AB080 (--_GCPolygonShape@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScopedClipStack@@0@Z @ 0x1801C4130 (--$destruct_range@UCpuClipStackState@CScopedClipStack@@@detail@@YAXPEAUCpuClipStackState@CScoped.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1801C4204 (--$uninitialized_move@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_.c)
 *     ??Y?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z @ 0x1801D9450 (--Y-$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@QEAAAEAV01@_J@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCpuClipStackState@CScopedClipStack@@@stdext@@V?$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@0@0V12@@Z @ 0x1802554C4 (--$move_backward@V-$move_iterator@PEAUCpuClipStackState@CScopedClipStack@@@std@@V-$checked_array.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::emplace_back<>(
        _QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  CRectanglesShape *v14; // rdi
  void *(__fastcall *v15)(CRoundedRectangleShape *__hidden, unsigned int); // rax
  CRectanglesShape *v16; // rcx
  __int64 result; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  void *v24; // rbx
  void *v25; // rdx
  bool v26; // zf
  void *v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-60h] BYREF
  __int64 v29; // [rsp+30h] [rbp-50h]
  __int128 v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+50h] [rbp-30h]
  _BYTE v32[32]; // [rsp+60h] [rbp-20h] BYREF

  v1 = a1[1];
  v2 = *a1;
  v3 = a1;
  v4 = a1[2];
  v5 = 0xCCCCCCCCCCCCCCCDuLL * ((v1 - v2) >> 3);
  if ( !(0xCCCCCCCCCCCCCCCDuLL * ((v4 - v1) >> 3)) )
  {
    if ( v5 + 1 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1800AABC4LL);
    }
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(0xCCCCCCCCCCCCCCCDuLL * ((v4 - v2) >> 3)),
            0xCCCCCCCCCCCCCCCDuLL * ((v4 - v2) >> 3),
            v5 + 1);
    v21 = operator new[](saturated_mul(v20, 0x28uLL));
    v22 = v3[1];
    v23 = *v3;
    *(_QWORD *)&v28 = v21;
    v24 = v21;
    *((_QWORD *)&v28 + 1) = v5;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>)(
      &v28,
      v23,
      v22,
      &v30);
    detail::destruct_range<CScopedClipStack::CpuClipStackState>(*v3, v3[1]);
    v25 = (void *)*v3;
    v26 = *v3 == (_QWORD)(v3 + 3);
    *v3 = v24;
    v27 = 0LL;
    if ( !v26 )
      v27 = v25;
    operator delete(v27);
    v2 = *v3;
    v1 = *v3 + 40 * v5;
    v3[1] = v1;
    v3[2] = v2 + 40 * v20;
  }
  v29 = 0LL;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((v1 - v2) >> 3);
  v31 = 0LL;
  *((_QWORD *)&v28 + 1) = 1LL;
  v7 = v6 - v5;
  v8 = v2 + 8 * ((v1 - v2) >> 3);
  *(_QWORD *)&v28 = v8;
  if ( !v8 )
    goto LABEL_24;
  v31 = 1LL;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((v1 - v2) >> 3) - v5;
  if ( v7 > 1 )
    v9 = 1LL;
  v29 = 1LL;
  v10 = 40 * v9;
  v11 = v1 - v10;
  if ( v1 != v1 - v10 )
  {
    v18 = v29;
    v19 = v28 + 56;
    while ( 1 )
    {
      v1 -= 40LL;
      if ( !(_QWORD)v28 )
        break;
      if ( !v18 )
        break;
      --v18;
      v19 -= 40LL;
      if ( v18 >= *((_QWORD *)&v28 + 1) )
        break;
      *(_QWORD *)(v19 - 16) = *(_QWORD *)v1;
      *(_BYTE *)(v19 - 8) = *(_BYTE *)(v1 + 8);
      *(_QWORD *)v1 = 0LL;
      *(_BYTE *)(v1 + 8) = 0;
      *(_QWORD *)v19 = *(_QWORD *)(v1 + 16);
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(v1 + 24);
      *(_DWORD *)(v19 + 16) = *(_DWORD *)(v1 + 32);
      *(_BYTE *)(v19 + 20) = *(_BYTE *)(v1 + 36);
      if ( v1 == v11 )
        goto LABEL_6;
    }
LABEL_24:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_6:
  if ( v7 > 1 )
  {
    *(_QWORD *)&v28 = v2;
    *((_QWORD *)&v28 + 1) = v6;
    v29 = 0LL;
    stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>::operator+=(&v28, v6);
    v30 = v28;
    v31 = v29;
    std::move_backward<std::move_iterator<CScopedClipStack::CpuClipStackState *>,stdext::checked_array_iterator<CScopedClipStack::CpuClipStackState *>>(
      v32,
      v2 + 40 * v5,
      v2 + 40 * (v6 - 1),
      &v30);
  }
  v12 = v2 + 40 * (v5 + 1);
  v13 = v2 + 40 * v5;
  if ( v8 < v12 )
    v12 = v8;
  if ( v13 != v12 )
  {
    do
    {
      if ( *(_BYTE *)(v13 + 8) )
      {
        v14 = *(CRectanglesShape **)v13;
        if ( *(_QWORD *)v13 )
        {
          v15 = **(void *(__fastcall ***)(CRoundedRectangleShape *__hidden, unsigned int))v14;
          v16 = *(CRectanglesShape **)v13;
          if ( v15 == CRectanglesShape::`scalar deleting destructor' )
          {
            CRectanglesShape::~CRectanglesShape(v16);
            CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Free(v14);
          }
          else if ( v15 == CRoundedRectangleShape::`vector deleting destructor' )
          {
            CRoundedRectangleShape::~CRoundedRectangleShape(v16);
            CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Free(v14);
          }
          else if ( v15 == CPolygonShape::`scalar deleting destructor' )
          {
            CPolygonShape::`scalar deleting destructor'(v16, 1u);
          }
          else
          {
            ((void (__fastcall *)(CRectanglesShape *, __int64, void *(__fastcall *)(CPolygonShape *__hidden, unsigned int)))v15)(
              v16,
              1LL,
              CPolygonShape::`scalar deleting destructor');
          }
        }
      }
      *(_QWORD *)v13 = 0LL;
      *(_BYTE *)(v13 + 8) = 0;
      v13 += 40LL;
    }
    while ( v13 != v12 );
    v3 = a1;
  }
  v3[1] += 40LL;
  result = 5 * v5;
  *(_OWORD *)(v2 + 8 * result) = 0LL;
  *(_OWORD *)(v2 + 8 * result + 16) = 0LL;
  *(_QWORD *)(v2 + 8 * result + 32) = 0LL;
  return result;
}
