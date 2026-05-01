/*
 * XREFs of ??1Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x1801C58A4
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$3 @ 0x1806E7617 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$3.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadOEMApps_::_1_::dtor$4 @ 0x1806E7629 (_PenWorkspace--Discover--RecentAppsCache--LoadOEMApps_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::~Iterator(
        __int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
