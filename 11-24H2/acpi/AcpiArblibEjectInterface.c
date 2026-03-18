/*
 * XREFs of AcpiArblibEjectInterface @ 0x14009B01C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcpiArblibEjectInterface(ULONG_PTR a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  void (__fastcall *v12)(__int64); // rax
  __int64 v13; // rcx
  int v14; // r10d

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  if ( *(_WORD *)(v4 + 18) )
    return 3221225659LL;
  if ( *(_WORD *)(v4 + 16) < 0x30u )
    return 3221225485LL;
  switch ( v5 )
  {
    case 1:
      v8 = DeviceExtension[25];
      break;
    case 3:
      v8 = DeviceExtension[24];
      break;
    case 6:
      v8 = DeviceExtension[26];
      break;
    default:
      return 3221225659LL;
  }
  if ( *(_BYTE *)(v8 + 130) == 1 )
  {
    *(_DWORD *)v6 = 48;
    *(_QWORD *)(v6 + 8) = v8 + 136;
    AcpiGetDriverProxyEndpoint((_QWORD *)(v6 + 16), (__int64)AcpiArblibReferenceArbiter);
    AcpiGetDriverProxyEndpoint((_QWORD *)(v9 + 24), (__int64)AcpiArblibDereferenceArbiter);
    AcpiGetDriverProxyEndpoint((_QWORD *)(v10 + 32), (__int64)ArbArbiterHandler);
    v12 = *(void (__fastcall **)(__int64))(v11 + 16);
    v13 = *(_QWORD *)(v11 + 8);
    *(_DWORD *)(v11 + 40) = v14;
    v12(v13);
    return 0LL;
  }
  return 3221225659LL;
}
