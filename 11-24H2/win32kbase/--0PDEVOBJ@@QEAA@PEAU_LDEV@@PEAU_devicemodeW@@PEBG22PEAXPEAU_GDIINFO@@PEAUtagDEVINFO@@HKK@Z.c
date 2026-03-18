/*
 * XREFs of ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70
 * Callers:
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140035800 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x14003E410 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 *     GreCreateSemaphoreInternal @ 0x14007B2F8 (GreCreateSemaphoreInternal.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140086BCC (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x140086FB0 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x140088B80 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 *     ?EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x140088DBC (-EnablePDEV@PDEVOBJ@@QEAAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPE.c)
 *     ?InitializeClientReferenceCount@PDEV@@QEAAXXZ @ 0x140089050 (-InitializeClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     IsvConvertLogFontWSupported @ 0x140089080 (IsvConvertLogFontWSupported.c)
 *     IshfontCreatePublicSupported @ 0x1400890B8 (IshfontCreatePublicSupported.c)
 *     ?CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1400890F0 (-CompletePDEV@PDEVOBJ@@QEAAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1400C5DA4 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     ?bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z @ 0x140101820 (-bFillFunctionTable@@YAHPEAU_DRVFN@@KPEAP6A_JXZ@Z.c)
 *     ?GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ @ 0x140135B68 (-GeneratePDEVUniqueUMPDHandle@@YAPEAUHDEV__@@XZ.c)
 *     hfontCreatePublic @ 0x140142270 (hfontCreatePublic.c)
 *     vConvertLogFontW @ 0x14014755C (vConvertLogFontW.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x140150AC4 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 *     PanningGetFunctionTable @ 0x14023AC70 (PanningGetFunctionTable.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

PDEVOBJ *__fastcall PDEVOBJ::PDEVOBJ(
        PDEVOBJ *this,
        struct _LDEV *a2,
        struct _devicemodeW *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        unsigned __int16 *a6,
        void *a7,
        struct _GDIINFO *a8,
        struct tagDEVINFO *a9,
        int a10,
        unsigned int a11,
        unsigned int a12)
{
  __int64 v16; // rsi
  struct PDEV *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _GDIINFO *v21; // rcx
  int v22; // ecx
  void *v23; // r14
  unsigned int v24; // r9d
  int v25; // eax
  unsigned __int64 v26; // rax
  int *v27; // r8
  int v28; // ecx
  unsigned __int64 v29; // rcx
  int v30; // r15d
  __int64 v31; // r8
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  _DWORD *v36; // rax
  __int64 v37; // rdx
  _DWORD *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  int (*v41)(void); // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int (__fastcall *v44)(PDEVOBJ *); // rax
  unsigned int *v46; // rax
  unsigned int v47; // r8d
  bool v48; // cc
  unsigned int v49; // r9d
  int v50; // ecx
  int (*v51)(void); // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  struct _ERESOURCE *v55; // rbx
  char *SemaphoreInternal; // rax
  __int64 v57; // rcx
  int (*v58)(void); // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  signed __int32 v62; // ett
  __int64 v63; // r14
  unsigned int v64; // ebx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rbx
  void (__fastcall *v68)(_BYTE *, __int64); // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 (__fastcall *v71)(_BYTE *, __int64); // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 (__fastcall *v75)(_BYTE *, __int64); // rax
  __int64 v76; // rcx
  _QWORD *v77; // rax
  struct _ERESOURCE *v78; // rbx
  _QWORD *v79; // rax
  __int64 (*v80)(void); // rax
  __int64 v81; // rdx
  _DWORD *v82; // rax
  __int64 v83; // rcx
  int (*v84)(void); // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // ebx
  void (__fastcall *v88)(_QWORD); // rax
  struct _ERESOURCE *v89; // rbx
  int (*v90)(void); // rax
  __int64 v91; // rdx
  _OWORD *v92; // rax
  __int128 v93; // xmm1
  __int64 v94; // rdx
  _OWORD *v96; // rcx
  __int128 v97; // xmm1
  __int64 v98; // rcx
  int v99; // edx
  unsigned int v100; // ecx
  __int64 Public; // rax
  HSURF *v102; // [rsp+20h] [rbp-E0h]
  unsigned int v103; // [rsp+28h] [rbp-D8h]
  struct _GDIINFO *v104; // [rsp+30h] [rbp-D0h]
  unsigned int v105; // [rsp+38h] [rbp-C8h]
  struct tagDEVINFO *v106; // [rsp+40h] [rbp-C0h]
  HDEV v107; // [rsp+48h] [rbp-B8h]
  unsigned int v108; // [rsp+60h] [rbp-A0h] BYREF
  void *v109; // [rsp+68h] [rbp-98h] BYREF
  struct _DRVFN *v110; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v111[4]; // [rsp+78h] [rbp-88h] BYREF
  int v112; // [rsp+98h] [rbp-68h]
  _BYTE v113[432]; // [rsp+A0h] [rbp-60h] BYREF

  v109 = a7;
  v16 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v17 = PDEV::Allocate(a10);
  *(_QWORD *)this = v17;
  if ( !v17 )
    return this;
  *((_QWORD *)v17 + 222) = a2;
  *(_DWORD *)(*(_QWORD *)this + 1768LL) = 1348756854;
  *(_DWORD *)(*(_QWORD *)this + 2600LL) = a11;
  *(_DWORD *)(*(_QWORD *)this + 2604LL) = a12;
  *(_DWORD *)(*(_QWORD *)this + 3544LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = *(_QWORD *)this;
  v18 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 32LL) != 6 )
  {
    *(_QWORD *)(*(_QWORD *)this + 48LL) = GreCreateSemaphoreInternal(0);
    v18 = *(_QWORD *)this;
    if ( !*(_QWORD *)(*(_QWORD *)this + 48LL) )
      goto LABEL_43;
  }
  if ( (a11 & 1) != 0 )
    *(_DWORD *)(v18 + 2604) = 5;
  v19 = *(_QWORD *)this;
  v20 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
  if ( *(_DWORD *)(v20 + 32) == 1 && *(_DWORD *)(v19 + 2604) == 5 )
  {
    v90 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v19, v20) + 24) + 1688LL);
    if ( v90 && v90() >= 0 )
    {
      v110 = 0LL;
      v108 = 0;
      PanningGetFunctionTable(&v110, &v108);
      bFillFunctionTable(v110, v108, (__int64 (**)(void))(*(_QWORD *)this + 2680LL));
    }
  }
  else
  {
    memmove((void *)(v19 + 2680), (const void *)(v20 + 72), 0x340uLL);
  }
  *(_QWORD *)(*(_QWORD *)this + 1504LL) = a5;
  v21 = a8;
  if ( a8 )
  {
    v91 = 2LL;
    v92 = (_OWORD *)(*(_QWORD *)this + 2120LL);
    do
    {
      *v92 = *(_OWORD *)&v21->ulVersion;
      v92[1] = *(_OWORD *)&v21->ulHorzRes;
      v92[2] = *(_OWORD *)&v21->ulNumColors;
      v92[3] = *(_OWORD *)&v21->flTextCaps;
      v92[4] = *(_OWORD *)&v21->ulAspectX;
      v92[5] = *(_OWORD *)&v21->yStyleStep;
      v92[6] = *(_OWORD *)&v21->szlPhysSize.cx;
      v92 += 8;
      v93 = *(_OWORD *)&v21->ciDevice.Red.y;
      v21 = (struct _GDIINFO *)((char *)v21 + 128);
      *(v92 - 1) = v93;
      --v91;
    }
    while ( v91 );
    v94 = 2LL;
    *v92 = *(_OWORD *)&v21->ulVersion;
    v92[1] = *(_OWORD *)&v21->ulHorzRes;
    v92[2] = *(_OWORD *)&v21->ulNumColors;
    v92[3] = *(_OWORD *)&v21->flTextCaps;
    v96 = (_OWORD *)(*(_QWORD *)this + 1808LL);
    do
    {
      *v96 = *(_OWORD *)a9;
      v96[1] = *((_OWORD *)a9 + 1);
      v96[2] = *((_OWORD *)a9 + 2);
      v96[3] = *((_OWORD *)a9 + 3);
      v96[4] = *((_OWORD *)a9 + 4);
      v96[5] = *((_OWORD *)a9 + 5);
      v96[6] = *((_OWORD *)a9 + 6);
      v96 += 8;
      v97 = *((_OWORD *)a9 + 7);
      a9 = (struct tagDEVINFO *)((char *)a9 + 128);
      *(v96 - 1) = v97;
      --v94;
    }
    while ( v94 );
    *v96 = *(_OWORD *)a9;
    v96[1] = *((_OWORD *)a9 + 1);
    v96[2] = *((_OWORD *)a9 + 2);
    *((_QWORD *)v96 + 6) = *((_QWORD *)a9 + 6);
  }
  SETFLAG(a10, (volatile unsigned int *)(*(_QWORD *)this + 40LL), 0x8000);
  if ( v22 )
  {
    *(_QWORD *)(*(_QWORD *)this + 1784LL) = *((_QWORD *)a2 + 6);
    v89 = *(struct _ERESOURCE **)v16;
    GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
    GrepAcquireLockValidate<19>();
    *(_QWORD *)(*(_QWORD *)this + 16LL) = GeneratePDEVUniqueUMPDHandle();
    **(_QWORD **)this = *(_QWORD *)(v16 + 3840);
    *(_QWORD *)(v16 + 3840) = *(_QWORD *)this;
    if ( v89 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v89);
  }
  v112 = 0;
  PushThreadGuardedObject(v111, (__int64)this, (__int64)PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::_lambda_invoker_cdecl_);
  v23 = v109;
  v107 = *(HDEV *)this;
  v106 = (struct tagDEVINFO *)(*(_QWORD *)this + 1808LL);
  v24 = *(_QWORD *)this + 2120;
  v104 = (struct _GDIINFO *)(*(_QWORD *)this + 2120LL);
  v102 = (HSURF *)(*(_QWORD *)this + 1456LL);
  v112 = 1;
  *(_QWORD *)(*(_QWORD *)this + 1784LL) = PDEVOBJ::EnablePDEV(
                                            this,
                                            a3,
                                            a4,
                                            v24,
                                            v102,
                                            v103,
                                            v104,
                                            v105,
                                            v106,
                                            v107,
                                            a6,
                                            v109);
  if ( v112 )
  {
    PopThreadGuardedObject(v111);
    v112 = 0;
  }
  v18 = *(_QWORD *)this;
  if ( !*(_QWORD *)(*(_QWORD *)this + 1784LL) )
    goto LABEL_43;
  if ( *(_DWORD *)(*(_QWORD *)(v18 + 1776) + 32LL) != 6 )
  {
    v25 = *(_DWORD *)(v18 + 2128);
    if ( v25 <= 0 )
    {
      if ( v25 )
        LODWORD(v26) = -v25;
      else
        v26 = 25400 * (unsigned __int64)*(unsigned int *)(v18 + 2136) / 0x60;
    }
    else
    {
      LODWORD(v26) = 1000 * v25;
    }
    *(_DWORD *)(v18 + 2128) = v26;
    v27 = (int *)(*(_QWORD *)this + 2132LL);
    v28 = *v27;
    if ( *v27 <= 0 )
    {
      if ( v28 )
        LODWORD(v29) = -v28;
      else
        v29 = 25400 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)this + 2140LL) / 0x60;
    }
    else
    {
      LODWORD(v29) = 1000 * v28;
    }
    v30 = a10;
    *v27 = v29;
    if ( !a10 )
    {
      v98 = *(_QWORD *)this;
      v99 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
      if ( *(_DWORD *)(*(_QWORD *)this + 2160LL) != v99 )
      {
        if ( (unsigned __int16)(*(_WORD *)(v98 + 2166) - 100) <= 0x190u )
        {
          *(_DWORD *)(v98 + 3544) = v99;
          *(_DWORD *)(*(_QWORD *)this + 2164LL) = *(_DWORD *)(*(_QWORD *)this + 2160LL);
        }
        else
        {
          *(_DWORD *)(v98 + 2164) = 0;
          *(_DWORD *)(*(_QWORD *)this + 2160LL) = 0;
        }
      }
    }
    if ( !*(_DWORD *)(*(_QWORD *)this + 2160LL) )
      *(_DWORD *)(*(_QWORD *)this + 2160LL) = 96;
    if ( !*(_DWORD *)(*(_QWORD *)this + 2164LL) )
      *(_DWORD *)(*(_QWORD *)this + 2164LL) = 96;
    if ( *(_DWORD *)(*(_QWORD *)this + 2124LL) == 1 )
    {
      *(_DWORD *)(*(_QWORD *)this + 2196LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = 1;
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = 3;
    }
    v31 = *(_QWORD *)this;
    v32 = 17424;
    v33 = *(_DWORD *)(*(_QWORD *)this + 2124LL);
    if ( (v33 & 0xFFFFFFFB) != 0 )
      v32 = 28313;
    v34 = v32 | 0x1000;
    if ( v33 != 1 )
      v34 = v32;
    v35 = v34 | 0x100;
    if ( (*(_DWORD *)(v31 + 1808) & 0x80000) == 0 )
      v35 = v34;
    *(_DWORD *)(v31 + 2156) = v35;
    v36 = (_DWORD *)HmgShareLockCheck(*(_QWORD *)(*(_QWORD *)this + 2104LL), 8);
    v109 = v36;
    v38 = v36;
    if ( !v36 )
      goto LABEL_45;
    if ( (v36[6] & 0x1000000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( (v38[6] & 0x1000000) == 0 )
      goto LABEL_45;
    if ( v38[7] )
    {
LABEL_35:
      if ( (*(_DWORD *)(*(_QWORD *)this + 2156LL) & 0x100) == 0 )
        goto LABEL_36;
      if ( a10 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( v38[7] != 256 )
        {
          *(_DWORD *)(*(_QWORD *)this + 1808LL) &= ~0x80000u;
          *(_DWORD *)(*(_QWORD *)this + 2156LL) &= ~0x100u;
LABEL_139:
          *((_WORD *)v38 + 7) |= 0x40u;
LABEL_37:
          v39 = *(_QWORD *)this;
          v109 = 0LL;
          *(_QWORD *)(v39 + 1792) = v38;
          v40 = *(_QWORD *)this;
          if ( *(_QWORD *)(*(_QWORD *)this + 1456LL) )
          {
            v37 = *(unsigned int *)(*(_QWORD *)(v40 + 1776) + 32LL);
            if ( (_DWORD)v37 != 1 && (_DWORD)v37 != 4 )
              goto LABEL_54;
          }
          if ( *(_DWORD *)(*(_QWORD *)(v40 + 1776) + 32LL) == 2 )
          {
            v41 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v40, v37) + 24) + 1704LL);
            if ( !v41 || v41() < 0 )
              goto LABEL_54;
            v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v43, v42) + 24);
            v44 = *(unsigned int (__fastcall **)(PDEVOBJ *))(v18 + 1712);
          }
          else
          {
            v51 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v40, v37) + 24) + 1720LL);
            if ( !v51 || v51() < 0 )
              goto LABEL_54;
            v18 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v53, v52) + 24);
            v44 = *(unsigned int (__fastcall **)(PDEVOBJ *))(v18 + 1728);
          }
          if ( v44 && v44(this) )
          {
LABEL_54:
            *(_QWORD *)(*(_QWORD *)this + 2552LL) = v23;
            v54 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 1776LL) + 32LL);
            if ( (((_DWORD)v54 - 1) & 0xFFFFFFFC) == 0 && (_DWORD)v54 != 2 )
            {
              *(_QWORD *)(*(_QWORD *)this + 1720LL) = *(_QWORD *)(*(_QWORD *)this + 2920LL);
              *(_QWORD *)(*(_QWORD *)this + 1712LL) = *(_QWORD *)(*(_QWORD *)this + 2912LL);
              v55 = *(struct _ERESOURCE **)v16;
              GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
              GrepAcquireLockValidate<19>();
              SemaphoreInternal = GreCreateSemaphoreInternal(0);
              v54 = *(_QWORD *)this;
              *(_QWORD *)(*(_QWORD *)this + 56LL) = SemaphoreInternal;
              if ( !*(_QWORD *)(*(_QWORD *)this + 56LL) )
              {
                if ( v55 )
                  GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                    (__int64)v55);
                goto LABEL_43;
              }
              *(_DWORD *)(*(_QWORD *)this + 40LL) |= 1u;
              if ( v55 )
                GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
                  (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
                  (__int64)v55);
            }
            *(_QWORD *)(*(_QWORD *)this + 1752LL) = *(_QWORD *)(*(_QWORD *)this + 2856LL);
            *(_QWORD *)(*(_QWORD *)this + 1736LL) = *(_QWORD *)(*(_QWORD *)this + 2984LL);
            *(_QWORD *)(*(_QWORD *)this + 1744LL) = *(_QWORD *)(*(_QWORD *)this + 3384LL);
            v57 = *(_QWORD *)this;
            *(_QWORD *)(v57 + 1760) = *(_QWORD *)(*(_QWORD *)this + 3376LL);
            v58 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v57, v54) + 24) + 1736LL);
            if ( v58 && v58() >= 0 )
            {
              v80 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v60, v59) + 24) + 1744LL);
              v82 = v80 ? (_DWORD *)v80() : 0LL;
              *(_QWORD *)(v16 + 3832) = v82;
              if ( *v82 )
              {
                v83 = *(_QWORD *)(*(_QWORD *)this + 1776LL);
                if ( *(_DWORD *)(v83 + 32) == 1 )
                {
                  v84 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v83, v81) + 24) + 1752LL);
                  if ( v84 )
                  {
                    if ( v84() >= 0 )
                    {
                      v87 = *(_DWORD *)(*(_QWORD *)this + 2164LL);
                      v88 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v86, v85) + 24)
                                                          + 1760LL);
                      if ( v88 )
                        v88(v87);
                    }
                  }
                  **(_DWORD **)(v16 + 3832) = 0;
                }
              }
            }
            v61 = *(_QWORD *)this;
            _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
            do
              v62 = *(_DWORD *)(v61 + 40);
            while ( v62 != _InterlockedCompareExchange((volatile signed __int32 *)(v61 + 40), v62 & 0xFFFFFFBF, v62) );
            *(_DWORD *)(*(_QWORD *)this + 3548LL) = 0;
            v63 = *(_QWORD *)this;
            v64 = 12 * *(_DWORD *)(*(_QWORD *)this + 2164LL) / 0x48u;
            memset(v113, 0, 0x1A4uLL);
            if ( !*(_DWORD *)(v63 + 1812) )
              *(_DWORD *)(v63 + 1812) = v64;
            if ( !*(_DWORD *)(*(_QWORD *)this + 1904LL) )
              *(_DWORD *)(*(_QWORD *)this + 1904LL) = v64;
            if ( !*(_DWORD *)(*(_QWORD *)this + 1996LL) )
              *(_DWORD *)(*(_QWORD *)this + 1996LL) = v64;
            if ( (int)IsvConvertLogFontWSupported() >= 0 )
              vConvertLogFontW(v113, *(_QWORD *)this + 1812LL);
            if ( *(_DWORD *)(*(_QWORD *)this + 2124LL) == 1 )
            {
              *(_QWORD *)(*(_QWORD *)this + 1432LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 104LL);
            }
            else if ( (int)IshfontCreatePublicSupported() >= 0 )
            {
              Public = hfontCreatePublic(v113, 4LL);
              *(_QWORD *)(*(_QWORD *)this + 1432LL) = Public;
              if ( !Public )
                *(_QWORD *)(*(_QWORD *)this + 1432LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 104LL);
            }
            if ( (int)IsvConvertLogFontWSupported() >= 0 )
            {
              v67 = *(_QWORD *)this;
              v68 = *(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v66, v65) + 24)
                                                            + 1776LL);
              if ( v68 )
                v68(v113, v67 + 1904);
            }
            if ( (int)IshfontCreatePublicSupported() >= 0 )
            {
              v71 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v70, v69) + 24)
                                                               + 1792LL);
              v72 = v71 ? v71(v113, 5LL) : 0LL;
              *(_QWORD *)(*(_QWORD *)this + 1440LL) = v72;
              if ( !v72 )
                *(_QWORD *)(*(_QWORD *)this + 1440LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 104LL);
            }
            if ( (int)IsvConvertLogFontWSupported() >= 0 )
              vConvertLogFontW(v113, *(_QWORD *)this + 1996LL);
            if ( (int)IshfontCreatePublicSupported() >= 0 )
            {
              v75 = *(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v74, v73) + 24)
                                                               + 1792LL);
              v76 = v75 ? v75(v113, 6LL) : 0LL;
              *(_QWORD *)(*(_QWORD *)this + 1448LL) = v76;
              if ( !v76 )
                *(_QWORD *)(*(_QWORD *)this + 1448LL) = *(_QWORD *)(*(_QWORD *)(v16 + 3008) + 128LL);
            }
            goto LABEL_90;
          }
LABEL_43:
          PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator()(v18, this);
          return this;
        }
      }
      if ( (unsigned int)CreateSurfacePal(
                           v38,
                           v37,
                           *(unsigned int *)(*(_QWORD *)this + 2152LL),
                           *(unsigned int *)(*(_QWORD *)this + 2224LL)) )
      {
LABEL_36:
        if ( !a10 )
          goto LABEL_37;
        goto LABEL_139;
      }
LABEL_45:
      EPALOBJ::~EPALOBJ((struct _BASEOBJECT **)&v109);
      goto LABEL_43;
    }
    v46 = (unsigned int *)*((_QWORD *)v38 + 14);
    v47 = *v46;
    v37 = v46[1];
    v48 = (unsigned int)v37 <= *v46;
    if ( (unsigned int)v37 < *v46 )
    {
      v49 = v46[2];
      if ( v47 > v49 )
      {
        v50 = (unsigned int)v37 <= v49;
LABEL_49:
        *(_DWORD *)(*(_QWORD *)this + 2352LL) = v50;
        goto LABEL_35;
      }
      v48 = (unsigned int)v37 <= v47;
    }
    if ( v48 || (v100 = v46[2], (unsigned int)v37 <= v100) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2352LL) = ((unsigned int)v37 < v47) + 4;
      goto LABEL_35;
    }
    v50 = 3 - (v100 < v47);
    goto LABEL_49;
  }
  v30 = a10;
LABEL_90:
  PDEV::InitializeClientReferenceCount(*(PDEV **)this);
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
  {
    PDEVOBJ::bDisabled(this, 1);
    vResetSurfacePalette(*(_QWORD **)this);
  }
  v77 = (_QWORD *)(*(_QWORD *)this + 2616LL);
  v77[1] = v77;
  *v77 = v77;
  v78 = *(struct _ERESOURCE **)v16;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v16);
  GrepAcquireLockValidate<19>();
  if ( v30 )
    RemoveHDEVFromList((HDEV *)(v16 + 3840), *(HDEV *)this);
  **(_QWORD **)this = *(_QWORD *)(v16 + 3848);
  *(_QWORD *)(v16 + 3848) = *(_QWORD *)this;
  if ( v78 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v78);
  PDEVOBJ::CompletePDEV(this, *(struct DHPDEV__ **)(*(_QWORD *)this + 1784LL), *(HDEV *)this);
  v79 = (_QWORD *)(*(_QWORD *)this + 3520LL);
  v79[1] = v79;
  *v79 = v79;
  return this;
}
