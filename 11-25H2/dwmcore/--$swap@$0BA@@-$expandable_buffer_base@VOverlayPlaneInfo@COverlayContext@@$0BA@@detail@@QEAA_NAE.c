/*
 * XREFs of ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x18002F824
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAXPEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002E8B0 (-PushCandidates@COverlayContext@@AEAAXPEAV-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@.c)
 * Callees:
 *     ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x18002EFD0 (--0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z.c)
 */

char __fastcall detail::expandable_buffer_base<COverlayContext::OverlayPlaneInfo,16>::swap<16>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 *v5; // r9
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rdi
  __int64 i; // rcx
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // r10

  v2 = a2;
  v3 = a1 + 3;
  v4 = *a1;
  v5 = a1;
  v6 = (__int64)(v2 + 3);
  if ( (__int64 *)v4 != v3 )
  {
    v8 = *v2;
    if ( *v2 != v6 )
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
    v11 = *v2;
    v12 = v2[1];
    if ( 0x8F5C28F5C28F5C29uLL * ((v12 - v8) >> 4) <= 0x10 )
    {
      for ( i = (__int64)v3; v11 != v12; v11 = v16 + v17 )
      {
        COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(i, v11);
        i = v16 + v15;
      }
      *v2 = *v5;
      v2[1] = v5[1];
      v2[2] = v5[2];
      v5[2] = (__int64)(v5 + 803);
      *v5 = (__int64)v3;
      v5[1] = i;
      return 1;
    }
  }
  if ( *v2 == v6 || (__int64 *)v4 != v3 || 0x8F5C28F5C28F5C29uLL * ((v5[1] - v4) >> 4) > 0x10 )
    return 0;
  v14 = v2 + 3;
  if ( v4 != v5[1] )
  {
    do
    {
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(v6, v4);
      v6 = v19 + v18;
      v4 = v19 + v20;
    }
    while ( v4 != v21 );
  }
  *v5 = *v2;
  v5[1] = v2[1];
  v5[2] = v2[2];
  v2[2] = (__int64)(v2 + 803);
  *v2 = (__int64)v14;
  v2[1] = v6;
  return 1;
}
