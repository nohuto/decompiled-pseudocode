/*
 * XREFs of FsRtlOplockBreakH @ 0x1406FF520
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlOplockBreakH2 @ 0x140A2FA90 (FsRtlOplockBreakH2.c)
 */

NTSTATUS __stdcall FsRtlOplockBreakH(
        POPLOCK Oplock,
        PIRP Irp,
        ULONG Flags,
        PVOID Context,
        POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
        POPLOCK_FS_PREPOST_IRP PostIrpRoutine)
{
  return FsRtlOplockBreakH2(
           (_DWORD)Oplock,
           (_DWORD)Irp,
           Flags,
           (_DWORD)Context,
           (__int64)CompletionRoutine,
           (__int64)PostIrpRoutine,
           0LL,
           0LL);
}
