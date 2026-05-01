/*
 * XREFs of ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0
 * Callers:
 *     HamRpcSrvCreateActivity @ 0x180066360 (HamRpcSrvCreateActivity.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180001E90 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800092AC (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180011534 (-HampRmPopulateDefaultProperties@@YAJPEAU_HAM_ACTIVITY_PROPERTIES@@PEAU_HOST_ACTIVITY_MANAGER@@K.c)
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x180017E20 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180017F14 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180018200 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001A1E4 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ??0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z @ 0x18001E494 (--0HAM_ACTIVITY_RM_CONTEXT@@QEAA@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@K_KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001E4BC (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001E6C0 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18001E70C (-RmHamHostReference@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E800 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18003A094 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x18003A258 (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A44C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXW4_HOST_GROUP@@PEAPEAU_RM_HAM_.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043D7C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180043E08 (-HampHostReleaseLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18005A074 (-HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     RmpResourceSetPropertiesRemoveAdditiveResources @ 0x18006C41C (RmpResourceSetPropertiesRemoveAdditiveResources.c)
 *     ?HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18006DBB8 (-HampDepGroupAddDonationDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@_K1PE.c)
 *     ??2@YAPEAX_K@Z @ 0x180073848 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateActivity(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _HAM_ACTIVITY_PROPERTIES *a8,
        void *a9,
        unsigned __int64 *a10)
{
  unsigned __int16 *v11; // r12
  DWORD v13; // ebx
  bool v14; // cf
  struct _RM_HAM_ACTIVITY_HOST *v15; // r13
  unsigned int v16; // eax
  _WORD *v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  _WORD *v20; // rax
  union _RM_SID *v21; // r15
  unsigned int v22; // edx
  int v23; // r8d
  unsigned __int8 v24; // r12
  __int16 v25; // cx
  struct _HAM_CLIENT_CONTEXT *v26; // rdi
  unsigned __int64 v27; // r15
  struct _HOST_ACTIVITY_MANAGER *v28; // r15
  int v29; // eax
  struct _RM_HAM_ACTIVITY_HOST *v30; // rdi
  int Host; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v32; // r12
  char *Heap; // rax
  struct _HAM_ACTIVITY *v34; // rdi
  _QWORD *v35; // rcx
  struct _HAM_ACTIVITY_PROPERTIES *v36; // rax
  __int64 v37; // rdx
  __int128 v38; // xmm0
  struct _HOST_ACTIVITY_MANAGER *v39; // rdx
  HAM_ACTIVITY_RM_CONTEXT *v40; // rax
  HAM_ACTIVITY_RM_CONTEXT *v41; // rax
  unsigned __int64 v42; // r9
  int v43; // eax
  int v44; // ebx
  DWORD v45; // edi
  DWORD ProcessId; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  struct _RM_HAM_ACTIVITY_HOST *v51; // rcx
  unsigned int v52; // edx
  char v53; // [rsp+60h] [rbp-A0h]
  struct _RM_HAM_ACTIVITY_HOST *v54; // [rsp+68h] [rbp-98h] BYREF
  struct _HAM_ACTIVITY *v55; // [rsp+70h] [rbp-90h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v56; // [rsp+78h] [rbp-88h]
  union _RM_SID *v57; // [rsp+80h] [rbp-80h]
  struct _HAM_CLIENT_CONTEXT *v58; // [rsp+88h] [rbp-78h]
  HANDLE Process; // [rsp+90h] [rbp-70h]
  unsigned __int64 v60; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 *v61; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-58h]
  const wchar_t *v63; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 *v64; // [rsp+B8h] [rbp-48h]
  _OWORD TlsValue[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v66; // [rsp+140h] [rbp+40h]
  _BYTE v67[464]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE DestinationSid[68]; // [rsp+320h] [rbp+220h] BYREF
  unsigned int v69; // [rsp+364h] [rbp+264h]
  unsigned int v70; // [rsp+368h] [rbp+268h]
  unsigned __int64 v71; // [rsp+370h] [rbp+270h]

  v11 = a2;
  Process = a9;
  v61 = a2;
  v58 = a1;
  v64 = a10;
  memset_0(v67, 0, 0x228uLL);
  v13 = HampLockTrackerId;
  v66 = 0LL;
  memset(TlsValue, 0, sizeof(TlsValue));
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker == 0");
    TlsSetValue(v13, TlsValue);
  }
  HampSrvTraceActivityCreateStart();
  v14 = *(_DWORD *)a8 < 0x8000000u;
  v15 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v53 = 0;
  v62 = -1LL;
  if ( !v14
    || wcsnlen((const wchar_t *)a8 + 6, 0x40uLL) == 64
    || wcsnlen((const wchar_t *)a8 + 70, 0x40uLL) == 64
    || *((int *)a8 + 67) > 5 )
  {
    *((_WORD *)a8 + 69) = 0;
    Host = -1073741578;
    *((_WORD *)a8 + 133) = 0;
    goto LABEL_76;
  }
  if ( !HampClientIsActive(v58) )
  {
    Host = -1073741661;
    goto LABEL_76;
  }
  LODWORD(v54) = 0;
  if ( !(unsigned __int8)PsmIsValidKey(v11) )
  {
    v44 = -1073741585;
    goto LABEL_75;
  }
  if ( a4 < 0xC || !RtlValidSid(a3) || RtlLengthSid(a3) != a4 )
  {
    v44 = -1073741584;
LABEL_75:
    Host = v44 + 1;
    if ( Host >= 0 )
      goto LABEL_24;
LABEL_76:
    v21 = 0LL;
    goto LABEL_77;
  }
  if ( !a6 || ((a6 - 1) & a6) != 0 || (_BitScanForward(&v16, a6), v16 >= 4) )
  {
    v44 = -1073741581;
    goto LABEL_75;
  }
  if ( a7 == -1LL )
  {
    v44 = -1073741580;
    goto LABEL_75;
  }
  memset_0(v67, 0, 0x228uLL);
  v17 = v67;
  v18 = 232LL;
  do
  {
    if ( v18 == -2147483414 )
      break;
    v19 = *(_WORD *)((char *)v17 + (char *)v11 - v67);
    if ( !v19 )
      break;
    *v17++ = v19;
    --v18;
  }
  while ( v18 );
  v20 = v17 - 1;
  if ( v18 )
    v20 = v17;
  *v20 = 0;
  RtlCopySid(0x44u, DestinationSid, a3);
  v69 = a5;
  v70 = a6;
  v71 = a7;
LABEL_24:
  v21 = (union _RM_SID *)DestinationSid;
  v57 = (union _RM_SID *)DestinationSid;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v67, a8) )
  {
    Host = -1073741578;
    goto LABEL_77;
  }
  v22 = *(_DWORD *)a8;
  if ( (*(_DWORD *)a8 & 0x80000) != 0 && !Process )
  {
    Host = -1073741776;
    goto LABEL_77;
  }
  v23 = (v22 >> 22) & 1 | 2;
  if ( (v22 & 0x2000000) == 0 )
    v23 = (v22 >> 22) & 1;
  v24 = (v22 & 0x2000000) != 0;
  v25 = *((_WORD *)a8 + 156);
  if ( (v25 & 0xEu) >= 4 || (v25 & 0x40) != 0 )
    v23 |= 4u;
  v26 = v58;
  v27 = (*((_QWORD *)v58 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)v58 + 164);
  v54 = 0LL;
  v28 = (struct _HOST_ACTIVITY_MANAGER *)(v27 - 16);
  if ( (v22 & 0x200000) != 0 )
  {
    Host = RmHamFindHost(v28, v71, v24, &v54);
    if ( Host >= 0 )
      v15 = v54;
  }
  else
  {
    v29 = RmHamFindOrCreateHost(v28, (__int64)v67, v23, v24, &v54);
    v30 = v54;
    Host = v29;
    if ( v29 < 0 || (Host = HampHostCheckCompletePackageInsertion(v54), Host < 0) )
    {
      if ( v30 )
        RmHamHostDereference(v30);
    }
    else
    {
      v15 = v30;
    }
    v26 = v58;
  }
  if ( Host >= 0 )
  {
    if ( HampPkgIsServicingEnabled(*(struct _HAM_PACKAGE **)(*((_QWORD *)v15 + 99) + 88LL))
      && (unsigned int)dword_1800E82B0 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 0x400000000008LL) )
    {
      v54 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v15 - 4);
      v63 = (const wchar_t *)((char *)v15 + 24);
      v60 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v48,
        (__int64)&unk_1800D5DD0,
        v49,
        v50,
        &v63,
        (__int64)&v54,
        (__int64)&v60);
    }
    if ( Process )
    {
      v60 = 0LL;
      v54 = 0LL;
      Host = RmHamFindHostByProcessHandle(v28, Process, v24, &v54);
      if ( Host < 0 || (Host = HampHostQueryHostGenerationForProcess(v54, Process, &v60), Host < 0) )
      {
        if ( v54 )
          RmHamHostDereference(v54);
        v32 = 0LL;
        if ( Host == -1073741275 )
          Host = -1058275323;
        goto LABEL_51;
      }
      v32 = v54;
      if ( v15 == v54 )
      {
        RmpResourceSetPropertiesRemoveAdditiveResources((char *)a8 + 280);
        v53 = 1;
        v43 = HampActCreate(v26, v28, v15, a8, v42, v42, &v55);
      }
      else
      {
        v43 = HampDepGroupAddDonationDependency(v26, v54, v60, v15, a8, &v55);
      }
      Host = v43;
      if ( v43 >= 0 )
      {
        v34 = v55;
        goto LABEL_48;
      }
    }
    else
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x238uLL);
      v34 = (struct _HAM_ACTIVITY *)Heap;
      if ( Heap )
      {
        memset_0(Heap + 40, 0, 0x210uLL);
        v32 = 0LL;
        *(_QWORD *)v34 = 0LL;
        *((_QWORD *)v34 + 1) = 0LL;
        *((_QWORD *)v34 + 3) = 1LL;
        *((_QWORD *)v34 + 2) = -1LL;
        *((_QWORD *)v34 + 4) = (char *)v28 + 440;
        *((_QWORD *)v34 + 5) = HamObjectIdGenerate(5LL);
        v35 = (_QWORD *)((char *)v34 + 112);
        v36 = a8;
        *((_WORD *)v34 + 281) = 1536;
        v37 = 3LL;
        do
        {
          v35 += 16;
          v38 = *(_OWORD *)v36;
          v36 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v36 + 128);
          *((_OWORD *)v35 - 8) = v38;
          *((_OWORD *)v35 - 7) = *((_OWORD *)v36 - 7);
          *((_OWORD *)v35 - 6) = *((_OWORD *)v36 - 6);
          *((_OWORD *)v35 - 5) = *((_OWORD *)v36 - 5);
          *((_OWORD *)v35 - 4) = *((_OWORD *)v36 - 4);
          *((_OWORD *)v35 - 3) = *((_OWORD *)v36 - 3);
          *((_OWORD *)v35 - 2) = *((_OWORD *)v36 - 2);
          *((_OWORD *)v35 - 1) = *((_OWORD *)v36 - 1);
          --v37;
        }
        while ( v37 );
        *v35 = *(_QWORD *)v36;
        RmpAcquireGlobalLock();
        *((_QWORD *)v34 + 10) = RmHamHostReference(v15);
        RmpReleaseGlobalLock();
        *((_QWORD *)v34 + 64) = 0LL;
        if ( (*(_DWORD *)a8 & 0x40000) != 0 )
        {
          HampHostAcquireLockSharedEx(*((struct _RM_HAM_ACTIVITY_HOST **)v34 + 10), 0);
          v51 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v34 + 10);
          *((_QWORD *)v34 + 65) = *((_QWORD *)v15 + 102);
          HampHostReleaseLockSharedEx(v51, v52);
        }
        else
        {
          *((_QWORD *)v34 + 65) = 0LL;
        }
        v39 = (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)v34 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 440);
        *((_QWORD *)v34 + 8) = v58;
        Host = HampRmPopulateDefaultProperties((struct _HAM_ACTIVITY *)((char *)v34 + 112), v39, 0);
        if ( Host >= 0 )
        {
          v40 = (HAM_ACTIVITY_RM_CONTEXT *)operator new(0x20uLL);
          if ( v40 && (v41 = HAM_ACTIVITY_RM_CONTEXT::HAM_ACTIVITY_RM_CONTEXT(v40, v34)) != 0LL )
          {
            *((_QWORD *)v34 + 11) = v41;
            Host = HampActInsert(v34);
            if ( Host >= 0 )
            {
LABEL_48:
              v62 = *((_QWORD *)v34 + 5);
              *v64 = v62;
              Host = 0;
              goto LABEL_49;
            }
          }
          else
          {
            Host = -1073741801;
          }
        }
        CemRcObjectDereference(v34);
      }
      else
      {
        v32 = v56;
        Host = -1073741801;
      }
    }
    v34 = v55;
LABEL_49:
    if ( v34 )
      CemRcObjectDereference(v34);
    goto LABEL_51;
  }
  v32 = v56;
LABEL_51:
  if ( v15 )
    RmHamHostDereference(v15);
  if ( v32 )
    RmHamHostDereference(v32);
  v11 = v61;
  LODWORD(v15) = 0;
  v21 = v57;
LABEL_77:
  v45 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v45, 0LL);
  }
  if ( Process )
    ProcessId = GetProcessId(Process);
  else
    ProcessId = (unsigned int)v15;
  HampSrvTraceActivityCreateStop(Host, v62, v58, v11, a6, v21, a7, a8, (unsigned int)v15, ProcessId, v53);
  return (unsigned int)Host;
}
