/*
 * XREFs of IopCleanupProcessResources @ 0x1409E26D0
 * Callers:
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x140418C10 (IopCancelIrpsInFileObjectList.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409E2728 (IopCleanupFileObjectIosbRange.c)
 */

__int64 __fastcall IopCleanupProcessResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  for ( result = IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 1, 1); a3; a3 = *(_QWORD *)(a3 + 40) )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      result = IopCleanupFileObjectIosbRange(a3);
  }
  return result;
}
