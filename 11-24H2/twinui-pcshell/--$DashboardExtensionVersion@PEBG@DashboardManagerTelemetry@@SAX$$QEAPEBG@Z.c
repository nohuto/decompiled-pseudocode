/*
 * XREFs of ??$DashboardExtensionVersion@PEBG@DashboardManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x180191AB0
 * Callers:
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x180282774 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion.c)
 *     _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion_0 @ 0x1805D8E08 (_anonymous_namespace_--TryGetAvailableDashboardExtensionVersion_0.c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x180191BD0 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall DashboardManagerTelemetry::DashboardExtensionVersion<unsigned short const *>(const WCHAR **a1)
{
  __int64 v2; // rax
  __int64 v3; // r10
  const WCHAR *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+64h] [rbp-1Ch]
  const WCHAR *v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]

  v2 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
         a1,
         _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( v4[v5] );
      v6 = 2 * v5 + 2;
    }
    else
    {
      v4 = &pvData;
      v6 = 2;
    }
    v14 = v6;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v3 + 8);
    v13 = v4;
    v15 = 0;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v10 = &unk_1808170FF;
    UserData.Reserved = 2;
    v11 = 45;
    v12 = 1;
    LODWORD(v2) = EventWriteTransfer(*(_QWORD *)(v3 + 32), &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return v2;
}
