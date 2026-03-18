/*
 * XREFs of ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x14000C950 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     ??$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400118C0 (--$GreAcquireSemaphore@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140013D34 (--$GreReleaseSemaphoreCommon@$07P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140014484 (--$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400146AC (--$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001F398 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14001F464 (--$GreReleaseSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x140023278 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x14003C0B0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140089590 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1400C2438 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ldevLoadInternal @ 0x140100EC0 (ldevLoadInternal.c)
 *     ldevLoadDriver @ 0x140101130 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1401015E0 (ldevUnloadImage.c)
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012AB9C (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1401307E0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1401308E8 (--$GreAcquireSemaphore@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x14013E14C (Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck.c)
 *     ?DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z @ 0x1401422EC (-DevmodeEqualEx@@YAHPEBU_devicemodeW@@0@Z.c)
 *     ??0?$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14014273C (--0-$SEMOBJ@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x140145934 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401491F8 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140158030 (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1401C5C48 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1401C5C8C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 *     memcmp @ 0x14023FD10 (memcmp.c)
 */

HDEV __fastcall hCreateHDEV(
        struct tagGRAPHICS_DEVICE *a1,
        struct _DRV_NAMES *a2,
        struct _devicemodeW *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        HDEV *a10)
{
  struct tagGRAPHICS_DEVICE *v11; // r15
  __int64 v12; // rcx
  HDEV v13; // rbx
  BOOL v14; // r12d
  __int64 v15; // rdi
  PDEV *v16; // rsi
  struct tagGRAPHICS_DEVICE *v17; // rax
  HDEV v18; // r15
  const struct _devicemodeW *v19; // rdx
  int v20; // ecx
  int v21; // eax
  struct _MDEV *v22; // rcx
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  int v26; // r8d
  HDEV result; // rax
  __int64 v28; // rsi
  struct _DRV_NAMES *v29; // rdx
  char *v30; // r13
  struct _LDEV *Driver; // rax
  char *v32; // r15
  HDEV v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  void *v37; // rcx
  HDEV v38; // [rsp+68h] [rbp-51h] BYREF
  __int64 v39; // [rsp+70h] [rbp-49h] BYREF
  PDEV *v40; // [rsp+78h] [rbp-41h] BYREF
  HDEV v41; // [rsp+80h] [rbp-39h]
  HDEV v42; // [rsp+88h] [rbp-31h] BYREF
  __int64 v43[13]; // [rsp+90h] [rbp-29h] BYREF

  v11 = a1;
  WdLogSingleEntry5(4LL, a1, a4, a5, a6, a9);
  WdLogGlobalForLineNumber = 20691;
  v13 = 0LL;
  v14 = 0;
  v15 = *(_QWORD *)(W32GetSessionState(v12) + 88);
  *a10 = 0LL;
  if ( v11 == (struct tagGRAPHICS_DEVICE *)-4LL )
    goto LABEL_49;
  if ( !a3 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 20723;
    return 0LL;
  }
  v16 = hdevEnumerate<1>(0LL);
  if ( !v16 )
    goto LABEL_43;
  do
  {
    v17 = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)v16 + 321);
    v40 = v16;
    if ( (((unsigned __int64)v17 + 4) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || v11 != v17 )
      goto LABEL_34;
    GreAcquireSemaphore<1,>((__int64 *)v15);
    GreAcquireSemaphore<8,PDEVOBJ>((__int64)v16);
    v18 = 0LL;
    v41 = 0LL;
    if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v40) )
      v20 = DevmodeEqualEx(a3, v19);
    else
      v20 = memcmp(a3, v19, 0xDCuLL) == 0;
    v21 = *((_DWORD *)v16 + 10);
    if ( (v21 & 0x80000) != 0
      || *((void **)v16 + 320) != a4
      || *((_DWORD *)v16 + 650) != a5
      || *((_DWORD *)v16 + 651) != a6
      || !v20
      || a8 )
    {
      if ( a7 == 1 )
        v14 = 1;
      else
        v18 = (HDEV)v16;
      goto LABEL_24;
    }
    if ( !v13 )
      goto LABEL_19;
    if ( (v21 & 0x400) == 0 )
    {
      v18 = v13;
LABEL_19:
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v40);
      v13 = (HDEV)v16;
    }
    v41 = v18;
LABEL_24:
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *((_QWORD *)v16 + 6));
    if ( v18 )
    {
      if ( *(_DWORD *)(v15 + 1064) )
      {
        v22 = *(struct _MDEV **)(v15 + 1072);
        *(_DWORD *)(v15 + 1064) = 0;
        v14 = DrvDisableMDEVChildren(v22, 0, 0) == 0;
      }
      if ( ((_DWORD)v18[10] & 0x400) == 0 )
      {
        if ( (unsigned int)DrvDisableDisplay(v18, 0) )
          *a10 = v18;
        else
          v14 = 1;
      }
    }
    GreReleaseSemaphoreShared<1,>((__int64 *)v15);
    if ( v41 )
    {
      v42 = v41;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v42);
    }
    v11 = a1;
LABEL_34:
    v16 = hdevEnumerate<1>(v16);
  }
  while ( v16 );
  if ( v14 )
  {
    if ( v13 )
    {
      a10 = (HDEV *)v13;
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&a10);
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 20942;
    return 0LL;
  }
  if ( v13 )
  {
    GreAcquireSemaphore<19,>((struct _ERESOURCE **)v15);
    *((_QWORD *)v13 + 4) = 0LL;
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v15);
    GreAcquireSemaphore<1,>((__int64 *)v15);
    GreAcquireSemaphore<4,PDEVOBJ>((__int64)v13);
    GreAcquireSemaphore<6,>((__int64 *)v15);
    GreAcquireSemaphore<8,PDEVOBJ>((__int64)v13);
    GreAcquireSemaphore<10,>((struct _ERESOURCE **)v15);
    GreAcquireSemaphore<19,>((struct _ERESOURCE **)v15);
    ++*((_DWORD *)v13 + 3);
    if ( ((_DWORD)v13[10] & 0x400) != 0 )
    {
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        *(_QWORD *)v15);
      DrvEnableDisplay(v13);
      GreAcquireSemaphore<19,>((struct _ERESOURCE **)v15);
    }
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v15);
    GreReleaseSemaphoreCommon<8,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *((_QWORD *)v13 + 6));
    GreReleaseSemaphoreExclusive<10,>((struct _ERESOURCE **)v15, v23, v24);
    GreReleaseSemaphoreExclusive<6,>((__int64 *)v15);
    GreReleaseSemaphoreExclusive<4,PDEVOBJ>((__int64)v13, v25, v26);
    GreReleaseSemaphoreShared<1,>((__int64 *)v15);
    WdLogSingleEntry1(5LL, v13);
    result = v13;
    WdLogGlobalForLineNumber = 21028;
    return result;
  }
LABEL_43:
  LODWORD(v13) = 0;
  if ( *(_DWORD *)(v15 + 1064) )
  {
    *(_DWORD *)(v15 + 1064) = 0;
    SEMOBJ<1>::SEMOBJ<1>(&v39, (_QWORD *)v15);
    if ( !(unsigned int)DrvDisableMDEVChildren(*(struct _MDEV **)(v15 + 1072), 0, 0) )
    {
      if ( v39 )
      {
        GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          v39);
        v39 = 0LL;
      }
      goto LABEL_66;
    }
    v14 = 0;
    if ( v39 )
    {
      GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v39);
      v39 = 0LL;
    }
  }
LABEL_49:
  v28 = PALLOCMEM(2128LL, 0x706D7447u);
  if ( !v28 )
    goto LABEL_66;
  v29 = a2;
  if ( !*(_DWORD *)a2 )
    goto LABEL_65;
  while ( 2 )
  {
    if ( a9 == 1 )
    {
      v30 = (char *)v29 + 16 * (unsigned int)v13;
      Driver = ldevLoadDriver(*((PCWSTR *)v30 + 2), 1, (*((_DWORD *)v11 + 40) & 0x4000000 | 0x2000000u) >> 25);
    }
    else
    {
      if ( a9 != 2 )
      {
        if ( a9 == 4 )
          Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck();
LABEL_58:
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 21124;
LABEL_63:
        v11 = a1;
LABEL_64:
        v29 = a2;
        LODWORD(v13) = (_DWORD)v13 + 1;
        if ( (unsigned int)v13 >= *(_DWORD *)a2 )
          goto LABEL_65;
        continue;
      }
      v30 = (char *)v29 + 16 * (unsigned int)v13;
      Driver = (struct _LDEV *)ldevLoadInternal(
                                 *((unsigned int (__fastcall **)(__int64, __int64, tagDRVENABLEDATA *))v30 + 2),
                                 3);
    }
    break;
  }
  v32 = (char *)Driver;
  if ( !Driver )
    goto LABEL_58;
  PDEVOBJ::PDEVOBJ(
    (PDEVOBJ *)&v38,
    Driver,
    a3,
    0LL,
    0LL,
    *((unsigned __int16 **)v30 + 2),
    *((void **)v30 + 1),
    0LL,
    0LL,
    0,
    a5,
    a6);
  if ( !v38 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 21144;
    ldevUnloadImage(v32);
    goto LABEL_63;
  }
  v11 = a1;
  *((_QWORD *)v38 + 321) = a1;
  if ( !(unsigned int)PDEVOBJ::bMakeSurface((PDEVOBJ *)&v38, 0LL) )
  {
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v38);
    goto LABEL_64;
  }
  v33 = v38;
  *((_QWORD *)v38 + 199) = 0LL;
  *((_QWORD *)v33 + 196) = 0LL;
  *((_DWORD *)v33 + 394) = 0;
  v34 = HmgShareLockCheck(*(_QWORD *)(v15 + 56), 16);
  HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>(v43, v34);
  *(_QWORD *)(v28 + 976) = v28 + 544;
  *(_DWORD *)(v28 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v28 + 976) + 176LL) = 0xFFFFFF;
  v35 = *(_QWORD *)(v28 + 976);
  *(_DWORD *)(v28 + 120) = 0;
  *(_QWORD *)(v35 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(
    (unsigned int *)v38 + 390,
    v28,
    v43[0],
    *(_QWORD *)(v15 + 3768),
    *(_QWORD *)(*((_QWORD *)v38 + 318) + 128LL),
    *((_QWORD *)v38 + 318),
    1u);
  HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>(v43);
  v36 = *(_QWORD *)(v15 + 4264);
  if ( !*(_QWORD *)(v36 + 48) )
    *(_QWORD *)(v36 + 48) = v38;
  *((_QWORD *)v38 + 321) = a1;
  *((_QWORD *)v38 + 320) = a4;
  if ( a9 != 2 )
  {
    *((_QWORD *)v38 + 323) = PALLOCNOZ(a3->dmSize + (unsigned int)a3->dmDriverExtra, 0x76656447u);
    v37 = (void *)*((_QWORD *)v38 + 323);
    if ( v37 )
    {
      memmove(v37, a3, a3->dmSize + (unsigned __int64)a3->dmDriverExtra);
      *(_DWORD *)(*((_QWORD *)v38 + 323) + 72LL) |= 0x20u;
      DrvUpdateAttachFlag(a1, 1);
    }
    else
    {
      v14 = 1;
    }
  }
  PDEVOBJ::bDisabled((PDEVOBJ *)&v38, 0);
  if ( ((_DWORD)v38[10] & 0x20000) == 0 && (*(_DWORD *)(*((_QWORD *)v38 + 321) + 160LL) & 0x800000) != 0 )
    *((_DWORD *)v38 + 11) |= 4u;
  if ( v14 )
  {
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v38);
LABEL_65:
    GreDeleteFastMutex((char *)v28);
LABEL_66:
    if ( *a10 )
      DrvEnableDisplay(*a10);
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 21305;
    return 0LL;
  }
  else
  {
    GreDeleteFastMutex((char *)v28);
    WdLogSingleEntry1(5LL, v38);
    result = v38;
    WdLogGlobalForLineNumber = 21273;
  }
  return result;
}
