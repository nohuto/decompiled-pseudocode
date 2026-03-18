/*
 * XREFs of PiDmObjectIsEnumerable @ 0x1408CFB88
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140839434 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiDmObjectAcquireSharedLock @ 0x1408CCF68 (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CE958 (PiDmObjectReleaseLock.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2)
{
  char v2; // bl

  PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2);
  v2 = *(_DWORD *)(BugCheckParameter2 + 32) & 1;
  PiDmObjectReleaseLock((signed __int64 *)BugCheckParameter2);
  return v2;
}
