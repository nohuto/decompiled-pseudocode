/*
 * XREFs of BiHamExtHostQueryResourceUsage @ 0x180069540
 * Callers:
 *     <none>
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E880 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemJobExtendedInfoQuery@@YAJPEAXPEAU_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2@@@Z @ 0x1800696B8 (-HampSystemJobExtendedInfoQuery@@YAJPEAXPEAU_JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall BiHamExtHostQueryResourceUsage(__int64 a1, _QWORD *a2)
{
  int Host; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  bool v9; // cf
  __int64 v10; // rax
  struct _RM_HAM_ACTIVITY_HOST *v12; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE JobInformation[16]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v15; // [rsp+58h] [rbp-A8h]
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[144]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v19[144]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v20; // [rsp+1B0h] [rbp+B0h]
  __int64 v21; // [rsp+1B8h] [rbp+B8h]

  memset_0(v19, 0, 0x1C0uLL);
  memset_0(JobInformation, 0, 0x48uLL);
  memset_0(v18, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v12 = 0LL;
  Host = RmHamFindHost((__int64)RmSvcGlobals + 2248, a1, 2, &v12);
  if ( Host >= 0 )
  {
    v5 = v12;
    Host = NtQueryInformationJobObject(
             *((HANDLE *)v12 + 72),
             JobObjectJobSetInformation|0x20,
             JobInformation,
             0x48u,
             0LL);
    v6 = v5;
    if ( Host >= 0 )
    {
      Host = HampSystemJobExtendedInfoQuery(
               *((HANDLE *)v5 + 72),
               (struct _JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION_V2 *)v19);
      v6 = v5;
      if ( Host >= 0 )
      {
        v7 = -1LL;
        v8 = v14 + v16;
        v9 = v14 + v16 < v14;
        *a2 = v20;
        a2[1] = v21;
        v10 = -1LL;
        if ( !v9 )
          v10 = v8;
        a2[2] = v10;
        if ( v15 + v17 >= v15 )
          v7 = v15 + v17;
        Host = 0;
        a2[3] = v7;
        v6 = v5;
      }
    }
    if ( v6 )
      RmHamHostDereference(v6);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)Host;
}
