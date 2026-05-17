/*
 * XREFs of LdrEnumerateLoadedModules @ 0x180001F90
 * Callers:
 *     RtlLockModuleSection @ 0x180001DD0 (RtlLockModuleSection.c)
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrEnumerateLoadedModules(int a1, void (__fastcall *a2)(__int64 *, __int64, char *), __int64 a3)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 *i; // rdi
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+20h]

  if ( a1 || !a2 )
    return 3221225485LL;
  v9 = 0;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v5 = 1;
    v10 = 1;
  }
  else
  {
    v5 = 0;
    v10 = 0;
    LdrpDrainWorkQueue(0LL);
  }
  LdrpAcquireLoaderLock();
  for ( i = (__int64 *)qword_1801D28D0; i != &qword_1801D28D0; i = (__int64 *)*i )
  {
    a2(i, a3, &v9);
    if ( v9 )
      break;
  }
  LdrpReleaseLoaderLock(v6, 15LL);
  if ( !v5 )
    LdrpDropLastInProgressCount();
  return 0LL;
}
