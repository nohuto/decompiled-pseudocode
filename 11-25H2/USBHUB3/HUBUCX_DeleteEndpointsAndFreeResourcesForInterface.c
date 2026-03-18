/*
 * XREFs of HUBUCX_DeleteEndpointsAndFreeResourcesForInterface @ 0x140026B3C
 * Callers:
 *     HUBDSM_DeletingEndpointsForNewInterfaceOnFailure @ 0x140021A40 (HUBDSM_DeletingEndpointsForNewInterfaceOnFailure.c)
 *     HUBDSM_DeletingEndpointsForOldInterface @ 0x140021AF0 (HUBDSM_DeletingEndpointsForOldInterface.c)
 *     HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration @ 0x140026A84 (HUBUCX_DeleteEndpointsAndFreeResourcesForConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_DeleteEndpointsAndFreeResourcesForInterface(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 i; // rbx

  v2 = *a1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(a2 + 72 * i + 48) == 6 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v2 + 464))(
        *(_QWORD *)(v2 + 248),
        a1[3],
        *(_QWORD *)(a2 + 72 * i + 40));
      *(_DWORD *)(a2 + 72 * i + 48) = 7;
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(
           WdfDriverGlobals,
           *(_QWORD *)a2);
}
