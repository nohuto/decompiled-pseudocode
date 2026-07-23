/*
 * XREFs of CmLoadAppKey @ 0x14092FCDC
 * Callers:
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     _tlgWriteAgg @ 0x140273698 (_tlgWriteAgg.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1402BB63C (ExfWaitForRundownProtectionRelease.c)
 *     ExBlockOnAddressPushLock @ 0x1402BB7C0 (ExBlockOnAddressPushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     PsGetProcessImageFileName @ 0x140443BB0 (PsGetProcessImageFileName.c)
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x140666A1C (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpGetNextHive @ 0x14084051C (CmpGetNextHive.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     CmpIsThisSameFile @ 0x1409309D8 (CmpIsThisSameFile.c)
 *     CmpCmdHiveOpen @ 0x140930A5C (CmpCmdHiveOpen.c)
 *     CmpGetLastHive @ 0x140930D0C (CmpGetLastHive.c)
 *     CmpOpenHiveFile @ 0x140931FA4 (CmpOpenHiveFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpUnlockAppHiveLoadList @ 0x140A32098 (CmpUnlockAppHiveLoadList.c)
 *     CmpLockAppHiveLoadList @ 0x140A33118 (CmpLockAppHiveLoadList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpSplitParentKeyName @ 0x140BBBD74 (CmpSplitParentKeyName.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
  const UNICODE_STRING *v20; // rdi
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
  char v34; // al
  int v35; // r9d
  int v36; // r10d
  struct _EX_RUNDOWN_REF *v37; // rax
  __int64 v38; // rbx
  struct _EX_RUNDOWN_REF *v39; // rbx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  volatile signed __int32 *k; // rcx
  __int64 *NextHive; // rax
  __int64 *v45; // rdi
  _BYTE *v46; // r15
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  int v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // rcx
  char v53; // al
  const CHAR *ProcessImageFileName; // rax
  __int64 v55; // r8
  __int64 *v56; // rcx
  __int64 **v57; // rax
  unsigned __int64 v58; // rax
  struct _EX_RUNDOWN_REF *v59; // rdx
  _QWORD *v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 *v67; // rbx
  __int64 v68; // rcx
  ULONG_PTR *v69; // rcx
  __int64 v70; // rcx
  int v71; // r9d
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // edx
  int v75; // r9d
  int v76; // r10d
  int Object; // [rsp+20h] [rbp-E0h]
  _WORD v78[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v79; // [rsp+64h] [rbp-9Ch] BYREF
  char v80; // [rsp+65h] [rbp-9Bh]
  char v81; // [rsp+66h] [rbp-9Ah]
  int v82; // [rsp+68h] [rbp-98h] BYREF
  int v83; // [rsp+6Ch] [rbp-94h] BYREF
  int v84; // [rsp+70h] [rbp-90h] BYREF
  __int64 v85; // [rsp+78h] [rbp-88h] BYREF
  __int64 v86; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h]
  int v88; // [rsp+90h] [rbp-70h]
  int v89; // [rsp+94h] [rbp-6Ch] BYREF
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  int v91; // [rsp+A0h] [rbp-60h]
  int v92; // [rsp+A4h] [rbp-5Ch]
  int v93; // [rsp+A8h] [rbp-58h] BYREF
  PCUNICODE_STRING String2; // [rsp+B0h] [rbp-50h]
  __int64 *v95; // [rsp+C0h] [rbp-40h] BYREF
  __int64 **v96; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v97; // [rsp+D0h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v98; // [rsp+D8h] [rbp-28h]
  const UNICODE_STRING *v99; // [rsp+E0h] [rbp-20h]
  char v100; // [rsp+E8h] [rbp-18h]
  struct _KEVENT Event; // [rsp+F0h] [rbp-10h] BYREF
  signed __int64 v102; // [rsp+108h] [rbp+8h] BYREF
  PVOID v103; // [rsp+110h] [rbp+10h] BYREF
  POBJECT_HANDLE_INFORMATION v104; // [rsp+118h] [rbp+18h]
  PVOID v105; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v106; // [rsp+128h] [rbp+28h]
  ULONG_PTR *v107; // [rsp+130h] [rbp+30h]
  __int64 v108; // [rsp+138h] [rbp+38h]
  __int64 v109; // [rsp+140h] [rbp+40h] BYREF
  __int64 v110; // [rsp+148h] [rbp+48h] BYREF
  __int64 *v111; // [rsp+150h] [rbp+50h]
  struct _KEVENT *v112; // [rsp+158h] [rbp+58h]
  __int128 v113; // [rsp+160h] [rbp+60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+170h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v115[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v116; // [rsp+1C0h] [rbp+C0h]
  __int64 v117; // [rsp+1C8h] [rbp+C8h]
  int *v118; // [rsp+1D0h] [rbp+D0h]
  __int64 v119; // [rsp+1D8h] [rbp+D8h]
  __int64 *v120; // [rsp+1E0h] [rbp+E0h]
  __int64 v121; // [rsp+1E8h] [rbp+E8h]
  __int64 *v122; // [rsp+1F0h] [rbp+F0h]
  __int64 v123; // [rsp+1F8h] [rbp+F8h]
  int *v124; // [rsp+200h] [rbp+100h]
  __int64 v125; // [rsp+208h] [rbp+108h]
  __int64 v126; // [rsp+210h] [rbp+110h]
  __int64 v127; // [rsp+218h] [rbp+118h]
  __int64 v128; // [rsp+220h] [rbp+120h]
  __int64 v129; // [rsp+228h] [rbp+128h]
  __int64 v130; // [rsp+230h] [rbp+130h]
  __int64 v131; // [rsp+238h] [rbp+138h]
  __int64 v132; // [rsp+240h] [rbp+140h]
  __int64 v133; // [rsp+248h] [rbp+148h]
  __int64 v134; // [rsp+250h] [rbp+150h]
  __int64 v135; // [rsp+258h] [rbp+158h]
  __int64 v136; // [rsp+260h] [rbp+160h]
  int v137; // [rsp+268h] [rbp+168h]
  int v138; // [rsp+26Ch] [rbp+16Ch]
  __int64 *v139; // [rsp+270h] [rbp+170h]
  __int64 v140; // [rsp+278h] [rbp+178h]
  char v141[32]; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v142; // [rsp+2A0h] [rbp+1A0h]
  __int64 v143; // [rsp+2A8h] [rbp+1A8h]
  char v144[16]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _DWORD *v145; // [rsp+2C0h] [rbp+1C0h]
  __int64 v146; // [rsp+2C8h] [rbp+1C8h]
  __int64 v147; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v148[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 *v149; // [rsp+2E0h] [rbp+1E0h]
  __int64 v150; // [rsp+2E8h] [rbp+1E8h]

  v85 = a5;
  v112 = a6;
  v111 = a9;
  v83 = a3;
  String2 = a2;
  v86 = (__int64)a1;
  v107 = a10;
  v104 = a7;
  v88 = 0;
  Handle = 0LL;
  memset_0(&v95, 0, 0x50uLL);
  v11 = (unsigned __int16 *)a1[2];
  v79 = 0;
  v12 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  LOBYTE(v78[0]) = 0;
  LastHive = 0LL;
  v81 = 0;
  v14 = 0LL;
  v15 = *v11;
  Pool = 0LL;
  P = 0LL;
  v106 = 0LL;
  v113 = 0LL;
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
  Pool = CmpAllocatePool(0x100uLL, 0x1B0uLL, 0x33394D43u);
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
  v20 = String2;
  v92 = v83 & 0x20;
  v21 = (v92 != 0 ? 119078913 : 51970049) | 0x8000000;
  if ( (v83 & 0x80u) == 0 )
    v21 = v92 != 0 ? 119078913 : 51970049;
  v22 = v21 | 0x10000000;
  if ( (v83 & 0x200) == 0 )
    v22 = v21;
  v91 = v22;
  v82 = v83 & 0x2000;
  v23 = (v82 != 0) | 0x20;
  if ( (v83 & 0x8000) == 0 )
    v23 = (v83 & 0x2000) != 0;
  v84 = v23;
  v24 = CmpOpenHiveFile(String2, 8, (__int64)a7, 0LL, 0LL, (__int64)&P, Pool);
  KeyCommon = v24;
  if ( v24 == -1073741772 )
  {
    LOBYTE(v78[0]) = 1;
    v99 = v20;
    v100 = 1;
  }
  else
  {
    if ( v24 < 0 )
    {
      SetFailureLocation(Pool, 0, 32, v24, 16);
      goto LABEL_28;
    }
    v103 = 0LL;
    KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v103, 0LL);
    v14 = v103;
    ZwClose(Handle);
    if ( KeyCommon < 0 )
    {
      SetFailureLocation(Pool, 0, 32, KeyCommon, 32);
      goto LABEL_26;
    }
    v99 = (const UNICODE_STRING *)v14[5];
    v100 = 0;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v102 = 0LL;
  v98 = (struct _EX_RUNDOWN_REF *)&v97;
  v97 = (unsigned __int64)&v97;
  CmpLockAppHiveLoadList();
  for ( j = CmpAppHiveLoadList; (__int64 *)j != &CmpAppHiveLoadList; j = *(_QWORD *)j )
  {
    if ( *(_BYTE *)(j + 40) )
    {
      if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(j + 32), v20, 1u) )
      {
LABEL_55:
        v37 = *(struct _EX_RUNDOWN_REF **)(j + 24);
        v38 = j + 16;
        if ( v37->Count == v38 )
        {
          v98 = v37;
          v97 = v38;
          v37->Count = (unsigned __int64)&v97;
          *(_QWORD *)(v38 + 8) = &v97;
          v39 = v98;
          ExAcquireRundownProtection_0(v98 + 7);
          CmpUnlockAppHiveLoadList();
          KeWaitForSingleObject(&v39[4], Executive, 0, 0, 0LL);
          ExReleaseRundownProtection_0(v39 + 7);
          goto LABEL_58;
        }
LABEL_20:
        __fastfail(3u);
      }
    }
    else if ( *(const UNICODE_STRING **)(j + 32) == v99 )
    {
      goto LABEL_55;
    }
  }
  if ( *(__int64 **)qword_140EF57F8 != &CmpAppHiveLoadList )
    goto LABEL_20;
  v95 = &CmpAppHiveLoadList;
  v96 = (__int64 **)qword_140EF57F8;
  *(_QWORD *)qword_140EF57F8 = &v95;
  qword_140EF57F8 = (__int64)&v95;
  CmpUnlockAppHiveLoadList();
  while ( 1 )
  {
LABEL_58:
    v108 = 0LL;
    v80 = 1;
    v79 = 0;
    v40 = CmpCmdHiveOpen((_DWORD)v20, v91, v84, (__int64)v104, (__int64)&v79, Pool);
    KeyCommon = v40;
    if ( !v40 )
    {
      KeyCommon = CmpLoadKeyCommon(v108, (_QWORD *)v86, v83, v85, 0LL, v112, a8, v107, v80, v79, Pool);
      goto LABEL_87;
    }
    if ( v40 != -1073741757 || v92 || v12 )
    {
      SetFailureLocation(Pool, 0, 32, v40, 48);
      goto LABEL_87;
    }
    if ( LOBYTE(v78[0]) )
    {
      KeyCommon = CmpOpenHiveFile(v20, 8, (__int64)v104, 0LL, 0LL, (__int64)&P, Pool);
      if ( KeyCommon < 0 )
      {
        Object = 64;
        if ( KeyCommon == -1073741772 )
          KeyCommon = -1073741757;
LABEL_132:
        v71 = KeyCommon;
LABEL_102:
        SetFailureLocation(Pool, 0, 32, v71, Object);
        goto LABEL_87;
      }
      v105 = 0LL;
      KeyCommon = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &v105, 0LL);
      v14 = v105;
      ZwClose(Handle);
      if ( KeyCommon < 0 )
      {
        Object = 80;
        goto LABEL_132;
      }
    }
    LOCK_HIVE_LOAD();
    LOBYTE(v41) = 1;
    CmpLockRegistryFreezeAware(v41);
    LastHive = (volatile signed __int32 *)CmpGetLastHive();
    if ( LastHive )
      break;
    CmpUnlockRegistry(v42);
    UNLOCK_HIVE_LOAD();
    v12 = 1;
  }
LABEL_64:
  while ( 1 )
  {
    v89 = CmpActiveAppHiveUnloadCount;
    if ( !CmpActiveAppHiveUnloadCount )
      break;
    CmpUnlockRegistry(v42);
    UNLOCK_HIVE_LOAD();
    ExBlockOnAddressPushLock(&CmpActiveAppHiveUnloadEvent, &CmpActiveAppHiveUnloadCount, &v89, 4LL, 0LL);
    LOCK_HIVE_LOAD();
    LOBYTE(v70) = 1;
    CmpLockRegistryFreezeAware(v70);
  }
  for ( k = 0LL; ; k = (volatile signed __int32 *)v45 )
  {
    NextHive = CmpGetNextHive(k);
    v45 = NextHive;
    if ( !NextHive )
      goto LABEL_98;
    v46 = NextHive + 596;
    v93 = *((_DWORD *)NextHive + 1192);
    if ( v93 )
    {
      CmpUnlockRegistry(v42);
      UNLOCK_HIVE_LOAD();
      ExBlockOnAddressPushLock(v45 + 597, v46, &v93, 4LL, 0LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v72) = 1;
      CmpLockRegistryFreezeAware(v72);
      CmpDereferenceHive((volatile signed __int32 *)v45);
      if ( v45 == (__int64 *)LastHive )
        goto LABEL_98;
      goto LABEL_64;
    }
    v47 = NextHive[193];
    if ( v47 )
      break;
    if ( NextHive == (__int64 *)LastHive )
    {
      CmpDereferenceHive((volatile signed __int32 *)NextHive);
      goto LABEL_98;
    }
LABEL_70:
    ;
  }
  if ( !(unsigned __int8)CmpIsThisSameFile(v14, v47) )
  {
    if ( v45 == (__int64 *)LastHive )
      goto LABEL_97;
    goto LABEL_70;
  }
  v49 = *((_DWORD *)v45 + 1028);
  v50 = v45[20] & 0x8000;
  if ( (v49 & 0x20) == 0 || (v49 & 0x40) != 0 )
  {
    CmpUnlockRegistry(v48);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v45);
    Object = 96;
LABEL_101:
    KeyCommon = -1073741757;
    v71 = -1073741757;
    goto LABEL_102;
  }
  CmpSplitParentKeyName(v45 + 230, 0LL, &v113);
  if ( (unsigned int)dword_140E09F58 > 5 )
  {
    if ( (qword_140E09F68 & 0x400000000008LL) == 0 || (v53 = 1, (qword_140E09F70 & 0x400000000008LL) != qword_140E09F70) )
      v53 = 0;
    if ( v53 )
    {
      v109 = 1LL;
      v142 = &v109;
      v143 = 8LL;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)KeGetCurrentThread()->ApcState.Process);
      tlgCreate1Sz_char((__int64)v144, ProcessImageFileName);
      v147 = *((_QWORD *)&v113 + 1);
      v148[0] = (unsigned __int16)v113;
      v149 = &v110;
      v145 = v148;
      v146 = 2LL;
      v148[1] = 0;
      v110 = 0x1000000LL;
      v150 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)byte_14005573B, v55, 7u, (__int64)v141);
    }
  }
  if ( !v82 )
  {
    if ( !v50 )
      goto LABEL_95;
    CmpUnlockRegistry(v51);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v45);
    Object = 112;
    goto LABEL_101;
  }
  if ( !v50 && !CmpCheckHivePrimaryFileReadWriteAccess(P) )
  {
    CmpUnlockRegistry(v52);
    UNLOCK_HIVE_LOAD();
    CmpDereferenceHive((volatile signed __int32 *)v45);
    KeyCommon = -1073741790;
    Object = 128;
    goto LABEL_132;
  }
LABEL_95:
  CmpAttachToRegistryProcess(&ApcState);
  v62 = v45[367];
  v106 = v45;
  v66 = CmpConstructName(v62, v63, v64, v65);
  v67 = v111;
  *v111 = v66;
  CmpDetachFromRegistryProcess(&ApcState);
  if ( *v67 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v45[367]);
    v69 = v107;
    *v107 = v45[367];
    CmpUnlockRegistry(v69);
    UNLOCK_HIVE_LOAD();
    KeyCommon = 0;
LABEL_97:
    CmpDereferenceHive((volatile signed __int32 *)v45);
    if ( v106 )
    {
      v81 = 1;
      goto LABEL_87;
    }
LABEL_98:
    CmpUnlockRegistry(v42);
    UNLOCK_HIVE_LOAD();
    v20 = String2;
    v12 = 1;
    goto LABEL_58;
  }
  CmpUnlockRegistry(v68);
  UNLOCK_HIVE_LOAD();
  KeyCommon = -1073741670;
  CmpDereferenceHive((volatile signed __int32 *)v45);
LABEL_87:
  CmpLockAppHiveLoadList();
  v56 = v95;
  v57 = v96;
  if ( (__int64 **)v95[1] != &v95 || *v96 != (__int64 *)&v95 )
    goto LABEL_20;
  *v96 = v95;
  v56[1] = (__int64)v57;
  v58 = v97;
  if ( (unsigned __int64 *)v97 == &v97 )
    goto LABEL_22;
  v59 = v98;
  v60 = (_QWORD *)(v97 - 16);
  if ( *(unsigned __int64 **)(v97 + 8) != &v97 )
    goto LABEL_20;
  if ( (unsigned __int64 *)v98->Count != &v97 )
    goto LABEL_20;
  v98->Count = v97;
  *(_QWORD *)(v58 + 8) = v59;
  v61 = (_QWORD *)qword_140EF57F8;
  if ( *(__int64 **)qword_140EF57F8 != &CmpAppHiveLoadList )
    goto LABEL_20;
  *v60 = &CmpAppHiveLoadList;
  v60[1] = v61;
  *v61 = v60;
  qword_140EF57F8 = (__int64)v60;
LABEL_22:
  CmpUnlockAppHiveLoadList();
  KeSetEvent(&Event, 0, 0);
  v27 = _InterlockedCompareExchange64(&v102, 1LL, 0LL);
  if ( v27 >= 2 )
    ExfWaitForRundownProtectionRelease(&v102, v27);
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
      v31 = dword_140E09F58;
      v32 = qword_140E09F70;
      if ( (unsigned int)dword_140E09F58 > 5 )
      {
        if ( (qword_140E09F68 & 0x400000000008LL) == 0
          || (v34 = 1, (qword_140E09F70 & 0x400000000008LL) != qword_140E09F70) )
        {
          v34 = 0;
        }
        if ( v34 )
        {
          v86 = 1LL;
          v35 = *(unsigned __int16 *)(Pool + 10);
          v36 = *(unsigned __int8 *)(Pool + 394);
          v116 = (int *)&v86;
          v118 = &v82;
          v120 = (__int64 *)v78;
          v122 = (__int64 *)&v84;
          v124 = &v83;
          v126 = Pool + 8;
          v128 = Pool + 12;
          v132 = Pool + 108;
          v133 = (unsigned int)(12 * v35);
          v136 = Pool + 396;
          v139 = &v85;
          LOWORD(v83) = v36;
          LOWORD(v84) = v35;
          v129 = (unsigned int)(12 * v30);
          v130 = Pool + 10;
          v117 = 8LL;
          v82 = KeyCommon;
          v119 = 4LL;
          v78[0] = v30;
          v121 = 2LL;
          v123 = 2LL;
          v125 = 2LL;
          v127 = 2LL;
          v131 = 2LL;
          v134 = Pool + 394;
          v135 = 2LL;
          v137 = 8 * v36;
          v138 = 0;
          v85 = 0x1000000LL;
          v140 = 8LL;
          tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)&word_1400557F6, Pool + 394, 0xEu, (__int64)v115);
          v32 = qword_140E09F70;
          v31 = dword_140E09F58;
        }
        if ( v31 > 5 )
        {
          if ( (qword_140E09F68 & 8) == 0 || (v32 & 8) != v32 )
            v19 = 0;
          if ( v19 )
          {
            v74 = *(unsigned __int16 *)(Pool + 8);
            v75 = *(unsigned __int16 *)(Pool + 10);
            v76 = *(unsigned __int8 *)(Pool + 394);
            v116 = &v82;
            v118 = &v83;
            v120 = (__int64 *)&v84;
            v122 = (__int64 *)v78;
            v124 = (int *)(Pool + 8);
            v126 = Pool + 12;
            v127 = (unsigned int)(12 * v74);
            v130 = Pool + 108;
            v131 = (unsigned int)(12 * v75);
            v134 = Pool + 396;
            v78[0] = v76;
            LOWORD(v83) = v74;
            LOWORD(v84) = v75;
            v128 = Pool + 10;
            v132 = Pool + 394;
            v82 = KeyCommon;
            v117 = 4LL;
            v119 = 2LL;
            v121 = 2LL;
            v123 = 2LL;
            v125 = 2LL;
            v129 = 2LL;
            v133 = 2LL;
            v135 = (unsigned int)(8 * v76);
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E09F58,
              (unsigned __int8 *)byte_140055959,
              0LL,
              0LL,
              0xCu,
              v115);
          }
        }
      }
LABEL_38:
      if ( Pool )
        goto LABEL_39;
      return (unsigned int)KeyCommon;
    }
LABEL_133:
    if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000008LL) )
    {
      v86 = 1LL;
      v116 = (int *)&v86;
      v117 = 8LL;
      v118 = &v82;
      v82 = KeyCommon;
      v120 = &v85;
      v119 = 4LL;
      v85 = 0x1000000LL;
      v121 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)byte_14005579D, v73, 5u, (__int64)v115);
    }
    goto LABEL_38;
  }
  if ( (unsigned int)dword_140E09F58 > 5 )
  {
    if ( (qword_140E09F68 & 0x400000000008LL) == 0 || (v29 = 1, (qword_140E09F70 & 0x400000000008LL) != qword_140E09F70) )
      v29 = 0;
    if ( v29 )
    {
      v86 = 1LL;
      v116 = (int *)&v86;
      v117 = 8LL;
      v118 = &v82;
      LOBYTE(v78[0]) = v81;
      v120 = (__int64 *)v78;
      v122 = &v85;
      v82 = KeyCommon;
      v119 = 4LL;
      v121 = 1LL;
      v85 = 0x1000000LL;
      v123 = 8LL;
      tlgWriteAgg((__int64)&dword_140E09F58, (unsigned __int8 *)byte_140055A95, v28, 6u, (__int64)v115);
    }
  }
LABEL_39:
  CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  return (unsigned int)KeyCommon;
}
