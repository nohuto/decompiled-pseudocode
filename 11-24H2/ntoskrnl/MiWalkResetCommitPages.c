/*
 * XREFs of MiWalkResetCommitPages @ 0x14066A948
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD v8[2]; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int8 v9; // [rsp+29h] [rbp-60h]
  _KPROCESS *v10; // [rsp+40h] [rbp-49h]
  unsigned __int64 v11; // [rsp+48h] [rbp-41h]
  __int64 v12; // [rsp+50h] [rbp-39h]
  void *v13; // [rsp+C8h] [rbp+3Fh]
  __int64 *v14; // [rsp+D8h] [rbp+4Fh]
  __int64 v15; // [rsp+F0h] [rbp+67h] BYREF

  v15 = 0LL;
  memset_0(v8, 0, 0xC0uLL);
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v14 = &v15;
  Process = (_KPROCESS *)((char *)Process + 1024);
  v13 = &MiWalkResetCommitPte;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  v8[0] = 7;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v11 = v5 << 12;
  v12 = v6;
  v10 = Process;
  v9 = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables((__int64)v8);
  MiUnlockWorkingSetShared((__int64)Process, v9);
  return v15;
}
