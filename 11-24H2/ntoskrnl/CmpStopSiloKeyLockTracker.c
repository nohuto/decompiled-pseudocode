/*
 * XREFs of CmpStopSiloKeyLockTracker @ 0x140A87210
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x140772928 (PspDeleteExternalServerSiloState.c)
 *     CmpFreeSiloContextCallback @ 0x140A871C0 (CmpFreeSiloContextCallback.c)
 * Callees:
 *     CmpFreeSiloKeyLockEntry @ 0x1407DDE48 (CmpFreeSiloKeyLockEntry.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140A872EC (CmpUnlockSiloKeyLockTracker.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

ULONG_PTR *__fastcall CmpStopSiloKeyLockTracker(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rdx
  ULONG_PTR **v3; // rax
  __int64 v4; // rcx
  ULONG_PTR *result; // rax
  ULONG_PTR *v6; // rax
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR *v9; // [rsp+28h] [rbp-8h]

  KsepCacheLock((unsigned __int64 *)BugCheckParameter2);
  *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFFC | 2;
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v9 = &v8;
  v8 = (ULONG_PTR)&v8;
  if ( v2 != BugCheckParameter2 + 16 )
  {
    v3 = *(ULONG_PTR ***)(BugCheckParameter2 + 24);
    v8 = v2;
    v9 = (ULONG_PTR *)v3;
    *(_QWORD *)(v2 + 8) = &v8;
    *v3 = &v8;
    *(_QWORD *)(BugCheckParameter2 + 24) = BugCheckParameter2 + 16;
    *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 16;
  }
  CmpUnlockSiloKeyLockTracker(BugCheckParameter2);
  result = &v8;
  if ( (ULONG_PTR *)v8 != &v8 )
  {
    CmpLockRegistry(v4);
    v6 = (ULONG_PTR *)v8;
    v7 = *(_QWORD *)v8;
    if ( *(ULONG_PTR **)(v8 + 8) != &v8 )
LABEL_5:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(ULONG_PTR **)(v7 + 8) != v6 )
        goto LABEL_5;
      v8 = v7;
      *(_QWORD *)(v7 + 8) = &v8;
      if ( v6 == &v8 )
        return (ULONG_PTR *)CmpUnlockRegistry(&v8);
      CmpFreeSiloKeyLockEntry(v6);
      v6 = (ULONG_PTR *)v8;
      if ( *(ULONG_PTR **)(v8 + 8) != &v8 )
        goto LABEL_5;
      v7 = *(_QWORD *)v8;
    }
  }
  return result;
}
