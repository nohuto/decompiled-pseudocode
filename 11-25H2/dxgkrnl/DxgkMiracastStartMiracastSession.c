/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x140080698
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1401AC470 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x140042008 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004204C (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x14007E0C0 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x14007E104 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x14007E55C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F220 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x14008185C (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x140081934 (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x1400819FC (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x14008C5A0 (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x14008CBAC (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x140244118 (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x140244520 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1402445D8 (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1402447E0 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x140244C3C (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x140245258 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x140245598 (DpiMiracastSendSyncUserModeRequest.c)
 *     DpiEnableD3Requests @ 0x1402BA7B0 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14037580C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403D0FD0 (DxgkMiracastQueryMiracastSupportInternal.c)
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
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // r13d
  _DWORD *Pool2; // rax
  int v19; // r13d
  unsigned __int16 *v20; // rax
  void *v21; // rdx
  int v22; // ecx
  int v23; // r8d
  unsigned int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // edx
  int v28; // r9d
  int v29; // eax
  int v30; // eax
  int v31; // r10d
  int v32; // edx
  int v33; // edx
  unsigned int v34; // edx
  _DWORD *v35; // r13
  int v36; // eax
  __int64 v37; // r8
  int v38; // eax
  unsigned int v39; // ebx
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // r9
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // r9
  int v46; // ecx
  __int64 v47; // rax
  __int64 v48; // r9
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // ecx
  MIRACAST_CHUNK_LIST *v55; // rcx
  __int64 v56; // r9
  _QWORD *v57; // rax
  __int64 v58; // r9
  MIRACAST_CHUNK_LIST *v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  MIRACAST_CHUNK_LIST *v62; // rcx
  __int64 v63; // r9
  __int64 *v64; // r13
  int v65; // eax
  struct _KEVENT *v66; // rsi
  int v67; // ecx
  __int128 v68; // xmm0
  unsigned __int16 *v69; // rax
  int v70; // edx
  int v71; // eax
  char v72; // r10
  MIRACAST_CHUNK_LIST *v73; // rcx
  MIRACAST_CHUNK_LIST *v74; // rcx
  MIRACAST_CHUNK_LIST *v75; // rcx
  MIRACAST_CHUNK_LIST *v76; // rcx
  MIRACAST_CHUNK_LIST *v77; // rcx
  MIRACAST_CHUNK_LIST *v78; // rcx
  int v79; // ecx
  int v80; // r8d
  __int64 v81; // rax
  PRKEVENT v82; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  char v85; // [rsp+60h] [rbp-A0h]
  char v86; // [rsp+61h] [rbp-9Fh]
  char DeviceObject; // [rsp+63h] [rbp-9Dh] BYREF
  char v88; // [rsp+64h] [rbp-9Ch]
  char v89; // [rsp+65h] [rbp-9Bh]
  int v90; // [rsp+68h] [rbp-98h]
  unsigned int v91; // [rsp+6Ch] [rbp-94h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  void *Src; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v94; // [rsp+80h] [rbp-80h]
  PRKEVENT Event; // [rsp+88h] [rbp-78h]
  int *v96; // [rsp+90h] [rbp-70h]
  _BYTE v97[20]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v98; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall *v99)(_QWORD *, struct DXGK_MIRACAST_CHUNK_INFO *, void *, int); // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v101[2]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v102[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v103; // [rsp+108h] [rbp+8h]
  __int128 v104; // [rsp+110h] [rbp+10h]
  __int64 v105; // [rsp+120h] [rbp+20h]
  __int64 v106; // [rsp+128h] [rbp+28h]
  int v107; // [rsp+130h] [rbp+30h]
  int v108; // [rsp+134h] [rbp+34h]
  int v109; // [rsp+138h] [rbp+38h]
  int v110; // [rsp+13Ch] [rbp+3Ch]

  LOWORD(v3) = 0;
  v94 = a1;
  v96 = a3;
  v99 = 0LL;
  v5 = 2;
  Event = a2;
  memset(v97, 0, sizeof(v97));
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v92 = 0LL;
  v7 = 0LL;
  v8 = *(_OWORD *)(a1 + 268);
  v9 = 0;
  LOBYTE(v90) = 0;
  v101[0] = v8;
  v85 = 0;
  v98 = 0LL;
  v88 = 0;
  v86 = 0;
  v89 = 0;
  DeviceObject = 0;
  Src = a1 + 268;
  TraceLoggingWriteMiracastStartSessionEntry(v101);
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
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v97) >= 0 && !v97[8] )
  {
    v101[1] = 0LL;
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
  v14 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(v14 + 2 * v15) );
  }
  else
  {
    LOWORD(v15) = 0;
  }
  v16 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v16 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v16 + 2 * v3) );
  }
  v91 = (unsigned __int16)v15;
  v17 = 2 * ((unsigned __int16)v15 + (unsigned __int16)v3) + 68;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v17, 1953656900LL, v13);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v17);
    v7[1] = v17;
    v7[10] = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *v7 = 19;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_OWORD *)v7 + 1) = 0LL;
    *((_WORD *)v7 + 30) = v15;
    *((_WORD *)v7 + 31) = v3;
    if ( (_WORD)v15 )
      memmove(v7 + 16, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v15);
    if ( (_WORD)v3 )
      memmove((char *)v7 + 2 * v91 + 66, *(const void **)(DeviceContextFromName + 344), 2LL * (unsigned __int16)v3);
  }
  v6 = v92;
  LOBYTE(v19) = 0;
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(DeviceContextFromName + 184)) < 0 || !v92 )
  {
    v5 = -2147483647;
    v11 = -1073741637;
    v9 = 4;
    WdLogSingleEntry1(2LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6061;
    goto LABEL_113;
  }
  v90 = 1;
  if ( *(_QWORD *)(v92 + 3368) )
  {
    v9 = 6;
    v11 = -1073741637;
    v5 = -2147483647;
    WdLogSingleEntry1(2LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6081;
    goto LABEL_114;
  }
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v92 + 64), (PVOID)DeviceContextFromName, File, 1u, 0x20u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
  v85 = 1;
  if ( *(_DWORD *)(DeviceContextFromName + 408) )
  {
    v11 = -1073741661;
    v5 = -2147483647;
    v9 = 6;
    WdLogSingleEntry2(2LL, DeviceContextFromName, -2147483647LL);
    WdLogGlobalForLineNumber = 6119;
LABEL_27:
    v6 = v92;
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
  *(_DWORD *)(DeviceContextFromName + 672) = dword_14015E238;
  v20 = v94;
  *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
  *(_DWORD *)(DeviceContextFromName + 648) = 0;
  *(_BYTE *)(DeviceContextFromName + 591) = 0;
  *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
  LODWORD(v20) = *((_DWORD *)v20 + 131);
  *(_DWORD *)(DeviceContextFromName + 700) = -1;
  *(_DWORD *)(DeviceContextFromName + 788) = (_DWORD)v20;
  *(_DWORD *)(DeviceContextFromName + 704) = 0;
  v86 = 1;
  memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
  v21 = Src;
  *(_DWORD *)(DeviceContextFromName + 776) = 256;
  memmove((void *)(DeviceContextFromName + 112), v21, 0x10uLL);
  v24 = *(_DWORD *)(DeviceContextFromName + 440) + 1;
  *(_DWORD *)(DeviceContextFromName + 440) = v24;
  if ( v24 >= 0xFFFFFFFE )
    *(_DWORD *)(DeviceContextFromName + 440) = 0;
  v6 = v92;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      v22,
      (unsigned int)&EventMiracastStartMiracastSession,
      v23,
      *(_QWORD *)(v92 + 48),
      *(_QWORD *)(DeviceContextFromName + 96),
      *(_QWORD *)(DeviceContextFromName + 152),
      *(_DWORD *)(DeviceContextFromName + 656),
      *(_DWORD *)(DeviceContextFromName + 664));
  *(_DWORD *)(DeviceContextFromName + 192) = *(_DWORD *)(v92 + 1124);
  *(_DWORD *)(DeviceContextFromName + 196) = *(_DWORD *)(v6 + 1128);
  v25 = *(_DWORD *)(v6 + 1120);
  if ( v25 == 1 )
  {
    v22 = (unsigned __int16)*(_DWORD *)(v6 + 1128);
    v26 = v22 | (*(_DWORD *)(v6 + 1124) << 16);
  }
  else if ( v25 == 2 )
  {
    v22 = *(char *)(v6 + 1128);
    if ( ((unsigned __int8)(*(_BYTE *)(v6 + 1128) - 48) <= 9u || (unsigned __int8)((v22 | 0x20) - 97) <= 5u)
      && ((v27 = *(char *)(v6 + 1129), (unsigned __int8)(*(_BYTE *)(v6 + 1129) - 48) <= 9u)
       || (unsigned __int8)((v27 | 0x20) - 97) <= 5u)
      && ((v23 = *(char *)(v6 + 1130), (unsigned __int8)(*(_BYTE *)(v6 + 1130) - 48) <= 9u)
       || (unsigned __int8)((v23 | 0x20) - 97) <= 5u)
      && ((v28 = *(char *)(v6 + 1131), (unsigned __int8)(*(_BYTE *)(v6 + 1131) - 48) <= 9u)
       || (unsigned __int8)((v28 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(v22 - 48) > 9u )
        v30 = ((_BYTE)v22 - 7) & 0xF;
      else
        v30 = v22 - 48;
      if ( (unsigned __int8)(v27 - 48) > 9u )
        v31 = ((_BYTE)v27 - 7) & 0xF;
      else
        v31 = v27 - 48;
      v32 = *(char *)(v6 + 1130);
      LOBYTE(v23) = v23 - 48;
      if ( (unsigned __int8)v23 > 9u )
        v33 = ((_BYTE)v32 - 7) & 0xF;
      else
        v33 = v32 - 48;
      if ( (unsigned __int8)(v28 - 48) > 9u )
        v22 = ((_BYTE)v28 - 7) & 0xF;
      else
        v22 = v28 - 48;
      v29 = v22 | (16 * (v33 | (16 * (v31 | (16 * v30)))));
    }
    else
    {
      v29 = *(unsigned __int16 *)(v6 + 1130);
    }
    LOBYTE(v22) = *(_BYTE *)(v6 + 1124);
    if ( (_BYTE)v22 == 32 || (_BYTE)v22 == 95 )
    {
      LOBYTE(v22) = *(_BYTE *)(v6 + 1125);
      if ( (_BYTE)v22 == 32 || (_BYTE)v22 == 95 )
        v34 = *(_DWORD *)(v6 + 1124) & 0xFFFF0000;
      else
        v34 = (*(_DWORD *)(v6 + 1124) & 0xFFFFFF00) << 8;
    }
    else
    {
      v34 = *(_DWORD *)(v6 + 1124) << 16;
    }
    v26 = v29 | v34;
  }
  else
  {
    v26 = 0;
  }
  *(_DWORD *)(DeviceContextFromName + 200) = v26;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
    McTemplateK0qqz_EtwWriteTransfer(
      v22,
      (unsigned int)&EventMiracastPerfTrackStartMiracastSession,
      v23,
      *(_DWORD *)(DeviceContextFromName + 440),
      v26,
      *(_QWORD *)(DeviceContextFromName + 352));
  *(_BYTE *)(DeviceContextFromName + 589) = 0;
  *((_QWORD *)&v98 + 1) = DpiMiracastCbSendUserModeMessage;
  v35 = (_DWORD *)(DeviceContextFromName + 456);
  *(_QWORD *)&v98 = DeviceContextFromName;
  v99 = DpiMiracastCbReportChunkInfo;
  v36 = DpiMiracastDdiMiracastCreateContext(v6, &v98, DeviceContextFromName + 448, DeviceContextFromName + 456);
  v11 = v36;
  if ( v36 < 0 )
  {
    WdLogSingleEntry1(2LL, v36);
    *v35 = -1;
    v19 = v90;
    WdLogGlobalForLineNumber = 6353;
    *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    v90 = v19;
    LOBYTE(v9) = v11 != -1073740024;
    v9 += 7;
    v5 = -(v11 != -1073740024) - 2147483646;
LABEL_113:
    v86 = v19;
    v85 = v19;
    goto LABEL_114;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v37);
  v38 = *(_DWORD *)(v6 + 3360);
  v39 = v90;
  v88 = v90;
  if ( *v35 != v38 )
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
  v41 = operator new(0x18uLL, 0x4B677844u, 64LL, v40);
  if ( v41 )
  {
    v43 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v41 + 16) = 0;
    *(_DWORD *)(v41 + 20) = v43;
    *(_QWORD *)(v41 + 8) = v41;
    *(_QWORD *)v41 = v41;
  }
  else
  {
    v41 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 488) = v41;
  v44 = operator new(0x18uLL, 0x4B677844u, 64LL, v42);
  if ( v44 )
  {
    v46 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v44 + 16) = 0;
    *(_DWORD *)(v44 + 20) = v46;
    *(_QWORD *)(v44 + 8) = v44;
    *(_QWORD *)v44 = v44;
  }
  else
  {
    v44 = 0LL;
  }
  *(_QWORD *)(v6 + 3392) = v44;
  v47 = operator new(0x18uLL, 0x4B677844u, 64LL, v45);
  if ( v47 )
  {
    v49 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v47 + 16) = 0;
    *(_DWORD *)(v47 + 20) = v49;
    *(_QWORD *)(v47 + 8) = v47;
    *(_QWORD *)v47 = v47;
  }
  else
  {
    v47 = 0LL;
  }
  *(_QWORD *)(v6 + 3400) = v47;
  v50 = operator new(0x18uLL, 0x4B677844u, 64LL, v48);
  v53 = v50;
  if ( v50 )
  {
    v54 = *(_DWORD *)(v6 + 3352);
    *(_DWORD *)(v50 + 16) = 0;
    *(_DWORD *)(v50 + 20) = v54;
    *(_QWORD *)(v50 + 8) = v50;
    *(_QWORD *)v50 = v50;
  }
  else
  {
    v53 = 0LL;
  }
  *(_QWORD *)(v6 + 3408) = v53;
  if ( !*(_QWORD *)(DeviceContextFromName + 488)
    || (v55 = *(MIRACAST_CHUNK_LIST **)(v6 + 3392)) == 0LL
    || !*(_QWORD *)(v6 + 3400)
    || !v53 )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 10;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6413;
    goto LABEL_114;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v55, 0x14u, v51, v52) )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 11;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6426;
    goto LABEL_114;
  }
  *(_DWORD *)(v6 + 3388) = 20;
  v57 = (_QWORD *)operator new(0x18uLL, 0x4B677844u, 64LL, v56);
  if ( v57 )
  {
    v57[2] = 0LL;
    v57[1] = v57;
    *v57 = v57;
  }
  else
  {
    v57 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 504) = v57;
  v59 = (MIRACAST_CHUNK_LIST *)operator new(0x18uLL, 0x4B677844u, 64LL, v58);
  v62 = v59;
  if ( v59 )
  {
    *((_QWORD *)v59 + 2) = 0LL;
    *((_QWORD *)v59 + 1) = v59;
    *(_QWORD *)v59 = v59;
  }
  else
  {
    v62 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 512) = v62;
  if ( !*(_QWORD *)(DeviceContextFromName + 504) || !v62 )
  {
    v11 = -1073741801;
    v5 = -2147483647;
    v9 = 10;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6450;
    goto LABEL_114;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v62, 0x14u, v60, v61) )
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
  v89 = v39;
  v94 = (unsigned __int16 *)(v6 + 4992);
  v91 = *(unsigned __int16 *)(v6 + 4992) + 72;
  Src = (void *)v91;
  v64 = (__int64 *)ExAllocatePool2(256LL, v91, 1953656900LL, v63);
  if ( !v64 )
  {
    v5 = -2147483647;
    v9 = 12;
    v11 = -1073741801;
    WdLogSingleEntry1(6LL, -2147483647LL);
    WdLogGlobalForLineNumber = 6514;
    goto LABEL_114;
  }
  _InterlockedAdd((volatile signed __int32 *)(DeviceContextFromName + 24), v39);
  _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
  v65 = *(_DWORD *)(DeviceContextFromName + 408);
  v66 = Event;
  *(_QWORD *)(DeviceContextFromName + 472) = Event;
  *(_DWORD *)(DeviceContextFromName + 412) = v65;
  *(_DWORD *)(DeviceContextFromName + 408) = v39;
  dword_14015E220 += v39;
  KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
  if ( v66 )
    KeClearEvent(v66);
  memset(v64, 0, (size_t)Src);
  v67 = *(_DWORD *)(DeviceContextFromName + 440);
  v6 = v92;
  v68 = *(_OWORD *)(DeviceContextFromName + 112);
  *(__int64 *)((char *)v64 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
  *((_DWORD *)v64 + 2) = v67;
  *v64 = DeviceContextFromName;
  *(__int64 *)((char *)v64 + 20) = *(_QWORD *)(v6 + 2696);
  *(__int64 *)((char *)v64 + 28) = *(_QWORD *)&v97[12];
  *((_DWORD *)v64 + 10) = dword_14015E224;
  *((_BYTE *)v64 + 44) = 0;
  v69 = v94;
  *((_DWORD *)v64 + 9) = v67;
  *((_OWORD *)v64 + 3) = v68;
  memmove(v64 + 8, *(const void **)(v6 + 5000), *v69);
  RemlockSize[0] = v91 - 12;
  v71 = DpiMiracastSendAsyncUserModeRequest(
          DeviceContextFromName,
          v70,
          2295812,
          (int)v64 + 12,
          *(size_t *)RemlockSize,
          0LL,
          0,
          (__int64)DpiMiracastStartSessionRequestCallback,
          (__int64)v64,
          (PDEVICE_OBJECT)&DeviceObject,
          DeviceContextFromName + 424);
  v11 = v71;
  if ( v71 < 0 )
  {
    v5 = -2147483647;
    v9 = 13;
    WdLogSingleEntry1(2LL, v71);
    *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
    --dword_14015E220;
    WdLogGlobalForLineNumber = 6595;
    if ( !DeviceObject )
    {
      ExFreePoolWithTag(v64, 0);
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
    v72 = v85;
    DeviceObject = v90;
    v91 = v11;
    if ( v86 && v5 < 0 )
    {
      *(_DWORD *)(DeviceContextFromName + 416) = v5;
      *(_DWORD *)(DeviceContextFromName + 784) = v9;
      if ( v88 )
      {
        DpiMiracastDdiMiracastDestroyContext(v6, *(_QWORD *)(DeviceContextFromName + 448));
        *(_DWORD *)(DeviceContextFromName + 456) = -1;
        *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
      }
      if ( v89 )
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
      v73 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
      if ( v73 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v73);
        *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
      }
      v74 = *(MIRACAST_CHUNK_LIST **)(v6 + 3392);
      if ( v74 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v74);
        *(_QWORD *)(v6 + 3392) = 0LL;
      }
      v75 = *(MIRACAST_CHUNK_LIST **)(v6 + 3400);
      if ( v75 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v75);
        *(_QWORD *)(v6 + 3400) = 0LL;
      }
      v76 = *(MIRACAST_CHUNK_LIST **)(v6 + 3408);
      if ( v76 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v76);
        *(_QWORD *)(v6 + 3408) = 0LL;
      }
      v77 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
      if ( v77 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v77);
        *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
      }
      v78 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
      if ( v78 )
      {
        MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v78);
        *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
      }
      KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000000LL) != 0 )
        McTemplateK0qqz_EtwWriteTransfer(
          v79,
          (unsigned int)&EventMiracastPerfTrackStartMiracastSessionFailed,
          v80,
          *(_DWORD *)(DeviceContextFromName + 440),
          *(_DWORD *)(DeviceContextFromName + 200),
          *(_QWORD *)(DeviceContextFromName + 352));
      v81 = TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
      LOBYTE(v81) = DeviceObject;
      v11 = v91;
      v72 = v85;
      v90 = v81;
    }
    if ( !v72 )
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
  if ( (_BYTE)v90 )
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
  v82 = Event;
  if ( Event )
  {
    KeSetEvent(Event, 0, 0);
    ObfDereferenceObject(v82);
  }
LABEL_149:
  *v96 = v11;
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
    v106 = 0LL;
    v102[0] = 6;
    v102[1] = 64;
    v103 = 0LL;
    v104 = 0LL;
    v105 = 0LL;
    v107 = 69;
    v108 = v11;
    v109 = v5;
    v110 = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v102, 0x200000000uLL);
  }
  return (unsigned int)v5;
}
