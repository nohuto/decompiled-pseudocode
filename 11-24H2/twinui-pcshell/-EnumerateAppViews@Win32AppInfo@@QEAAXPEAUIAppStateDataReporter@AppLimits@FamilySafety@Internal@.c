/*
 * XREFs of ?EnumerateAppViews@Win32AppInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1805748CC
 * Callers:
 *     ?EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180574860 (-EnumerateAppStateData@Win32AppStateManager@@UEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafe.c)
 * Callees:
 *     ?EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180574968 (-EnumerateAppViews@Win32ProcessInfo@@QEAAXPEAUIAppStateDataReporter@AppLimits@FamilySafety@Inter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Win32AppInfo::EnumerateAppViews(
        __int64 ***this,
        struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *a2)
{
  __int64 v3; // rax
  Win32AppInfo *v5; // rdx
  __int64 *j; // rbx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx

  v3 = *(_QWORD *)a2;
  v5 = (Win32AppInfo *)this;
  if ( (unsigned __int64)this[3] > 7 )
    v5 = (Win32AppInfo *)*this;
  (*(void (__fastcall **)(struct Windows::Internal::FamilySafety::AppLimits::IAppStateDataReporter *, Win32AppInfo *))(v3 + 24))(
    a2,
    v5);
  j = *this[4];
  while ( !*((_BYTE *)j + 25) )
  {
    Win32ProcessInfo::EnumerateAppViews((Win32ProcessInfo *)j[5], a2);
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
}
