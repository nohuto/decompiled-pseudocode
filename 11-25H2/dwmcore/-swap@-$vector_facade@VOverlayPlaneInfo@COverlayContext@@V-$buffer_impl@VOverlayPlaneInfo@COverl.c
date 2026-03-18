/*
 * XREFs of ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x18002EBA0
 * Callers:
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x18002DA20 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002E8B0 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x18002ED10 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18002EFD0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

void __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap(
        char **a1,
        char **a2)
{
  char **v2; // r8
  char *v3; // rdi
  char *v4; // rdx
  char **v5; // r9
  _QWORD *v6; // rbx
  char *v7; // rax
  char *v8; // r10
  char *v9; // rsi
  char *i; // rcx
  char *v11; // rcx
  char *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // rdx
  char *v20; // r10

  if ( a2 != a1 )
  {
    v2 = a2;
    v3 = (char *)(a1 + 3);
    v4 = *a1;
    v5 = a1;
    v6 = v2 + 3;
    if ( *a1 == (char *)(a1 + 3) )
      goto LABEL_12;
    v7 = (char *)*v2;
    if ( (_QWORD *)*v2 != v6 )
    {
      *a1 = v7;
      *v2 = v4;
      v11 = a1[1];
      v5[1] = (char *)v2[1];
      v2[1] = v11;
      v12 = (__int64)v5[2];
      v5[2] = (char *)v2[2];
      v2[2] = v12;
      return;
    }
    v8 = (char *)*v2;
    v9 = (char *)v2[1];
    if ( 0x8F5C28F5C28F5C29uLL * ((v9 - v7) >> 4) > 0x10 )
    {
LABEL_12:
      if ( (_QWORD *)*v2 == v6 || v4 != v3 || 0x8F5C28F5C28F5C29uLL * ((a1[1] - v4) >> 4) > 0x10 )
      {
        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::swap_generic<detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>>(
          a1,
          (char **)v2);
      }
      else
      {
        v13 = v2 + 3;
        if ( v4 != v5[1] )
        {
          do
          {
            COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v13, v4);
            v13 = (_QWORD *)(v18 + v17);
            v4 = (char *)(v18 + v19);
          }
          while ( v4 != v20 );
        }
        *v5 = (char *)*v2;
        v5[1] = (char *)v2[1];
        v5[2] = (char *)v2[2];
        v2[2] = v2 + 803;
        *v2 = v6;
        v2[1] = v13;
      }
    }
    else
    {
      for ( i = a1 + 3; v8 != v9; v8 = (char *)(v15 + v16) )
      {
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo((char *)i, v8);
        i = (_QWORD *)(v15 + v14);
      }
      *v2 = *v5;
      v2[1] = v5[1];
      v2[2] = v5[2];
      v5[2] = (char *)(v5 + 803);
      *v5 = v3;
      v5[1] = (char *)i;
    }
  }
}
