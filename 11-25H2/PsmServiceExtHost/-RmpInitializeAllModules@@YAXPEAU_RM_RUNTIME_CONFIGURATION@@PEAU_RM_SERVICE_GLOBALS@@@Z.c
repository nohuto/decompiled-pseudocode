/*
 * XREFs of ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800856B0
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     CempLockInitialize @ 0x180040C1C (CempLockInitialize.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x1800654C8 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180080E74 (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180088E74 (-RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x1800896CC (-RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpGameModeReadDefaultGpuSettings@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008CBF0 (-RmpGameModeReadDefaultGpuSettings@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x1800909C0 (-RmpSystemEnableAsyncInSwap@@YAXXZ.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall RmpInitializeAllModules(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // zf
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  int v18; // eax
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v21; // xmm0
  int v22; // eax
  __int128 v23; // xmm1
  int v24; // eax
  __int128 v25; // xmm0
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-50h]

  memset_0(SystemInformation, 0, 0x40uLL);
  memset_0(a2, 0, 0xE90uLL);
  v4 = *((_OWORD *)a1 + 1);
  *(_OWORD *)((char *)a2 + 3544) = *(_OWORD *)a1;
  v5 = *((_OWORD *)a1 + 2);
  *(_OWORD *)((char *)a2 + 3560) = v4;
  v6 = *((_OWORD *)a1 + 3);
  *(_OWORD *)((char *)a2 + 3576) = v5;
  v7 = *((_OWORD *)a1 + 4);
  *(_OWORD *)((char *)a2 + 3592) = v6;
  v8 = *((_OWORD *)a1 + 5);
  *(_OWORD *)((char *)a2 + 3608) = v7;
  v9 = *((_OWORD *)a1 + 6);
  *(_OWORD *)((char *)a2 + 3624) = v8;
  v10 = *((_OWORD *)a1 + 8);
  *(_OWORD *)((char *)a2 + 3640) = v9;
  v11 = (*(_BYTE *)a1 & 8) == 0;
  *(_OWORD *)((char *)a2 + 3656) = *((_OWORD *)a1 + 7);
  v12 = *((_OWORD *)a1 + 9);
  *(_OWORD *)((char *)a2 + 3672) = v10;
  v13 = *((_OWORD *)a1 + 10);
  *(_OWORD *)((char *)a2 + 3688) = v12;
  *(_OWORD *)((char *)a2 + 3704) = v13;
  if ( !v11 )
    RmpSystemEnableAsyncInSwap();
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  RmpPageSize = v27;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 16));
  *((_QWORD *)a2 + 418) = 0LL;
  *((_QWORD *)a2 + 419) = 0LL;
  *((_QWORD *)a2 + 420) = 0LL;
  *((_QWORD *)a2 + 421) = 0LL;
  memset_0((char *)a2 + 688, 0, 0x580uLL);
  *((_QWORD *)a2 + 85) = a2;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 704));
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 728));
  *((_QWORD *)a2 + 94) = 0LL;
  *((_QWORD *)a2 + 95) = 0LL;
  *((_QWORD *)a2 + 87) = (char *)a2 + 688;
  *((_QWORD *)a2 + 86) = (char *)a2 + 688;
  *((_QWORD *)a2 + 257) = (char *)a2 + 2048;
  *((_QWORD *)a2 + 256) = (char *)a2 + 2048;
  *((_DWORD *)a2 + 518) = -1;
  RmpEnforcerContextInitialize(a1, a2);
  memset_0((char *)a2 + 2104, 0, 0x90uLL);
  *((_QWORD *)a2 + 262) = a2;
  *((_QWORD *)a2 + 263) = 0LL;
  *((_QWORD *)a2 + 264) = 0LL;
  RtlInitializeSRWLock((char *)a2 + 2168);
  v14 = (_QWORD *)((char *)a2 + 2184);
  v15 = 2LL;
  do
  {
    v14[1] = v14;
    *v14 = v14;
    v14 += 2;
    --v15;
  }
  while ( v15 );
  *((_QWORD *)a2 + 266) = (char *)a2 + 2120;
  *((_QWORD *)a2 + 265) = (char *)a2 + 2120;
  RmpGameModeReadDefaultGpuSettings((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2096));
  RmpSystemPublishGlobalGameModeState(0);
  memset_0((char *)a2 + 312, 0, 0x58uLL);
  *((_QWORD *)a2 + 42) = (char *)a2 + 328;
  *((_QWORD *)a2 + 41) = (char *)a2 + 328;
  RtlInitializeConditionVariable((char *)a2 + 344);
  CempLockInitialize((__int64)a2 + 312);
  *((_QWORD *)a2 + 46) = 1LL;
  HampManagerInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2248));
  memset_0((char *)a2 + 456, 0, 0x50uLL);
  v16 = *((_OWORD *)a1 + 1);
  v17 = *((_OWORD *)a1 + 2);
  *((_DWORD *)a2 + 126) = *(_DWORD *)a1;
  v18 = *((_DWORD *)a1 + 1);
  *((_OWORD *)a2 + 25) = v16;
  *((_DWORD *)a2 + 127) = v18;
  v19 = *((_OWORD *)a1 + 3);
  LOBYTE(v18) = *((_BYTE *)a1 + 8);
  *((_OWORD *)a2 + 26) = v17;
  *((_BYTE *)a2 + 512) = v18;
  *(_QWORD *)&v17 = *((_QWORD *)a1 + 8);
  v20 = *((_DWORD *)a1 + 31);
  *((_OWORD *)a2 + 27) = v19;
  *((_DWORD *)a2 + 132) = v20;
  v21 = *(_OWORD *)((char *)a1 + 72);
  v22 = *((_DWORD *)a1 + 32);
  *((_QWORD *)a2 + 56) = v17;
  v23 = *(_OWORD *)((char *)a1 + 88);
  *((_DWORD *)a2 + 131) = v22;
  v24 = *((_DWORD *)a1 + 30);
  *(_OWORD *)((char *)a2 + 456) = v21;
  *((_DWORD *)a2 + 129) = v24;
  v25 = *(_OWORD *)((char *)a1 + 104);
  *((_DWORD *)a2 + 130) = 60;
  *(_OWORD *)((char *)a2 + 472) = v23;
  *(_OWORD *)((char *)a2 + 488) = v25;
  memset_0((char *)a2 + 576, 0, 0x58uLL);
  RtlInitializeSRWLock((char *)a2 + 592);
  *((_OWORD *)a2 + 35) = 0LL;
  *(_OWORD *)((char *)a2 + 664) = 0LL;
}
