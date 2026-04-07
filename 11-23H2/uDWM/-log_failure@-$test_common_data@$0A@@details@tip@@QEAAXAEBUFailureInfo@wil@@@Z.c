/*
 * XREFs of ?log_failure@?$test_common_data@$0A@@details@tip@@QEAAXAEBUFailureInfo@wil@@@Z @ 0x1800F2EB8
 * Callers:
 *     ?NotifyFailure@?$test_watcher@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800F5460 (-NotifyFailure@-$test_watcher@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transition.c)
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180030370 (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18009D444 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ??$_Emplace_reallocate@AEBUFailureInfo@wil@@@?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@QEAAPEAVStoredFailureInfo@wil@@QEAV23@AEBUFailureInfo@3@@Z @ 0x1800EF174 (--$_Emplace_reallocate@AEBUFailureInfo@wil@@@-$vector@VStoredFailureInfo@wil@@V-$allocator@VStor.c)
 */

void __fastcall tip::details::test_common_data<0>::log_failure(__int64 a1, const struct wil::FailureInfo *a2)
{
  __int64 *v3; // rbx
  wil::StoredFailureInfo *v4; // rax

  v3 = (__int64 *)a1;
  if ( tip::details::test_common_data<0>::begin_update(a1) )
  {
    v4 = (wil::StoredFailureInfo *)v3[9];
    if ( v4 == (wil::StoredFailureInfo *)v3[10] )
    {
      try
      {
        std::vector<wil::StoredFailureInfo>::_Emplace_reallocate<wil::FailureInfo const &>(v3 + 8, v3[9], a2);
      }
      catch ( ... )
      {
        *(_DWORD *)(a1 + 56) |= 0x100000u;
        v3 = (__int64 *)a1;
      }
    }
    else
    {
      *((_QWORD *)v4 + 19) = 0LL;
      *((_QWORD *)v4 + 20) = 0LL;
      wil::StoredFailureInfo::SetFailureInfo(v4, a2);
      v3[9] += 168LL;
    }
  }
  tip::details::test_common_data<0>::end_update((__int64)v3);
}
