/*
 * XREFs of RaCallMiniportInterrupt @ 0x140033830
 * Callers:
 *     NvmeAdapterInterruptRoutine @ 0x1400D3940 (NvmeAdapterInterruptRoutine.c)
 *     PCIeNvmeAdapterInterruptRoutine @ 0x1400DD210 (PCIeNvmeAdapterInterruptRoutine.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaCallMiniportInterrupt(__int64 a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v2)(__int64); // rax

  if ( a1 && (v1 = *(_QWORD *)(a1 + 232)) != 0 && (v2 = *(__int64 (__fastcall **)(__int64))(v1 + 24)) != 0LL )
    return v2(*(_QWORD *)(a1 + 240) + 16LL);
  else
    return 0;
}
