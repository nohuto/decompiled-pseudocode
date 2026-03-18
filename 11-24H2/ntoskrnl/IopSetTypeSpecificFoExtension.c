/*
 * XREFs of IopSetTypeSpecificFoExtension @ 0x14044BF10
 * Callers:
 *     IopSetFileObjectIosbRange @ 0x140712DF8 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140715044 (IopSetFileMemoryPartitionInformation.c)
 *     IopSymlinkPropagateToExtensionIfNeeded @ 0x1408A2820 (IopSymlinkPropagateToExtensionIfNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetTypeSpecificFoExtension(__int64 a1, unsigned int a2, signed __int64 a3)
{
  if ( a2 > 9 )
    return 3221225485LL;
  else
    return _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * (int)a2 + 8), a3, 0LL) != 0
         ? 0xC0000001
         : 0;
}
