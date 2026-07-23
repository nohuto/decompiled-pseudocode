/*
 * XREFs of RtlInitializeSListHead @ 0x1800E1360
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x1800CE2C0 (RtlpSubSegmentDebugInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E0EC0 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryBlockLookaside @ 0x1800E1150 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpHpVsSlotCreate @ 0x18011AF60 (RtlpHpVsSlotCreate.c)
 *     RtlResetMemoryBlockLookaside @ 0x18013A390 (RtlResetMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18016F010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0LL;
}
