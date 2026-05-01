/*
 * XREFs of ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000D2E0
 * Callers:
 *     ?RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000CF0C (-RmpPsmAppFamilyTableFindByHostInfo@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_.c)
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003A900 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpPsmAppFamilyIdFromPsmAppInstanceId(
        struct _RM_PSM_HOST_INFO *a1,
        struct _RM_PSM_APP_FAMILY_ID *a2)
{
  signed int PackageFullNameFromKey; // esi
  LONG v5; // eax
  int v6; // r14d
  __int64 v7; // r8
  struct _RM_PSM_APP_FAMILY_ID *v8; // rdx
  __int16 v9; // ax
  struct _RM_PSM_APP_FAMILY_ID *v10; // rax
  int v11; // eax
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR packageFamilyName[8]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v16; // [rsp+40h] [rbp-C0h]
  __int128 v17; // [rsp+50h] [rbp-B0h]
  __int128 v18; // [rsp+60h] [rbp-A0h]
  __int128 v19; // [rsp+70h] [rbp-90h]
  __int128 v20; // [rsp+80h] [rbp-80h]
  __int128 v21; // [rsp+90h] [rbp-70h]
  __int128 v22; // [rsp+A0h] [rbp-60h]
  __int16 v23; // [rsp+B0h] [rbp-50h]
  _OWORD v24[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v25; // [rsp+140h] [rbp+40h]
  WCHAR packageFullName[232]; // [rsp+290h] [rbp+190h] BYREF

  memset_0(packageFullName, 0, 0x1CEuLL);
  v13 = 462;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a1, packageFullName, &v13);
  if ( PackageFullNameFromKey < 0 )
    goto LABEL_4;
  packageFamilyNameLength[0] = 65;
  v23 = 0;
  *(_OWORD *)packageFamilyName = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v5 = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
  PackageFullNameFromKey = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      PackageFullNameFromKey = (unsigned __int16)v5 | 0xC0070000;
LABEL_4:
    if ( PackageFullNameFromKey < 0 )
      return (unsigned int)PackageFullNameFromKey;
    goto LABEL_5;
  }
  PackageFullNameFromKey = 0;
  v24[0] = *(_OWORD *)packageFamilyName;
  v24[1] = v16;
  v24[2] = v17;
  v24[3] = v18;
  v24[4] = v19;
  v24[5] = v20;
  v24[6] = v21;
  v24[7] = v22;
  v25 = v23;
LABEL_5:
  v6 = *((_DWORD *)a1 + 133);
  memset_0(a2, 0, 0x218uLL);
  v7 = 232LL;
  v8 = a2;
  do
  {
    if ( v7 == -2147483414 )
      break;
    v9 = *(_WORD *)((char *)v8 + (char *)v24 - (char *)a2);
    if ( !v9 )
      break;
    *(_WORD *)v8 = v9;
    v8 = (struct _RM_PSM_APP_FAMILY_ID *)((char *)v8 + 2);
    --v7;
  }
  while ( v7 );
  v10 = (struct _RM_PSM_APP_FAMILY_ID *)((char *)v8 - 2);
  if ( v7 )
    v10 = v8;
  *(_WORD *)v10 = 0;
  *((_OWORD *)a2 + 29) = *((_OWORD *)a1 + 29);
  *((_OWORD *)a2 + 30) = *((_OWORD *)a1 + 30);
  *((_OWORD *)a2 + 31) = *((_OWORD *)a1 + 31);
  *((_OWORD *)a2 + 32) = *((_OWORD *)a1 + 32);
  v11 = *((_DWORD *)a1 + 132);
  *((_DWORD *)a2 + 133) = v6;
  *((_DWORD *)a2 + 132) = v11;
  return (unsigned int)PackageFullNameFromKey;
}
