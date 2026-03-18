/*
 * XREFs of AcpiEjectBusNumberTranslator @ 0x1400A7D88
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiEjectBusNumberTranslator(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v7; // [rsp+68h] [rbp+10h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v4 + 24);
  if ( *(_WORD *)(v4 + 18) )
    return 3221225659LL;
  if ( *(_WORD *)(v4 + 16) >= 0x30u )
  {
    v7 = 0LL;
    if ( (int)ACPIGet(DeviceExtension, 1195725663, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v7, 0LL) >= 0 && v7 )
    {
      *(_DWORD *)v5 = 48;
      *(_QWORD *)(v5 + 8) = (unsigned __int16)v7;
      AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 16), (__int64)AcpiInterfaceDereference);
      AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 24), (__int64)AcpiInterfaceDereference);
      AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 32), (__int64)AcpiTranslateBusNumberResource);
      AcpiGetDriverProxyEndpoint((_QWORD *)(v5 + 40), (__int64)AcpiTranslateBusNumberRequirements);
      (*(void (__fastcall **)(_QWORD))(v5 + 16))(*(_QWORD *)(v5 + 8));
      return 0LL;
    }
    else
    {
      return *(unsigned int *)(a2 + 48);
    }
  }
  else
  {
    *(_WORD *)v5 = 48;
    return 3221225485LL;
  }
}
