/*
 * XREFs of CmLoadAppKey @ 0x1409122B0
 * Callers:
 *     CmLoadDifferencingKey @ 0x140913148 (CmLoadDifferencingKey.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfWaitForRundownProtectionRelease @ 0x14036DCCC (ExfWaitForRundownProtectionRelease.c)
 *     ExBlockOnAddressPushLock @ 0x14036E7C0 (ExBlockOnAddressPushLock.c)
 *     _tlgWriteAgg @ 0x1403BAC2C (_tlgWriteAgg.c)
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x140428104 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     PsGetProcessImageFileName @ 0x14044CF60 (PsGetProcessImageFileName.c)
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14065C6B4 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpGetNextHive @ 0x1408484DC (CmpGetNextHive.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     LOCK_HIVE_LOAD @ 0x140883970 (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408839E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14089F140 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpLockAppHiveLoadList @ 0x1409117E8 (CmpLockAppHiveLoadList.c)
 *     CmpUnlockAppHiveLoadList @ 0x14091184C (CmpUnlockAppHiveLoadList.c)
 *     CmpGetLastHive @ 0x1409118B0 (CmpGetLastHive.c)
 *     CmpCmdHiveOpen @ 0x140911900 (CmpCmdHiveOpen.c)
 *     CmpIsThisSameFile @ 0x1409121CC (CmpIsThisSameFile.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BA9B58 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BA9B98 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpSplitParentKeyName @ 0x140BA9DFC (CmpSplitParentKeyName.c)
 */

__int64 __fastcall CmLoadAppKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct _KEVENT *a6,
        POBJECT_HANDLE_INFORMATION a7,
        char a8,
        __int64 *a9,
        ULONG_PTR *a10)
{
  unsigned __int16 *v11; // rax
  char v12; // r15
  volatile signed __int32 *LastHive; // r12
  _QWORD *v14; // r13
  unsigned int v15; // ecx
  __int64 Pool; // rsi
  unsigned int i; // edx
  __int64 v18; // r8
  char v19; // r14
  UNICODE_STRING *v20; // rdi
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int KeyCommon; // ebx
  __int64 j; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  char v29; // al
  int v30; // r11d
  unsigned int v31; // edx
  __int64 v32; // rcx
  int v34; // eax
  __int64 v35; // rcx
  volatile signed __int32 *v36; // rcx
  __int64 *NextHive; // rax
  __int64 *v38; // rdi
  _BYTE *v39; // r15
  void *v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // rcx
  char v46; // al
  const CHAR *ProcessImageFileName; // rax
  __int64 v48; // r8
  __int64 *v49; // rcx
  __int64 **v50; // rax
  unsigned __int64 v51; // rax
  struct _EX_RUNDOWN_REF *v52; // rdx
  _QWORD *v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 *v60; // rbx
  __int64 v61; // rcx
  ULONG_PTR *v62; // rcx
  int v63; // r9d
  char v64; // al
  int v65; // r9d
  int v66; // r10d
  struct _EX_RUNDOWN_REF *v67; // rax
  __int64 v68; // rbx
  struct _EX_RUNDOWN_REF *v69; // rbx
  __int64 v70; // r8
  int v71; // edx
  int v72; // r9d
  int v73; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  _WORD v75[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v76; // [rsp+64h] [rbp-9Ch] BYREF
  char v77; // [rsp+66h] [rbp-9Ah]
  int v78; // [rsp+68h] [rbp-98h] BYREF
  int v79; // [rsp+6Ch] [rbp-94h] BYREF
  int v80; // [rsp+70h] [rbp-90h] BYREF
  __int64 v81; // [rsp+78h] [rbp-88h] BYREF
  __int64 v82; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  int v84; // [rsp+90h] [rbp-70h] BYREF
  int v85; // [rsp+94h] [rbp-6Ch] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  int v87; // [rsp+A0h] [rbp-60h]
  int v88; // [rsp+A4h] [rbp-5Ch]
  int v89; // [rsp+A8h] [rbp-58h] BYREF
  PCUNICODE_STRING String2; // [rsp+B0h] [rbp-50h]
  __int64 *v91; // [rsp+C0h] [rbp-40h] BYREF
  __int64 **v92; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v93; // [rsp+D0h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v94; // [rsp+D8h] [rbp-28h]
  UNICODE_STRING *v95; // [rsp+E0h] [rbp-20h]
  char v96; // [rsp+E8h] [rbp-18h]
  struct _KEVENT Event; // [rsp+F0h] [rbp-10h] BYREF
  signed __int64 v98; // [rsp+108h] [rbp+8h] BYREF
  PVOID v99; // [rsp+110h] [rbp+10h] BYREF
  __int64 v100; // [rsp+118h] [rbp+18h]
  PVOID v101; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v102; // [rsp+128h] [rbp+28h]
  ULONG_PTR *v103; // [rsp+130h] [rbp+30h]
  __int64 v104; // [rsp+138h] [rbp+38h] BYREF
  __int64 v105; // [rsp+140h] [rbp+40h] BYREF
  __int64 v106; // [rsp+148h] [rbp+48h] BYREF
  __int64 *v107; // [rsp+150h] [rbp+50h]
  struct _KEVENT *v108; // [rsp+158h] [rbp+58h]
  __int128 v109; // [rsp+160h] [rbp+60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v111[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v112; // [rsp+1C0h] [rbp+C0h]
  __int64 v113; // [rsp+1C8h] [rbp+C8h]
  int *v114; // [rsp+1D0h] [rbp+D0h]
  __int64 v115; // [rsp+1D8h] [rbp+D8h]
  int *v116; // [rsp+1E0h] [rbp+E0h]
  __int64 v117; // [rsp+1E8h] [rbp+E8h]
  int *v118; // [rsp+1F0h] [rbp+F0h]
  __int64 v119; // [rsp+1F8h] [rbp+F8h]
  int *v120; // [rsp+200h] [rbp+100h]
  __int64 v121; // [rsp+208h] [rbp+108h]
  __int64 v122; // [rsp+210h] [rbp+110h]
  __int64 v123; // [rsp+218h] [rbp+118h]
  __int64 v124; // [rsp+220h] [rbp+120h]
  __int64 v125; // [rsp+228h] [rbp+128h]
  __int64 v126; // [rsp+230h] [rbp+130h]
  __int64 v127; // [rsp+238h] [rbp+138h]
  __int64 v128; // [rsp+240h] [rbp+140h]
  __int64 v129; // [rsp+248h] [rbp+148h]
  __int64 v130; // [rsp+250h] [rbp+150h]
  __int64 v131; // [rsp+258h] [rbp+158h]
  __int64 v132; // [rsp+260h] [rbp+160h]
  int v133; // [rsp+268h] [rbp+168h]
  int v134; // [rsp+26Ch] [rbp+16Ch]
  __int64 *v135; // [rsp+270h] [rbp+170h]
  __int64 v136; // [rsp+278h] [rbp+178h]
  char v137[32]; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v138; // [rsp+2A0h] [rbp+1A0h]
  __int64 v139; // [rsp+2A8h] [rbp+1A8h]
  char v140[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _DWORD *v141; // [rsp+2C0h] [rbp+1C0h]
  __int64 v142; // [rsp+2C8h] [rbp+1C8h]
  __int64 v143; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v144[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 *v145; // [rsp+2E0h] [rbp+1E0h]
  __int64 v146; // [rsp+2E8h] [rbp+1E8h]

  v81 = a5;
  v108 = a6;
  v107 = a9;
  v79 = a3;
  String2 = a2;
  v82 = (__int64)a1;
  v103 = a10;
  v100 = (__int64)a7;
  v84 = 0;
  Handle = 0LL;
  memset_0(&v91, 0, 0x50uLL);
  v11 = (unsigned __int16 *)a1[2];
  LOBYTE(v76) = 0;
  v12 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  LOBYTE(v75[0]) = 0;
  LastHive = 0LL;
  v77 = 0;
  v14 = 0LL;
  v15 = *v11;
  Pool = 0LL;
  P = 0LL;
  v102 = 0LL;
  v109 = 0LL;
  if ( (unsigned __int16)v15 >= 2u )
  {
    for ( i = v15 >> 1; i; *(_WORD *)v18 -= 2 )
    {
      v18 = a1[2];
      if ( *(_WORD *)(*(_QWORD *)(v18 + 8) + 2LL * --i) != 92 )
        break;
    }
  }
  v19 = 1;
  if ( *(_WORD *)a1[2] < 2u )
  {
    KeyCommon = -1073741811;
    goto LABEL_133;
  }
  Pool = CmpAllocatePool(0x100uLL);
  if ( !Pool )
  {
    KeyCommon = -1073741670;
    goto LABEL_133;
  }
  if ( !(unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    KeyCommon = -1073741431;
    goto LABEL_36;
  }
  v20 = (UNICODE_STRING *)String2;
  v88 = v79 & 0x20;
  v21 = (v88 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v79 & 0x80u) == 0 )
    v21 = v88 != 0 ? 119078913 : 51970049;
  v22 = v21 | 0x10000000;
  if ( (v79 & 0x200) == 0 )
    v22 = v21;
  v87 = v22;
  v78 = v79 & 0x2000;
  v23 = (v78 != 0) | 0x20;
  if ( (v79 & 0x8000) == 0 )
    v23 = (v79 & 0x2000) != 0;
  v80 = v23;
  v24 = CmpOpenHiveFile(String2, 0, &Handle, &v84, 8u, a7, 0LL, 0LL, (__int64)&P, Pool);
  KeyCommon = v24;
  if ( v24 == -1073741772 )
  {
    LOBYTE(v75[0]) = 1;
    v95 = v20;
    v96 = 1;
  }
  else
  {
    if ( v24 < 0 )
    {
      SetFailureLocation(Pool, 0, 32, v24, 16);
      goto LABEL_28;
    }
    v99 = 0LL;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v99, 0LL);
    v14 = v99;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(Pool, 0, 32, KeyCommon, 32);
      goto LABEL_26;
    }
    v95 = (UNICODE_STRING *)v14[5];
    v96 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v98 = 0LL;
  v94 = (struct _EX_RUNDOWN_REF *)&v93;
  v93 = (unsigned __int64)&v93;
  CmpLockAppHiveLoadList();
  for ( j = CmpAppHiveLoadList; ; j = *(_QWORD *)j )
  {
    if ( (__int64 *)j == &CmpAppHiveLoadList )
    {
      if ( *(__int64 **)qword_140EF52B8 == &CmpAppHiveLoadList )
      {
        v91 = &CmpAppHiveLoadList;
        v92 = (__int64 **)qword_140EF52B8;
        *(_QWORD *)qword_140EF52B8 = &v91;
        qword_140EF52B8 = (__int64)&v91;
        CmpUnlockAppHiveLoadList();
        goto LABEL_45;
      }
LABEL_20:
      __fastfail(3u);
    }
    if ( *(_BYTE *)(j + 40) )
      break;
    if ( *(UNICODE_STRING **)(j + 32) == v95 )
      goto LABEL_101;
LABEL_43:
    ;
  }
  if ( !RtlEqualUnicodeString(*(PCUNICODE_STRING *)(j + 32), v20, 1u) )
    goto LABEL_43;
LABEL_101:
  v67 = *(struct _EX_RUNDOWN_REF **)(j + 24);
  v68 = j + 16;
  if ( v67->Count != v68 )
    goto LABEL_20;
  v94 = v67;
  v93 = v68;
  v67->Count = (unsigned __int64)&v93;
  *(_QWORD *)(v68 + 8) = &v93;
  v69 = v94;
  ExAcquireRundownProtection_0(v94 + 7);
  CmpUnlockAppHiveLoadList();
  KeWaitForSingleObject(&v69[4], Executive, 0, 0, 0LL);
  ExReleaseRundownProtection_0(v69 + 7);
  while ( 1 )
  {
LABEL_45:
    v104 = 0LL;
    v76 = 256;
    v34 = CmpCmdHiveOpen(
            &v20->Length,
            1,
            (_BYTE *)&v76 + 1,
            (__int64)&v104,
            v87,
            v80,
            v100,
            (__int64)&v76,
            (void *)Pool);
    KeyCommon = v34;
    if ( !v34 )
    {
      KeyCommon = CmpLoadKeyCommon(v104, (_QWORD *)v82, v79, v81, 0LL, v108, a8, v103, SHIBYTE(v76), v76, Pool);
      goto LABEL_74;
    }
    if ( v34 != -1073741757 || v88 || v12 )
    {
      SetFailureLocation(Pool, 0, 32, v34, 48);
      goto LABEL_74;
    }
    if ( LOBYTE(v75[0]) )
    {
      KeyCommon = CmpOpenHiveFile(v20, 0, &Handle, &v84, 8u, (void *)v100, 0LL, 0LL, (__int64)&P, Pool);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_132:
        v63 = KeyCommon;
LABEL_89:
        SetFailureLocation(Pool, 0, 32, v63, Object);
        goto LABEL_74;
      }
      v101 = 0LL;
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v101, 0LL);
      v14 = v101;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        Object = 80;
        goto LABEL_132;
      }
    }
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
    CmpUnlockRegistry(v35);
    UNLOCK_HIVE_LOAD();
    v12 = 1;
  }
  while ( 2 )
  {
    while ( 1 )
    {
      v85 = CmpActiveAppHiveUnloadCount;
      if ( !CmpActiveAppHiveUnloadCount )
        break;
      CmpUnlockRegistry(v35);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v85, 4LL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
    }
    v36 = 0LL;
LABEL_53:
    NextHive = CmpGetNextHive(v36);
    v38 = NextHive;
    if ( !NextHive )
      goto LABEL_86;
    v39 = NextHive + 596;
    v89 = *((_DWORD *)NextHive + 1192);
    if ( v89 )
    {
      CmpUnlockRegistry(v35);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v38 + 597, v39, &v89, 4LL, 0LL);
      LOCK_HIVE_LOAD();
      CmpLockRegistryFreezeAware(1);
      CmpDereferenceHive((volatile signed __int32 *)v38);
      if ( v38 == (__int64 *)LastHive )
        goto LABEL_86;
      continue;
    }
    break;
  }
  v40 = (void *)NextHive[193];
  if ( !v40 )
  {
    if ( NextHive == (__int64 *)LastHive )
    {
      CmpDereferenceHive((volatile signed __int32 *)NextHive);
      goto LABEL_86;
    }
    goto LABEL_57;
  }
  if ( !CmpIsThisSameFile((__int64)v14, v40) )
  {
    if ( v38 == (__int64 *)LastHive )
      goto LABEL_85;
LABEL_57:
    v36 = (volatile signed __int32 *)v38;
    goto LABEL_53;
  }
  v42 = *((_DWORD *)v38 + 1028);
  v43 = v38[20] & 0x8000;
  if ( (v42 & 0x20) == 0 || (v42 & 0x40) != 0 )
  {
    CmpUnlockRegistry(v41);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v38);
    Object = 96;
LABEL_88:
    KeyCommon = -1073741757;
    v63 = -1073741757;
    goto LABEL_89;
  }
  CmpSplitParentKeyName(v38 + 230, 0LL, &v109);
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    if ( (qword_140E09E18 & 0x400000000008LL) == 0 || (v46 = 1, (qword_140E09E20 & 0x400000000008LL) != qword_140E09E20) )
      v46 = 0;
    if ( v46 )
    {
      v105 = 1LL;
      v138 = &v105;
      v139 = 8LL;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
      tlgCreate1Sz_char((__int64)v140, ProcessImageFileName);
      v143 = *((_QWORD *)&v109 + 1);
      v144[0] = (unsigned __int16)v109;
      v145 = &v106;
      v141 = v144;
      v142 = 2LL;
      v144[1] = 0;
      v106 = 0x1000000LL;
      v146 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09E08, (unsigned __int8 *)byte_1400534E5, v48, 7u, (__int64)v137);
    }
  }
  if ( !v78 )
  {
    if ( !v43 )
      goto LABEL_83;
    CmpUnlockRegistry(v44);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v38);
    Object = 112;
    goto LABEL_88;
  }
  if ( !v43 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
  {
    CmpUnlockRegistry(v45);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v38);
    KeyCommon = -1073741790;
    Object = 128;
    goto LABEL_132;
  }
LABEL_83:
  CmpAttachToRegistryProcess(&ApcState);
  v55 = v38[367];
  v102 = v38;
  v59 = CmpConstructName(v55, v56, v57, v58);
  v60 = v107;
  *v107 = v59;
  CmpDetachFromRegistryProcess(&ApcState);
  if ( *v60 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v38[367]);
    v62 = v103;
    *v103 = v38[367];
    CmpUnlockRegistry(v62);
    UNLOCK_HIVE_LOAD();
    KeyCommon = 0;
LABEL_85:
    CmpDereferenceHive((volatile signed __int32 *)v38);
    if ( v102 )
    {
      v77 = 1;
      goto LABEL_74;
    }
LABEL_86:
    CmpUnlockRegistry(v35);
    UNLOCK_HIVE_LOAD();
    v20 = (UNICODE_STRING *)String2;
    v12 = 1;
    goto LABEL_45;
  }
  CmpUnlockRegistry(v61);
  UNLOCK_HIVE_LOAD();
  KeyCommon = -1073741670;
  CmpDereferenceHive((volatile signed __int32 *)v38);
LABEL_74:
  CmpLockAppHiveLoadList();
  v49 = v91;
  v50 = v92;
  if ( (__int64 **)v91[1] != &v91 || *v92 != (__int64 *)&v91 )
    goto LABEL_20;
  *v92 = v91;
  v49[1] = (__int64)v50;
  v51 = v93;
  if ( (unsigned __int64 *)v93 == &v93 )
    goto LABEL_22;
  v52 = v94;
  v53 = (_QWORD *)(v93 - 16);
  if ( *(unsigned __int64 **)(v93 + 8) != &v93 )
    goto LABEL_20;
  if ( (unsigned __int64 *)v94->Count != &v93 )
    goto LABEL_20;
  v94->Count = v93;
  *(_QWORD *)(v51 + 8) = v52;
  v54 = (_QWORD *)qword_140EF52B8;
  if ( *(__int64 **)qword_140EF52B8 != &CmpAppHiveLoadList )
    goto LABEL_20;
  *v53 = &CmpAppHiveLoadList;
  v53[1] = v54;
  *v54 = v53;
  qword_140EF52B8 = (__int64)v53;
LABEL_22:
  CmpUnlockAppHiveLoadList();
  KeSetEvent(&Event, 0, 0);
  v27 = _InterlockedCompareExchange64(&v98, 1LL, 0LL);
  if ( v27 >= 2 )
    ExfWaitForRundownProtectionRelease(&v98, v27);
  if ( LastHive )
    CmpDereferenceHive(LastHive);
LABEL_26:
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_28:
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpReleaseHiveLoadUnloadRundown();
  if ( KeyCommon < 0 )
  {
LABEL_36:
    v30 = *(unsigned __int16 *)(Pool + 8);
    if ( *(_DWORD *)(Pool + 8) || *(_BYTE *)(Pool + 394) )
    {
      v31 = dword_140E09E08;
      v32 = qword_140E09E20;
      if ( (unsigned int)dword_140E09E08 > 5 )
      {
        if ( (qword_140E09E18 & 0x400000000008LL) == 0
          || (v64 = 1, (qword_140E09E20 & 0x400000000008LL) != qword_140E09E20) )
        {
          v64 = 0;
        }
        if ( v64 )
        {
          v82 = 1LL;
          v65 = *(unsigned __int16 *)(Pool + 10);
          v66 = *(unsigned __int8 *)(Pool + 394);
          v112 = (int *)&v82;
          v114 = &v78;
          v116 = (int *)v75;
          v118 = &v80;
          v120 = &v79;
          v122 = Pool + 8;
          v124 = Pool + 12;
          v128 = Pool + 108;
          v129 = (unsigned int)(12 * v65);
          v132 = Pool + 396;
          v135 = &v81;
          LOWORD(v79) = v66;
          LOWORD(v80) = v65;
          v125 = (unsigned int)(12 * v30);
          v126 = Pool + 10;
          v113 = 8LL;
          v78 = KeyCommon;
          v115 = 4LL;
          v75[0] = v30;
          v117 = 2LL;
          v119 = 2LL;
          v121 = 2LL;
          v123 = 2LL;
          v127 = 2LL;
          v130 = Pool + 394;
          v131 = 2LL;
          v133 = 8 * v66;
          v134 = 0;
          v81 = 0x1000000LL;
          v136 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09E08, (unsigned __int8 *)&unk_1400535A0, Pool + 394, 0xEu, (__int64)v111);
          v32 = qword_140E09E20;
          v31 = dword_140E09E08;
        }
        if ( v31 > 5 )
        {
          if ( (qword_140E09E18 & 8) == 0 || (v32 & 8) != v32 )
            v19 = 0;
          if ( v19 )
          {
            v71 = *(unsigned __int16 *)(Pool + 8);
            v72 = *(unsigned __int16 *)(Pool + 10);
            v73 = *(unsigned __int8 *)(Pool + 394);
            v112 = &v78;
            v114 = &v79;
            v116 = &v80;
            v118 = (int *)v75;
            v120 = (int *)(Pool + 8);
            v122 = Pool + 12;
            v123 = (unsigned int)(12 * v71);
            v126 = Pool + 108;
            v127 = (unsigned int)(12 * v72);
            v130 = Pool + 396;
            v75[0] = v73;
            LOWORD(v79) = v71;
            LOWORD(v80) = v72;
            v124 = Pool + 10;
            v128 = Pool + 394;
            v78 = KeyCommon;
            v113 = 4LL;
            v115 = 2LL;
            v117 = 2LL;
            v119 = 2LL;
            v121 = 2LL;
            v125 = 2LL;
            v129 = 2LL;
            v131 = (unsigned int)(8 * v73);
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E09E08,
              (unsigned __int8 *)byte_140053703,
              0LL,
              0LL,
              0xCu,
              v111);
          }
        }
      }
LABEL_38:
      if ( Pool )
        goto LABEL_39;
      return (unsigned int)KeyCommon;
    }
LABEL_133:
    if ( (unsigned int)dword_140E09E08 > 5 && tlgKeywordOn((__int64)&dword_140E09E08, 0x400000000008LL) )
    {
      v82 = 1LL;
      v112 = (int *)&v82;
      v113 = 8LL;
      v114 = &v78;
      v78 = KeyCommon;
      v116 = (int *)&v81;
      v115 = 4LL;
      v81 = 0x1000000LL;
      v117 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09E08, (unsigned __int8 *)byte_140053547, v70, 5u, (__int64)v111);
    }
    goto LABEL_38;
  }
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    if ( (qword_140E09E18 & 0x400000000008LL) == 0 || (v29 = 1, (qword_140E09E20 & 0x400000000008LL) != qword_140E09E20) )
      v29 = 0;
    if ( v29 )
    {
      v82 = 1LL;
      v112 = (int *)&v82;
      v113 = 8LL;
      v114 = &v78;
      LOBYTE(v75[0]) = v77;
      v116 = (int *)v75;
      v118 = (int *)&v81;
      v78 = KeyCommon;
      v115 = 4LL;
      v117 = 1LL;
      v81 = 0x1000000LL;
      v119 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09E08, (unsigned __int8 *)byte_14005383F, v28, 6u, (__int64)v111);
    }
  }
LABEL_39:
  CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  return (unsigned int)KeyCommon;
}
