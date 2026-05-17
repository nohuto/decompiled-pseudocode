/*
 * XREFs of RtlInitializeSListHead @ 0x1800E4E80
 * Callers:
 *     RtlStdInitializeStackDatabase @ 0x1800E49E0 (RtlStdInitializeStackDatabase.c)
 *     RtlCreateMemoryBlockLookaside @ 0x1800E4C70 (RtlCreateMemoryBlockLookaside.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180119B8C (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpVsSlotCreate @ 0x18011E5C0 (RtlpHpVsSlotCreate.c)
 *     RtlResetMemoryBlockLookaside @ 0x18013D8D0 (RtlResetMemoryBlockLookaside.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x180172010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18007C3F0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0LL;
}
