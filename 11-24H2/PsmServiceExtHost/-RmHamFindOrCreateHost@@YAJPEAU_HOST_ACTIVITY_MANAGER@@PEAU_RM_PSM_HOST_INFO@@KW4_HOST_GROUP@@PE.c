/*
 * XREFs of ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180038AE8 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F00 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C604 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CDF8 (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000CED4 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D99C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F760 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x180012E64 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180014AD0 (-HampPkgCompareByIdentity@@YAJPEAX0@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180014BA8 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E464 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A714 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_H.c)
 *     ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18003A900 (-RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003A9B8 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z @ 0x18003F550 (-HampSystemAppCompatIsPackageBlocked@@YAKPEBGK@Z.c)
 *     ?HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z @ 0x1800407FC (-HampAppInitialize@@YAXPEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z @ 0x180040984 (-HampPkgInitialize@@YAXPEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_PACKAGE@@@Z.c)
 *     CemRcTableFindOrInsertEx @ 0x180040C00 (CemRcTableFindOrInsertEx.c)
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x180040FA4 (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x180046380 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 *     ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x1800585D8 (-HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z.c)
 *     ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800626E4 (-RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180071688 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBGKPEAPEAX1PEAK@Z @ 0x180091204 (-RmpSystemQueryPackagePartitions@@YAJPEBGKPEAPEAX1PEAK@Z.c)
 *     memcmp_0 @ 0x1800A7AE6 (memcmp_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmHamFindOrCreateHost(
        struct _HOST_ACTIVITY_MANAGER *a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        struct _RM_HAM_ACTIVITY_HOST **a5)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  unsigned int v10; // r15d
  __int64 v11; // r11
  __int64 v12; // r10
  struct _RM_HAM_ACTIVITY_HOST *v13; // rcx
  struct _HAM_PACKAGE *v14; // r15
  int v15; // edi
  const wchar_t *v16; // rbx
  __int64 result; // rax
  _WORD *v18; // rax
  int v19; // eax
  struct _HAM_USER *v20; // r14
  int State; // ebx
  int v22; // edi
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rax
  struct _HAM_PACKAGE *v26; // rsi
  struct _HAM_APPLICATION *v27; // r15
  struct _HAM_APPLICATION *v28; // r13
  struct _HAM_APPLICATION *v29; // rdi
  struct _HAM_APPLICATION *App; // rax
  struct _HAM_APPLICATION *v31; // rax
  struct _HAM_APPLICATION *v32; // rdi
  unsigned int v33; // edx
  HANDLE *v34; // rdi
  int v35; // eax
  HANDLE v36; // rsi
  unsigned int v37; // esi
  ULONG v38; // edi
  _WORD *v39; // rcx
  __int64 v40; // rdx
  __int16 v41; // ax
  _WORD *v42; // rax
  __int64 v43; // rbx
  unsigned int v44; // edi
  _WORD *v45; // rdx
  __int16 v46; // ax
  struct _HAM_PACKAGE *Heap; // rax
  struct _HAM_PACKAGE *v48; // rbx
  struct _RM_PSM_APP_FAMILY *v49; // rsi
  struct _RM_ACTIVITY_HOST *v50; // rdi
  struct _RM_SERVICE_GLOBALS *v51; // r14
  __int64 v52; // rdx
  char v53; // si
  char v54; // di
  int v55; // edi
  int v56; // esi
  unsigned int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rdx
  struct _HAM_APPLICATION *v62; // [rsp+38h] [rbp-C8h]
  unsigned int v63; // [rsp+40h] [rbp-C0h]
  PVOID P[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_PSM_APP_FAMILY *v65; // [rsp+58h] [rbp-A8h] BYREF
  int v66; // [rsp+60h] [rbp-A0h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+68h] [rbp-98h] BYREF
  struct _HAM_APPLICATION *v68; // [rsp+70h] [rbp-90h]
  struct _RM_PARTITION *v69; // [rsp+78h] [rbp-88h] BYREF
  struct _HAM_USER *v70; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+88h] [rbp-78h] BYREF
  struct _RM_ACTIVITY_HOST *v72; // [rsp+90h] [rbp-70h] BYREF
  struct _RM_PARTITION *v73; // [rsp+98h] [rbp-68h]
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  struct _RM_HAM_ACTIVITY_HOST **v75; // [rsp+A8h] [rbp-58h]
  struct _RM_SERVICE_GLOBALS *v76; // [rsp+B0h] [rbp-50h]
  _BYTE v77[132]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE DestinationSid[68]; // [rsp+144h] [rbp+44h] BYREF
  unsigned int v79; // [rsp+188h] [rbp+88h]
  _BYTE v80[464]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE SourceSid[68]; // [rsp+360h] [rbp+260h] BYREF
  unsigned int v82; // [rsp+3A4h] [rbp+2A4h]
  WCHAR packageFamilyName[8]; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int128 v84; // [rsp+3C0h] [rbp+2C0h]
  __int128 v85; // [rsp+3D0h] [rbp+2D0h]
  __int128 v86; // [rsp+3E0h] [rbp+2E0h]
  __int128 v87; // [rsp+3F0h] [rbp+2F0h]
  __int128 v88; // [rsp+400h] [rbp+300h]
  __int128 v89; // [rsp+410h] [rbp+310h]
  __int128 v90; // [rsp+420h] [rbp+320h]
  __int16 v91; // [rsp+430h] [rbp+330h]
  __int128 v92; // [rsp+440h] [rbp+340h]
  __int128 v93; // [rsp+450h] [rbp+350h]
  __int128 v94; // [rsp+460h] [rbp+360h]
  __int128 v95; // [rsp+470h] [rbp+370h]
  __int128 v96; // [rsp+480h] [rbp+380h]
  __int128 v97; // [rsp+490h] [rbp+390h]
  __int128 v98; // [rsp+4A0h] [rbp+3A0h]
  __int128 v99; // [rsp+4B0h] [rbp+3B0h]
  __int16 v100; // [rsp+4C0h] [rbp+3C0h]
  WCHAR v101[128]; // [rsp+4D0h] [rbp+3D0h] BYREF
  WCHAR packageFullName[232]; // [rsp+5D0h] [rbp+4D0h] BYREF

  LODWORD(v65) = a3;
  v75 = a5;
  memset_0(v80, 0, 0x218uLL);
  v7 = *(_QWORD *)(a2 + 544);
  v8 = 0LL;
  v73 = 0LL;
  v9 = 0LL;
  v62 = 0LL;
  RtlAcquireSRWLockShared((char *)a1 - 2216);
  v10 = *((_DWORD *)a1 - 557);
  P[0] = (PVOID)v7;
  v11 = -1LL << (v10 & 0x1F);
  v12 = v11 & (HIBYTE(v7)
             + 37
             * (BYTE6(v7)
              + 37
              * (BYTE5(v7)
               + 37
               * (BYTE4(v7)
                + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v7 + 11623883LL))))))));
  do
  {
    if ( v8 )
      goto LABEL_5;
    if ( !(v10 >> 5) )
    {
LABEL_91:
      RtlReleaseSRWLockShared((char *)a1 - 2216);
      v14 = 0LL;
      goto LABEL_65;
    }
    v8 = *((_QWORD *)a1 - 278)
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
         + HIBYTE(v12)) & ((v10 >> 5) - 1));
    do
    {
LABEL_5:
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        goto LABEL_91;
    }
    while ( v12 != (v11 & *(_QWORD *)(v8 + 8)) );
  }
  while ( v7 != *(_QWORD *)(v8 + 32) );
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
    __fastfail(0xEu);
  RtlReleaseSRWLockShared((char *)a1 - 2216);
  if ( *(_BYTE *)(v8 + 656) != a4 && a4 != 2 )
  {
    RmpObjectRelease((PVOID)v8);
    return 3221225520LL;
  }
  RmpAcquireGlobalLock();
  v14 = 0LL;
  if ( RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v8 + 64)) )
  {
    v9 = v13;
    v15 = 0;
  }
  else
  {
    v15 = -1073741275;
  }
  RmpReleaseGlobalLock();
  if ( v8 )
    RmpObjectRelease((PVOID)v8);
  if ( v15 >= 0 )
  {
    v16 = (const wchar_t *)88;
    if ( v9 )
      v16 = (const wchar_t *)((char *)v9 + 24);
    if ( !_wcsicmp((const wchar_t *)a2, v16) && !memcmp_0((const void *)(a2 + 464), v16 + 232, 0x58uLL) )
    {
      result = 0LL;
      *v75 = v9;
      return result;
    }
    v15 = -1073741584;
  }
  if ( v9 )
    RmHamHostDereference(v9);
  if ( v15 != -1073741275 )
    return (unsigned int)v15;
LABEL_65:
  v33 = *(_DWORD *)(a2 + 536);
  v76 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 2248);
  Handle = 0LL;
  v69 = 0LL;
  v34 = 0LL;
  v35 = RmpSystemQueryPackagePartitions((const unsigned __int16 *)a2, v33, &Handle, 0LL, 0LL);
  v36 = Handle;
  State = v35;
  if ( v35 >= 0 )
  {
    State = RmpPartitionTableFindOrCreatePartition((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 - 1936), Handle, &v69);
    if ( State < 0 )
    {
      v34 = (HANDLE *)v69;
    }
    else
    {
      State = 0;
      v73 = v69;
      v69 = 0LL;
    }
  }
  if ( (((unsigned __int64)v36 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    NtClose(v36);
  if ( v34 )
    RmpPartitionRelease(v34);
  if ( State < 0 )
    goto LABEL_48;
  v37 = *(_DWORD *)(a2 + 532);
  v38 = RtlLengthSid((PSID)(a2 + 464));
  memset_0(v80, 0, 0x218uLL);
  if ( (unsigned __int8)PsmIsValidKey(a2) && v38 >= 0xC && RtlValidSid((PSID)(a2 + 464)) )
    RtlLengthSid((PSID)(a2 + 464));
  v39 = v80;
  v40 = 232LL;
  do
  {
    if ( v40 == -2147483414 )
      break;
    v41 = *(_WORD *)((char *)v39 + a2 - (_QWORD)v80);
    if ( !v41 )
      break;
    *v39++ = v41;
    --v40;
  }
  while ( v40 );
  v42 = v39 - 1;
  if ( v40 )
    v42 = v39;
  *v42 = 0;
  RtlCopySid(0x44u, SourceSid, (PSID)(a2 + 464));
  v82 = v37;
  v63 = ((unsigned int)v65 >> 2) & 1;
  v68 = 0LL;
  v100 = 0;
  v26 = 0LL;
  packageFamilyNameLength = 0;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  memset_0(packageFullName, 0, 0x1CEuLL);
  v71 = 462;
  v43 = 65LL;
  if ( (int)PsmGetPackageFullNameFromKey(v80, packageFullName, &v71) >= 0 )
  {
    packageFamilyNameLength = 65;
    v91 = 0;
    *(_OWORD *)packageFamilyName = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    v86 = 0LL;
    v87 = 0LL;
    v88 = 0LL;
    v89 = 0LL;
    v90 = 0LL;
    if ( !PackageFamilyNameFromFullName(packageFullName, &packageFamilyNameLength, packageFamilyName) )
    {
      v92 = *(_OWORD *)packageFamilyName;
      v93 = v84;
      v94 = v85;
      v95 = v86;
      v96 = v87;
      v97 = v88;
      v98 = v89;
      v99 = v90;
      v100 = v91;
    }
  }
  v44 = v82;
  memset_0(v77, 0, 0xCCuLL);
  v45 = v77;
  do
  {
    if ( v43 == -2147483581 )
      break;
    v46 = v45[448];
    if ( !v46 )
      break;
    *v45++ = v46;
    --v43;
  }
  while ( v43 );
  v18 = v45 - 1;
  if ( v43 )
    v18 = v45;
  *v18 = 0;
  RtlCopySid(0x44u, DestinationSid, SourceSid);
  v79 = v44;
  v70 = 0LL;
  v19 = HampUserFindOrCreate(a1, (union _RM_SID *)DestinationSid, v44, &v70);
  v20 = v70;
  State = v19;
  if ( v19 < 0 )
    goto LABEL_36;
  RtlAcquireSRWLockShared((char *)v70 + 56);
  v22 = *((_BYTE *)v20 + 48) & 1;
  if ( (*((_BYTE *)v20 + 48) & 1) != 0 )
  {
    v59 = *((_QWORD *)v20 + 5);
    if ( !v59 )
      goto LABEL_95;
    v23 = v59 ^ ((unsigned __int64)v20 + 40);
  }
  else
  {
    v23 = *((_QWORD *)v20 + 5);
  }
  if ( v23 )
  {
    while ( 1 )
    {
      v24 = HampPkgCompareByIdentity(v77, (void *)v23);
      if ( v24 < 0 )
      {
        v25 = *(_QWORD *)v23;
        if ( !v22 )
          goto LABEL_29;
      }
      else
      {
        if ( v24 <= 0 )
          goto LABEL_31;
        v25 = *(_QWORD *)(v23 + 8);
        if ( !v22 )
          goto LABEL_29;
      }
      if ( v25 )
      {
        v23 ^= v25;
        goto LABEL_30;
      }
LABEL_29:
      v23 = v25;
LABEL_30:
      if ( !v23 )
      {
LABEL_31:
        if ( v23 && *(_QWORD *)(v23 + 24) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24)) <= 1 )
            __fastfail(0xEu);
          RtlReleaseSRWLockShared((char *)v20 + 56);
          v20 = v70;
          v26 = (struct _HAM_PACKAGE *)v23;
LABEL_35:
          State = 0;
          goto LABEL_36;
        }
        break;
      }
    }
  }
LABEL_95:
  RtlReleaseSRWLockShared((char *)v20 + 56);
  Heap = (struct _HAM_PACKAGE *)HampAllocateHeap(0x160uLL);
  v48 = Heap;
  if ( Heap )
  {
    HampPkgInitialize(v20, (struct _HAM_PACKAGE_INFO *)v77, Heap);
    P[0] = 0LL;
    v14 = v48;
    CemRcTableFindOrInsertEx((_DWORD)v20 + 40, (_DWORD)v48 + 96, (unsigned int)HampPkgCompareByIdentity, (_DWORD)v48);
    v26 = 0LL;
    goto LABEL_35;
  }
  State = -1073741801;
LABEL_36:
  if ( v20 )
    CemRcObjectDereference(v20);
  if ( v14 )
    CemRcObjectDereference(v14);
  if ( State >= 0 )
  {
    App = HampPkgFindApp(v26, (struct _RM_PSM_KEY *)v80);
    if ( App )
    {
      v27 = App;
      v62 = App;
      State = 0;
      goto LABEL_42;
    }
    v66 = 256;
    PsmGetPackageFullNameFromKey(v80, v101, &v66);
    if ( HampSystemAppCompatIsPackageBlocked(v101, v63) )
    {
      State = -1058275320;
    }
    else
    {
      v31 = (struct _HAM_APPLICATION *)HampAllocateHeap(0x270uLL);
      v32 = v31;
      if ( v31 )
      {
        HampAppInitialize(v26, (struct _RM_PSM_KEY *)v80, v31);
        State = HampAppAllocateState(v32);
        if ( State >= 0 )
        {
          P[0] = 0LL;
          v28 = v32;
          CemRcTableFindOrInsertEx(
            (_DWORD)v26 + 40,
            (_DWORD)v32 + 96,
            (unsigned int)HampAppCompareByIdentity,
            (_DWORD)v32);
          v27 = 0LL;
          v62 = 0LL;
          State = 0;
          goto LABEL_43;
        }
        CemRcObjectDereference(v32);
      }
      else
      {
        State = -1073741801;
      }
    }
  }
  v27 = 0LL;
LABEL_42:
  v28 = v68;
LABEL_43:
  if ( v26 )
    CemRcObjectDereference(v26);
  if ( v28 )
    CemRcObjectDereference(v28);
  if ( State < 0 )
    goto LABEL_48;
  RmpAcquireGlobalLock();
  v51 = v76;
  v52 = *(_QWORD *)(a2 + 544);
  P[0] = 0LL;
  if ( (int)RmpActivityHostFindByHostId(v76, v52, a4, P) >= 0 )
    goto LABEL_103;
  v53 = (char)v65;
  v54 = (char)v65;
  v65 = 0LL;
  v72 = 0LL;
  v55 = v54 & 1;
  v56 = v53 & 2;
  State = RmpPsmAppFamilyTableFindOrCreate(v51, (struct _RM_PSM_HOST_INFO *)a2, &v65);
  if ( State < 0 )
  {
    v49 = v65;
  }
  else
  {
    v57 = v55 | 2;
    if ( !v56 )
      v57 = v55;
    v58 = RmpActivityHostAllocateAndInitialize(v51, v73, (struct _RM_PSM_HOST_INFO *)a2, v27, v57, &v72);
    v50 = v72;
    State = v58;
    if ( v58 < 0 )
    {
      v49 = v65;
    }
    else
    {
      v49 = 0LL;
      State = RmpPsmAppFamilyAddActivityHost(v65, v72);
      if ( State >= 0 )
      {
        RmpActivityHostCompleteInitialization(v50);
LABEL_104:
        RmHamHostReferenceUnsafe((struct _RM_ACTIVITY_HOST *)((char *)v50 + 64));
        RmpReleaseGlobalLock();
        State = 0;
        *v75 = (struct _RM_ACTIVITY_HOST *)((char *)v50 + 64);
        if ( v50 )
          RmpObjectRelease(v50);
        goto LABEL_48;
      }
    }
    if ( v50 )
    {
      RmpPsmAppFamilyTableTryRemoveActivityHost(v50);
      RmpActivityHostCleanupCommonState(v50);
      HampFreeHeap(v50);
    }
  }
  if ( v49 && !*((_QWORD *)v49 + 69) )
    RmpPsmAppFamilyTableRemove(v51, v49);
  if ( State >= 0 )
  {
LABEL_103:
    v50 = (struct _RM_ACTIVITY_HOST *)P[0];
    goto LABEL_104;
  }
  RmpReleaseGlobalLock();
  if ( State == -1058275322 )
  {
    v29 = v62;
    if ( *(_DWORD *)(a2 + 536) == 4 )
      State = -1058275325;
    else
      HampAppQueueTerminate(v62, v60, 4864LL);
    goto LABEL_49;
  }
LABEL_48:
  v29 = v62;
LABEL_49:
  if ( v73 )
    RmpPartitionRelease((HANDLE *)v73);
  if ( v29 )
    CemRcObjectDereference(v29);
  return (unsigned int)State;
}
