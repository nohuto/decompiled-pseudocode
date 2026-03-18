/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x140026C20
 * Callers:
 *     HUBDSM_CleaningUpAnyExistingConfigurationOnStart @ 0x140020FE0 (HUBDSM_CleaningUpAnyExistingConfigurationOnStart.c)
 *     HUBDSM_CompletingClientUnconfigureRequest @ 0x1400213C0 (HUBDSM_CompletingClientUnconfigureRequest.c)
 *     HUBDSM_CompletingClientUnconfigureRequestWithFailure @ 0x140021400 (HUBDSM_CompletingClientUnconfigureRequestWithFailure.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x140021980 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1400219E0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x140021A30 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingEndpointsForOldConfiguration @ 0x140021AF0 (HUBDSM_DeletingEndpointsForOldConfiguration.c)
 * Callees:
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x140026CD8 (HUBUCX_DeleteEndpointsAndFreeResourcesForInterface.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rax
  _QWORD *v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdi

  v2 = a2 + 2;
  v4 = (_QWORD *)a2[2];
  v6 = v4 - 1;
  while ( 1 )
  {
    v9 = *v4 - 8LL;
    if ( v2 == v4 )
      break;
    v7 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    if ( *(_QWORD **)(a1 + 80) == v6 )
      *(_QWORD *)(a1 + 80) = 0LL;
    if ( *(_QWORD **)(a1 + 72) == v6 )
      *(_QWORD *)(a1 + 72) = 0LL;
    HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(a1);
    v6 = (_QWORD *)v9;
    v4 = (_QWORD *)(v9 + 8);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *))(WdfFunctions_01015 + 1664))(
           WdfDriverGlobals,
           *a2,
           v6);
}
