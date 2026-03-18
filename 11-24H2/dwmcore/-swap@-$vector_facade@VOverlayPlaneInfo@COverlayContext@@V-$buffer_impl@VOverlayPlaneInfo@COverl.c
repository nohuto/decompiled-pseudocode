/*
 * XREFs of ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800F1194
 * Callers:
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180060060 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18006080C (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1800F1304 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x1800F15C4 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

void __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rdi
  _QWORD *v4; // rdx
  _QWORD *v5; // r9
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // r10
  _QWORD *v9; // rsi
  _QWORD *i; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // rdx
  _QWORD *v20; // r10

  if ( a2 != a1 )
  {
    v2 = a2;
    v3 = a1 + 3;
    v4 = (_QWORD *)*a1;
    v5 = a1;
    v6 = v2 + 3;
    if ( (_QWORD *)*a1 == a1 + 3 )
      goto LABEL_12;
    v7 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 != v6 )
    {
      *a1 = v7;
      *v2 = v4;
      v11 = a1[1];
      v5[1] = v2[1];
      v2[1] = v11;
      v12 = v5[2];
      v5[2] = v2[2];
      v2[2] = v12;
      return;
    }
    v8 = (_QWORD *)*v2;
    v9 = (_QWORD *)v2[1];
    if ( (unsigned __int64)(0x7D6343EB1A1F58D1LL * (v9 - v7)) > 0x10 )
    {
LABEL_12:
      if ( (_QWORD *)*v2 == v6
        || v4 != v3
        || (unsigned __int64)(0x7D6343EB1A1F58D1LL * ((__int64)(a1[1] - (_QWORD)v4) >> 3)) > 0x10 )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>(
          a1,
          v2);
      }
      else
      {
        v13 = v2 + 3;
        if ( v4 != (_QWORD *)v5[1] )
        {
          do
          {
            COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v13, v4, v2, v5);
            v13 = (_QWORD *)(v18 + v17);
            v4 = (_QWORD *)(v18 + v19);
          }
          while ( v4 != v20 );
        }
        *v5 = *v2;
        v5[1] = v2[1];
        v5[2] = v2[2];
        v2[2] = v2 + 787;
        *v2 = v6;
        v2[1] = v13;
      }
    }
    else
    {
      for ( i = a1 + 3; v8 != v9; v8 = (_QWORD *)(v15 + v16) )
      {
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(i, v8, v2, v5);
        i = (_QWORD *)(v15 + v14);
      }
      *v2 = *v5;
      v2[1] = v5[1];
      v2[2] = v5[2];
      v5[2] = v5 + 787;
      *v5 = v3;
      v5[1] = i;
    }
  }
}
