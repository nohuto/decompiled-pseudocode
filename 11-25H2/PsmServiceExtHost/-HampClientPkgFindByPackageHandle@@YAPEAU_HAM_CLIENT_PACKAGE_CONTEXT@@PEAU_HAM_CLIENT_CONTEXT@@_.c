/*
 * XREFs of ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180044A38
 * Callers:
 *     ?HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800444D4 (-HamSrvClosePackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z @ 0x180044670 (-HamSrvQueryActiveAppsInPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAGPEAK@Z.c)
 *     ?HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180045B20 (-HamSrvTerminatePackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x180068D40 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 *     ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z @ 0x180070A30 (-HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KKPEAPEAPEAXPEAK@Z.c)
 *     ?HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18007F424 (-HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180080528 (-HamSrvSuspendPackage@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 * Callees:
 *     ?HampClientPkgCompareByHandle@@YAJPEAX0@Z @ 0x180044B20 (-HampClientPkgCompareByHandle@@YAJPEAX0@Z.c)
 */

struct _HAM_CLIENT_PACKAGE_CONTEXT *__fastcall HampClientPkgFindByPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rdi
  char *v3; // rbp
  unsigned __int64 v4; // rbx
  int v5; // esi
  int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v2 = (unsigned __int64)a1 + 72;
  v3 = (char *)a1 + 88;
  RtlAcquireSRWLockShared((char *)a1 + 88);
  v4 = *(_QWORD *)v2;
  v5 = *(_BYTE *)(v2 + 8) & 1;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
  {
    if ( v4 )
    {
      v4 ^= v2;
      goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    while ( v4 )
    {
      v6 = HampClientPkgCompareByHandle(&v10, (void *)v4);
      if ( v6 < 0 )
      {
        v7 = *(_QWORD *)v4;
      }
      else
      {
        if ( v6 <= 0 )
          break;
        v7 = *(_QWORD *)(v4 + 8);
      }
      if ( v5 && v7 )
        v4 ^= v7;
      else
        v4 = v7;
    }
  }
  v8 = v4;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v8 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v3);
  return (struct _HAM_CLIENT_PACKAGE_CONTEXT *)v8;
}
