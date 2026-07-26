/*
 * XREFs of NdisClModifyCallQoS @ 0x1400CFC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClModifyCallQoS(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  return (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 23))(
           *((_QWORD *)NdisVcHandle + 18),
           CallParameters);
}
