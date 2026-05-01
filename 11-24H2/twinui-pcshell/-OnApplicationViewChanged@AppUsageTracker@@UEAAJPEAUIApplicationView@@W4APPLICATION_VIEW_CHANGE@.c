/*
 * XREFs of ?OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180571630
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1801FC50C (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 */

__int64 __fastcall AppUsageTracker::OnApplicationViewChanged(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    goto LABEL_7;
  v3 = a3 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 8;
      if ( v5 )
      {
        if ( v5 != 1 )
          return 0LL;
        goto LABEL_9;
      }
LABEL_7:
      AppUsageTracker::UpdateViewState(a1 - 8, a2, 0);
      return 0LL;
    }
  }
LABEL_9:
  try
  {
    AppUsageTracker::UpdateViewState(a1 - 8, a2, 1u);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF6,
                           (int)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
                           v6);
  }
  return 0LL;
}
