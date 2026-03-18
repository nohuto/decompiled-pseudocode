/*
 * XREFs of DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10
 * Callers:
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1402BC460 (DxgkWaitForVerticalBlankEvent2.c)
 *     DxgkWaitForVerticalBlankEvent @ 0x1402BC880 (DxgkWaitForVerticalBlankEvent.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000C81C (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14000E780 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1400110E0 (McTemplateK0tt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140011930 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002DAC0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1400338D0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x14004FB80 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x14005271C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x1400538FC (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14018BCE0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402955C0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402ABDE8 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402AC1C0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1402D3B30 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14030C710 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14030D2BC (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x14032D7E0 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403D3668 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x140422FF0 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        void **a5,
        union _LARGE_INTEGER *a6)
{
  int v6; // r15d
  unsigned int v8; // esi
  __int64 v9; // r13
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // rdi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v14; // r12
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  struct DXGGLOBAL *v17; // rax
  unsigned int v18; // ebx
  unsigned int v20; // edi
  unsigned int v21; // r14d
  __int64 v22; // rdx
  unsigned int v23; // ecx
  int v24; // ecx
  __int64 v25; // r14
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // ecx
  char *v29; // rcx
  unsigned int v30; // edi
  ADAPTER_RENDER **v31; // rcx
  DXGGLOBAL *v32; // rax
  REMOTE_VSYNC *v33; // rcx
  int v34; // edi
  int PairingAdapters; // eax
  __int64 v36; // rdi
  struct DXGADAPTER *v37; // rdi
  struct DXGADAPTER *v38; // rsi
  struct DXGDEVICE *v39; // r13
  signed __int64 v40; // rax
  signed __int64 v41; // rcx
  struct DXGADAPTER *v42; // r13
  struct DXGADAPTER *v43; // rdi
  unsigned int v44; // esi
  struct DXGADAPTER *v45; // r12
  __int64 v46; // r8
  __int64 v47; // rcx
  signed __int32 v48; // edx
  __int64 v49; // rax
  char v50; // al
  struct DXGDEVICE *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r8
  __int64 v56; // rax
  struct DXGPROCESS *v57; // rsi
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // edx
  __int64 v62; // r8
  int v63; // eax
  int v64; // esi
  __int64 v65; // rax
  int v66; // edx
  __int64 v67; // rcx
  char v68; // al
  bool v69; // zf
  int LiveDumpWithWdLogs2; // r12d
  struct DXGADAPTER *v71; // rdi
  unsigned __int8 IsDebuggerPresent; // al
  _WORD *v73; // rcx
  __int64 v74; // rax
  int v75; // eax
  unsigned int v76; // r13d
  int v77; // eax
  int v78; // eax
  unsigned int v79; // r15d
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  __int64 UserDataCounta; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-D8h]
  struct DXGDEVICE *v83; // [rsp+50h] [rbp-B0h] BYREF
  char v84; // [rsp+58h] [rbp-A8h]
  char v85; // [rsp+59h] [rbp-A7h]
  char v86; // [rsp+5Ah] [rbp-A6h]
  char v87; // [rsp+5Bh] [rbp-A5h]
  __int64 v88; // [rsp+60h] [rbp-A0h]
  _BYTE v89[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v90; // [rsp+70h] [rbp-90h] BYREF
  char v91; // [rsp+78h] [rbp-88h]
  unsigned int v92; // [rsp+7Ch] [rbp-84h]
  struct DXGPROCESS *v93; // [rsp+80h] [rbp-80h]
  unsigned int v94; // [rsp+88h] [rbp-78h]
  struct DXGADAPTER *v95; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v96; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v97; // [rsp+9Ch] [rbp-64h] BYREF
  struct DXGADAPTER *v98; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGDEVICE *v99; // [rsp+A8h] [rbp-58h] BYREF
  PLARGE_INTEGER v100; // [rsp+B0h] [rbp-50h]
  int v101; // [rsp+B8h] [rbp-48h] BYREF
  int v102; // [rsp+BCh] [rbp-44h] BYREF
  void **Src; // [rsp+C0h] [rbp-40h] BYREF
  int v104; // [rsp+C8h] [rbp-38h] BYREF
  int v105; // [rsp+CCh] [rbp-34h] BYREF
  int v106; // [rsp+D0h] [rbp-30h] BYREF
  int v107; // [rsp+D4h] [rbp-2Ch] BYREF
  int v108; // [rsp+D8h] [rbp-28h] BYREF
  int v109; // [rsp+DCh] [rbp-24h] BYREF
  int v110; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v111; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v112; // [rsp+F0h] [rbp-10h] BYREF
  struct DXGPROCESS *v113; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v114; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v116[56]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v117[16]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v118; // [rsp+160h] [rbp+60h]
  struct DXGADAPTER *v119; // [rsp+168h] [rbp+68h]
  char v120; // [rsp+170h] [rbp+70h]
  __int64 v121; // [rsp+178h] [rbp+78h]
  __int64 v122; // [rsp+1A0h] [rbp+A0h]
  struct DXGADAPTER *v123; // [rsp+1A8h] [rbp+A8h]
  char v124; // [rsp+1B0h] [rbp+B0h]
  __int64 v125; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v126; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v127; // [rsp+1F0h] [rbp+F0h]
  int v128; // [rsp+1F8h] [rbp+F8h]
  int v129; // [rsp+1FCh] [rbp+FCh]
  unsigned int *v130; // [rsp+200h] [rbp+100h]
  __int64 v131; // [rsp+208h] [rbp+108h]
  __int64 *v132; // [rsp+210h] [rbp+110h]
  __int64 v133; // [rsp+218h] [rbp+118h]
  struct DXGPROCESS **v134; // [rsp+220h] [rbp+120h]
  __int64 v135; // [rsp+228h] [rbp+128h]
  void ***p_Src; // [rsp+230h] [rbp+130h]
  __int64 v137; // [rsp+238h] [rbp+138h]
  int *v138; // [rsp+240h] [rbp+140h]
  __int64 v139; // [rsp+248h] [rbp+148h]
  int *v140; // [rsp+250h] [rbp+150h]
  __int64 v141; // [rsp+258h] [rbp+158h]
  int *v142; // [rsp+260h] [rbp+160h]
  __int64 v143; // [rsp+268h] [rbp+168h]
  int *v144; // [rsp+270h] [rbp+170h]
  __int64 v145; // [rsp+278h] [rbp+178h]
  _WORD *v146; // [rsp+280h] [rbp+180h]
  int v147; // [rsp+288h] [rbp+188h]
  int v148; // [rsp+28Ch] [rbp+18Ch]
  __int64 *v149; // [rsp+290h] [rbp+190h]
  __int64 v150; // [rsp+298h] [rbp+198h]
  unsigned int *v151; // [rsp+2A0h] [rbp+1A0h]
  __int64 v152; // [rsp+2A8h] [rbp+1A8h]
  int *v153; // [rsp+2B0h] [rbp+1B0h]
  __int64 v154; // [rsp+2B8h] [rbp+1B8h]
  int *v155; // [rsp+2C0h] [rbp+1C0h]
  __int64 v156; // [rsp+2C8h] [rbp+1C8h]
  int *v157; // [rsp+2D0h] [rbp+1D0h]
  __int64 v158; // [rsp+2D8h] [rbp+1D8h]
  int *v159; // [rsp+2E0h] [rbp+1E0h]
  __int64 v160; // [rsp+2E8h] [rbp+1E8h]
  int *v161; // [rsp+2F0h] [rbp+1F0h]
  __int64 v162; // [rsp+2F8h] [rbp+1F8h]

  v6 = 0;
  Src = a5;
  v8 = a1;
  v9 = a3;
  v100 = a6;
  v96 = a4;
  v92 = a3;
  v97 = a2;
  v94 = a1;
  v83 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      v93 = v14;
      if ( v14 )
        goto LABEL_5;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v93 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      v14 = v93;
      if ( v93 )
        goto LABEL_5;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2926;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2926LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v93 = v12;
  v14 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7502;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
LABEL_5:
  if ( a4 >= 0x3F )
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7510;
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  v89[1] = 1;
  if ( !v8 && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    v17 = DXGGLOBAL::GetGlobal();
    v18 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v17 + 1024));
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v89);
    return v18;
  }
  if ( v14 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v14 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v14 + 248));
  v20 = (v8 >> 6) & 0xFFFFFF;
  v21 = v8 >> 30;
  if ( (*((_DWORD *)v14 + 102) & 0x100) != 0 )
  {
    v88 = *((_QWORD *)v14 + 74);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v88 + 248));
    if ( v20 < *(_DWORD *)(v88 + 296) )
    {
      v22 = *(_QWORD *)(v88 + 280) + 16LL * v20;
      v23 = *(_DWORD *)(v22 + 8);
      if ( v21 == ((v23 >> 5) & 3) && (v23 & 0x2000) == 0 )
      {
        v24 = v23 & 0x1F;
        if ( v24 )
        {
          if ( v24 == 1 )
          {
            v25 = *(_QWORD *)v22;
            goto LABEL_25;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v25 = 0LL;
LABEL_25:
    _InterlockedDecrement((volatile signed __int32 *)(v88 + 264));
    ExReleasePushLockSharedEx(v88 + 248, 0LL);
    KeLeaveCriticalRegion();
    v8 = v94;
    goto LABEL_34;
  }
  if ( v20 >= *((_DWORD *)v14 + 74) )
    goto LABEL_33;
  v26 = *((_QWORD *)v14 + 35) + 16LL * v20;
  v27 = *(_DWORD *)(v26 + 8);
  if ( v21 != ((v27 >> 5) & 3) )
    goto LABEL_33;
  if ( (v27 & 0x2000) != 0 )
    goto LABEL_33;
  v28 = v27 & 0x1F;
  if ( !v28 )
    goto LABEL_33;
  if ( v28 != 1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_33:
    v25 = 0LL;
    goto LABEL_34;
  }
  v25 = *(_QWORD *)v26;
LABEL_34:
  v29 = (char *)v14 + 248;
  if ( !v25 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v14 + 66);
    ExReleasePushLockSharedEx(v29, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 7538;
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v89);
    return 3221225485LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v25 + 24));
  _InterlockedDecrement((volatile signed __int32 *)v14 + 66);
  ExReleasePushLockSharedEx(v29, 0LL);
  KeLeaveCriticalRegion();
  v30 = v97;
  if ( v97 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v99, v97, (struct _KTHREAD **)v14, &v83);
    if ( !v83 )
    {
      WdLogSingleEntry2(3LL, v25, v30);
      WdLogGlobalForLineNumber = 7553;
      if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v31 = (ADAPTER_RENDER **)v99;
LABEL_88:
        ADAPTER_RENDER::DestroyDeviceNoLocks(v31[2], (struct DXGDEVICE *)v31);
        goto LABEL_89;
      }
      goto LABEL_89;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v83 + 8);
    if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
  }
  if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    if ( *(_BYTE *)(v25 + 209) && (v32 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v32) + 4742)) )
      v33 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1080);
    else
      v33 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1024);
    v34 = REMOTE_VSYNC::WaitForVSync(v33);
    goto LABEL_49;
  }
  v95 = 0LL;
  v98 = 0LL;
  v111 = 0LL;
  v114 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v25, v9, &v95, &v111, &v98, &v114, 0);
  v94 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v36 = PairingAdapters;
    WdLogSingleEntry3(2LL, v25, v9, PairingAdapters);
    WdLogGlobalForLineNumber = 7591;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      v25,
      v9,
      v36,
      0LL,
      0LL);
    if ( v83 && _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
    KeLeaveCriticalRegion();
    return v94;
  }
  v37 = v95;
  v38 = v98;
  if ( !v95 || !v98 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7597;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7597LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v39 = v83;
  if ( v83 && (v37 != *(struct DXGADAPTER **)(*((_QWORD *)v83 + 2) + 16LL) || v38 != *((struct DXGADAPTER **)v83 + 237)) )
  {
    WdLogSingleEntry2(3LL, v25, v97);
    WdLogGlobalForLineNumber = 7605;
    v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_86:
    if ( v40 == 1 )
    {
      v31 = (ADAPTER_RENDER **)v83;
      goto LABEL_88;
    }
LABEL_89:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  v117[1] = 0;
  v119 = v37;
  v120 = 0;
  v121 = 0LL;
  if ( v37 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v37 + 3);
    v37 = v95;
    v38 = v98;
    v118 = -1LL;
  }
  v124 = 0;
  v125 = 0LL;
  if ( !v38 )
    v38 = v37;
  v123 = v38;
  if ( v38 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v38 + 3);
    v37 = v95;
    v122 = -1LL;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v95 + 2), v95);
  v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v42 = v98;
  if ( v41 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98 + 2), v98);
  if ( *((_DWORD *)v42 + 40) == 1 )
  {
    v43 = v95;
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
      (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v116,
      v95,
      v42);
    if ( *((_DWORD *)v43 + 50) != 1 || (v93 = v14, *((_DWORD *)v98 + 50) != 1) )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v116);
      goto LABEL_105;
    }
    v42 = v98;
    v44 = v92;
    if ( v92 >= *(_DWORD *)(*((_QWORD *)v98 + 390) + 96LL) )
    {
      WdLogSingleEntry2(3LL, v92, -1073741811LL);
      WdLogGlobalForLineNumber = 7633;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v116);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
      if ( !v83 )
        goto LABEL_89;
      v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_86;
    }
    if ( !DXGADAPTER::IsVSyncAvailable(v98, v92) )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v116);
      goto LABEL_113;
    }
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v116);
  }
  else
  {
    v44 = v92;
  }
  v34 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v117, 0LL);
  if ( v34 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
LABEL_49:
    if ( v83 && _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
    KeLeaveCriticalRegion();
    return (unsigned int)v34;
  }
  v45 = v95;
  if ( !*((_QWORD *)v95 + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7651;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pRenderAdapter->IsRenderAdapter()",
      7651LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)v42 + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7652;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      7652LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v97 )
  {
    if ( *((_DWORD *)v83 + 152) != 1 )
    {
LABEL_105:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
      if ( v83 && _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
      KeLeaveCriticalRegion();
      return 3221226166LL;
    }
    v45 = v95;
    v42 = v98;
  }
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v94 = 0;
  if ( !DXGADAPTER::IsVSyncAvailable(v42, v44) )
  {
LABEL_113:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
    if ( v83 && _InterlockedExchangeAdd64((volatile signed __int64 *)v83 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
    KeLeaveCriticalRegion();
    return 3223191558LL;
  }
  if ( *((_QWORD *)v42 + 391) )
  {
    if ( v42 != v45 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7674;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"pDisplayAdapter == pRenderAdapter",
        7674LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v47 = 0LL;
    if ( (*((_DWORD *)v45 + 744) & 0x10) != 0 )
      v47 = v44;
    if ( (unsigned int)v47 < 0x10 )
    {
      v48 = _InterlockedIncrement((volatile signed __int32 *)v45 + v47 + 788);
      v45 = v95;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        LODWORD(UserData) = v48;
        UserDataCount[0] = v47;
        McTemplateK0pqq_EtwWriteTransfer(v47, (__int64)&VSyncWaiterChange, v46, v95, *(_QWORD *)UserDataCount, UserData);
      }
      v42 = v98;
    }
    v49 = *((_QWORD *)v45 + 391);
    v84 = 1;
    v50 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v49 + 736) + 8LL) + 552LL))(
            *(_QWORD *)(v49 + 744),
            v44);
    v51 = v83;
    if ( !v50 )
    {
      v52 = *((_QWORD *)v45 + 391);
      v53 = *(_QWORD *)(v52 + 736);
      if ( v83 )
      {
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncDevice(v53, *((_QWORD *)v83 + 100), 0LL, 1, v44) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v45, v44, v54);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
          goto LABEL_133;
        }
        v86 = 1;
      }
      else
      {
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(v53, *(_QWORD *)(v52 + 744), 1LL, 1, v44) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v45, v44, v55);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
LABEL_133:
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v25);
          DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v89);
          return 3223191558LL;
        }
        v85 = 1;
      }
    }
    v56 = *((_QWORD *)v45 + 391);
    v57 = v93;
    v58 = *(_QWORD *)(v56 + 736);
    v59 = *((_QWORD *)v93 + 8);
    if ( v59 && *(_QWORD *)(v59 + 8LL * (unsigned int)(*(_DWORD *)v58 - 1) + 16) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v58 + 8) + 1072LL))(*(_QWORD *)(v56 + 744));
  }
  else
  {
    ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v42 + 390), v44);
    v51 = v83;
    v57 = v93;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v117);
  v60 = *((_QWORD *)v57 + 8);
  v61 = v92;
  LODWORD(v62) = v96;
  LODWORD(v93) = 60;
  v87 = *(_BYTE *)(v60 + 138);
  v88 = 4024LL * v92;
  while ( 1 )
  {
    v63 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(*((ADAPTER_DISPLAY **)v42 + 390), v61, 1, v62, Src, v100);
    v62 = v96;
    v64 = v63;
    if ( v63 >= 0 && v63 <= (int)v96 || v63 == 258 )
      v94 = v63;
    v65 = *((_QWORD *)v42 + 390);
    v66 = (_DWORD)v93 - 1;
    LODWORD(v93) = (_DWORD)v93 - 1;
    v67 = *(_QWORD *)(v65 + 128);
    v68 = *(_BYTE *)(v67 + v88 + 944);
    v91 = v68;
    if ( v64 != v96 || v87 || v68 )
      break;
    v69 = v66 == 0;
    v61 = v92;
    if ( v69 )
      goto LABEL_153;
  }
  if ( v66 )
    goto LABEL_164;
LABEL_153:
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v42 + 1246) < 2 )
  {
    v100 = (PLARGE_INTEGER)1;
    LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2073LL, 0LL, 0LL, 0LL, 1LL);
    v71 = v98;
    LODWORD(v93) = *((_DWORD *)v98 + 103);
    v67 = *((unsigned int *)v98 + 104);
    HIDWORD(v93) = *((_DWORD *)v98 + 104);
    if ( (unsigned int)dword_14015E650 > 5
      && (qword_14015E660 & 0x400000400000LL) != 0
      && (qword_14015E668 & 0x400000400000LL) == qword_14015E668 )
    {
      LOBYTE(v67) = 1;
      v104 = *((unsigned __int8 *)v98 + 209);
      IsDebuggerPresent = WdIsDebuggerPresent(v67);
      v162 = 4LL;
      v105 = IsDebuggerPresent;
      v106 = *((_DWORD *)v71 + 804);
      v107 = *((unsigned __int8 *)v71 + 3053);
      v108 = LiveDumpWithWdLogs2;
      LOWORD(v96) = *((_WORD *)v71 + 1502);
      v112 = *((_QWORD *)v71 + 251);
      v73 = (_WORD *)*((_QWORD *)v71 + 250);
      v109 = *((_DWORD *)v71 + 109);
      v110 = *((_DWORD *)v71 + 108);
      v101 = *((_DWORD *)v71 + 107);
      v102 = *((_DWORD *)v71 + 106);
      LODWORD(Src) = *((_DWORD *)v71 + 105);
      v113 = v93;
      v161 = &v104;
      v159 = &v105;
      v157 = &v106;
      v155 = &v107;
      v153 = &v108;
      v151 = &v96;
      v149 = &v112;
      v90 = 0x1000000LL;
      LOWORD(v97) = 1;
      v160 = 4LL;
      v158 = 4LL;
      v156 = 4LL;
      v154 = 4LL;
      v152 = 2LL;
      v150 = 8LL;
      if ( v73 )
      {
        v74 = -1LL;
        do
          v69 = v73[++v74] == 0;
        while ( !v69 );
        v75 = 2 * v74 + 2;
      }
      else
      {
        v73 = &unk_1400C6B88;
        v75 = 2;
      }
      v147 = v75;
      v146 = v73;
      v144 = &v109;
      v148 = 0;
      v142 = &v110;
      v145 = 4LL;
      v140 = &v101;
      v138 = &v102;
      p_Src = &Src;
      v134 = &v113;
      v132 = &v90;
      v130 = &v97;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v126.Ptr = (ULONGLONG)off_14015E658;
      v143 = 4LL;
      v141 = 4LL;
      v139 = 4LL;
      v137 = 4LL;
      v135 = 8LL;
      v133 = 8LL;
      v131 = 2LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000400000LL;
      v126.Size = *(unsigned __int16 *)off_14015E658;
      v127 = &unk_14013C321;
      v129 = 1;
      v126.Reserved = 2;
      v128 = 266;
      LODWORD(v93) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_14015E670, &EventDescriptor, 0LL, 0LL, 0x12u, &v126);
    }
  }
  v45 = v95;
  v51 = v83;
LABEL_164:
  v76 = v92;
  if ( v84 )
    DXGADAPTER::DecrementVSyncWaiter(v45, v92, v62);
  if ( v85 )
  {
    v64 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v117, 0LL);
    if ( v64 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
      if ( v51 )
        goto LABEL_169;
      goto LABEL_171;
    }
    v77 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(
            *(_QWORD *)(*((_QWORD *)v45 + 391) + 736LL),
            *(_QWORD *)(*((_QWORD *)v45 + 391) + 744LL),
            1LL,
            0,
            v76);
  }
  else
  {
    if ( !v86 )
      goto LABEL_182;
    v64 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v117, 0LL);
    if ( v64 < 0 )
      goto LABEL_177;
    v78 = *((_DWORD *)v51 + 152);
    v51 = v83;
    if ( v78 != 1 )
      goto LABEL_182;
    v77 = VIDSCH_EXPORT::VidSchControlVSyncDevice(
            *(_QWORD *)(*((_QWORD *)v95 + 391) + 736LL),
            *((_QWORD *)v83 + 100),
            0LL,
            0,
            v76);
  }
  v64 = v77;
LABEL_182:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(UserDataCounta) = v91 != 0;
    LOBYTE(v6) = v87 != 0;
    McTemplateK0tt_EtwWriteTransfer(v67, (__int64)&WaitForVerticalBlankEventInternal, v62, v6, UserDataCounta);
  }
  if ( v64 < 0 || (v79 = v94) == 0 )
  {
LABEL_177:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
    if ( v51 )
    {
LABEL_169:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
    }
LABEL_171:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
    KeLeaveCriticalRegion();
    return (unsigned int)v64;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v117);
  if ( v51 && _InterlockedExchangeAdd64((volatile signed __int64 *)v51 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v83 + 2), v83);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v25 + 16), (struct DXGADAPTER *)v25);
  KeLeaveCriticalRegion();
  return v79;
}
