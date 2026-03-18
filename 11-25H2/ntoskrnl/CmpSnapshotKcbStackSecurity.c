/*
 * XREFs of CmpSnapshotKcbStackSecurity @ 0x140AB7F68
 * Callers:
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086FF30 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpSnapshotKcbStackSecurity(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 SecurityCacheEntryForKcbStack; // rdi
  void *Pool; // rax
  unsigned int v7; // ebx
  void *v8; // rsi

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  Pool = (void *)CmpAllocatePool(0x100uLL);
  v7 = 0;
  v8 = Pool;
  if ( Pool )
  {
    memmove(
      Pool,
      (const void *)(SecurityCacheEntryForKcbStack + 32),
      *(unsigned int *)(SecurityCacheEntryForKcbStack + 24));
    *a4 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
