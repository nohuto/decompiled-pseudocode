/*
 * XREFs of IrqArbGetDeviceIrql @ 0x1400B1664
 * Callers:
 *     AcpiIrqLibSetupSciInterrupt @ 0x1400A878C (AcpiIrqLibSetupSciInterrupt.c)
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IcSetPossibleInput @ 0x1400B12E8 (IcSetPossibleInput.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1400B15D0 (IrqTranslatepQueryDeviceIrql.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1400B3264 (ProcessorGetDeviceIdtAssignment.c)
 */

__int64 __fastcall IrqArbGetDeviceIrql(_DWORD *a1, _BYTE *a2)
{
  unsigned int v4; // edi
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0;
  v4 = a1[1];
  if ( !*a1 )
  {
    if ( (unsigned __int8)HalPrivateDispatchTable[62](0LL, (unsigned int)a1[14]) )
    {
      v7 = 0LL;
      if ( (int)((__int64 (__fastcall **)(_DWORD *, __int64))HalPrivateDispatchTable)[59](a1, (__int64)&v8) >= 0
        && (int)ProcessorGetDeviceIdtAssignment(0LL, v8, 0LL, v6) >= 0 )
      {
        v4 = DWORD1(v7);
      }
    }
  }
  *a2 = HalConvertDeviceIdtToIrql(v4);
  return 0LL;
}
