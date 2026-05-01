/*
 * XREFs of ?HampAppGetHasStartedWindow@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180083744
 * Callers:
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180044670 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x1800173C4 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001834C (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026BA4 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043DFC (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E88 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180057630 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

char __fastcall HampAppGetHasStartedWindow(struct _HAM_APPLICATION *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rax
  char v2; // di
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx
  struct _HAM_ACTIVITY *FirstActivity; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx

  FirstHost = HampAppGetFirstHost(a1);
  v2 = 0;
LABEL_2:
  v3 = FirstHost;
  if ( FirstHost )
  {
    HampHostAcquireLockSharedEx(FirstHost, 0);
    FirstActivity = HampHostGetFirstActivity(v3);
    while ( 1 )
    {
      if ( !FirstActivity )
      {
        HampHostReleaseLockSharedEx(v3);
        FirstHost = HampAppGetNextHost(v3);
        goto LABEL_2;
      }
      if ( HampActIsStartedOrReachedPendState((__int64)FirstActivity, 3u) && (*(_DWORD *)(v5 + 112) & 0x10000) != 0 )
        break;
      v6 = *(_QWORD *)(v5 + 96);
      v7 = *(_QWORD *)(v5 + 80);
      FirstActivity = 0LL;
      if ( v6 != v7 + 608 )
        FirstActivity = (struct _HAM_ACTIVITY *)(v6 - 96);
    }
    v2 = 1;
    HampHostReleaseLockSharedEx(v3);
    RmHamHostDereference(v3);
  }
  return v2;
}
