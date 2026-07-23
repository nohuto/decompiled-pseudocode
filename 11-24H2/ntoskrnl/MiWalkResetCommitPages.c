/*
 * XREFs of MiWalkResetCommitPages @ 0x14066BB18
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10[2]; // [rsp+20h] [rbp-69h] BYREF
  unsigned __int8 v11; // [rsp+29h] [rbp-60h]
  _KPROCESS *v12; // [rsp+40h] [rbp-49h]
  unsigned __int64 v13; // [rsp+48h] [rbp-41h]
  __int64 v14; // [rsp+50h] [rbp-39h]
  void *v15; // [rsp+C8h] [rbp+3Fh]
  __int64 *v16; // [rsp+D8h] [rbp+4Fh]
  __int64 v17; // [rsp+F0h] [rbp+67h] BYREF

  v17 = 0LL;
  memset_0(v10, 0, 0xC0uLL);
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = &v17;
  Process = (_KPROCESS *)((char *)Process + 1024);
  v15 = &MiWalkResetCommitPte;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  v10[0] = 7;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v13 = v5 << 12;
  v14 = v6;
  v12 = Process;
  v11 = MiLockWorkingSetShared((__int64)Process, v6, v7, v8);
  MiWalkPageTables(v10);
  MiUnlockWorkingSetShared((__int64)Process, v11);
  return v17;
}
