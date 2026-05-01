/*
 * XREFs of ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x18007ED58
 * Callers:
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18006B30C (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007DB84 (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18003D0AC (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?HampSystemWaitForSingleObject@@YAJPEAXK@Z @ 0x180066BF0 (-HampSystemWaitForSingleObject@@YAJPEAXK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall HampUtilActOnThreads(
        void *a1,
        int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(HANDLE, HANDLE, void *),
        void *a5)
{
  unsigned int v5; // esi
  NTSTATUS v7; // eax
  HANDLE v8; // rdi
  HANDLE v9; // rdx
  int NextThread; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-10h] BYREF
  HANDLE TargetHandle; // [rsp+38h] [rbp-8h] BYREF

  TargetHandle = 0LL;
  Handle = 0LL;
  v5 = a2 | 0x100800;
  v7 = RmpSystemDuplicateHandle(a1, 0x400u, &TargetHandle);
LABEL_8:
  NextThread = v7;
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      v8 = Handle;
      v9 = Handle;
      Handle = 0LL;
      NextThread = NtGetNextThread(TargetHandle, v9, v5, 0LL, 0, &Handle);
      if ( v8 )
        NtClose(v8);
      if ( NextThread == -2147483622 )
        break;
      if ( NextThread < 0 )
        goto LABEL_11;
      if ( HampSystemWaitForSingleObject(Handle) )
      {
        v7 = a4(TargetHandle, Handle, a5);
        goto LABEL_8;
      }
    }
    NextThread = 0;
  }
LABEL_11:
  if ( Handle )
    NtClose(Handle);
  if ( TargetHandle )
    NtClose(TargetHandle);
  return (unsigned int)NextThread;
}
