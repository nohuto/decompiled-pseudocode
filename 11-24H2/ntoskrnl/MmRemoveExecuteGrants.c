/*
 * XREFs of MmRemoveExecuteGrants @ 0x14049EBE8
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  _DWORD v2[2]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int8 v3; // [rsp+29h] [rbp-BFh]
  _KPROCESS *v4; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v5; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v6)(__int64, unsigned __int64); // [rsp+C8h] [rbp-20h]
  __int64 (__fastcall *v7)(__int64); // [rsp+D0h] [rbp-18h]

  memset_0(v2, 0, 0xC0uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = MiRevokeExecutePte;
  Process = (_KPROCESS *)((char *)Process + 1024);
  v2[0] = 65542;
  v7 = MiRevokeExecuteTail;
  v4 = Process;
  v5 = 0xFFFF7FFFFFFFFFFFuLL;
  v3 = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((__int64)v2);
  return MiUnlockWorkingSetShared((__int64)Process, v3);
}
