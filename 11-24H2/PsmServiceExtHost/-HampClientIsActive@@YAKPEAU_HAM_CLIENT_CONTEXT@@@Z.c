/*
 * XREFs of ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180018200
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180006894 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180019494 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18001997C (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180019D24 (-HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_AC.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180038718 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180062D50 (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z @ 0x18007FE6C (-HamSrvQueryActivityPendDiagnostics@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_PEND_DIAGNOSTICS@@@Z.c)
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x180080704 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18008086C (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampClientIsActive(struct _HAM_CLIENT_CONTEXT *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  BOOL v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rdx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x200uLL;
    ++Value[10];
  }
  RtlAcquireSRWLockShared((char *)a1 + 40);
  v4 = *((_DWORD *)a1 + 50) == 2;
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 0x200) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v5[10]-- == 1 )
      *v5 = v6 & 0xFFFFFFFFFFFFFDFFuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 40);
  return v4;
}
