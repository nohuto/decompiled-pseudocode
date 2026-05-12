/*
 * XREFs of PortMiniportRegistryInitialize @ 0x14005592C
 * Callers:
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortMiniportRegistryInitialize(__int64 a1)
{
  __int64 result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 24));
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  result = 0LL;
  *(_DWORD *)(a1 + 56) = 1;
  return result;
}
