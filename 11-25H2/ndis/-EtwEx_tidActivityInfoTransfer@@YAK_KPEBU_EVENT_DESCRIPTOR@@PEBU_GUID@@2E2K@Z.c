/*
 * XREFs of ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x14006D460
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x140019B60 (NdisAllocateFragmentNetBufferList.c)
 *     ndisCopyPeriodicReceiveNbl @ 0x1400464B0 (ndisCopyPeriodicReceiveNbl.c)
 *     NdisAllocateReassembledNetBufferList @ 0x1400CDA20 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwEx_tidActivityInfoTransfer(
        __int64 a1,
        const struct _EVENT_DESCRIPTOR *a2,
        const struct _GUID *a3,
        const struct _GUID *a4,
        unsigned __int8 a5,
        const struct _GUID *a6,
        unsigned int a7)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-48h] BYREF
  _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-38h] BYREF
  unsigned int *v10; // [rsp+50h] [rbp-28h]
  __int64 v11; // [rsp+58h] [rbp-20h]

  EventDescriptor = (EVENT_DESCRIPTOR)ActivityTransfer;
  if ( !Microsoft_Windows_Networking_CorrelationTraceActivityPayload )
    return EtwWriteTransfer(Microsoft_Windows_Networking_CorrelationHandle, &EventDescriptor, a3, a4, 0, 0LL);
  *(_QWORD *)&v9.Size = 16LL;
  v9.Ptr = (unsigned __int64)&Microsoft_Windows_Networking_ProviderId;
  v10 = &a7;
  v11 = 4LL;
  return EtwWriteTransfer(Microsoft_Windows_Networking_CorrelationHandle, &EventDescriptor, a3, a4, 2u, &v9);
}
