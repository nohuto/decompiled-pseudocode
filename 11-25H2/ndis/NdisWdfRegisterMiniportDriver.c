/*
 * XREFs of NdisWdfRegisterMiniportDriver @ 0x14009EA00
 * Callers:
 *     <none>
 * Callees:
 *     NdisConvertNdisStatusToNtStatus @ 0x14006FFB0 (NdisConvertNdisStatusToNtStatus.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140087B70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 */

__int64 __fastcall NdisWdfRegisterMiniportDriver(
        struct _DRIVER_OBJECT *a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a5,
        void **a6)
{
  int v7; // eax
  __int64 result; // rax

  v7 = ndisInternalRegisterMiniportDriver(a1, a2, a4, a5, a6);
  result = NdisConvertNdisStatusToNtStatus(v7);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)*a6 + 45) = a3;
    return (unsigned int)result;
  }
  return result;
}
