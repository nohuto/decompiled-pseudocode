/*
 * XREFs of ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x140037010
 * Callers:
 *     ?vCleanupSurfaces@@YAXK@Z @ 0x1400146F8 (-vCleanupSurfaces@@YAXK@Z.c)
 *     bDeleteSurface @ 0x1400365C0 (bDeleteSurface.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x140036FD8 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x14003D870 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x14003E0F8 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140086380 (vDynamicConvertNewSurfaceDCs.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE1E0 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x140013CC0 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x140013D84 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x140014590 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     SURFACE_Free @ 0x14001A7E0 (SURFACE_Free.c)
 *     ?vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ @ 0x14001E1E8 (-vUnlockIfNeeded@NEEDDYNAMICMODECHANGESHARELOCK@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x140021560 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0CE@@@QEAAXXZ @ 0x140022104 (-vUnlock@-$SEMOBJ@$0CE@@@QEAAXXZ.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x140022558 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x140022A58 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x1400307E0 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x140032060 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x140032C30 (HmgPentryFromPobj.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x140036AB0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140038274 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDeleteDriverRealization@SURFACE@@QEAAXXZ @ 0x1400382C0 (-vDeleteDriverRealization@SURFACE@@QEAAXXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14003B140 (--$GreAcquireSemaphore@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     EngFreeUserMem @ 0x140087D70 (EngFreeUserMem.c)
 *     ??$GrepAcquireLockValidate@$0CE@@@YAXXZ @ 0x1400B7EB8 (--$GrepAcquireLockValidate@$0CE@@@YAXXZ.c)
 *     ?GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z @ 0x1400B7FD4 (-GrepW32PidFromW32Process@@YAKPEAU_W32PROCESS@@@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z @ 0x1400B7FF4 (-Unmap@MapViewOfSectionObj@Gre@@SA_NKPEAX@Z.c)
 *     ?Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ @ 0x1400B8230 (-Unmap@MapViewOfSectionObj@Gre@@QEAA_NXZ.c)
 *     ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1400DE22C (-bStockSurface@SURFACE@@QEAAHXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1401272A4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     UMPDGetThreadClientPID @ 0x140135174 (UMPDGetThreadClientPID.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1401C2D34 (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SURFACE::bDeleteSurface(__int64 a1, int a2, int a3)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  void *v7; // r13
  __int64 v8; // r13
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  void *v11; // rax
  __int128 v12; // xmm0
  void *v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // r12
  ULONG IsResourceAcquiredSharedLite; // ebx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rbx
  int (*v21)(void); // rax
  __int64 v22; // rdx
  void (__fastcall *v23)(__int128 *, _QWORD); // rax
  bool v24; // zf
  __int64 v25; // rcx
  int (*v26)(void); // rax
  void (__fastcall *v27)(__int128 *, _QWORD); // rax
  struct HOBJ__ *v28; // r15
  __int64 SessionState; // rax
  unsigned int v30; // r8d
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r10
  unsigned int v34; // r9d
  __int64 v35; // rcx
  __int64 v36; // r11
  __int64 v37; // rax
  __int64 v38; // r10
  unsigned int v39; // edx
  unsigned int v40; // ecx
  __int64 v41; // r10
  __int64 v42; // r9
  int v43; // r15d
  __int64 v44; // rcx
  __int64 v45; // rbx
  unsigned __int64 v46; // rdx
  unsigned int v47; // r8d
  __int64 v48; // r10
  unsigned int v49; // r9d
  __int64 v50; // rcx
  __int64 v51; // r11
  __int64 v52; // rax
  __int64 v53; // r9
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 v56; // r10
  __int64 v57; // rbx
  int v58; // eax
  char v59; // cl
  __int64 v60; // rdx
  __int64 v61; // rcx
  int (*v62)(void); // rax
  void (__fastcall *v63)(__int64); // rax
  HANDLE v64; // rbx
  HANDLE v65; // rbx
  __int64 v66; // rbx
  __int64 v67; // rdx
  int v68; // r8d
  int v70; // eax
  struct _GRETHREAD *CurrentThread; // rax
  unsigned int v72; // r14d
  _QWORD *v73; // rcx
  struct _GRETHREAD *v74; // rbx
  unsigned int v75; // eax
  PVOID v76; // rdx
  struct _W32PROCESS *v77; // r8
  __int64 v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rdx
  int v83; // r8d
  __int64 v84; // rcx
  _QWORD *v85; // rcx
  int (*v86)(void); // rax
  void (__fastcall *v87)(__int64); // rax
  struct _ERESOURCE **v88; // rcx
  int (*v89)(void); // rax
  void (__fastcall *v90)(PVOID); // rax
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v92; // [rsp+58h] [rbp-A8h]
  struct HOBJ__ *v93; // [rsp+60h] [rbp-A0h]
  int v94; // [rsp+68h] [rbp-98h]
  int v95; // [rsp+6Ch] [rbp-94h]
  struct _ERESOURCE *v96; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v97; // [rsp+78h] [rbp-88h] BYREF
  __int64 v98; // [rsp+80h] [rbp-80h]
  _QWORD *v99; // [rsp+88h] [rbp-78h]
  __int64 v100; // [rsp+90h] [rbp-70h]
  __int64 v101; // [rsp+98h] [rbp-68h]
  int v102; // [rsp+A0h] [rbp-60h]
  HANDLE v103; // [rsp+A8h] [rbp-58h]
  HANDLE SecureHandle; // [rsp+B0h] [rbp-50h]
  __int64 v105; // [rsp+B8h] [rbp-48h]
  PVOID v106; // [rsp+C0h] [rbp-40h]
  PVOID Object[2]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v108[4]; // [rsp+D8h] [rbp-28h]
  __int64 v109; // [rsp+E8h] [rbp-18h]
  int v110; // [rsp+F0h] [rbp-10h]
  __int64 v111; // [rsp+F8h] [rbp-8h] BYREF
  HSEMAPHORE v112; // [rsp+100h] [rbp+0h] BYREF
  __int64 v113; // [rsp+108h] [rbp+8h]
  struct _BASEOBJECT *v114; // [rsp+110h] [rbp+10h]
  __int64 *v115; // [rsp+118h] [rbp+18h] BYREF
  bool v116; // [rsp+120h] [rbp+20h]
  __int128 v117; // [rsp+130h] [rbp+30h] BYREF
  __int64 v118; // [rsp+140h] [rbp+40h]
  int v119; // [rsp+148h] [rbp+48h]
  char v120[80]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v121; // [rsp+1A0h] [rbp+A0h]
  __int64 v122; // [rsp+1A8h] [rbp+A8h]
  __int64 v123; // [rsp+1B0h] [rbp+B0h]
  _OWORD v124[6]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _BASEOBJECT *v125; // [rsp+230h] [rbp+130h] BYREF
  int v126; // [rsp+238h] [rbp+138h]
  ULONG_PTR RegionSize; // [rsp+248h] [rbp+148h] BYREF

  v126 = a2;
  v5 = 1;
  if ( a1 != *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4264LL) && a1 )
  {
    v7 = 0LL;
    SecureHandle = 0LL;
    v105 = 0LL;
    v103 = 0LL;
    LODWORD(RegionSize) = 0;
    if ( !*(_WORD *)(a1 + 100) )
    {
      v8 = *(_QWORD *)(a1 + 72);
      SecureHandle = *(HANDLE *)(a1 + 192);
      v105 = *(_QWORD *)(a1 + 184);
      LODWORD(RegionSize) = *(_DWORD *)(a1 + 216);
      v6 = (unsigned __int16)*(_DWORD *)(a1 + 212);
      v7 = (void *)(v8 - v6);
      v103 = *(HANDLE *)(a1 + 224);
    }
    v9 = *(_OWORD *)(a1 + 272);
    v10 = *(_OWORD *)(a1 + 288);
    v114 = *(struct _BASEOBJECT **)(a1 + 128);
    v113 = *(_QWORD *)(a1 + 136);
    v11 = *(void **)(a1 + 72);
    v124[0] = v9;
    BaseAddress = v11;
    v12 = *(_OWORD *)(a1 + 304);
    v95 = *(unsigned __int16 *)(a1 + 102);
    v13 = *(void **)(a1 + 248);
    v124[2] = v12;
    v106 = v13;
    v14 = *(_OWORD *)(a1 + 584);
    LODWORD(v13) = *(_DWORD *)(a1 + 320);
    v124[1] = v10;
    v94 = (int)v13;
    v15 = *(_OWORD *)(a1 + 600);
    *(_OWORD *)Object = v14;
    v109 = *(_QWORD *)(a1 + 616);
    *(_OWORD *)v108 = v15;
    v16 = *(_QWORD *)(W32GetSessionState(v6) + 88);
    IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite((PERESOURCE)(*(_QWORD *)v16 + 624LL));
    v116 = IsResourceAcquiredSharedLite == 0;
    v19 = *(__int64 **)(W32GetSessionState(v18) + 88);
    v115 = v19;
    if ( !IsResourceAcquiredSharedLite )
      GreAcquireSemaphoreShared<1,>(v19);
    v20 = *(_QWORD *)(a1 + 48);
    v111 = v20;
    if ( !v20 || (*(_DWORD *)(a1 + 112) & 0x400000) == 0 || (*(_DWORD *)(v20 + 40) & 1) == 0 )
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v115);
    v96 = 0LL;
    DLODCOBJ::DLODCOBJ((DLODCOBJ *)v120);
    v118 = 0LL;
    v117 = 0LL;
    v119 = 0;
    v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 768LL);
    if ( v21 )
    {
      if ( v21() >= 0 )
      {
        v23 = *(void (__fastcall **)(__int128 *, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 776LL);
        if ( v23 )
          v23(&v117, 0LL);
      }
    }
    v24 = (*(_DWORD *)(a1 + 112) & 0x400000) == 0;
    v123 = 0LL;
    v122 = 0LL;
    v121 = 0LL;
    if ( v24 || !v20 )
    {
      v118 = 0LL;
      v117 = 0LL;
      v119 = 0;
      v25 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
      v26 = *(int (**)(void))(v25 + 768);
      if ( v26 )
      {
        if ( v26() >= 0 )
        {
          v25 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24);
          v27 = *(void (__fastcall **)(__int128 *, _QWORD))(v25 + 776);
          if ( v27 )
            v27(&v117, 0LL);
        }
      }
      v123 = 0LL;
      v122 = 0LL;
      v121 = 0LL;
    }
    else
    {
      v96 = 0LL;
      if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v111, v22) && (*(_DWORD *)(v20 + 40) & 0x8000) == 0 )
      {
        v88 = *(struct _ERESOURCE ***)(W32GetSessionState(v84) + 88);
        v96 = *v88 + 11;
        GreAcquireSemaphore<2,>(v88);
      }
      v122 = 0LL;
      v117 = 0LL;
      v121 = 0LL;
      DEVLOCKOBJ::bPrepareTrgDco((DEVLOCKOBJ *)&v117, 0LL);
      v119 = 1;
      if ( (*(_DWORD *)(v20 + 40) & 1) != 0 )
      {
        v85 = *(_QWORD **)(W32GetSessionState(v25) + 88);
        *(_QWORD *)&v117 = *(_QWORD *)(v20 + 48);
        v118 = v20;
        if ( (_QWORD)v117 == *v85 + 1144LL )
        {
          v119 |= 0x100000u;
          GreAcquireSemaphore<2,>(v85);
        }
        else
        {
          GreAcquireSemaphore<8,PDEVOBJ>(v20);
        }
      }
    }
    v93 = *(struct HOBJ__ **)a1;
    v28 = v93;
    v92 = -2147483614;
    SessionState = W32GetSessionState(v25);
    v30 = (unsigned __int16)v28 | ((unsigned int)v28 >> 8) & 0xFF0000;
    v31 = *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 5672LL);
    if ( v30 >= 0x10000 )
    {
      v32 = (unsigned __int16)v93;
      if ( *(_DWORD *)v31 <= 0x10000u )
      {
        v30 = (unsigned __int16)v93;
      }
      else
      {
        v33 = *(_QWORD *)(v31 + 16);
        v34 = *(_DWORD *)(v33 + 2056);
        if ( (unsigned __int16)v93 >= v34 + ((*(unsigned __int16 *)(v33 + 2) + 0xFFFF) << 16) )
        {
          v37 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)v93 >= v34 )
            v35 = (((unsigned __int16)v93 - v34) >> 16) + 1;
          else
            v35 = 0LL;
          v36 = *(_QWORD *)(v33 + 8 * v35 + 8);
          if ( (_DWORD)v35 )
            v32 = ((1 - (_DWORD)v35) << 16) - v34 + (unsigned __int16)v93;
          v37 = 0LL;
          if ( (unsigned int)v32 < *(_DWORD *)(v36 + 20) )
            v37 = *(_QWORD *)v36 + 24 * v32;
        }
        if ( *(unsigned __int8 *)(v37 + 13) == HIWORD(v30) )
          v30 = (unsigned __int16)v93;
      }
    }
    v38 = *(_QWORD *)(v31 + 16);
    v39 = *(_DWORD *)(v38 + 2056);
    if ( v30 < v39 + ((*(unsigned __int16 *)(v38 + 2) + 0xFFFF) << 16) )
    {
      if ( v30 >= v39 )
        v40 = ((v30 - v39) >> 16) + 1;
      else
        v40 = 0;
      v41 = *(_QWORD *)(v38 + 8LL * v40 + 8);
      if ( v40 )
        v30 += ((1 - v40) << 16) - v39;
      v42 = 0LL;
      if ( v30 < *(_DWORD *)(v41 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v41 + 24) + 8 * ((unsigned __int64)v30 >> 8))
                     + 16LL * (unsigned __int8)v30
                     + 8) )
      {
        v42 = *(_QWORD *)v41 + 24LL * v30;
      }
      if ( v42 && *(_BYTE *)(v42 + 14) == 5 && *(_WORD *)(v42 + 12) == WORD1(v93) )
        v92 = *(_DWORD *)(v42 + 8) & 0xFFFFFFFE;
    }
    LODWORD(v125) = 0;
    if ( a3 )
      goto LABEL_75;
    v43 = *(_DWORD *)(v16 + 3032);
    SEMOBJ<20>::SEMOBJ<20>(&v112);
    v97 = 0LL;
    LODWORD(v98) = 0;
    WORD2(v98) = 0;
    v99 = *(_QWORD **)(W32GetSessionState(v44) + 88);
    HANDLELOCK::vLockHandle((__int64 *)&v97, (unsigned __int16)v93 | ((unsigned int)v93 >> 8) & 0xFF0000, 0);
    if ( (_DWORD)v98 )
    {
      v45 = v99[709];
      v46 = *v97;
      if ( (unsigned int)v46 >= 0x10000 )
      {
        v47 = (unsigned __int16)v46;
        if ( *(_DWORD *)v45 <= 0x10000u )
        {
          v46 = (unsigned __int16)v46;
        }
        else
        {
          v48 = *(_QWORD *)(v45 + 16);
          v49 = *(_DWORD *)(v48 + 2056);
          if ( (unsigned __int16)v46 >= v49 + ((*(unsigned __int16 *)(v48 + 2) + 0xFFFF) << 16) )
          {
            v52 = 0LL;
          }
          else
          {
            if ( (unsigned __int16)v46 >= v49 )
              v50 = (((unsigned __int16)v46 - v49) >> 16) + 1;
            else
              v50 = 0LL;
            v51 = *(_QWORD *)(v48 + 8 * v50 + 8);
            if ( (_DWORD)v50 )
              v47 = ((1 - (_DWORD)v50) << 16) - v49 + (unsigned __int16)v46;
            v52 = 0LL;
            if ( v47 < *(_DWORD *)(v51 + 20) )
              v52 = *(_QWORD *)v51 + 24LL * v47;
          }
          if ( *(unsigned __int8 *)(v52 + 13) == WORD1(v46) )
            v46 = (unsigned __int16)v46;
        }
      }
      v53 = *(_QWORD *)(v45 + 16);
      v54 = *(_DWORD *)(v53 + 2056);
      if ( (unsigned int)v46 >= v54 + ((*(unsigned __int16 *)(v53 + 2) + 0xFFFF) << 16) )
        goto LABEL_122;
      if ( (unsigned int)v46 >= v54 )
        v55 = (((unsigned int)v46 - v54) >> 16) + 1;
      else
        v55 = 0LL;
      v56 = *(_QWORD *)(v53 + 8 * v55 + 8);
      if ( (_DWORD)v55 )
        v46 = ((1 - (_DWORD)v55) << 16) - v54 + (unsigned int)v46;
      if ( (unsigned int)v46 >= *(_DWORD *)(v56 + 20) )
LABEL_122:
        v57 = 0LL;
      else
        v57 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v56 + 24) + 8 * (v46 >> 8)) + 16LL * (unsigned __int8)v46 + 8);
      if ( *((_BYTE *)v97 + 14) == 5 && *((_WORD *)v97 + 6) == WORD1(v93) )
      {
        v58 = *(_DWORD *)(v57 + 8);
        if ( v58 != 1 || *(_WORD *)(v57 + 12) )
        {
          *((_BYTE *)v97 + 15) |= 8u;
          LODWORD(v125) = v58;
        }
        else if ( v43 || (*((_BYTE *)v97 + 15) & 1) == 0 )
        {
          v59 = *(_BYTE *)(HmgPentryFromPobj((_DWORD *)v57) + 14);
          if ( v59 == 5 )
          {
            v60 = *(_QWORD *)(v57 + 680);
            v61 = 0LL;
          }
          else
          {
            if ( v59 != 16 )
            {
LABEL_72:
              HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v97);
              goto LABEL_73;
            }
            v60 = *(_QWORD *)(v57 + 136);
            v61 = 2LL;
          }
          TrackObjectReferenceDecrement(v61, v60);
          goto LABEL_72;
        }
      }
      else
      {
        BYTE5(v98) = 1;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v97);
    }
    v57 = 0LL;
LABEL_73:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v97);
    SEMOBJ<20>::vUnlock(&v112);
    if ( v57 )
    {
      v28 = v93;
      goto LABEL_75;
    }
    if ( v126 != 1 || (v28 = v93, !HmgRemoveObjectImpl(v93, 0, 1, 2, 5, (unsigned int *)&v125)) )
    {
      if ( (_DWORD)v125 == 1 )
      {
        if ( !_bittest((const signed __int32 *)(a1 + 112), 0xBu) )
        {
          EngSetLastError(0xAAu);
LABEL_117:
          v5 = 0;
          goto LABEL_94;
        }
      }
      else
      {
        if ( !*(_QWORD *)(a1 + 160)
          && !(unsigned int)SURFACE::bStockSurface((SURFACE *)a1)
          && !_bittest((const signed __int32 *)(a1 + 112), 0xBu) )
        {
          goto LABEL_117;
        }
        v70 = *(_DWORD *)(a1 + 112);
        if ( (v70 & 0x800) != 0 )
        {
          if ( !*(_DWORD *)(a1 + 320) )
          {
            *(_DWORD *)(a1 + 320) = 1;
            _InterlockedAdd((volatile signed __int32 *)(v16 + 12), 1u);
          }
        }
        else
        {
          *(_DWORD *)(a1 + 112) = v70 | 0x1000000;
        }
      }
      HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)a1, 0LL);
LABEL_94:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v117);
      NEEDGRELOCK::vUnlock(&v96, v67, v68);
      NEEDDYNAMICMODECHANGESHARELOCK::vUnlockIfNeeded(&v115);
      return v5;
    }
LABEL_75:
    if ( v94 )
      _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
    if ( (*(_DWORD *)(a1 + 112) & 0x40000) != 0 && *(_QWORD *)(a1 + 560) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v62 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2072LL);
    if ( v62 )
    {
      if ( v62() >= 0 )
      {
        v63 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2080LL);
        if ( v63 )
          v63(a1);
      }
    }
    SURFACE::vDeleteDriverRealization((SURFACE *)a1);
    v64 = v103;
    if ( v103 )
    {
      if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        MmUnsecureVirtualMemory(v64);
      goto LABEL_89;
    }
    if ( (_DWORD)RegionSize )
    {
      if ( BaseAddress )
      {
        Object[0] = 0LL;
        Object[1] = 0LL;
        *(_QWORD *)v108 = v7;
        *(_QWORD *)&v108[2] = 0LL;
        v109 = 0LL;
        v110 = 3;
        Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)Object);
      }
      goto LABEL_89;
    }
    v65 = SecureHandle;
    if ( SecureHandle )
    {
      if ( *(_DWORD *)(a1 + 208) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        MmUnsecureVirtualMemory(v65);
        if ( BaseAddress )
        {
          if ( v105 )
          {
            ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
          }
          else
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
          }
        }
      }
      goto LABEL_89;
    }
    if ( (v95 & 8) == 0 )
    {
      if ( (v95 & 0x800) != 0 )
      {
        RegionSize = *(_QWORD *)v16 + 936LL;
        GreAcquireSemaphoreInternal((struct _ERESOURCE *)RegionSize);
        GrepAcquireLockValidate<36>();
        v77 = *(struct _W32PROCESS **)(a1 + 264);
        if ( v77 )
        {
          v78 = a1 + 528;
          v79 = *(_QWORD *)(a1 + 528);
          if ( v79 != a1 + 528 )
          {
            if ( *(_QWORD *)(v79 + 8) != v78 || (v80 = *(_QWORD **)(a1 + 536), *v80 != v78) )
              __fastfail(3u);
            *v80 = v79;
            *(_QWORD *)(v79 + 8) = v80;
          }
          if ( BaseAddress && v106 )
          {
            v81 = GrepW32PidFromW32Process(v77);
            Gre::MapViewOfSectionObj::Unmap(v81, BaseAddress);
          }
        }
        W32PIDLOCK::vCleanUp((W32PIDLOCK *)v124);
        if ( v106 )
          ObfDereferenceObject(v106);
        SEMOBJ<36>::vUnlock((struct _ERESOURCE **)&RegionSize, v82, v83);
      }
      else if ( (v95 & 0x10) != 0 )
      {
        vFreeKernelSection(BaseAddress);
      }
      goto LABEL_89;
    }
    if ( (v95 & 0x80u) == 0 )
    {
      EngFreeUserMem(BaseAddress);
LABEL_89:
      if ( (*(_DWORD *)(a1 + 116) & 0x1000) != 0 )
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 4LL, v28, (unsigned int)v125, v92, 0LL, 0LL, 0);
      SURFACE_Free((_QWORD *)a1);
      v66 = v113;
      if ( v113 )
      {
        v86 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2120LL);
        if ( v86 )
        {
          if ( v86() >= 0 )
          {
            v87 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2128LL);
            if ( v87 )
              v87(v66);
          }
        }
      }
      if ( v114 )
      {
        v125 = v114;
        XEPALOBJ::vUnrefPalette(&v125);
      }
      goto LABEL_94;
    }
    CurrentThread = GreGetCurrentThread();
    v72 = v108[2];
    v73 = Object[1];
    v74 = CurrentThread;
    v97 = 0LL;
    v100 = 0LL;
    if ( v108[2] )
      v73 = BaseAddress;
    v99 = v73;
    v98 = 0LL;
    v101 = 0LL;
    v102 = 1;
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v97);
    if ( v74 && *((_QWORD *)v74 + 8) )
    {
      v75 = UMPDGetThreadClientPID(v74);
    }
    else
    {
      if ( !(_DWORD)v109 )
      {
        v89 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2104LL);
        if ( v89 )
        {
          if ( v89() >= 0 )
          {
            v90 = *(void (__fastcall **)(PVOID))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 2112LL);
            if ( v90 )
              v90(BaseAddress);
          }
        }
        goto LABEL_135;
      }
      v75 = v108[3];
    }
    v76 = BaseAddress;
    if ( v72 )
      v76 = Object[1];
    Gre::MapViewOfSectionObj::Unmap(v75, v76);
LABEL_135:
    if ( Object[0] )
      ObfDereferenceObject(Object[0]);
    else
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 68LL, 2LL, 0LL, 0LL, 0LL, 0LL, 0);
    goto LABEL_89;
  }
  return v5;
}
