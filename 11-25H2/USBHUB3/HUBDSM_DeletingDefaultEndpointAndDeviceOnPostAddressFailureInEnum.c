/*
 * XREFs of HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x140021910
 * Callers:
 *     <none>
 * Callees:
 *     HUBUCX_DeleteDefaultEndpointFromUCX @ 0x140026A10 (HUBUCX_DeleteDefaultEndpointFromUCX.c)
 *     HUBUCX_DeleteDeviceFromUCX @ 0x140026A4C (HUBUCX_DeleteDeviceFromUCX.c)
 */

__int64 __fastcall HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBUCX_DeleteDefaultEndpointFromUCX(v1);
  HUBUCX_DeleteDeviceFromUCX(v1);
  return 4077LL;
}
