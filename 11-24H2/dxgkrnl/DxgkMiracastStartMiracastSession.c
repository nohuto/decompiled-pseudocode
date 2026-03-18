/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x140080D18
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1401AE950 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140041998 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x1400419DC (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x14007E740 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x14007E784 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x14007EBDC (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F8A0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x140081EDC (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x140081FB4 (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x14008207C (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x14008D864 (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x14008DE70 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x14024AF28 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x14024B330 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x14024B3E8 (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x14024B5F0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x14024BA4C (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x14024C068 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x14024C3A8 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiEnableD3Requests @ 0x1402C7FF0 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031DEEC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403C4B50 (DxgkMiracastQueryMiracastSupportInternal.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(unsigned __int16 *a1, struct _KEVENT *a2, int *a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  __int64 v6; // rsi
  _DWORD *v7; // r12
  __int128 v8; // xmm0
  int v9; // r15d
  __int64 DeviceContextFromName; // rdi
  int v11; // ebx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r13d
  _DWORD *Pool2; // rax
  int v18; // r13d
  unsigned __int16 *v19; // rax
  void *v20; // rdx
  int v21; // ecx
  int v22; // r8d
  unsigned int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // edx
  int v27; // r9d
  int v28; // eax
  int v29; // eax
  int v30; // r10d
  int v31; // edx
  int v32; // edx
  unsigned int v33; // edx
  _DWORD *v34; // r13
  int v35; // eax
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ecx
  MIRACAST_CHUNK_LIST *v48; // rcx
  _QWORD *v49; // rax
  MIRACAST_CHUNK_LIST *v50; // rax
  MIRACAST_CHUNK_LIST *v51; // rcx
  __int64 *v52; // r13
  int v53; // eax
  struct _KEVENT *v54; // rsi
  int v55; // ecx
  __int128 v56; // xmm0
  unsigned __int16 *v57; // rax
  int v58; // edx
  int v59; // eax
  char v60; // r10
  MIRACAST_CHUNK_LIST *v61; // rcx
  MIRACAST_CHUNK_LIST *v62; // rcx
  MIRACAST_CHUNK_LIST *v63; // rcx
  MIRACAST_CHUNK_LIST *v64; // rcx
  MIRACAST_CHUNK_LIST *v65; // rcx
  MIRACAST_CHUNK_LIST *v66; // rcx
  int v67; // ecx
  int v68; // r8d
  __int64 v69; // rax
  PRKEVENT v70; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  char v73; // [rsp+60h] [rbp-A0h]
  char v74; // [rsp+61h] [rbp-9Fh]
  char DeviceObject; // [rsp+63h] [rbp-9Dh] BYREF
  char v76; // [rsp+64h] [rbp-9Ch]
  char v77; // [rsp+65h] [rbp-9Bh]
  int v78; // [rsp+68h] [rbp-98h]
  unsigned int v79; // [rsp+6Ch] [rbp-94h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v82; // [rsp+80h] [rbp-80h]
  PRKEVENT Event; // [rsp+88h] [rbp-78h]
  int *v84; // [rsp+90h] [rbp-70h]
  _BYTE v85[20]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v86; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall *v87)(_QWORD *, struct DXGK_MIRACAST_CHUNK_INFO *, void *, int); // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v89[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v90[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v91; // [rsp+108h] [rbp+8h]
  __int128 v92; // [rsp+110h] [rbp+10h]
  __int64 v93; // [rsp+120h] [rbp+20h]
  __int64 v94; // [rsp+128h] [rbp+28h]
  int v95; // [rsp+130h] [rbp+30h]
  int v96; // [rsp+134h] [rbp+34h]
  int v97; // [rsp+138h] [rbp+38h]
  int v98; // [rsp+13Ch] [rbp+3Ch]

  LOWORD(v3) = 0;
  v82 = a1;
  v84 = a3;
  v87 = 0LL;
  v5 = 2;
  Event = a2;
  memset(v85, 0, sizeof(v85));
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v80 = 0LL;
  v7 = 0LL;
  v8 = *(_OWORD *)(a1 + 268);
  v9 = 0;
  LOBYTE(v78) = 0;
  v89[0] = v8;
  v73 = 0;
  v86 = 0LL;
  v76 = 0;
  v74 = 0;
  v77 = 0;
  DeviceObject = 0;
  Src = a1 + 268;
  TraceLoggingWriteMiracastStartSessionEntry(v89);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1 + 2);
  if ( !DeviceContextFromName )
  {
    v11 = -1073741275;
    v9 = 2;
    v5 = -2147483642;
    WdLogSingleEntry1(2LL, -2147483642LL);
    WdLogGlobalForLineNumber = 5951;
    goto LABEL_146;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v85) >= 0 && !v85[8] )
  {
    v89[1] = 0LL;
    v11 = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( v11 < 0 )
    {
      AcquireMiniportListMutex();
      v9 = 17;
      v5 = -2147483647;
      goto LABEL_114;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *((_DWORD *)a1 + 131);
  v13 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(v13 + 2 * v14) );
  }
  else
  {
    LOWORD(v14) = 0;
  }
  v15 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v15 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v15 + 2 * v3) );
  }
  v79 = (unsigned __int16)v14;
  v16 = 2 * ((unsigned __int16)v14 + (unsigned __int16)v3) + 68;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v16, 1953656900LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v16);
    v7[1] = v16;
    v7[10] = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *v7 = 19;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_OWORD *)v7 + 1) = 0LL;
    *((_WORD *)v7 + 30) = v14;
    *((_WORD *)v7 + 31) = v3;
    if ( (_WORD)v14 )
      memmove(v7 + 16, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v14);
    if ( (_WORD)v3 )
      memmove((char *)v7 + 2 * v79 + 66, *(const void **)(DeviceContextFromName + 344), 2LL * (unsigned __int16)v3);
  }
  v6 = v80;
  LOBYTE(v18) = 0;
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(DeviceContextFromName + 184)) < 0 || !v80 )
  {
    v5 = -2147483647;
    v11 = -1073741637;
    v9 = 4;
    WdLogSingleEntry1(2LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6061;
    goto LABEL_113;
  }
  v78 = 1;
  if ( *(_QWORD *)(v80 + 3368) )
  {
    v9 = 6;
    v11 = -1073741637;
    v5 = -2147483647;
    WdLogSingleEntry1(2LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6081;
    goto LABEL_114;
  }
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v80 + 64), (PVOID)DeviceContextFromName, File, 1u, 0x20u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
  v73 = 1;
  if ( *(_DWORD *)(DeviceContextFromName + 408) )
  {
    v11 = -1073741661;
    v5 = -2147483647;
    v9 = 6;
    WdLogSingleEntry2(2LL, DeviceContextFromName, -2147483647LL);
    WdLogGlobalForLineNumber = 6119;
LABEL_27:
    v6 = v80;
    goto LABEL_114;
  }
  if ( !*(_QWORD *)(DeviceContextFromName + 400) )
  {
    v11 = -1073741275;
    v5 = -2147483642;
    v9 = 2;
    WdLogSingleEntry1(4LL, DeviceContextFromName);
    WdLogGlobalForLineNumber = 6141;
    goto LABEL_27;
  }
  *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
  *(_DWORD *)(DeviceContextFromName + 656) = 0;
  *(_BYTE *)(DeviceContextFromName + 590) = 0;
  *(_DWORD *)(DeviceContextFromName + 652) = 0;
  *(_DWORD *)(DeviceContextFromName + 664) = 0;
  *(_DWORD *)(DeviceContextFromName + 672) = dword_1401611F8;
  v19 = v82;
  *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
  *(_DWORD *)(DeviceContextFromName + 648) = 0;
  *(_BYTE *)(DeviceContextFromName + 591) = 0;
  *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
  LODWORD(v19) = *((_DWORD *)v19 + 131);
  *(_DWORD *)(DeviceContextFromName + 700) = -1;
  *(_DWORD *)(DeviceContextFromName + 788) = (_DWORD)v19;
  *(_DWORD *)(DeviceContextFromName + 704) = 0;
  v74 = 1;
  memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
  v20 = Src;
  *(_DWORD *)(DeviceContextFromName + 776) = 256;
  memmove((void *)(DeviceContextFromName + 112), v20, 0x10uLL);
  v23 = *(_DWORD *)(DeviceContextFromName + 440) + 1;
  *(_DWORD *)(DeviceContextFromName + 440) = v23;
  if ( v23 >= 0xFFFFFFFE )
    *(_DWORD *)(DeviceContextFromName + 440) = 0;
  v6 = v80;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      v21,
      (unsigned int)&EventMiracastStartMiracastSession,
      v22,
      *(_QWORD *)(v80 + 48),
      *(_QWORD *)(DeviceContextFromName + 96),
      *(_QWORD *)(DeviceContextFromName + 152),
      *(_DWORD *)(DeviceContextFromName + 656),
      *(_DWORD *)(DeviceContextFromName + 664));
  *(_DWORD *)(DeviceContextFromName + 192) = *(_DWORD *)(v80 + 1124);
  *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)(v6 + 1128);
  v24 = *(_DWORD *)(v6 + 1120);
  if ( v24 == 1 )
  {
    v21 = (unsigned __int16)*(_DWORD *)(v6 + 1128);
    v25 = v21 | (*(_DWORD *)(v6 + 1124) << 16);
  }
  else if ( v24 == 2 )
  {
    v21 = *(char *)(v6 + 1128);
    if ( ((unsigned __int8)(*(_BYTE *)(v6 + 1128) - 48) <= 9u || (unsigned __int8)((v21 | 0x20) - 97) <= 5u)
      && ((v26 = *(char *)(v6 + 1129), (unsigned __int8)(*(_BYTE *)(v6 + 1129) - 48) <= 9u)
       || (unsigned __int8)((v26 | 0x20) - 97) <= 5u)
      && ((v22 = *(char *)(v6 + 1130), (unsigned __int8)(*(_BYTE *)(v6 + 1130) - 48) <= 9u)
       || (unsigned __int8)((v22 | 0x20) - 97) <= 5u)
      && ((v27 = *(char *)(v6 + 1131), (unsigned __int8)(*(_BYTE *)(v6 + 1131) - 48) <= 9u)
       || (unsigned __int8)((v27 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(v21 - 48) > 9u )
        v29 = ((_BYTE)v21 - 7) & 0xF;
      else
        v29 = v21 - 48;
      if ( (unsigned __int8)(v26 - 48) > 9u )
        v30 = ((_BYTE)v26 - 7) & 0xF;
      else
        v30 = v26 - 48;
      v31 = *(char *)(v6 + 1130);
      LOBYTE(v22) = v22 - 48;
      if ( (unsigned __int8)v22 > 9u )
        v32 = ((_BYTE)v31 - 7) & 0xF;
      else
        v32 = v31 - 48;
      if ( (unsigned __int8)(v27 - 48) > 9u )
        v21 = ((_BYTE)v27 - 7) & 0xF;
      else
        v21 = v27 - 48;
      v28 = v21 | (16 * (v32 | (16 * (v30 | (16 * v29)))));
    }
    else
    {
      v28 = *(unsigned __int16 *)(v6 + 1130);
    }
    LOBYTE(v21) = *(_BYTE *)(v6 + 1124);
    if ( (_BYTE)v21 == 32 || (_BYTE)v21 == 95 )
    {
      LOBYTE(v21) = *(_BYTE *)(v6 + 1125);
      if ( (_BYTE)v21 == 32 || (_BYTE)v21 == 95 )
        v33 = *(_DWORD *)(v6 + 1124) & 0xFFFF0000;
      else
        v33 = (*(_DWORD *)(v6 + 1124) & 0xFFFFFF00) << 8;
    }
    else
    {
      v33 = *(_DWORD *)(v6 + 1124) << 16;
    }
    v25 = v28 | v33;
  }
  else
  {
    v25 = 0;
  }
  *(_DWORD *)(DeviceContextFromName + 200) = v25;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    McTemplateK0qqz_EtwWriteTransfer(
      v21,
      (unsigned int)&EventMiracastPerfTrackStartMiracastSession,
      v22,
      *(_DWORD *)(DeviceContextFromName + 440),
      v25,
      *(_QWORD *)(DeviceContextFromName + 352));
  *(_BYTE *)(DeviceContextFromName + 589) = 0;
  *((_QWORD *)&v86 + 1) = DpiMiracastCbSendUserModeMessage;
  v34 = (_DWORD *)(DeviceContextFromName + 456);
  *(_QWORD *)&v86 = DeviceContextFromName;
  v87 = DpiMiracastCbReportChunkInfo;
  v35 = DpiMiracastDdiMiracastCreateContext(v6, &v86, DeviceContextFromName + 448, DeviceContextFromName + 456);
  v11 = v35;
  if ( v35 < 0 )
  {
    WdLogSingleEntry1(2LL, v35);
    *v34 = -1;
    v18 = v78;
    WdLogGlobalForLineNumber = 6353;
    *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    v78 = v18;
    LOBYTE(v9) = v11 != -1073740024;
    v9 += 7;
    v5 = -(v11 != -1073740024) - 2147483646;
LABEL_113:
    v74 = v18;
    v73 = v18;
    goto LABEL_114;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v36);
  v37 = *(_DWORD *)(v6 + 3360);
  v38 = v78;
  v76 = v78;
  if ( *v34 != v37 )
  {
    v5 = -2147483647;
    v11 = -1073741811;
    v9 = 9;
    WdLogSingleEntry1(2LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6373;
    goto LABEL_114;
  }
  *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(DeviceContextFromName + 588) = 0;
  *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
  *(_WORD *)(v6 + 3384) = 0;
  *(_DWORD *)(v6 + 3388) = 0;
  v39 = operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v39 )
  {
    v40 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v39 + 16) = 0;
    *(_DWORD *)(v39 + 20) = v40;
    *(_QWORD *)(v39 + 8) = v39;
    *(_QWORD *)v39 = v39;
  }
  else
  {
    v39 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 488) = v39;
  v41 = operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v41 )
  {
    v42 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v41 + 16) = 0;
    *(_DWORD *)(v41 + 20) = v42;
    *(_QWORD *)(v41 + 8) = v41;
    *(_QWORD *)v41 = v41;
  }
  else
  {
    v41 = 0LL;
  }
  *(_QWORD *)(v6 + 3392) = v41;
  v43 = operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v43 )
  {
    v44 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v43 + 16) = 0;
    *(_DWORD *)(v43 + 20) = v44;
    *(_QWORD *)(v43 + 8) = v43;
    *(_QWORD *)v43 = v43;
  }
  else
  {
    v43 = 0LL;
  }
  *(_QWORD *)(v6 + 3400) = v43;
  v45 = operator new(0x18uLL, 0x4B677844u, 64LL);
  v46 = v45;
  if ( v45 )
  {
    v47 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v45 + 16) = 0;
    *(_DWORD *)(v45 + 20) = v47;
    *(_QWORD *)(v45 + 8) = v45;
    *(_QWORD *)v45 = v45;
  }
  else
  {
    v46 = 0LL;
  }
  *(_QWORD *)(v6 + 3408) = v46;
  if ( !*(_QWORD *)(DeviceContextFromName + 488)
    || (v48 = *(MIRACAST_CHUNK_LIST **)(v6 + 3392)) == 0LL
    || !*(_QWORD *)(v6 + 3400)
    || !v46 )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 10;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6413;
    goto LABEL_114;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v48, 0x14u) )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 11;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6426;
    goto LABEL_114;
  }
  *(_DWORD *)(v6 + 3388) = 20;
  v49 = (_QWORD *)operator new(0x18uLL, 0x4B677844u, 64LL);
  if ( v49 )
  {
    v49[2] = 0LL;
    v49[1] = v49;
    *v49 = v49;
  }
  else
  {
    v49 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 504) = v49;
  v50 = (MIRACAST_CHUNK_LIST *)operator new(0x18uLL, 0x4B677844u, 64LL);
  v51 = v50;
  if ( v50 )
  {
    *((_QWORD *)v50 + 2) = 0LL;
    *((_QWORD *)v50 + 1) = v50;
    *(_QWORD *)v50 = v50;
  }
  else
  {
    v51 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 512) = v51;
  if ( !*(_QWORD *)(DeviceContextFromName + 504) || !v51 )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 10;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6450;
    goto LABEL_114;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v51, 0x14u) )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 11;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6463;
    goto LABEL_114;
  }
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_QWORD *)(DeviceContextFromName + 432) = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 3368) = DeviceContextFromName;
  *(_QWORD *)(v6 + 3376) = *(_QWORD *)(DeviceContextFromName + 96);
  *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)(v6 + 4960);
  *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)(v6 + 4968);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v77 = v38;
  v82 = (unsigned __int16 *)(v6 + 4992);
  v79 = *(unsigned __int16 *)(v6 + 4992) + 72;
  Src = (void *)v79;
  v52 = (__int64 *)ExAllocatePool2(256LL, v79, 1953656900LL);
  if ( !v52 )
  {
    v5 = -2147483647;
    v9 = 12;
    v11 = -1073741801;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6514;
    goto LABEL_114;
  }
  _InterlockedAdd((volatile signed __int32 *)(DeviceContextFromName + 24), v38);
  _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
  v53 = *(_DWORD *)(DeviceContextFromName + 408);
  v54 = Event;
  *(_QWORD *)(DeviceContextFromName + 472) = Event;
  *(_DWORD *)(DeviceContextFromName + 412) = v53;
  *(_DWORD *)(DeviceContextFromName + 408) = v38;
  dword_1401611E0 += v38;
  KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
  if ( v54 )
    KeClearEvent(v54);
  memset(v52, 0, (size_t)Src);
  v55 = *(_DWORD *)(DeviceContextFromName + 440);
  v6 = v80;
  v56 = *(_OWORD *)(DeviceContextFromName + 112);
  *(__int64 *)((char *)v52 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
  *((_DWORD *)v52 + 2) = v55;
  *v52 = DeviceContextFromName;
  *(__int64 *)((char *)v52 + 20) = *(_QWORD *)(v6 + 2696);
  *(__int64 *)((char *)v52 + 28) = *(_QWORD *)&v85[12];
  *((_DWORD *)v52 + 10) = dword_1401611E4;
  *((_BYTE *)v52 + 44) = 0;
  v57 = v82;
  *((_DWORD *)v52 + 9) = v55;
  *((_OWORD *)v52 + 3) = v56;
  memmove(v52 + 8, *(const void **)(v6 + 5000), *v57);
  RemlockSize[0] = v79 - 12;
  v59 = DpiMiracastSendAsyncUserModeRequest(
          DeviceContextFromName,
          v58,
          2295812,
          (int)v52 + 12,
          *(size_t *)RemlockSize,
          0LL,
          0,
          (__int64)DpiMiracastStartSessionRequestCallback,
          (__int64)v52,
          (PDEVICE_OBJECT)&DeviceObject,
          DeviceContextFromName + 424);
  v11 = v59;
  if ( v59 < 0 )
  {
    v5 = -2147483647;
    v9 = 13;
    WdLogSingleEntry1(2LL, v59);
    *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
    --dword_1401611E0;
    WdLogGlobalForLineNumber = 6595;
    if ( !DeviceObject )
    {
      ExFreePoolWithTag(v52, 0);
      DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
    }
LABEL_114:
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
      McTemplateK0qqqz_EtwWriteTransfer(
        *(_DWORD *)(DeviceContextFromName + 200),
        (unsigned int)&EventMiracastStartMiracastSessionFail,
        v12,
        v9,
        v11,
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352));
    v60 = v73;
    DeviceObject = v78;
    v79 = v11;
    if ( v74 && v5 < 0 )
    {
      *(_DWORD *)(DeviceContextFromName + 416) = v5;
      *(_DWORD *)(DeviceContextFromName + 784) = v9;
      if ( v76 )
      {
        DpiMiracastDdiMiracastDestroyContext(v6, *(_QWORD *)(DeviceContextFromName + 448));
        *(_DWORD *)(DeviceContextFromName + 456) = -1;
        *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
      }
      if ( v77 )
      {
        *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
        KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
        *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
        *(_QWORD *)(v6 + 3368) = 0LL;
        *(_QWORD *)(v6 + 3376) = 0LL;
        *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
        *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        KeFlushQueuedDpcs();
      }
      v61 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
      if ( v61 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v61);
        *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
      }
      v62 = *(MIRACAST_CHUNK_LIST **)(v6 + 3392);
      if ( v62 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v62);
        *(_QWORD *)(v6 + 3392) = 0LL;
      }
      v63 = *(MIRACAST_CHUNK_LIST **)(v6 + 3400);
      if ( v63 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v63);
        *(_QWORD *)(v6 + 3400) = 0LL;
      }
      v64 = *(MIRACAST_CHUNK_LIST **)(v6 + 3408);
      if ( v64 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v64);
        *(_QWORD *)(v6 + 3408) = 0LL;
      }
      v65 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
      if ( v65 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v65);
        *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
      }
      v66 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
      if ( v66 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v66);
        *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
      }
      KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
        McTemplateK0qqz_EtwWriteTransfer(
          v67,
          (unsigned int)&EventMiracastPerfTrackStartMiracastSessionFailed,
          v68,
          *(_DWORD *)(DeviceContextFromName + 440),
          *(_DWORD *)(DeviceContextFromName + 200),
          *(_QWORD *)(DeviceContextFromName + 352));
      v69 = TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
      LOBYTE(v69) = DeviceObject;
      v11 = v79;
      v60 = v73;
      v78 = v69;
    }
    if ( !v60 )
      goto LABEL_140;
    goto LABEL_138;
  }
  *(_DWORD *)(DeviceContextFromName + 416) = 2;
  DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_138:
  *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
  if ( v5 < 0 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), (PVOID)DeviceContextFromName, 0x20u);
LABEL_140:
  if ( (_BYTE)v78 )
  {
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), (PVOID)v6, 0x20u);
  }
  if ( v5 >= 0 )
  {
    ReleaseMiniportListMutex();
    goto LABEL_149;
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  ReleaseMiniportListMutex();
LABEL_146:
  v70 = Event;
  if ( Event )
  {
    KeSetEvent(Event, 0, 0);
    ObfDereferenceObject(v70);
  }
LABEL_149:
  *v84 = v11;
  if ( v7 )
  {
    v7[12] = v11;
    v7[13] = v5;
    v7[14] = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7, 0x200000000uLL);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v94 = 0LL;
    v90[0] = 6;
    v90[1] = 64;
    v91 = 0LL;
    v92 = 0LL;
    v93 = 0LL;
    v95 = 69;
    v96 = v11;
    v97 = v5;
    v98 = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v90, 0x200000000uLL);
  }
  return (unsigned int)v5;
}
