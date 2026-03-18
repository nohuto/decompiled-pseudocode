/*
 * XREFs of MiWalkResetCommitPages @ 0x14065EE64
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int v8[2]; // [rsp+20h] [rbp-69h] BYREF
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
  MiWalkPageTables(v8);
  MiUnlockWorkingSetShared((__int64)Process, v9);
  return v15;
}
