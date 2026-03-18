/*
 * XREFs of IopDecrementDeviceObjectRefCount @ 0x1403F1910
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1403F2590 (IopCompleteUnloadOrDelete.c)
 *     IoUnregisterFileSystem @ 0x140714D40 (IoUnregisterFileSystem.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 * Callees:
 *     IopInterlockedDecrementUlong @ 0x1403F1990 (IopInterlockedDecrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
