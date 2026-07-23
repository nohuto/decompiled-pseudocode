/*
 * XREFs of IopCleanupProcessResources @ 0x1409DC480
 * Callers:
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 * Callees:
 *     IopCancelIrpsInFileObjectList @ 0x1404089C0 (IopCancelIrpsInFileObjectList.c)
 *     IopCleanupFileObjectIosbRange @ 0x1409DC4D8 (IopCleanupFileObjectIosbRange.c)
 */

__int64 __fastcall IopCleanupProcessResources(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  for ( result = IopCancelIrpsInFileObjectList(a1, a2, 0LL, 0LL, 1, 1); a3; a3 = *(_QWORD *)(a3 + 40) )
  {
    if ( *(_QWORD *)(a3 + 32) == a2 )
      result = IopCleanupFileObjectIosbRange(a3);
  }
  return result;
}
