/*
 * XREFs of PiDqObjectManagerUnregisterQuery @ 0x1409F230C
 * Callers:
 *     PiDqDispatch @ 0x1409F1FF0 (PiDqDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PiDqQueryRelease @ 0x1408D19A0 (PiDqQueryRelease.c)
 */

void __fastcall PiDqObjectManagerUnregisterQuery(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 **v5; // rcx

  ExAcquireFastMutex((PKGUARDED_MUTEX)(a1 + 104));
  v4 = *a2;
  if ( *a2 )
  {
    if ( *(__int64 **)(v4 + 8) != a2 || (v5 = (__int64 **)a2[1], *v5 != a2) )
      __fastfail(3u);
    *v5 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*(_DWORD *)(a1 + 224);
    PiDqQueryRelease(a2);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
}
