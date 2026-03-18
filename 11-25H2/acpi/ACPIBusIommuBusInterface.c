/*
 * XREFs of ACPIBusIommuBusInterface @ 0x1400B0E50
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1400B0D20 (ACPIFilterIrpQueryIommuInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x140039780 (ACPIAmliBuildObjectPathname.c)
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIBusIommuBusInterface(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int16 v4; // bp
  __int64 DeviceExtension; // rdx
  __int64 *v6; // r9
  int v7; // r15d
  __int64 v8; // rax
  unsigned __int16 *v9; // r12
  int v10; // edi
  _BYTE *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 Pool2; // rax
  __int64 v15; // rsi
  void (__fastcall *v17)(__int64); // rax
  _QWORD v18[10]; // [rsp+20h] [rbp-78h] BYREF
  void *Src; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v4 = 80;
  memset(v18, 0, sizeof(v18));
  Src = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  v6 = *(__int64 **)(DeviceExtension + 760);
  if ( !v6 )
    return (unsigned int)-1073741823;
  v7 = *(unsigned __int16 *)(v2 + 18);
  if ( (unsigned __int16)(v7 - 1) > 1u )
    return (unsigned int)-1073741811;
  if ( v7 == 1 )
  {
    v4 = 72;
    goto LABEL_5;
  }
  if ( v7 != 2 )
    return (unsigned int)-1073741811;
LABEL_5:
  if ( *(_WORD *)(v2 + 16) < v4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(v2 + 32);
  if ( !v8 || v8 != *(_QWORD *)(DeviceExtension + 784) )
    return (unsigned int)-1073741811;
  v9 = *(unsigned __int16 **)(v2 + 24);
  v10 = ACPIAmliBuildObjectPathname(v6, &Src, 3);
  if ( v10 >= 0 )
  {
    v11 = Src;
    v12 = -1LL;
    v13 = -1LL;
    do
      ++v13;
    while ( *((_BYTE *)Src + v13) );
    Pool2 = ExAllocatePool2(256LL, (unsigned int)(v13 + 113), 1181770561LL);
    v15 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 88) = 2;
      *(_QWORD *)(Pool2 + 96) = Pool2 + 112;
      do
        ++v12;
      while ( v11[v12] );
      memmove((void *)(Pool2 + 112), v11, v12 + 1);
      ExFreePoolWithTag(v11, 0x53706341u);
      memmove(v18, &AcpiIommuBusInterface, v4);
      AcpiGetDriverProxyEndpoint(&v18[2], (__int64)ACPIReferenceIommuBusInterface);
      AcpiGetDriverProxyEndpoint(&v18[3], (__int64)ACPIDereferenceIommuBusInterface);
      AcpiGetDriverProxyEndpoint(&v18[7], (__int64)ACPIIommuGetDeviceProperties);
      AcpiGetDriverProxyEndpoint(&v18[8], (__int64)ACPIIommuGetDeviceId);
      memmove(v9, v18, v4);
      v17 = (void (__fastcall *)(__int64))*((_QWORD *)v9 + 2);
      *v9 = v4;
      v9[1] = v7;
      *((_QWORD *)v9 + 1) = v15;
      v17(v15);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v10;
}
