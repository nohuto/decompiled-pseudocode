/*
 * XREFs of ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x18005846C
 * Callers:
 *     ?HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z @ 0x18001B3A0 (-HamSrvGetApplicationInterruptiveUIState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAEKKPEAK@Z.c)
 *     ?HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x180057724 (-HamSrvTerminateApplicationForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASO.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x1800578D0 (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_EXECUTION_STATE@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180057ED0 (-HamSrvGetApplicationStateForPsmKey@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAW4_HAM_APPLICATION_.c)
 * Callees:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013E64 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x180058658 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

struct _HAM_APPLICATION *__fastcall HampAppFind(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_APPLICATION_INFO *a2)
{
  struct _HAM_APPLICATION *App; // rbx
  __int64 v5; // rdi
  int v6; // r14d
  _WORD *v7; // rdx
  __int16 v8; // ax
  _WORD *v9; // rax
  struct _HAM_PACKAGE *v10; // rax
  struct _HAM_PACKAGE *v11; // rdi
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+24h] [rbp-DCh] BYREF
  _BYTE v15[132]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE DestinationSid[68]; // [rsp+B4h] [rbp-4Ch] BYREF
  int v17; // [rsp+F8h] [rbp-8h]
  _OWORD packageFamilyName[8]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v19; // [rsp+180h] [rbp+80h]
  _OWORD v20[8]; // [rsp+190h] [rbp+90h] BYREF
  __int16 v21; // [rsp+210h] [rbp+110h]
  WCHAR packageFullName[232]; // [rsp+220h] [rbp+120h] BYREF

  memset_0(v20, 0, 0x82uLL);
  memset_0(packageFullName, 0, 0x1CEuLL);
  v13 = 462;
  App = 0LL;
  v5 = 65LL;
  if ( (int)PsmGetPackageFullNameFromKey(a2, packageFullName, &v13) >= 0 )
  {
    memset_0(packageFamilyName, 0, 0x82uLL);
    packageFamilyNameLength[0] = 65;
    if ( !PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, (PWSTR)packageFamilyName) )
    {
      v20[0] = packageFamilyName[0];
      v20[1] = packageFamilyName[1];
      v20[2] = packageFamilyName[2];
      v20[3] = packageFamilyName[3];
      v20[4] = packageFamilyName[4];
      v20[5] = packageFamilyName[5];
      v20[6] = packageFamilyName[6];
      v20[7] = packageFamilyName[7];
      v21 = v19;
    }
  }
  v6 = *((_DWORD *)a2 + 133);
  memset_0(v15, 0, 0xCCuLL);
  v7 = v15;
  do
  {
    if ( v5 == -2147483581 )
      break;
    v8 = *(_WORD *)((char *)v7 + (char *)v20 - v15);
    if ( !v8 )
      break;
    *v7++ = v8;
    --v5;
  }
  while ( v5 );
  v9 = v7 - 1;
  if ( v5 )
    v9 = v7;
  *v9 = 0;
  RtlCopySid(0x44u, DestinationSid, (char *)a2 + 464);
  v17 = v6;
  v10 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v15);
  v11 = v10;
  if ( v10 )
  {
    App = HampPkgFindApp(v10, a2);
    CemRcObjectDereference(v11);
  }
  return App;
}
