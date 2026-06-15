/*
 * XREFs of ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180156414
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180054A70 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18014804C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180156250 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 * Callees:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180081980 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x180147D9C (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::UninitializeAppServiceMode(char *pv)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(pv + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  if ( pv[218] )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)pv + 28) + 56LL))(
           *((_QWORD *)pv + 28),
           (unsigned __int64)(pv + 8) & -(__int64)(pv != 0LL));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2702LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v3);
    pv[218] = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  AtmosCheck::CancelLicenseRefreshTimer((AtmosCheck *)pv);
  EnterCriticalSection(v2);
  if ( !pv[696] )
    AtmosCheck::UpdateLicenseRefreshTimer((AtmosCheck *)pv);
  if ( v2 )
    LeaveCriticalSection(v2);
}
