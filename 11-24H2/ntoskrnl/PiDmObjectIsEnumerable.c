/*
 * XREFs of PiDmObjectIsEnumerable @ 0x1408CFBA8
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     PiDmObjectAcquireSharedLock @ 0x1408CE46C (PiDmObjectAcquireSharedLock.c)
 *     PiDmObjectReleaseLock @ 0x1408CECD4 (PiDmObjectReleaseLock.c)
 */

char __fastcall PiDmObjectIsEnumerable(ULONG_PTR BugCheckParameter2)
{
  char v2; // bl

  PiDmObjectAcquireSharedLock((volatile signed __int64 *)BugCheckParameter2);
  v2 = *(_DWORD *)(BugCheckParameter2 + 32) & 1;
  PiDmObjectReleaseLock((signed __int64 *)BugCheckParameter2);
  return v2;
}
