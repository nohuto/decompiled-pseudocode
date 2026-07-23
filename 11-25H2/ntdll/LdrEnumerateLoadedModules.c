/*
 * XREFs of LdrEnumerateLoadedModules @ 0x1800F04E0
 * Callers:
 *     RtlLockModuleSection @ 0x1800F0370 (RtlLockModuleSection.c)
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180007A00 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x180046860 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl LdrEnumerateLoadedModules(BOOLEAN ReservedFlag, PLDR_ENUM_CALLBACK EnumProc, PVOID Context)
{
  char v5; // bl
  __int64 v6; // rcx
  __int64 *i; // rdi
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+20h]

  if ( ReservedFlag || !EnumProc )
    return -1073741811;
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
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  for ( i = (__int64 *)qword_1801D4950; i != &qword_1801D4950; i = (__int64 *)*i )
  {
    ((void (__fastcall *)(__int64 *, PVOID, char *))EnumProc)(i, Context, &v9);
    if ( v9 )
      break;
  }
  LdrpReleaseLoaderLock(v6, 15, 0);
  if ( !v5 )
    LdrpDropLastInProgressCount();
  return 0;
}
