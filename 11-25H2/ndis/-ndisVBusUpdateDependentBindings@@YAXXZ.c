/*
 * XREFs of ?ndisVBusUpdateDependentBindings@@YAXXZ @ 0x14014CD8C
 * Callers:
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x14014CC20 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x14014CC80 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 * Callees:
 *     _lambda_9290c0fce5c4450c26ce3c7312f90185_::operator_void_(__cdecl_)(void___KRef_NDIS_BIND_PROTOCOL_DRIVER_) @ 0x14014CC08 (_lambda_9290c0fce5c4450c26ce3c7312f90185_--operator_void_(__cdecl_)(void___KRef_NDIS_BIND_PROTOC.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140162580 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void ndisVBusUpdateDependentBindings(void)
{
  __int64 (__fastcall *v0)(__int64, NDIS_BIND_DRIVER_BASE **, __int64); // rax

  v0 = lambda_9290c0fce5c4450c26ce3c7312f90185_::operator_void____cdecl___void___KRef_NDIS_BIND_PROTOCOL_DRIVER__();
  ndisBindEnumerateProtocolDrivers(v0, 0LL);
}
