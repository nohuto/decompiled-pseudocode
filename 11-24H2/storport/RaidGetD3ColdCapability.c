/*
 * XREFs of RaidGetD3ColdCapability @ 0x140055CE0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     NvmeNamespaceStartDeviceIrp @ 0x1401A97E8 (NvmeNamespaceStartDeviceIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaidGetD3ColdCapability(__int64 a1)
{
  int (__fastcall *v1)(_QWORD, char *); // rax
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(int (__fastcall **)(_QWORD, char *))(a1 + 48);
  v2 = 0;
  v4 = 0;
  if ( v1 && v1(*(_QWORD *)(a1 + 8), &v4) >= 0 )
    return v4;
  return v2;
}
