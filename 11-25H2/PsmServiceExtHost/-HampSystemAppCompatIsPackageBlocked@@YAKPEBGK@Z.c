/*
 * XREFs of ?HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z @ 0x18003F5D0
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     SdbShouldBlockPackageLaunch @ 0x18003F6C8 (SdbShouldBlockPackageLaunch.c)
 */

__int64 __fastcall HampSystemAppCompatIsPackageBlocked(PCWSTR packageFullName, char a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  int TargetPlatformContext; // eax
  PACKAGE_INFO_REFERENCE packageInfoReference; // [rsp+20h] [rbp-10h] BYREF
  __int64 v9; // [rsp+28h] [rbp-8h] BYREF
  int v10; // [rsp+68h] [rbp+38h] BYREF
  int v11; // [rsp+70h] [rbp+40h] BYREF
  __int64 v12; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v11 = 0;
  packageInfoReference = 0LL;
  v9 = 0LL;
  v10 = 0;
  v12 = 0LL;
  v5 = 0LL;
  if ( OpenPackageInfoByFullNameForUser(0LL, packageFullName, 0, &packageInfoReference) )
    goto LABEL_6;
  TargetPlatformContext = GetTargetPlatformContext(packageInfoReference, 0LL, &v9);
  if ( !TargetPlatformContext )
  {
    v10 = 8;
    if ( !(unsigned int)GetPackageTargetPlatformProperty(v9, 3LL, &v10, &v12) )
      goto LABEL_4;
LABEL_11:
    v12 = 0LL;
    goto LABEL_5;
  }
  if ( TargetPlatformContext != 1168 )
    goto LABEL_5;
  if ( (int)AppXGetOSMaxVersionTested(packageFullName, &v12) < 0 )
    goto LABEL_11;
LABEL_4:
  v5 = v12;
LABEL_5:
  ClosePackageInfo(packageInfoReference);
LABEL_6:
  if ( !(unsigned int)SdbShouldBlockPackageLaunch(packageFullName, v5, &v11, a2 & 1) )
    return 0LL;
  LOBYTE(v2) = v11 != 0;
  return v2;
}
