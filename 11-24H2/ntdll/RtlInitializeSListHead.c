/*
 * XREFs of RtlInitializeSListHead @ 0x1800E5EB0
 * Callers:
 *     RtlpSubSegmentDebugInitialize @ 0x1800D0D50 (RtlpSubSegmentDebugInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E5A10 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryBlockLookaside @ 0x1800E5CA0 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpHpVsSlotCreate @ 0x18011CD30 (RtlpHpVsSlotCreate.c)
 *     RtlResetMemoryBlockLookaside @ 0x18013C1A0 (RtlResetMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180170010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180014DE0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0LL;
}
