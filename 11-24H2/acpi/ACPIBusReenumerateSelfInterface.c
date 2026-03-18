/*
 * XREFs of ACPIBusReenumerateSelfInterface @ 0x14009BE60
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 */

__int64 __fastcall ACPIBusReenumerateSelfInterface(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int128 v3; // xmm1
  __int64 v4; // r10
  void (__fastcall *v5)(__int64); // xmm0_8
  __int64 v6; // r9
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  void (__fastcall *v9[3])(__int64); // [rsp+40h] [rbp-18h] BYREF

  if ( *(_WORD *)(a2 + 16) >= 0x28u )
  {
    if ( *(_WORD *)(a2 + 18) )
    {
      if ( ACPIInitReferenceDeviceExtension(a1) )
      {
        v9[0] = ACPIBusReenumerateSelf;
        v8 = *(_OWORD *)off_1400743E8;
        AcpiGetDriverProxyEndpoint(&v8, (__int64)ACPIInterfaceReferenceDeviceExtension);
        AcpiGetDriverProxyEndpoint((_QWORD *)&v8 + 1, (__int64)ACPIInterfaceDereferenceDeviceExtension);
        AcpiGetDriverProxyEndpoint(v9, (__int64)ACPIBusReenumerateSelf);
        v3 = v8;
        *(_OWORD *)v4 = ReenumerateSelfInterface;
        v5 = v9[0];
        *(_OWORD *)(v4 + 16) = v3;
        *(_QWORD *)(v4 + 32) = v5;
        *(_QWORD *)(v4 + 8) = v6;
      }
      else
      {
        return (unsigned int)-1073741595;
      }
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v2;
}
