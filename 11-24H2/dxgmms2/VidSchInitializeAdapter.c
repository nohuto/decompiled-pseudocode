/*
 * XREFs of VidSchInitializeAdapter @ 0x140115F70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14000C844 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x1400350FC (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x140038D6C (--0DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??0_VIDSCH_GLOBAL@@QEAA@XZ @ 0x14004A9B4 (--0_VIDSCH_GLOBAL@@QEAA@XZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@K$07$0DAGBGJFG@@@QEAAPEAKI@Z @ 0x14004AED4 (-AllocateElements@-$NonPagedPoolZeroedArray@K$07$0DAGBGJFG@@@QEAAPEAKI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z @ 0x14004AF50 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEAAPEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@I@Z @ 0x1400504D8 (-AllocateElements@-$NonPagedPoolZeroedArray@U_VIDSCH_INDEPENDENT_FLIP_STATE@@$00$0DJGBGJFG@@@QEA.c)
 *     Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline @ 0x14005096C (Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledDeviceUsageNoInline @ 0x1400509C0 (Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledDeviceUsageNoInline @ 0x140050A14 (Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledDeviceUsageNoInline @ 0x140050A68 (Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledDeviceUsageNoI.c)
 *     Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledDeviceUsageNoInline @ 0x140050ABC (Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_NonVolatileReadInVidSch__private_IsEnabledDeviceUsageNoInline @ 0x140050B10 (Feature_Servicing_NonVolatileReadInVidSch__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchiCreateNode @ 0x1400A7710 (VidSchiCreateNode.c)
 *     VidSchiInitializeNode @ 0x1400A7B94 (VidSchiInitializeNode.c)
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 *     VidSchiReadGlobalConfiguration @ 0x14010D47C (VidSchiReadGlobalConfiguration.c)
 *     VidSchiRequestSchedulerStatus @ 0x140115930 (VidSchiRequestSchedulerStatus.c)
 */

_VIDSCH_GLOBAL *__fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // r14
  _VIDSCH_GLOBAL *Pool2; // rax
  _VIDSCH_GLOBAL *v9; // rdi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  __int64 v18; // r15
  unsigned __int64 v19; // rbx
  int v20; // ecx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int v25; // r13d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char *v30; // rbx
  __int64 v31; // r15
  char *v32; // rbx
  __int64 v33; // r15
  __int64 Timer; // rax
  NTSTATUS v35; // eax
  int v36; // edx
  NTSTATUS v37; // eax
  __int64 v38; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned int v40; // edx
  unsigned int v41; // r15d
  _DWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rbx
  unsigned int v45; // ebx
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rbx
  __int64 v49; // r12
  __int64 v50; // r14
  union _SLIST_HEADER *v51; // rcx
  __int64 v52; // r12
  __int64 v53; // rbx
  __int64 v54; // r14
  union _SLIST_HEADER *v55; // rcx
  unsigned __int64 v56; // rbx
  __int64 v57; // rax
  bool v58; // cf
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // rcx
  unsigned int v63; // r12d
  __int64 v64; // rbx
  __int64 v65; // rax
  unsigned int v66; // edx
  __int64 v67; // rdx
  unsigned int i; // edx
  __int64 v69; // rax
  _QWORD *v70; // rcx
  unsigned int v71; // ebx
  unsigned int v72; // eax
  unsigned int v73; // r12d
  int v74; // eax
  __int64 Node; // rax
  __int64 *v76; // rcx
  __int64 *v77; // rcx
  unsigned int v78; // r8d
  __int64 *v79; // rdx
  unsigned int v80; // r12d
  __int64 v81; // rax
  __int64 *v82; // rcx
  __int64 *v83; // rcx
  unsigned int v84; // r8d
  __int64 *v85; // rdx
  int v86; // eax
  int v87; // eax
  NTSTATUS v88; // eax
  _QWORD *v89; // rcx
  _QWORD *v90; // rax
  int v92; // [rsp+50h] [rbp-B0h] BYREF
  void *ThreadHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+90h] [rbp-70h] BYREF
  int v96; // [rsp+98h] [rbp-68h]
  const wchar_t *v97; // [rsp+A0h] [rbp-60h]
  unsigned int *v98; // [rsp+A8h] [rbp-58h]
  int v99; // [rsp+B0h] [rbp-50h]
  int *v100; // [rsp+B8h] [rbp-48h]
  int v101; // [rsp+C0h] [rbp-40h]
  __int64 v102; // [rsp+C8h] [rbp-38h]
  int v103; // [rsp+D0h] [rbp-30h]
  __int64 v104; // [rsp+D8h] [rbp-28h]
  __int128 v105; // [rsp+E0h] [rbp-20h]
  __int128 v106; // [rsp+F0h] [rbp-10h]
  _BYTE v107[80]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v108; // [rsp+160h] [rbp+60h] BYREF
  __int64 v109; // [rsp+178h] [rbp+78h]

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 379;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
    return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 16);
  v109 = v7;
  Pool2 = (_VIDSCH_GLOBAL *)ExAllocatePool2(64LL, 7104LL, 811690326LL);
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 397;
    return 0LL;
  }
  v9 = _VIDSCH_GLOBAL::_VIDSCH_GLOBAL(Pool2);
  *(_DWORD *)v9 = 811690326;
  *((_DWORD *)v9 + 1) = *(_DWORD *)(v7 + 240);
  *((_QWORD *)v9 + 1) = a1;
  *((_QWORD *)v9 + 2) = v7;
  *((_QWORD *)v9 + 3) = a2;
  *((_DWORD *)v9 + 8) = *(_DWORD *)(v7 + 2436);
  *((_DWORD *)v9 + 9) = 7;
  *((_QWORD *)v9 + 855) = a3;
  KeQueryPerformanceCounter((PLARGE_INTEGER)v9 + 359);
  v10 = *(_DWORD *)(v7 + 1856);
  *((_DWORD *)v9 + 10) = v10;
  if ( !v10 )
  {
    *((_DWORD *)v9 + 10) = 1;
    *((_BYTE *)v9 + 50) = 1;
  }
  if ( *(_BYTE *)(v7 + 2943) )
    *((_BYTE *)v9 + 51) = 1;
  *((_BYTE *)v9 + 45) = (*(_DWORD *)(v7 + 2464) & 2) != 0;
  *((_BYTE *)v9 + 44) = *(_BYTE *)(v7 + 2938);
  *((_BYTE *)v9 + 46) = (*(_DWORD *)(v7 + 2464) & 0x10) != 0;
  *((_BYTE *)v9 + 47) = (*(_DWORD *)(v7 + 2460) & 0x10) != 0;
  *((_BYTE *)v9 + 48) = (*(_DWORD *)(v7 + 2464) & 0x20) == 0;
  *((_BYTE *)v9 + 49) = (*(_DWORD *)(v7 + 2464) & 0x40) != 0;
  *((_BYTE *)v9 + 53) = (**(_DWORD **)(v7 + 3008) & 0x40) != 0;
  *((_BYTE *)v9 + 7060) = *(_QWORD *)(v7 + 1728) != 0LL;
  *((_BYTE *)v9 + 7063) = (**(_DWORD **)(v7 + 3008) & 0x20000000) != 0;
  *((_BYTE *)v9 + 7061) = (**(_DWORD **)(v7 + 3008) & 0x40000000) != 0;
  *((_BYTE *)v9 + 7062) = (*(_DWORD *)(*(_QWORD *)(v7 + 3008) + 4LL) & 2) != 0;
  v11 = 14;
  *((_BYTE *)v9 + 7064) = **(int **)(v7 + 3008) < 0;
  *((_BYTE *)v9 + 7067) = 1;
  if ( ((*(_DWORD *)(v7 + 2464) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v7 + 2464) >> 7) & 0xFu) < 0xE )
    v11 = (*(_DWORD *)(v7 + 2464) >> 7) & 0xF;
  *((_DWORD *)v9 + 61) = v11;
  *((_DWORD *)v9 + 38) = *(_DWORD *)(v7 + 2944);
  *((_BYTE *)v9 + 156) = *(_BYTE *)(v7 + 3049) != 0;
  *((_DWORD *)v9 + 40) = *(_DWORD *)(v7 + 2972);
  if ( (**(_DWORD **)(v7 + 3008) & 0x100000) != 0 )
  {
    v12 = *(_DWORD *)(v7 + 2980);
    *((_DWORD *)v9 + 15) = v12;
    if ( !v12 )
    {
      *((_DWORD *)v9 + 15) = 1;
      v12 = 1;
    }
    *((_DWORD *)v9 + 16) = *(_DWORD *)(v7 + 2984);
    *((_BYTE *)v9 + 59) = v12 > 1;
  }
  else
  {
    *((_DWORD *)v9 + 15) = 1;
  }
  v13 = 0;
  *((_BYTE *)v9 + 7056) = *(_BYTE *)(v7 + 3068) != 0;
  *((_BYTE *)v9 + 2468) = (*(_DWORD *)(v7 + 2976) & 0x10) != 0;
  *((_QWORD *)v9 + 333) = MEMORY[0xFFFFF78000000320];
  v14 = *(_DWORD *)(v7 + 296);
  *(_QWORD *)((char *)v9 + 76) = v14;
  if ( v14 )
  {
    v15 = 0LL;
    v16 = v14;
    do
    {
      v17 = *(unsigned __int16 *)(v15 + *(_QWORD *)(v7 + 2992));
      v15 += 344LL;
      v13 += v17;
      *((_DWORD *)v9 + 20) = v13;
      --v16;
    }
    while ( v16 );
  }
  v18 = (unsigned int)(v13 + *((_DWORD *)v9 + 19));
  *((_DWORD *)v9 + 21) = v18;
  v19 = (unsigned __int64)(v18 + 63) >> 6;
  if ( (unsigned int)v18 <= 8 )
  {
    *((_QWORD *)v9 + 86) = (char *)v9 + 696;
    if ( (_DWORD)v18 )
      memset((char *)v9 + 696, 0, 8LL * (unsigned int)v18);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v18 < 8 )
    {
LABEL_131:
      WdLogSingleEntry1(1LL, v7);
      WdLogGlobalForLineNumber = 526;
      goto LABEL_132;
    }
    *((_QWORD *)v9 + 86) = ExAllocatePool2(64LL, 8 * v18, 811690326LL);
  }
  *((_DWORD *)v9 + 190) = v18;
  if ( !*((_QWORD *)v9 + 86)
    || !NonPagedPoolZeroedArray<unsigned long,8,811690326>::AllocateElements((__int64 *)v9 + 352, *((_DWORD *)v9 + 21))
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 64, v19)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 70, v19)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 76, v19)
    || !NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements((__int64 *)v9 + 82, v19) )
  {
    goto LABEL_131;
  }
  RtlInitializeBitMapEx((char *)v9 + 496, *((_QWORD *)v9 + 64), *((unsigned int *)v9 + 21));
  RtlInitializeBitMapEx((char *)v9 + 544, *((_QWORD *)v9 + 70), *((unsigned int *)v9 + 21));
  RtlInitializeBitMapEx((char *)v9 + 592, *((_QWORD *)v9 + 76), *((unsigned int *)v9 + 21));
  RtlInitializeBitMapEx((char *)v9 + 640, *((_QWORD *)v9 + 82), *((unsigned int *)v9 + 21));
  v20 = 31;
  v21 = *((unsigned int *)v9 + 19);
  if ( *(_DWORD *)(v7 + 2456) < 0x1Fu )
    v20 = *(_DWORD *)(v7 + 2456);
  v22 = *((_DWORD *)v9 + 698);
  *((_DWORD *)v9 + 716) = v20;
  v23 = 8 * v21;
  *((_DWORD *)v9 + 698) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(2 * *(_DWORD *)(v7 + 2460))) & 0x10;
  v24 = ExAllocatePool2(64LL, v23, 811690326LL);
  v25 = 0;
  *((_QWORD *)v9 + 40) = v24;
  if ( !v24 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 549;
LABEL_132:
    v67 = 0x40000LL;
    goto LABEL_133;
  }
  v27 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 19), 811690326LL);
  *((_QWORD *)v9 + 41) = v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 557;
    goto LABEL_132;
  }
  v28 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 19), 811690326LL);
  *((_QWORD *)v9 + 42) = v28;
  if ( !v28 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 565;
    goto LABEL_132;
  }
  v29 = ExAllocatePool2(64LL, v23, 811690326LL);
  *((_QWORD *)v9 + 43) = v29;
  if ( !v29 )
  {
    WdLogSingleEntry1(1LL, v7);
    WdLogGlobalForLineNumber = 575;
    goto LABEL_132;
  }
  *((_DWORD *)v9 + 92) = 0;
  VidSchiReadGlobalConfiguration((__int64)v9);
  *((_DWORD *)v9 + 699) = (*((_DWORD *)v9 + 698) & 0x10 | 8u) >> 3;
  *((_DWORD *)v9 + 700) = 5;
  if ( !*((_DWORD *)v9 + 701) && (*(_DWORD *)(v7 + 2460) & 0x40) == 0 )
    *((_DWORD *)v9 + 701) = 1;
  if ( !*((_DWORD *)v9 + 702) )
    *((_DWORD *)v9 + 702) = (*(_DWORD *)(*((_QWORD *)v9 + 2) + 3004LL) >= 2400) + 1;
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1240));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1032));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1136));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 1344));
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 376));
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 248);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 251);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 249);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 250);
  v30 = (char *)v9 + 1448;
  v31 = 4LL;
  do
  {
    *(_OWORD *)v30 = 0LL;
    *((_OWORD *)v30 + 1) = 0LL;
    *((_OWORD *)v30 + 2) = 0LL;
    *((_QWORD *)v30 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)v30, SynchronizationEvent, 0);
    v30 += 56;
    --v31;
  }
  while ( v31 );
  v32 = (char *)v9 + 1672;
  v33 = 4LL;
  do
  {
    *(_OWORD *)v32 = 0LL;
    *((_OWORD *)v32 + 1) = 0LL;
    *((_OWORD *)v32 + 2) = 0LL;
    *((_QWORD *)v32 + 6) = 0LL;
    KeInitializeEvent((PRKEVENT)v32, SynchronizationEvent, 0);
    v32 += 56;
    --v33;
  }
  while ( v33 );
  Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, v9, 4LL);
  *((_QWORD *)v9 + 24) = Timer;
  if ( !Timer )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 700;
LABEL_134:
    VidSchTerminateAdapter(v9);
    return 0LL;
  }
  *((_QWORD *)v9 + 45) = (char *)v9 + 352;
  *((_QWORD *)v9 + 44) = (char *)v9 + 352;
  InitializeSListHead((PSLIST_HEADER)v9 + 127);
  *((_QWORD *)v9 + 257) = (char *)v9 + 2048;
  *((_QWORD *)v9 + 256) = (char *)v9 + 2048;
  *((_QWORD *)v9 + 238) = (char *)v9 + 1896;
  *((_QWORD *)v9 + 237) = (char *)v9 + 1896;
  *((_QWORD *)v9 + 240) = (char *)v9 + 1912;
  *((_QWORD *)v9 + 239) = (char *)v9 + 1912;
  *((_QWORD *)v9 + 242) = (char *)v9 + 1928;
  *((_QWORD *)v9 + 241) = (char *)v9 + 1928;
  *((_QWORD *)v9 + 244) = (char *)v9 + 1944;
  *((_QWORD *)v9 + 243) = (char *)v9 + 1944;
  *((_QWORD *)v9 + 425) = (char *)v9 + 3392;
  *((_QWORD *)v9 + 424) = (char *)v9 + 3392;
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 426);
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 427);
  *((_QWORD *)v9 + 246) = (char *)v9 + 1960;
  *((_QWORD *)v9 + 245) = (char *)v9 + 1960;
  *((_QWORD *)v9 + 111) = (char *)v9 + 880;
  *((_QWORD *)v9 + 110) = (char *)v9 + 880;
  *((_QWORD *)v9 + 388) = (char *)v9 + 3096;
  *((_QWORD *)v9 + 387) = (char *)v9 + 3096;
  *((_QWORD *)v9 + 113) = (char *)v9 + 896;
  *((_QWORD *)v9 + 112) = (char *)v9 + 896;
  *((_QWORD *)v9 + 115) = (char *)v9 + 912;
  *((_QWORD *)v9 + 114) = (char *)v9 + 912;
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 340);
  ExInitializeResourceLite((PERESOURCE)((char *)v9 + 3112));
  KeInitializeEvent((PRKEVENT)v9 + 134, SynchronizationEvent, 0);
  *((_QWORD *)v9 + 313) = VidSchiControlVSyncThread;
  *((_QWORD *)v9 + 337) = VidSchiDeferredVisibilityThread;
  *((_QWORD *)v9 + 314) = v9;
  *((_QWORD *)v9 + 311) = 0LL;
  *((_QWORD *)v9 + 338) = v7;
  *((_QWORD *)v9 + 335) = 0LL;
  v35 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v9 + 6928),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          0x28uLL,
          0x30616956u,
          0);
  if ( v35 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v35);
    WdLogGlobalForLineNumber = 764;
    goto LABEL_132;
  }
  *((_QWORD *)v9 + 864) = (char *)v9 + 6904;
  *((_QWORD *)v9 + 863) = (char *)v9 + 6904;
  KeInitializeSpinLock((PKSPIN_LOCK)v9 + 858);
  *((_QWORD *)v9 + 862) = v9;
  *((_QWORD *)v9 + 861) = VidSchiProcessAsyncLiveDump;
  *((_QWORD *)v9 + 859) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)v9 + 7024), SynchronizationEvent, 0);
  *((_QWORD *)v9 + 470) = (char *)v9 + 3752;
  *((_QWORD *)v9 + 469) = (char *)v9 + 3752;
  *((_QWORD *)v9 + 472) = (char *)v9 + 3768;
  *((_QWORD *)v9 + 471) = (char *)v9 + 3768;
  v36 = *((_DWORD *)v9 + 19);
  *((_BYTE *)v9 + 7048) = 1;
  v37 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)((char *)v9 + 928),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          *((_DWORD *)v9 + 38) * ((v36 << 6) + ((8 * v36 + 231) & 0xFFFFFFF8)) + 656 + 8 * v36,
          0x38616956u,
          0);
  if ( v37 < 0 )
  {
    WdLogSingleEntry2(1LL, v9, v37);
    WdLogGlobalForLineNumber = 794;
    goto LABEL_132;
  }
  v38 = *((_QWORD *)v9 + 2);
  *((_BYTE *)v9 + 1024) = 1;
  *((_BYTE *)v9 + 7059) = 0;
  *((_BYTE *)v9 + 7066) = (*(_DWORD *)(v38 + 2464) & 0x1000) != 0;
  *((_BYTE *)v9 + 7068) = (unsigned int)Feature_Servicing_NonVolatileReadInVidSch__private_IsEnabledDeviceUsageNoInline() != 0;
  *((_BYTE *)v9 + 7069) = (unsigned int)Feature_Servicing_GraphicsKernel_NonInteractiveQueueTdrFix__private_IsEnabledDeviceUsageNoInline() != 0;
  *((_BYTE *)v9 + 7070) = (unsigned int)Feature_Servicing_GraphicsKernel_FlipQueueRecursionFix__private_IsEnabledDeviceUsageNoInline() != 0;
  *((_BYTE *)v9 + 7071) = (unsigned int)Feature_Servicing_GraphicsKernel_VideoPlaneStallFix__private_IsEnabledDeviceUsageNoInline() != 0;
  *((_BYTE *)v9 + 7072) = (unsigned int)Feature_Servicing_GraphicsKernel_SchedulerSuspendedHwfqDrainFix__private_IsEnabledDeviceUsageNoInline() != 0;
  IsEnabledDeviceUsageNoInline = Feature_GraphicsKernel2602BugFixes__private_IsEnabledDeviceUsageNoInline();
  v40 = *((_DWORD *)v9 + 10);
  *((_BYTE *)v9 + 7058) = 1;
  v41 = 0;
  *((_BYTE *)v9 + 7073) = IsEnabledDeviceUsageNoInline != 0;
  if ( v40 )
  {
    while ( 1 )
    {
      v42 = (_DWORD *)ExAllocatePool2(64LL, 83120LL, 962685270LL);
      *((_QWORD *)v9 + v41 + 429) = v42;
      if ( !v42 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 828;
        goto LABEL_134;
      }
      *v42 = 962685270;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 429) + 44488LL) = -1;
      *(_BYTE *)(*((_QWORD *)v9 + v41 + 429) + 78948LL) = 1;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 429) + 83092LL) = 1;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 429) + 24LL) = v41;
      if ( *((_BYTE *)v9 + 7058) )
      {
        v43 = (_QWORD *)operator new(4200LL, 0x39616956u, 64LL);
        v44 = v43;
        if ( v43 )
        {
          v43[11] = 0LL;
          *v43 = &LinearFitT<256>::`vftable';
          v43[12] = 0LL;
          v43[4] = 0x3FF0000000000000LL;
          LinearFitT<256>::Reset((__int64)v43);
          v44[11] = 1LL;
          *v44 = &VIDSCH_VSYNC_SMOOTHER::`vftable';
        }
        else
        {
          v44 = 0LL;
        }
        *(_QWORD *)(*((_QWORD *)v9 + v41 + 429) + 44408LL) = v44;
        if ( !*(_QWORD *)(*((_QWORD *)v9 + v41 + 429) + 44408LL) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 842;
          goto LABEL_132;
        }
      }
      v45 = 0;
      if ( *((_DWORD *)v9 + 38) )
        break;
LABEL_67:
      v47 = ExAllocatePool2(64LL, 12LL, 962685270LL);
      *((_QWORD *)v9 + v41 + 839) = v47;
      if ( !v47 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 875;
        goto LABEL_134;
      }
      InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v9 + v41 + 429) + 44848LL));
      v48 = 0LL;
      v49 = 0LL;
      v50 = 64LL;
      do
      {
        *(_DWORD *)(*((_QWORD *)v9 + v41 + 429) + v48 + 44864) = 929130838;
        v51 = (union _SLIST_HEADER *)*((_QWORD *)v9 + v41 + 429);
        ExpInterlockedPushEntrySList(v51 + 2803, (PSLIST_ENTRY)&v51[v49 + 2805]);
        v49 += 33LL;
        v48 += 528LL;
        --v50;
      }
      while ( v50 );
      *(_QWORD *)(*((_QWORD *)v9 + v41 + 429) + 78960LL) = 0LL;
      *(_WORD *)(*((_QWORD *)v9 + v41 + 429) + 83088LL) = 0;
      InitializeSListHead((PSLIST_HEADER)(*((_QWORD *)v9 + v41 + 429) + 78976LL));
      v52 = 0LL;
      v53 = 0LL;
      v54 = 64LL;
      do
      {
        *(_DWORD *)(*((_QWORD *)v9 + v41 + 429) + v53 + 78992) = 1650551126;
        v55 = (union _SLIST_HEADER *)*((_QWORD *)v9 + v41 + 429);
        ExpInterlockedPushEntrySList(v55 + 4936, (PSLIST_ENTRY)&v55[v52 + 4938]);
        v52 += 4LL;
        v53 += 64LL;
        --v54;
      }
      while ( v54 );
      v7 = v109;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 429) + 128LL) = *((_DWORD *)v9 + 60);
      v56 = *(unsigned int *)(*((_QWORD *)v9 + v41 + 429) + 128LL);
      v57 = 112 * v56;
      if ( !is_mul_ok(v56, 0x70uLL) )
        v57 = -1LL;
      v58 = __CFADD__(v57, 8LL);
      v59 = v57 + 8;
      if ( v58 )
        v59 = -1LL;
      v60 = (_QWORD *)operator new[](v59, 0x61616956u, 64LL);
      v25 = 0;
      if ( v60 )
      {
        *v60 = v56;
        v61 = v60 + 1;
      }
      else
      {
        v61 = 0LL;
      }
      *(_QWORD *)(*((_QWORD *)v9 + v41 + 429) + 136LL) = v61;
      v62 = *((_QWORD *)v9 + v41 + 429);
      if ( !*(_QWORD *)(v62 + 136) )
      {
        WdLogSingleEntry1(1LL, v41);
        WdLogGlobalForLineNumber = 910;
        goto LABEL_132;
      }
      v63 = 0;
      if ( *(_DWORD *)(v62 + 128) )
      {
        while ( 1 )
        {
          v64 = *(_QWORD *)(v62 + 136) + 112LL * v63;
          v65 = ExAllocatePool2(64LL, 8LL * *((unsigned int *)v9 + 38), 962685270LL);
          *(_QWORD *)(v64 + 72) = v65;
          if ( !v65 )
            break;
          v62 = *((_QWORD *)v9 + v41 + 429);
          if ( ++v63 >= *(_DWORD *)(v62 + 128) )
          {
            v25 = 0;
            goto LABEL_84;
          }
        }
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2401;
        goto LABEL_132;
      }
LABEL_84:
      v40 = *((_DWORD *)v9 + 10);
      if ( ++v41 >= v40 )
        goto LABEL_92;
    }
    while ( 1 )
    {
      v46 = 304LL * v45;
      *(_DWORD *)(*((_QWORD *)v9 + v41 + 429) + v46 + 188) = -1;
      if ( !*((_BYTE *)v9 + 59) )
      {
        *(_QWORD *)(*((_QWORD *)v9 + v41 + 429) + v46 + 432) = ExAllocatePool2(64LL, 1024LL, 962685270LL);
        if ( !*(_QWORD *)(*((_QWORD *)v9 + v41 + 429) + v46 + 432) )
          break;
      }
      if ( ++v45 >= *((_DWORD *)v9 + 38) )
        goto LABEL_67;
    }
    WdLogSingleEntry0(1LL);
    v26 = 0LL;
    WdLogGlobalForLineNumber = 860;
    goto LABEL_132;
  }
LABEL_92:
  v66 = *((_DWORD *)v9 + 38) * v40;
  if ( !v66 )
    v66 = 1;
  if ( !NonPagedPoolZeroedArray<_VIDSCH_INDEPENDENT_FLIP_STATE,1,962685270>::AllocateElements((__int64 *)v9 + 445, v66) )
  {
    _InterlockedAdd(&gVidSchLowResourceAccumulated, 1u);
    WdLogSingleEntry1(6LL, 931LL);
    v67 = 262145LL;
    WdLogGlobalForLineNumber = 931;
LABEL_133:
    DxgkLogInternalTriageEvent(v26, v67);
    goto LABEL_134;
  }
  for ( i = 0; i < *((_DWORD *)v9 + 932); v70[17] = v70 + 17 )
  {
    v69 = i++;
    v70 = (_QWORD *)(*((_QWORD *)v9 + 445) + 160 * v69);
    v70[16] = v70 + 15;
    v70[15] = v70 + 15;
    v70[18] = v70 + 17;
  }
  *((_DWORD *)v9 + 936) = -1;
  v71 = 0;
  v72 = *((_DWORD *)v9 + 19);
  v73 = 0;
  *((_QWORD *)v9 + 467) = 1LL;
  if ( v72 )
  {
    while ( 1 )
    {
      v74 = *(unsigned __int16 *)(344LL * v73 + *(_QWORD *)(v7 + 2992));
      LODWORD(v109) = v74;
      *((_BYTE *)v9 + v73 + 88) = v71;
      if ( v74 )
        break;
LABEL_109:
      v72 = *((_DWORD *)v9 + 19);
      ++v73;
      v25 = 0;
      if ( v73 >= v72 )
        goto LABEL_110;
    }
    while ( 1 )
    {
      Node = VidSchiCreateNode((__int64)v9, v73, v25, v71);
      v76 = (__int64 *)*((_QWORD *)v9 + 86);
      if ( v71 < *((_DWORD *)v9 + 190) )
        v76 += v71;
      *v76 = Node;
      v77 = (__int64 *)*((_QWORD *)v9 + 86);
      v78 = *((_DWORD *)v9 + 190);
      v79 = &v77[v71];
      if ( v71 >= v78 )
        v79 = (__int64 *)*((_QWORD *)v9 + 86);
      if ( !*v79 )
        break;
      if ( v71 < v78 )
        v77 += v71;
      if ( (int)VidSchiInitializeNode(*v77) < 0 )
        goto LABEL_134;
      ++v71;
      if ( ++v25 >= (unsigned int)v109 )
        goto LABEL_109;
    }
    WdLogSingleEntry2(1LL, v7, v71);
    WdLogGlobalForLineNumber = 958;
    goto LABEL_132;
  }
LABEL_110:
  v80 = 0;
  if ( v72 )
  {
    while ( 1 )
    {
      v81 = VidSchiCreateNode((__int64)v9, v80, 0x7FFFu, v71);
      v82 = (__int64 *)*((_QWORD *)v9 + 86);
      if ( v71 < *((_DWORD *)v9 + 190) )
        v82 += v71;
      *v82 = v81;
      v83 = (__int64 *)*((_QWORD *)v9 + 86);
      v84 = *((_DWORD *)v9 + 190);
      v85 = &v83[v71];
      if ( v71 >= v84 )
        v85 = (__int64 *)*((_QWORD *)v9 + 86);
      if ( !*v85 )
        break;
      if ( v71 < v84 )
        v83 += v71;
      if ( (int)VidSchiInitializeNode(*v83) < 0 )
        goto LABEL_134;
      ++v71;
      if ( ++v80 >= *((_DWORD *)v9 + 19) )
        goto LABEL_120;
    }
    WdLogSingleEntry2(1LL, v7, v71);
    WdLogGlobalForLineNumber = 979;
    goto LABEL_132;
  }
LABEL_120:
  v92 = 1;
  v108 = 0;
  v97 = L"PageFaultDebugMode";
  v95 = 0LL;
  v98 = &v108;
  v96 = 288;
  v100 = &v92;
  v99 = 67108868;
  v101 = 4;
  v102 = 0LL;
  v103 = 0;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v86 = RtlQueryRegistryValuesEx(
          0LL,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
          &v95,
          0LL,
          0LL);
  if ( v86 < 0 )
  {
    v108 = 1;
    WdLogSingleEntry1(3LL, v86);
    WdLogGlobalForLineNumber = 1018;
  }
  v87 = v108;
  if ( v108 > 1 )
  {
    WdLogSingleEntry1(3LL, v108);
    v87 = 1;
    WdLogGlobalForLineNumber = 1023;
    v108 = 1;
  }
  g_PageFaultDebugMode = v87;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ThreadHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v88 = PsCreateSystemThread(
          &ThreadHandle,
          0x1FFFFFu,
          &ObjectAttributes,
          0LL,
          0LL,
          (PKSTART_ROUTINE)VidSchiWorkerThread,
          v9);
  if ( v88 < 0 )
  {
    WdLogSingleEntry2(1LL, v7, v88);
    WdLogGlobalForLineNumber = 1051;
    goto LABEL_132;
  }
  VidSchiRequestSchedulerStatus((__int64)v9, 1, 1);
  ObfReferenceObject(*((PVOID *)v9 + 21));
  ZwClose(ThreadHandle);
  DXGAUTOEXPUSHLOCKEXCLUSIVE::DXGAUTOEXPUSHLOCKEXCLUSIVE(
    (DXGAUTOEXPUSHLOCKEXCLUSIVE *)v107,
    (struct _EX_PUSH_LOCK *const)&gAdapterListLock);
  v89 = (_QWORD *)qword_140081920;
  v90 = (_QWORD *)((char *)v9 + 3792);
  if ( *(PVOID **)qword_140081920 != &gAdapterListHead )
    __fastfail(3u);
  *((_QWORD *)v9 + 475) = qword_140081920;
  *v90 = &gAdapterListHead;
  *v89 = v90;
  qword_140081920 = (__int64)v9 + 3792;
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v107);
  return v9;
}
