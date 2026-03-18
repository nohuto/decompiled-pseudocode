/*
 * XREFs of IopMcReferenceBufferEntry @ 0x14059F53C
 * Callers:
 *     IopMcFindNextTableEntryForUnlock @ 0x14043D130 (IopMcFindNextTableEntryForUnlock.c)
 *     IopMcGetBuffer @ 0x140A94208 (IopMcGetBuffer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall IopMcReferenceBufferEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 8));
  if ( (int)result <= 1 )
    KeBugCheckEx(0x1F4u, 1uLL, BugCheckParameter2, (int)result, *(_QWORD *)BugCheckParameter2);
  return result;
}
