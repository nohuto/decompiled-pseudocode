/*
 * XREFs of MmRemoveExecuteGrants @ 0x140499A20
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int v5[2]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int8 v6; // [rsp+29h] [rbp-BFh]
  _KPROCESS *v7; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v8; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v9)(__int64, unsigned __int64); // [rsp+C8h] [rbp-20h]
  __int64 (__fastcall *v10)(__int64); // [rsp+D0h] [rbp-18h]

  memset_0(v5, 0, 0xC0uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = MiRevokeExecutePte;
  Process = (_KPROCESS *)((char *)Process + 1024);
  v5[0] = 65542;
  v10 = MiRevokeExecuteTail;
  v7 = Process;
  v8 = 0xFFFF7FFFFFFFFFFFuLL;
  v6 = MiLockWorkingSetShared((__int64)Process, v1, v2, v3);
  MiWalkPageTables(v5);
  return MiUnlockWorkingSetShared((__int64)Process, v6);
}
