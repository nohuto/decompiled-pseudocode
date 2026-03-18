/*
 * XREFs of DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120
 * Callers:
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1402AEB70 (DxgkWaitForVerticalBlankEvent2.c)
 *     DxgkWaitForVerticalBlankEvent @ 0x1402AEF90 (DxgkWaitForVerticalBlankEvent.c)
 * Callees:
 *     McTemplateK0tt_EtwWriteTransfer @ 0x1400142E8 (McTemplateK0tt_EtwWriteTransfer.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140014AA8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z @ 0x140014B30 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXI@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001BDFC (--1DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x14001DD60 (--0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x14002D3C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x140033A00 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x140050100 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     ?VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTER@@EI@Z @ 0x140052A6C (-VidSchControlVSyncAdapter@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_VSYNC_REASON_ADAPTE.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x140053C4C (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140189A90 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x140289000 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x14028D460 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1402A5938 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1402A5D70 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x14032A060 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x14032AC0C (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x14033E440 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1403DA558 (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x14042616C (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
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
  unsigned int v8; // r13d
  __int64 v9; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v12; // rdi
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v14; // rsi
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v17; // rcx
  struct DXGGLOBAL *v18; // rax
  unsigned int v19; // ebx
  unsigned int v21; // edi
  unsigned int v22; // r14d
  __int64 v23; // rdx
  unsigned int v24; // ecx
  int v25; // ecx
  __int64 v26; // r14
  __int64 v27; // rdx
  unsigned int v28; // ecx
  int v29; // ecx
  char *v30; // rcx
  __int64 v31; // rcx
  unsigned int v32; // edi
  ADAPTER_RENDER **v33; // rcx
  DXGGLOBAL *v34; // rax
  REMOTE_VSYNC *v35; // rcx
  unsigned int v36; // edi
  int PairingAdapters; // eax
  __int64 v38; // r13
  DXGADAPTER *v39; // rdi
  DXGADAPTER *v40; // r12
  struct DXGDEVICE *v41; // r13
  signed __int64 v42; // rax
  signed __int64 v43; // rcx
  DXGADAPTER *v44; // r13
  DXGADAPTER *v45; // rdi
  unsigned int v46; // edi
  int v47; // r12d
  DXGADAPTER *v48; // r12
  __int64 v49; // r8
  __int64 v50; // rcx
  signed __int32 v51; // edx
  __int64 v52; // rax
  char v53; // al
  struct DXGDEVICE *v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rax
  unsigned int v63; // edx
  __int64 v64; // r8
  int v65; // eax
  int v66; // esi
  __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rcx
  char v70; // al
  bool v71; // zf
  int LiveDumpWithWdLogs2; // r12d
  DXGADAPTER *v73; // rdi
  unsigned __int8 IsDebuggerPresent; // al
  _WORD *v75; // rcx
  __int64 v76; // rax
  int v77; // eax
  unsigned int v78; // r13d
  int v79; // eax
  int v80; // eax
  unsigned int v81; // r15d
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  __int64 UserDataCounta; // [rsp+20h] [rbp-E0h]
  PEVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-D8h]
  struct DXGDEVICE *v85; // [rsp+50h] [rbp-B0h] BYREF
  char v86; // [rsp+58h] [rbp-A8h]
  char v87; // [rsp+59h] [rbp-A7h]
  char v88; // [rsp+5Ah] [rbp-A6h]
  char v89; // [rsp+5Bh] [rbp-A5h]
  unsigned int v90; // [rsp+5Ch] [rbp-A4h]
  _BYTE v91[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v92; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h] BYREF
  char v94; // [rsp+78h] [rbp-88h]
  DXGADAPTER *v95; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v96; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v97; // [rsp+8Ch] [rbp-74h] BYREF
  DXGADAPTER *v98; // [rsp+90h] [rbp-70h] BYREF
  __int64 v99; // [rsp+98h] [rbp-68h]
  int v100; // [rsp+A0h] [rbp-60h]
  struct DXGDEVICE *v101; // [rsp+A8h] [rbp-58h] BYREF
  PLARGE_INTEGER v102; // [rsp+B0h] [rbp-50h]
  int v103; // [rsp+B8h] [rbp-48h] BYREF
  int v104; // [rsp+BCh] [rbp-44h] BYREF
  void **Src; // [rsp+C0h] [rbp-40h] BYREF
  int v106; // [rsp+C8h] [rbp-38h] BYREF
  int v107; // [rsp+CCh] [rbp-34h] BYREF
  int v108; // [rsp+D0h] [rbp-30h] BYREF
  int v109; // [rsp+D4h] [rbp-2Ch] BYREF
  int v110; // [rsp+D8h] [rbp-28h] BYREF
  int v111; // [rsp+DCh] [rbp-24h] BYREF
  int v112; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v113; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v114; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v115; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v116; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v118[56]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v119[16]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v120; // [rsp+160h] [rbp+60h]
  DXGADAPTER *v121; // [rsp+168h] [rbp+68h]
  char v122; // [rsp+170h] [rbp+70h]
  __int64 v123; // [rsp+178h] [rbp+78h]
  __int64 v124; // [rsp+1A0h] [rbp+A0h]
  DXGADAPTER *v125; // [rsp+1A8h] [rbp+A8h]
  char v126; // [rsp+1B0h] [rbp+B0h]
  __int64 v127; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v128; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v129; // [rsp+1F0h] [rbp+F0h]
  int v130; // [rsp+1F8h] [rbp+F8h]
  int v131; // [rsp+1FCh] [rbp+FCh]
  unsigned int *v132; // [rsp+200h] [rbp+100h]
  __int64 v133; // [rsp+208h] [rbp+108h]
  __int64 *v134; // [rsp+210h] [rbp+110h]
  __int64 v135; // [rsp+218h] [rbp+118h]
  __int64 *v136; // [rsp+220h] [rbp+120h]
  __int64 v137; // [rsp+228h] [rbp+128h]
  void ***p_Src; // [rsp+230h] [rbp+130h]
  __int64 v139; // [rsp+238h] [rbp+138h]
  int *v140; // [rsp+240h] [rbp+140h]
  __int64 v141; // [rsp+248h] [rbp+148h]
  int *v142; // [rsp+250h] [rbp+150h]
  __int64 v143; // [rsp+258h] [rbp+158h]
  int *v144; // [rsp+260h] [rbp+160h]
  __int64 v145; // [rsp+268h] [rbp+168h]
  int *v146; // [rsp+270h] [rbp+170h]
  __int64 v147; // [rsp+278h] [rbp+178h]
  _WORD *v148; // [rsp+280h] [rbp+180h]
  int v149; // [rsp+288h] [rbp+188h]
  int v150; // [rsp+28Ch] [rbp+18Ch]
  __int64 *v151; // [rsp+290h] [rbp+190h]
  __int64 v152; // [rsp+298h] [rbp+198h]
  unsigned int *v153; // [rsp+2A0h] [rbp+1A0h]
  __int64 v154; // [rsp+2A8h] [rbp+1A8h]
  int *v155; // [rsp+2B0h] [rbp+1B0h]
  __int64 v156; // [rsp+2B8h] [rbp+1B8h]
  int *v157; // [rsp+2C0h] [rbp+1C0h]
  __int64 v158; // [rsp+2C8h] [rbp+1C8h]
  int *v159; // [rsp+2D0h] [rbp+1D0h]
  __int64 v160; // [rsp+2D8h] [rbp+1D8h]
  int *v161; // [rsp+2E0h] [rbp+1E0h]
  __int64 v162; // [rsp+2E8h] [rbp+1E8h]
  int *v163; // [rsp+2F0h] [rbp+1F0h]
  __int64 v164; // [rsp+2F8h] [rbp+1F8h]

  v6 = 0;
  Src = a5;
  v8 = a1;
  v9 = a3;
  v102 = a6;
  v96 = a4;
  v90 = a3;
  v97 = a2;
  v100 = a1;
  v85 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_DWORD *)(ProcessDxgProcess + 408) & 0x80) != 0 )
  {
    Current = DXGTHREAD::GetCurrent();
    if ( Current )
    {
      v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      if ( v14 )
        goto LABEL_5;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      v14 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
      if ( v14 )
        goto LABEL_5;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 2925;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Failed to find DXGPROCESS", 2925LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v14 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 7457;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
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
    WdLogGlobalForLineNumber = 7465;
    return 3221225485LL;
  }
  KeEnterCriticalRegion();
  v91[1] = 1;
  if ( !v8 && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v17) )
  {
    v18 = DXGGLOBAL::GetGlobal();
    v19 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)v18 + 992));
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v91);
    return v19;
  }
  if ( v14 != (struct DXGPROCESS *)-248LL )
  {
    if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( *((struct _KTHREAD **)v14 + 32) != KeGetCurrentThread() )
        goto LABEL_20;
    }
    else if ( *((struct _KTHREAD **)v14 + 32) != KeGetCurrentThread() )
    {
      goto LABEL_20;
    }
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1575;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1575LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_20:
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v14 + 248));
  v21 = (v8 >> 6) & 0xFFFFFF;
  v22 = v8 >> 30;
  if ( (*((_DWORD *)v14 + 102) & 0x100) != 0 )
  {
    v99 = *((_QWORD *)v14 + 74);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v99 + 248));
    if ( v21 < *(_DWORD *)(v99 + 296) )
    {
      v23 = *(_QWORD *)(v99 + 280) + 16LL * v21;
      v24 = *(_DWORD *)(v23 + 8);
      if ( v22 == ((v24 >> 5) & 3) && (v24 & 0x2000) == 0 )
      {
        v25 = v24 & 0x1F;
        if ( v25 )
        {
          if ( v25 == 1 )
          {
            v26 = *(_QWORD *)v23;
            goto LABEL_28;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v26 = 0LL;
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(v99 + 264));
    ExReleasePushLockSharedEx(v99 + 248, 0LL);
    KeLeaveCriticalRegion();
    v8 = v100;
    goto LABEL_37;
  }
  if ( v21 >= *((_DWORD *)v14 + 74) )
    goto LABEL_36;
  v27 = *((_QWORD *)v14 + 35) + 16LL * v21;
  v28 = *(_DWORD *)(v27 + 8);
  if ( v22 != ((v28 >> 5) & 3) )
    goto LABEL_36;
  if ( (v28 & 0x2000) != 0 )
    goto LABEL_36;
  v29 = v28 & 0x1F;
  if ( !v29 )
    goto LABEL_36;
  if ( v29 != 1 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_36:
    v26 = 0LL;
    goto LABEL_37;
  }
  v26 = *(_QWORD *)v27;
LABEL_37:
  v30 = (char *)v14 + 248;
  if ( !v26 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v14 + 66);
    ExReleasePushLockSharedEx(v30, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
    WdLogGlobalForLineNumber = 7493;
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v91);
    return 3221225485LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24));
  _InterlockedDecrement((volatile signed __int32 *)v14 + 66);
  ExReleasePushLockSharedEx(v30, 0LL);
  KeLeaveCriticalRegion();
  v32 = v97;
  if ( v97 )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v101, v97, v14, &v85);
    if ( !v85 )
    {
      WdLogSingleEntry2(3LL, v26, v32);
      WdLogGlobalForLineNumber = 7508;
      if ( v101 && _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        v33 = (ADAPTER_RENDER **)v101;
LABEL_90:
        ADAPTER_RENDER::DestroyDeviceNoLocks(v33[2], (struct DXGDEVICE *)v33);
        goto LABEL_91;
      }
      goto LABEL_91;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v85 + 8);
    if ( v101 )
    {
      v31 = _InterlockedExchangeAdd64((volatile signed __int64 *)v101 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v31 == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v101 + 2), v101);
    }
  }
  if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors(v31) )
  {
    if ( *(_BYTE *)(v26 + 209) && (v34 = DXGGLOBAL::GetGlobal(), *((_DWORD *)DXGGLOBAL::GetSessionData(v34) + 4742)) )
      v35 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1048);
    else
      v35 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 992);
    v36 = REMOTE_VSYNC::WaitForVSync(v35);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
    KeLeaveCriticalRegion();
    return v36;
  }
  v95 = 0LL;
  v98 = 0LL;
  v116 = 0LL;
  v113 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v26, v9, &v95, &v116, &v98, &v113, 0);
  v38 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, v26, v9, PairingAdapters);
    WdLogGlobalForLineNumber = 7546;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      v26,
      v9,
      v38,
      0LL,
      0LL);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
    KeLeaveCriticalRegion();
    return (unsigned int)v38;
  }
  v39 = v95;
  v40 = v98;
  if ( !v95 || !v98 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7552;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
      7552LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v41 = v85;
  if ( v85 && (v39 != *(DXGADAPTER **)(*((_QWORD *)v85 + 2) + 16LL) || v40 != *((DXGADAPTER **)v85 + 235)) )
  {
    WdLogSingleEntry2(3LL, v26, v97);
    WdLogGlobalForLineNumber = 7560;
    v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)v41 + 8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_88:
    if ( v42 == 1 )
    {
      v33 = (ADAPTER_RENDER **)v85;
      goto LABEL_90;
    }
LABEL_91:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
    KeLeaveCriticalRegion();
    return 3221225485LL;
  }
  v119[1] = 0;
  v121 = v39;
  v122 = 0;
  v123 = 0LL;
  if ( v39 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v39 + 3);
    v39 = v95;
    v40 = v98;
    v120 = -1LL;
  }
  v126 = 0;
  v127 = 0LL;
  if ( !v40 )
    v40 = v39;
  v125 = v40;
  if ( v40 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)v40 + 3);
    v39 = v95;
    v124 = -1LL;
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v95 + 2), v95);
  v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v44 = v98;
  if ( v43 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98 + 2), v98);
  if ( *((_DWORD *)v44 + 40) == 1 )
  {
    v45 = v95;
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
      (DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v118,
      v95,
      v44);
    if ( *((_DWORD *)v45 + 50) != 1 || *((_DWORD *)v98 + 50) != 1 )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v118);
      goto LABEL_112;
    }
    v44 = v98;
    v46 = v90;
    if ( v90 >= *(_DWORD *)(*((_QWORD *)v98 + 390) + 96LL) )
    {
      WdLogSingleEntry2(3LL, v90, -1073741811LL);
      WdLogGlobalForLineNumber = 7588;
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v118);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      if ( !v85 )
        goto LABEL_91;
      v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL);
      goto LABEL_88;
    }
    if ( !DXGADAPTER::IsVSyncAvailable(v98, v90) )
    {
      DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v118);
      goto LABEL_120;
    }
    DXGPAIREDADAPTERSTOPRESETLOCKSHARED::~DXGPAIREDADAPTERSTOPRESETLOCKSHARED((DXGPAIREDADAPTERSTOPRESETLOCKSHARED *)v118);
  }
  else
  {
    v46 = v90;
  }
  v47 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v119, 0LL);
  if ( v47 < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
    KeLeaveCriticalRegion();
    return (unsigned int)v47;
  }
  v48 = v95;
  if ( !*((_QWORD *)v95 + 391) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7606;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pRenderAdapter->IsRenderAdapter()",
      7606LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)v44 + 390) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7607;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDisplayAdapter->IsDisplayAdapter()",
      7607LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v97 )
  {
    if ( *((_DWORD *)v85 + 152) != 1 )
    {
LABEL_112:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
      KeLeaveCriticalRegion();
      return 3221226166LL;
    }
    v48 = v95;
    v44 = v98;
  }
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v100 = 0;
  if ( !DXGADAPTER::IsVSyncAvailable(v44, v46) )
  {
LABEL_120:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
    if ( v85 && _InterlockedExchangeAdd64((volatile signed __int64 *)v85 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
    KeLeaveCriticalRegion();
    return 3223191558LL;
  }
  if ( *((_QWORD *)v44 + 391) )
  {
    if ( v44 != v48 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 7629;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pDisplayAdapter == pRenderAdapter",
        7629LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v50 = 0LL;
    if ( (*((_DWORD *)v48 + 744) & 0x10) != 0 )
      v50 = v46;
    if ( (unsigned int)v50 < 0x10 )
    {
      v51 = _InterlockedIncrement((volatile signed __int32 *)v48 + v50 + 788);
      v48 = v95;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      {
        LODWORD(UserData) = v51;
        UserDataCount[0] = v50;
        McTemplateK0pqq_EtwWriteTransfer(v50, (__int64)&VSyncWaiterChange, v49, v95, *(_QWORD *)UserDataCount, UserData);
      }
      v44 = v98;
    }
    v52 = *((_QWORD *)v48 + 391);
    v86 = 1;
    v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v52 + 736) + 8LL) + 552LL))(
            *(_QWORD *)(v52 + 744),
            v46);
    v54 = v85;
    if ( !v53 )
    {
      v55 = *((_QWORD *)v48 + 391);
      v56 = *(_QWORD *)(v55 + 736);
      if ( v85 )
      {
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncDevice(v56, *((_QWORD *)v85 + 100), 0LL, 1, v90) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v48, v90, v57);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
          goto LABEL_140;
        }
        v88 = 1;
      }
      else
      {
        if ( (int)VIDSCH_EXPORT::VidSchControlVSyncAdapter(v56, *(_QWORD *)(v55 + 744), 1LL, 1, v90) < 0 )
        {
          DXGADAPTER::DecrementVSyncWaiter(v48, v90, v58);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
LABEL_140:
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v26);
          DXGCRITICALREGION::Leave((DXGCRITICALREGION *)v91);
          return 3223191558LL;
        }
        v87 = 1;
      }
    }
    v59 = *((_QWORD *)v48 + 391);
    v60 = *((_QWORD *)v14 + 8);
    v61 = *(_QWORD *)(v59 + 736);
    if ( v60 && *(_QWORD *)(v60 + 8LL * (unsigned int)(*(_DWORD *)v61 - 1) + 16) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v61 + 8) + 1072LL))(*(_QWORD *)(v59 + 744));
  }
  else
  {
    ADAPTER_DISPLAY::ControlVSyncAdapter(*((ADAPTER_DISPLAY **)v44 + 390), v46);
    v54 = v85;
  }
  COREADAPTERACCESS::Release((COREADAPTERACCESS *)v119);
  v62 = *((_QWORD *)v14 + 8);
  v63 = v90;
  LODWORD(v64) = v96;
  LODWORD(v99) = 60;
  v89 = *(_BYTE *)(v62 + 138);
  v92 = 3984LL * v90;
  while ( 1 )
  {
    v65 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(*((ADAPTER_DISPLAY **)v44 + 390), v63, 1, v64, Src, v102);
    v64 = v96;
    v66 = v65;
    if ( v65 >= 0 && v65 <= (int)v96 || v65 == 258 )
      v100 = v65;
    v67 = *((_QWORD *)v44 + 390);
    v68 = v99 - 1;
    LODWORD(v99) = v99 - 1;
    v69 = *(_QWORD *)(v67 + 128);
    v70 = *(_BYTE *)(v69 + v92 + 944);
    v94 = v70;
    if ( v66 != v96 || v89 || v70 )
      break;
    v71 = v68 == 0;
    v63 = v90;
    if ( v71 )
      goto LABEL_160;
  }
  if ( v68 )
    goto LABEL_171;
LABEL_160:
  if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v44 + 1246) < 2 )
  {
    v102 = (PLARGE_INTEGER)1;
    LiveDumpWithWdLogs2 = DxgCreateLiveDumpWithWdLogs2(403LL, 2073LL, 0LL, 0LL, 0LL, 1LL);
    v73 = v98;
    LODWORD(v99) = *((_DWORD *)v98 + 103);
    v69 = *((unsigned int *)v98 + 104);
    HIDWORD(v99) = *((_DWORD *)v98 + 104);
    if ( (unsigned int)dword_14015B660 > 5
      && (qword_14015B670 & 0x400000400000LL) != 0
      && (qword_14015B678 & 0x400000400000LL) == qword_14015B678 )
    {
      LOBYTE(v69) = 1;
      v106 = *((unsigned __int8 *)v98 + 209);
      IsDebuggerPresent = WdIsDebuggerPresent(v69);
      v164 = 4LL;
      v107 = IsDebuggerPresent;
      v108 = *((_DWORD *)v73 + 804);
      v109 = *((unsigned __int8 *)v73 + 3053);
      v110 = LiveDumpWithWdLogs2;
      LOWORD(v96) = *((_WORD *)v73 + 1502);
      v114 = *((_QWORD *)v73 + 251);
      v75 = (_WORD *)*((_QWORD *)v73 + 250);
      v111 = *((_DWORD *)v73 + 109);
      v112 = *((_DWORD *)v73 + 108);
      v103 = *((_DWORD *)v73 + 107);
      v104 = *((_DWORD *)v73 + 106);
      LODWORD(Src) = *((_DWORD *)v73 + 105);
      v115 = v99;
      v163 = &v106;
      v161 = &v107;
      v159 = &v108;
      v157 = &v109;
      v155 = &v110;
      v153 = &v96;
      v151 = &v114;
      v93 = 0x1000000LL;
      LOWORD(v97) = 1;
      v162 = 4LL;
      v160 = 4LL;
      v158 = 4LL;
      v156 = 4LL;
      v154 = 2LL;
      v152 = 8LL;
      if ( v75 )
      {
        v76 = -1LL;
        do
          v71 = v75[++v76] == 0;
        while ( !v71 );
        v77 = 2 * v76 + 2;
      }
      else
      {
        v75 = &unk_1400C5C48;
        v77 = 2;
      }
      v149 = v77;
      v148 = v75;
      v146 = &v111;
      v150 = 0;
      v144 = &v112;
      v147 = 4LL;
      v142 = &v103;
      v140 = &v104;
      p_Src = &Src;
      v136 = &v115;
      v134 = &v93;
      v132 = &v97;
      *(_DWORD *)&EventDescriptor.Level = 5;
      v128.Ptr = (ULONGLONG)off_14015B668;
      v145 = 4LL;
      v143 = 4LL;
      v141 = 4LL;
      v139 = 4LL;
      v137 = 8LL;
      v135 = 8LL;
      v133 = 2LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0x400000400000LL;
      v128.Size = *(unsigned __int16 *)off_14015B668;
      v129 = &unk_140139749;
      v131 = 1;
      v128.Reserved = 2;
      v130 = 266;
      LODWORD(v99) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwWriteTransfer(qword_14015B680, &EventDescriptor, 0LL, 0LL, 0x12u, &v128);
    }
  }
  v48 = v95;
  v54 = v85;
LABEL_171:
  v78 = v90;
  if ( v86 )
    DXGADAPTER::DecrementVSyncWaiter(v48, v90, v64);
  if ( v87 )
  {
    v66 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v119, 0LL);
    if ( v66 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
      if ( v54 )
        goto LABEL_176;
      goto LABEL_178;
    }
    v79 = VIDSCH_EXPORT::VidSchControlVSyncAdapter(
            *(_QWORD *)(*((_QWORD *)v48 + 391) + 736LL),
            *(_QWORD *)(*((_QWORD *)v48 + 391) + 744LL),
            1LL,
            0,
            v78);
  }
  else
  {
    if ( !v88 )
      goto LABEL_189;
    v66 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v119, 0LL);
    if ( v66 < 0 )
      goto LABEL_184;
    v80 = *((_DWORD *)v54 + 152);
    v54 = v85;
    if ( v80 != 1 )
      goto LABEL_189;
    v79 = VIDSCH_EXPORT::VidSchControlVSyncDevice(
            *(_QWORD *)(*((_QWORD *)v95 + 391) + 736LL),
            *((_QWORD *)v85 + 100),
            0LL,
            0,
            v78);
  }
  v66 = v79;
LABEL_189:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(UserDataCounta) = v94 != 0;
    LOBYTE(v6) = v89 != 0;
    McTemplateK0tt_EtwWriteTransfer(v69, (__int64)&WaitForVerticalBlankEventInternal, v64, v6, UserDataCounta);
  }
  if ( v66 < 0 || (v81 = v100) == 0 )
  {
LABEL_184:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
    if ( v54 )
    {
LABEL_176:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
    }
LABEL_178:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
    KeLeaveCriticalRegion();
    return (unsigned int)v66;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v119);
  if ( v54 && _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v85 + 2), v85);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v26 + 16), (struct DXGADAPTER *)v26);
  KeLeaveCriticalRegion();
  return v81;
}
