/*
 * XREFs of ?RmpActivityHostQueryOfferedMemoryCommitSaveCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180088C80
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemQueryProcessCommitSaveInfo@@YAXPEAXPEAU_PROCESS_COMMIT_RELEASE_INFORMATION@@@Z @ 0x18005E2F0 (-RmpSystemQueryProcessCommitSaveInfo@@YAXPEAXPEAU_PROCESS_COMMIT_RELEASE_INFORMATION@@@Z.c)
 */

__int64 __fastcall RmpActivityHostQueryOfferedMemoryCommitSaveCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  RmpSystemQueryProcessCommitSaveInfo(a2, (struct _PROCESS_COMMIT_RELEASE_INFORMATION *)&v6);
  *a4 += v7;
  return 0LL;
}
