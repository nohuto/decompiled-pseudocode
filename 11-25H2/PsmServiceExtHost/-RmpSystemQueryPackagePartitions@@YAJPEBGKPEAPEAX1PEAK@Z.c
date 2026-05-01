/*
 * XREFs of ?RmpSystemQueryPackagePartitions@@YAJPEBGKPEAPEAX1PEAK@Z @ 0x180090DA4
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FB0 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAU_RM_ACTIVITY_HOST@@_K@Z @ 0x18005A594 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180072E04 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemQueryPackagePartitions(
        const unsigned __int16 *a1,
        unsigned int a2,
        void **a3,
        void **a4,
        unsigned int *a5)
{
  int v9; // edi
  __int64 v10; // rcx
  signed int PackageFullNameFromKey; // ebx
  int PartitionHandlesForPackage; // ebx
  HANDLE v14; // rax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[464]; // [rsp+50h] [rbp-B0h] BYREF

  v16 = 0;
  v17 = 0;
  Handle = 0LL;
  v18[0] = 0LL;
  v9 = 0;
  if ( IsNotifyGameModeExtensionRecipientsPresentPresent() )
  {
    v16 = 464;
    PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a1, v19, &v16);
    if ( PackageFullNameFromKey >= 0 )
    {
      PartitionHandlesForPackage = GetPartitionHandlesForPackage(v19, a2, &Handle, v18, &v17);
      if ( PartitionHandlesForPackage >= 0 )
      {
        PackageFullNameFromKey = 0;
        v9 = v17 & 1;
      }
      else
      {
        PackageFullNameFromKey = PartitionHandlesForPackage & 0xEFFFFFFF;
        if ( PackageFullNameFromKey < 0 )
          goto LABEL_6;
      }
      v10 = (__int64)Handle;
      goto LABEL_14;
    }
LABEL_6:
    v10 = (__int64)Handle;
    goto LABEL_7;
  }
  v10 = -2LL;
  PackageFullNameFromKey = 0;
  Handle = (HANDLE)-2LL;
LABEL_14:
  if ( a3 )
  {
    *a3 = (void *)v10;
    v10 = 0LL;
    Handle = 0LL;
  }
  if ( a4 )
  {
    v14 = v18[0];
    v18[0] = 0LL;
    *a4 = v14;
  }
  if ( a5 )
    *a5 = v9;
LABEL_7:
  if ( ((v10 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose((HANDLE)v10);
  if ( (((unsigned __int64)v18[0] + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v18[0]);
  return (unsigned int)PackageFullNameFromKey;
}
