/*
 * XREFs of ?HampAppComputeUsageInfo@@YAKPEAU_HAM_APPLICATION@@PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x18005A964
 * Callers:
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800165E0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800173C4 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026BA4 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampUtilIsOverlappingInterval@@YAK_K000@Z @ 0x18005ABE8 (-HampUtilIsOverlappingInterval@@YAK_K000@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppComputeUsageInfo(struct _HAM_APPLICATION *a1, struct _HAM_APPLICATION_USAGE_INFO *a2)
{
  unsigned int v2; // r13d
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  struct _HAM_APPLICATION_USAGE_INFO *v7; // r12
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rsi
  DWORD v9; // r13d
  _QWORD *Value; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // r12
  signed __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  signed __int64 v15; // rcx
  unsigned __int64 v16; // r10
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 result; // rax
  unsigned int v23; // [rsp+20h] [rbp-60h]
  __int128 v24; // [rsp+28h] [rbp-58h]
  __int128 v25; // [rsp+38h] [rbp-48h]

  v2 = 0;
  v3 = 0LL;
  v23 = 0;
  v4 = 0LL;
  v5 = -1LL;
  v6 = -1LL;
  v7 = a2;
  FirstHost = HampAppGetFirstHost(a1);
  if ( FirstHost )
  {
    do
    {
      v9 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockExclusive(FirstHost);
      *((_DWORD *)FirstHost + 2) = GetCurrentThreadId();
      v2 = ((*((_QWORD *)FirstHost + 83) & 0x1000000000000000LL) != 0) | v23;
      v11 = *((_QWORD *)FirstHost + 83) & 0xEFFFFFFFFFFFFFFFuLL;
      v23 = v2;
      *((_QWORD *)FirstHost + 83) &= 0xE7FFFFFFFFFFFFFFuLL;
      v12 = (v11 >> 59) & 1;
      if ( HampUtilIsOverlappingInterval(*((_QWORD *)FirstHost + 128), *((_QWORD *)FirstHost + 129), v5, v3) )
      {
        if ( v13 < v5 )
          v5 = v13;
      }
      else if ( v13 > (__int64)v5 )
      {
        v5 = v13;
      }
      *(_QWORD *)&v24 = v5;
      if ( HampUtilIsOverlappingInterval(*((_QWORD *)FirstHost + 130), *((_QWORD *)FirstHost + 131), v6, v4) )
      {
        if ( v15 < v6 )
          v6 = v15;
      }
      else if ( v15 > (__int64)v6 )
      {
        v6 = v15;
      }
      *(_QWORD *)&v25 = v6;
      if ( v16 > v3 )
        v3 = v16;
      *((_QWORD *)&v24 + 1) = v3;
      if ( v14 > v4 )
        v4 = v14;
      *((_QWORD *)&v25 + 1) = v4;
      if ( HampLockTrackerId != -1 )
      {
        v17 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v18 = *v17;
        if ( (*v17 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        if ( v17[2]-- == 1 )
          *v17 = v18 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      *((_DWORD *)FirstHost + 2) = 0;
      RtlReleaseSRWLockExclusive(FirstHost);
      if ( (_DWORD)v12 )
        RmHamHostDereference(FirstHost);
      FirstHost = HampAppGetNextHost(FirstHost);
    }
    while ( FirstHost );
    v20 = v24;
    v7 = a2;
    v21 = v25;
  }
  else
  {
    v21 = 0xFFFFFFFFFFFFFFFFuLL;
    v20 = 0xFFFFFFFFFFFFFFFFuLL;
  }
  *(_OWORD *)v7 = v20;
  result = v2;
  *((_OWORD *)v7 + 1) = v21;
  return result;
}
