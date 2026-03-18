/*
 * XREFs of ACPIEjectPnpLocationInterface @ 0x1400B0BC4
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1400B0340 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1400B0A98 (ACPIFilterIrpQueryPnpLocationInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIEjectPnpLocationInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 DeviceExtension; // rbp
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 Pool2; // rax
  __int128 v9; // xmm1
  __int64 (__fastcall *v10)(); // xmm0_8
  void (__fastcall *v11)(__int64); // rax
  __int64 v12; // r8
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall *v14[3])(); // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) >= 0x28u && *(_WORD *)(v2 + 18) )
  {
    v7 = *(_QWORD *)(v2 + 24);
    Pool2 = ExAllocatePool2(256LL, 56LL, 1181770561LL);
    v5 = 0;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = DeviceExtension;
      *(_DWORD *)(Pool2 + 48) = 0;
      if ( *(_DWORD *)(a2 + 48) )
      {
        *(_OWORD *)(Pool2 + 8) = 0LL;
        *(_OWORD *)(Pool2 + 24) = 0LL;
        *(_QWORD *)(Pool2 + 40) = 0LL;
      }
      else
      {
        *(_OWORD *)(Pool2 + 8) = *(_OWORD *)v7;
        *(_OWORD *)(Pool2 + 24) = *(_OWORD *)(v7 + 16);
        *(_QWORD *)(Pool2 + 40) = *(_QWORD *)(v7 + 32);
      }
      v14[0] = ACPIGetPnpLocationString;
      v13 = *(_OWORD *)&off_140074028;
      AcpiGetDriverProxyEndpoint(v14, (__int64)ACPIGetPnpLocationString);
      AcpiGetDriverProxyEndpoint(&v13, (__int64)ACPIReferencePnpLocationInterface);
      AcpiGetDriverProxyEndpoint((_QWORD *)&v13 + 1, (__int64)ACPIDereferencePnpLocationInterface);
      v9 = v13;
      *(_OWORD *)v7 = PnpLocationInterface;
      v10 = v14[0];
      *(_OWORD *)(v7 + 16) = v9;
      *(_QWORD *)(v7 + 32) = v10;
      v11 = *(void (__fastcall **)(__int64))(v7 + 16);
      *(_QWORD *)(v7 + 8) = v12;
      v11(v12);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
