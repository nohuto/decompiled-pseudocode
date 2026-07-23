/*
 * XREFs of IopDecrementDeviceObjectRefCount @ 0x1403E5630
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403E62B0 (IopCompleteUnloadOrDelete.c)
 *     IoUnregisterFileSystem @ 0x1407128D0 (IoUnregisterFileSystem.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 * Callees:
 *     IopInterlockedDecrementUlong @ 0x1403E56B0 (IopInterlockedDecrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  if ( a2 )
  {
    result = IopInterlockedDecrementUlong(10LL, BugCheckParameter2 + 4);
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 4) - 1);
    *(_DWORD *)(BugCheckParameter2 + 4) = result;
  }
  if ( (int)result < 0 )
  {
    v4 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v4 )
    {
      IoAddTriageDumpDataBlock(v4, (PVOID)0x150);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *(int *)(BugCheckParameter2 + 4));
  }
  return result;
}
