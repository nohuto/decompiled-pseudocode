/*
 * XREFs of ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800F0F38
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18006080C (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x1800F15C4 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  _QWORD *v5; // r9
  _QWORD *v6; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // r10
  _QWORD *v12; // rdi
  _QWORD *i; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rdx
  _QWORD *v21; // r10

  v2 = a2;
  v3 = a1 + 3;
  v4 = (_QWORD *)*a1;
  v5 = a1;
  v6 = v2 + 3;
  if ( v4 != v3 )
  {
    v8 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 != v6 )
    {
      *v5 = v8;
      *v2 = v4;
      v9 = v5[1];
      v5[1] = v2[1];
      v2[1] = v9;
      v10 = v5[2];
      v5[2] = v2[2];
      v2[2] = v10;
      return 1;
    }
    v11 = (_QWORD *)*v2;
    v12 = (_QWORD *)v2[1];
    if ( (unsigned __int64)(0x7D6343EB1A1F58D1LL * (v12 - v8)) <= 0x10 )
    {
      for ( i = v3; v11 != v12; v11 = (_QWORD *)(v16 + v17) )
      {
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(i, v11, v2, v5);
        i = (_QWORD *)(v16 + v15);
      }
      *v2 = *v5;
      v2[1] = v5[1];
      v2[2] = v5[2];
      v5[2] = v5 + 787;
      *v5 = v3;
      v5[1] = i;
      return 1;
    }
  }
  if ( (_QWORD *)*v2 == v6
    || v4 != v3
    || (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((__int64)(v5[1] - (_QWORD)v4) >> 3)) > 0x10 )
  {
    return 0;
  }
  v14 = v2 + 3;
  if ( v4 != (_QWORD *)v5[1] )
  {
    do
    {
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v6, v4, v2, v5);
      v6 = (_QWORD *)(v19 + v18);
      v4 = (_QWORD *)(v19 + v20);
    }
    while ( v4 != v21 );
  }
  *v5 = *v2;
  v5[1] = v2[1];
  v5[2] = v2[2];
  v2[2] = v2 + 787;
  *v2 = v14;
  v2[1] = v6;
  return 1;
}
