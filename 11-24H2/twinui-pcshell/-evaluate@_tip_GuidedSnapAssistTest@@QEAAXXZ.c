/*
 * XREFs of ?evaluate@_tip_GuidedSnapAssistTest@@QEAAXXZ @ 0x1805A8404
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805A83D0 (-evaluate@-$merged_data@U_tip_GuidedSnapAssistTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800923EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_GuidedSnapAssistTest::evaluate(_tip_GuidedSnapAssistTest *this, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rax
  const char *v6; // rdx
  char v7; // al
  const char *v8; // rax
  __int64 v9; // rdx
  const char *v10; // rax
  __int64 v11; // rcx
  char v12; // cl
  int v13; // eax

  v4 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v4 + 80) )
  {
    if ( *(_BYTE *)(v4 + 152) )
      return;
    *(_WORD *)(v4 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v4 + 56) & 0x200) != 0 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    v7 = *((_BYTE *)this + 35);
    if ( *((_BYTE *)this + 34) )
    {
      if ( v7 )
      {
        v8 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_invoked_with_no_empty_regions", v6);
        v9 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v9 + 152) )
          return;
        *(_BYTE *)(v9 + 152) = 3;
        *(_WORD *)(v9 + 154) = 10;
LABEL_41:
        *(_QWORD *)(v9 + 160) = v8;
        return;
      }
    }
    else if ( v7 )
    {
      v10 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_skipped_no_empty_regions", v6);
      v11 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_WORD *)(v11 + 154) = 9;
      goto LABEL_15;
    }
    if ( *((_BYTE *)this + 33) )
    {
      v10 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_dismissed_while_showing_new_view", v6);
      v11 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_WORD *)(v11 + 154) = 8;
    }
    else if ( *((_BYTE *)this + 30) )
    {
      v10 = tip2::details::reason_string((tip2::details *)"reason::snapping_refused", v6);
      v11 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_WORD *)(v11 + 154) = 4;
    }
    else if ( *((_BYTE *)this + 28) )
    {
      v10 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_blocked", v6);
      v11 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_WORD *)(v11 + 154) = 1;
    }
    else if ( *((_BYTE *)this + 32) )
    {
      v10 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_occluded", v6);
      v11 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v11 + 152) )
        return;
      *(_WORD *)(v11 + 154) = 7;
    }
    else
    {
      v12 = *((_BYTE *)this + 31);
      if ( v12 || !*((_BYTE *)this + 29) )
      {
        v13 = *((_DWORD *)this + 6);
        if ( v13 == *((_DWORD *)this + 4) )
        {
          v10 = tip2::details::reason_string((tip2::details *)"reason::filled_all_regions", v6);
          v11 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v11 + 152) )
            return;
          *(_WORD *)(v11 + 154) = 5;
        }
        else
        {
          if ( *((_DWORD *)this + 4) != v13 + 1 || !v12 )
          {
            v8 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_incomplete", v6);
            v9 = *((_QWORD *)this + 1);
            if ( *(_BYTE *)(v9 + 152) )
              return;
            *(_BYTE *)(v9 + 152) = 3;
            *(_WORD *)(v9 + 154) = 3;
            goto LABEL_41;
          }
          v10 = tip2::details::reason_string((tip2::details *)"reason::last_region_pending", v6);
          v11 = *((_QWORD *)this + 1);
          if ( *(_BYTE *)(v11 + 152) )
            return;
          *(_WORD *)(v11 + 154) = 6;
        }
      }
      else
      {
        v10 = tip2::details::reason_string((tip2::details *)"reason::snap_assist_dismissed", v6);
        v11 = *((_QWORD *)this + 1);
        if ( *(_BYTE *)(v11 + 152) )
          return;
        *(_WORD *)(v11 + 154) = 2;
      }
    }
LABEL_15:
    *(_BYTE *)(v11 + 152) = 1;
    *(_QWORD *)(v11 + 160) = v10;
    return;
  }
  if ( !*(_BYTE *)(v4 + 152) )
  {
    *(_WORD *)(v4 + 154) = 16385;
LABEL_4:
    *(_BYTE *)(v4 + 152) = 3;
    *(_QWORD *)(v4 + 160) = 0LL;
  }
}
