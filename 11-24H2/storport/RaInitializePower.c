/*
 * XREFs of RaInitializePower @ 0x14005352C
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x14001018C (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax

  *(_BYTE *)(a1 + 4560) = 0;
  v3 = 316LL;
  if ( *(_DWORD *)a1 != 1314275652 )
    v3 = 524LL;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(v3 + a1) + 7) & 0xFFFFFFF8) + 1184, a2, (_QWORD *)a1);
  *(_QWORD *)(a1 + 4552) = result;
  return result;
}
