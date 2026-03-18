/*
 * XREFs of ACPIEjectPartitionUnitInterface @ 0x14009F3E8
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 */

__int64 __fastcall ACPIEjectPartitionUnitInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  if ( *(_WORD *)(v4 + 16) < 0x38u
    || *(_WORD *)(v4 + 18) != 1
    || !_bittest64((const signed __int64 *)(DeviceExtension + 8), 0x25u) )
  {
    return 3221225485LL;
  }
  v5 = *(_QWORD *)(v4 + 24);
  *(_OWORD *)v5 = 0LL;
  *(_OWORD *)(v5 + 16) = 0LL;
  *(_OWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 48) = 0LL;
  *(_QWORD *)(v5 + 8) = DeviceExtension;
  *(_DWORD *)v5 = 65592;
  AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 24), (__int64)AcpiInterfaceDereference);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v6 + 16), v7);
  AcpiGetDriverProxyEndpoint((_QWORD *)(v8 + 32), (__int64)&ACPIGetUniqueId);
  if ( (*(_DWORD *)(v10 + 8) & 0x4000LL) != 0 )
  {
    AcpiGetDriverProxyEndpoint((_QWORD *)(v9 + 48), (__int64)ACPIModuleIsValidSpare);
    AcpiGetDriverProxyEndpoint((_QWORD *)(v11 + 40), (__int64)ACPIModuleGetSpareProperties);
  }
  return 0LL;
}
