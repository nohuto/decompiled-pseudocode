/*
 * XREFs of ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560
 * Callers:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1C00AFFC8 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C003BE90 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00404E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C0043510 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z @ 0x1C0044280 (-GetEntryObject@GdiHandleEntryTable@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C0045680 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047CB0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C005DCC4 (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250 (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 *     HmgFreeDcAttr @ 0x1C008AE88 (HmgFreeDcAttr.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00C29F0 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00C6CF4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BBC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C016EC54 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall XDCOBJ::vDelete(DC **this, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v9; // r8d
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbp
  struct _ERESOURCE *v13; // rbx
  __int64 v14; // rbx
  int v15; // edx
  __int64 v16; // rcx
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  unsigned int v36; // r9d
  __int64 v37; // r8
  _DWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // r9d
  GdiHandleEntryTable *v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // r8d
  struct _ERESOURCE *v50; // rcx
  struct _ERESOURCE *v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // r8d
  DC *v57; // r15
  __int64 v58; // r14
  unsigned int v59; // eax
  __int64 v60; // rbx
  unsigned int v61; // r8d
  unsigned int v62; // ebp
  unsigned int v63; // r12d
  __int64 v64; // r10
  __int64 v65; // rdi
  unsigned int v66; // eax
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  __int64 v69; // r8
  DC *v70; // rdx
  __int64 v71; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v73; // r14
  DC *v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rcx
  _DWORD *v77; // rdi
  char v78; // al
  __int64 v79; // rcx
  __int64 v80; // rbp
  __int64 v81; // rbx
  unsigned int v82; // eax
  __int64 v83; // rcx
  unsigned int v84; // edx
  unsigned int v85; // r9d
  GdiHandleEntryTable *v86; // rcx
  struct OBJECT *EntryObject; // rax
  unsigned int v88; // eax
  __int64 v89; // rcx
  unsigned int v90; // edx
  unsigned int v91; // r9d
  GdiHandleEntryTable *v92; // rcx
  __int64 v93; // rdi
  DC *v94; // r12
  __int64 v95; // rcx
  __int64 v96; // r15
  unsigned int v97; // eax
  __int64 v98; // r14
  unsigned int v99; // r10d
  unsigned int v100; // ebp
  unsigned int v101; // r13d
  __int64 v102; // r9
  __int64 v103; // rbx
  unsigned int v104; // eax
  unsigned __int64 v105; // rdx
  __int64 v106; // r8
  DC *v107; // rdx
  void *v108; // rcx
  void *v109; // rcx
  void *v110; // rcx
  void *v111; // rcx
  void *v112; // rcx
  void *v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // rcx
  __int64 v116; // rcx
  __int64 v117; // rsi
  struct _ERESOURCE *v118; // rbp
  __int64 v119; // rbp
  int v120; // edx
  __int64 v121; // rcx
  int v122; // r8d
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v123; // rbp
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v124; // rcx
  bool v125; // zf
  int v126; // ebp
  __int64 v127; // r14
  __int64 v128; // rcx
  int v129; // r8d
  struct _ERESOURCE *v130; // rcx
  __int64 ProcessWow64Process; // rax
  int v132; // ecx
  unsigned __int64 v133; // rbx
  struct _DC_ATTR *v134; // rbx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // [rsp+50h] [rbp-48h] BYREF
  __int64 v138; // [rsp+58h] [rbp-40h]
  __int64 v139; // [rsp+A0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)*this + 6);
  if ( (*(_DWORD *)(v4 + 40) & 0x80u) != 0 )
  {
    v5 = 0;
    LOBYTE(v139) = 0;
  }
  else
  {
    v5 = 1;
    LOBYTE(v139) = 1;
    v6 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
    v7 = *(_QWORD *)(v6 + 80);
    if ( v7 )
      ExEnterPriorityRegionAndAcquireResourceShared(v7);
    v8 = *(_QWORD *)(v6 + 80);
    v4 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    if ( *(_DWORD *)(v4 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v4,
        (unsigned int)&LockAcquireShared,
        v9,
        v8,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
  }
  v10 = *(_QWORD *)*this;
  v12 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  v13 = *(struct _ERESOURCE **)(v12 + 1912);
  if ( v13 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
  }
  v14 = *(_QWORD *)(v12 + 1912);
  v16 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
  if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v16, v15, v17, v14, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
  v137 = 0LL;
  LODWORD(v138) = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v137, (unsigned __int16)v10 | ((unsigned int)v10 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !(_DWORD)v138 )
    goto LABEL_148;
  v19 = SGDGetSessionState(v18);
  v20 = v137;
  v21 = *(_QWORD *)(*(_QWORD *)(v19 + 24) + 8008LL);
  v22 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v21, *(_DWORD *)v137 & 0xFFFFFF);
  v23 = *(_QWORD *)(v21 + 16);
  v24 = v22;
  v25 = *(_DWORD *)(v23 + 2056);
  v26 = v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16);
  if ( v22 >= (unsigned int)v26
    || (v22 >= v25
      ? (v26 = ((v22 - v25) >> 16) + 1,
         v27 = *(_QWORD *)(v23 + 8 * v26 + 8),
         v24 = -65536 * ((v22 - v25) >> 16) - v25 + v22)
      : (v27 = *(_QWORD *)(v23 + 8)),
        (unsigned int)v24 >= *(_DWORD *)(v27 + 20)) )
  {
    v28 = 0LL;
  }
  else
  {
    v26 = 2LL * (unsigned __int8)v24;
    v28 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8);
  }
  if ( *(_BYTE *)(v20 + 14) != 1 || *(_WORD *)(v20 + 12) != WORD1(v10) )
  {
LABEL_146:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v137);
    if ( (_DWORD)v138 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v137);
LABEL_148:
    GreReleaseHmgrSemaphore(v18);
    EngSetLastError(0xAAu);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v139);
    return;
  }
  if ( *(_WORD *)(v28 + 12) != 1 || *(_DWORD *)(v28 + 8) )
  {
    *(_BYTE *)(v20 + 15) |= 8u;
    goto LABEL_146;
  }
  v29 = *(_BYTE *)(v20 + 15);
  if ( (v29 & 1) != 0 )
    goto LABEL_146;
  *(_BYTE *)(v20 + 15) = v29 | 0x40;
  v30 = *(_QWORD *)(SGDGetSessionState(v26) + 24);
  v31 = *(_QWORD *)(v30 + 8008);
  v32 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v30) + 24) + 8008LL);
  v33 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v32, *(_DWORD *)v20 & 0xFFFFFF);
  v34 = *(_QWORD *)(v32 + 16);
  v35 = v33;
  v36 = *(_DWORD *)(v34 + 2056);
  if ( v33 >= v36 + ((*(unsigned __int16 *)(v34 + 2) + 0xFFFF) << 16)
    || (v33 >= v36
      ? (v37 = *(_QWORD *)(v34 + 8LL * (((v33 - v36) >> 16) + 1) + 8), v35 = -65536 * ((v33 - v36) >> 16) - v36 + v33)
      : (v37 = *(_QWORD *)(v34 + 8)),
        (unsigned int)v35 >= *(_DWORD *)(v37 + 20)) )
  {
    v38 = 0LL;
  }
  else
  {
    v38 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v37 + 24) + 8 * (v35 >> 8)) + 16LL * (unsigned __int8)v35 + 8);
  }
  v39 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v31, (unsigned __int16)*v38 | (*v38 >> 8) & 0xFF0000u);
  v40 = *(_QWORD *)(v31 + 16);
  v41 = v39;
  v42 = *(_DWORD *)(v40 + 2056);
  if ( v39 < v42 + ((*(unsigned __int16 *)(v40 + 2) + 0xFFFF) << 16) )
  {
    if ( v39 >= v42 )
    {
      v43 = *(GdiHandleEntryTable **)(v40 + 8LL * (((v39 - v42) >> 16) + 1) + 8);
      v41 = -65536 * ((v39 - v42) >> 16) - v42 + v39;
    }
    else
    {
      v43 = *(GdiHandleEntryTable **)(v40 + 8);
    }
    GdiHandleEntryTable::ReleaseEntryLock(v43, v41);
  }
  KeLeaveCriticalRegion();
  v45 = *(_QWORD *)(SGDGetSessionState(v44) + 24);
  v46 = *(_QWORD *)(v45 + 1912);
  v48 = *(_QWORD *)(SGDGetSessionState(v47) + 24);
  if ( *(_DWORD *)(v48 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v48, (unsigned int)&LockRelease, v49, v46, (__int64)L"GreBaseGlobals.hsemHmgr");
  v50 = *(struct _ERESOURCE **)(v45 + 1912);
  if ( v50 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v50);
    PsLeavePriorityRegion();
  }
  XDCOBJ::bCleanDC(this, HIBYTE(a2) & 1);
  if ( v5 )
  {
    v52 = *(_QWORD *)(SGDGetSessionState(v51) + 24);
    v53 = *(_QWORD *)(v52 + 80);
    v55 = *(_QWORD *)(SGDGetSessionState(v54) + 24);
    if ( *(_DWORD *)(v55 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pz_EtwWriteTransfer(
        v55,
        (unsigned int)&LockRelease,
        v56,
        v53,
        (__int64)L"GreBaseGlobals.hsemDynamicModeChange");
    v51 = *(struct _ERESOURCE **)(v52 + 80);
    if ( v51 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v51);
      PsLeavePriorityRegion();
    }
  }
  if ( (a2 & 0x800000) == 0 )
  {
    v57 = *this;
    v58 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v51) + 24) + 8008LL);
    v59 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v58,
            (unsigned __int16)*(_DWORD *)v57 | (*(_DWORD *)v57 >> 8) & 0xFF0000u);
    v60 = *(_QWORD *)(v58 + 16);
    v61 = v59;
    v62 = *(_DWORD *)(v60 + 2056);
    v63 = v62 + ((*(unsigned __int16 *)(v60 + 2) + 0xFFFF) << 16);
    if ( v59 >= v63 )
    {
      v65 = 0LL;
    }
    else
    {
      if ( v59 >= v62 )
      {
        v64 = *(_QWORD *)(v60 + 8LL * (((v59 - v62) >> 16) + 1) + 8);
        v59 += -65536 * ((v59 - v62) >> 16) - v62;
      }
      else
      {
        v64 = *(_QWORD *)(v60 + 8);
      }
      v65 = 0LL;
      if ( v59 < *(_DWORD *)(v64 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v64 + 24) + 8 * ((unsigned __int64)v59 >> 8))
                     + 16LL * (unsigned __int8)v59
                     + 8) )
      {
        v65 = *(_QWORD *)v64 + 24LL * v59;
      }
    }
    v66 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v58, v61);
    v68 = v66;
    if ( v66 >= v63
      || (v66 >= v62
        ? (v67 = ((v66 - v62) >> 16) + 1,
           v69 = *(_QWORD *)(v60 + 8 * v67 + 8),
           v68 = -65536 * ((v66 - v62) >> 16) - v62 + v66)
        : (v69 = *(_QWORD *)(v60 + 8)),
          (unsigned int)v68 >= *(_DWORD *)(v69 + 20)) )
    {
      v70 = 0LL;
    }
    else
    {
      v67 = 2LL * (unsigned __int8)v68;
      v70 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v69 + 24) + 8 * (v68 >> 8)) + 16LL * (unsigned __int8)v68 + 8);
    }
    if ( v70 != v57 )
      v65 = 0LL;
    v71 = *(_QWORD *)(v65 + 16);
    if ( v71 )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v67);
      v73 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      {
        ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
        v132 = *((_DWORD *)v73 + 73);
        if ( ProcessWow64Process )
          v133 = (unsigned int)__ROR4__(v71, 32 - (v132 & 0x1F));
        else
          v133 = __ROR8__(v71, 64 - (v132 & 0x3Fu));
        v134 = (struct _DC_ATTR *)(*((unsigned int *)v73 + 73) ^ v133);
        if ( v134 )
        {
          *(_QWORD *)(v65 + 16) = 0LL;
          if ( (*((_DWORD *)v57 + 11) & 2) == 0 )
            DC::SaveAttributes(v57, v134);
          HmgFreeDcAttr(v134);
        }
      }
      else
      {
        DbgkWerCaptureLiveKernelDump(L"win32kfull.sys", 356LL, 41LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      }
    }
  }
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 17));
  DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)*this + 18));
  DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct HOBJ__ ***)*this + 19));
  v74 = *this;
  v137 = 0LL;
  LODWORD(v138) = 0;
  v75 = *((_QWORD *)v74 + 12);
  HANDLELOCK::vLockHandle(
    (HANDLELOCK *)&v137,
    (unsigned __int16)*(_DWORD *)v75 | (*(_DWORD *)v75 >> 8) & 0xFF0000,
    0,
    0,
    1);
  if ( !(_DWORD)v138 )
    goto LABEL_64;
  v77 = (_DWORD *)v137;
  v78 = *(_BYTE *)(v137 + 14);
  if ( v78 == 5 )
  {
    v135 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v75 + 680);
    v136 = 0LL;
LABEL_132:
    TrackObjectReferenceDecrement(v136, v135);
    goto LABEL_55;
  }
  if ( v78 == 16 )
  {
    v135 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v75 + 136);
    v136 = 2LL;
    goto LABEL_132;
  }
LABEL_55:
  --*(_DWORD *)(v75 + 8);
  v79 = *(_QWORD *)(SGDGetSessionState(v76) + 24);
  v80 = *(_QWORD *)(v79 + 8008);
  v81 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v79) + 24) + 8008LL);
  v82 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v81, *v77 & 0xFFFFFF);
  v83 = *(_QWORD *)(v81 + 16);
  v84 = v82;
  v85 = *(_DWORD *)(v83 + 2056);
  if ( v82 >= v85 + ((*(unsigned __int16 *)(v83 + 2) + 0xFFFF) << 16) )
  {
    EntryObject = 0LL;
  }
  else
  {
    if ( v82 >= v85 )
    {
      v86 = *(GdiHandleEntryTable **)(v83 + 8LL * (((v82 - v85) >> 16) + 1) + 8);
      v84 = -65536 * ((v82 - v85) >> 16) - v85 + v82;
    }
    else
    {
      v86 = *(GdiHandleEntryTable **)(v83 + 8);
    }
    EntryObject = GdiHandleEntryTable::GetEntryObject(v86, v84);
  }
  v88 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)v80,
          (unsigned __int16)*(_DWORD *)EntryObject | (*(_DWORD *)EntryObject >> 8) & 0xFF0000u);
  v89 = *(_QWORD *)(v80 + 16);
  v90 = v88;
  v91 = *(_DWORD *)(v89 + 2056);
  if ( v88 < v91 + ((*(unsigned __int16 *)(v89 + 2) + 0xFFFF) << 16) )
  {
    if ( v88 >= v91 )
    {
      v92 = *(GdiHandleEntryTable **)(v89 + 8LL * (((v88 - v91) >> 16) + 1) + 8);
      v90 = -65536 * ((v88 - v91) >> 16) - v91 + v88;
    }
    else
    {
      v92 = *(GdiHandleEntryTable **)(v89 + 8);
    }
    GdiHandleEntryTable::ReleaseEntryLock(v92, v90);
  }
  KeLeaveCriticalRegion();
LABEL_64:
  v93 = *((_QWORD *)*this + 6);
  DC::vReleaseVis(*this);
  v94 = *this;
  *((_DWORD *)*this + 9) |= 0x10u;
  v96 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v95) + 24) + 8008LL);
  v97 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)v96,
          (unsigned __int16)*(_DWORD *)v94 | (*(_DWORD *)v94 >> 8) & 0xFF0000u);
  v98 = *(_QWORD *)(v96 + 16);
  v99 = v97;
  v100 = *(_DWORD *)(v98 + 2056);
  v101 = v100 + ((*(unsigned __int16 *)(v98 + 2) + 0xFFFF) << 16);
  if ( v97 >= v101 )
  {
    v103 = 0LL;
  }
  else
  {
    if ( v97 >= v100 )
    {
      v102 = *(_QWORD *)(v98 + 8LL * (((v97 - v100) >> 16) + 1) + 8);
      v97 += -65536 * ((v97 - v100) >> 16) - v100;
    }
    else
    {
      v102 = *(_QWORD *)(v98 + 8);
    }
    v103 = 0LL;
    if ( v97 < *(_DWORD *)(v102 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v102 + 24) + 8 * ((unsigned __int64)v97 >> 8))
                   + 16LL * (unsigned __int8)v97
                   + 8) )
    {
      v103 = *(_QWORD *)v102 + 24LL * v97;
    }
  }
  v104 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v96, v99);
  v105 = v104;
  if ( v104 >= v101
    || (v104 >= v100
      ? (v106 = *(_QWORD *)(v98 + 8LL * (((v104 - v100) >> 16) + 1) + 8),
         v105 = -65536 * ((v104 - v100) >> 16) - v100 + v104)
      : (v106 = *(_QWORD *)(v98 + 8)),
        (unsigned int)v105 >= *(_DWORD *)(v106 + 20)) )
  {
    v107 = 0LL;
  }
  else
  {
    v107 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v106 + 24) + 8 * (v105 >> 8)) + 16LL * (unsigned __int8)v105 + 8);
  }
  if ( v107 != v94 )
    v103 = 0LL;
  *(_BYTE *)(v103 + 15) |= 4u;
  v108 = (void *)*((_QWORD *)*this + 143);
  if ( v108 )
  {
    REGION::vDeleteREGION(v108);
    *((_QWORD *)*this + 143) = 0LL;
  }
  v109 = (void *)*((_QWORD *)*this + 145);
  if ( v109 )
  {
    REGION::vDeleteREGION(v109);
    *((_QWORD *)*this + 145) = 0LL;
  }
  v110 = (void *)*((_QWORD *)*this + 144);
  if ( v110 )
  {
    REGION::vDeleteREGION(v110);
    *((_QWORD *)*this + 144) = 0LL;
  }
  v111 = (void *)*((_QWORD *)*this + 146);
  if ( v111 )
  {
    REGION::vDeleteREGION(v111);
    *((_QWORD *)*this + 146) = 0LL;
  }
  v112 = (void *)*((_QWORD *)*this + 147);
  if ( v112 )
  {
    REGION::vDeleteREGION(v112);
    *((_QWORD *)*this + 147) = 0LL;
  }
  v113 = (void *)*((_QWORD *)*this + 148);
  if ( v113 )
  {
    REGION::vDeleteREGION(v113);
    *((_QWORD *)*this + 148) = 0LL;
  }
  v114 = *((_QWORD *)*this + 7);
  v139 = v114;
  XDCOBJ::vDeleteCore((XDCOBJ *)this);
  v117 = *(_QWORD *)(SGDGetSessionState(v115) + 24);
  v118 = *(struct _ERESOURCE **)(v117 + 8);
  if ( v118 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v118);
  }
  v119 = *(_QWORD *)(v117 + 8);
  v121 = *(_QWORD *)(SGDGetSessionState(v116) + 24);
  if ( *(_DWORD *)(v121 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v121, v120, v122, v119, 16, (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v123 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v93 + 3520);
  v124 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v121) + 24);
  if ( v123 )
  {
    v124 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v124 + 1007);
    if ( v124 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v124, v123, 0);
  }
  v125 = (*(_DWORD *)(v93 + 8))-- == 1;
  v126 = *(_DWORD *)(v93 + 8);
  if ( v125 )
    RemovePDEVFromList((struct PDEV **)(v117 + 6080), (struct PDEV *)v93);
  v127 = *(_QWORD *)(v117 + 8);
  v128 = *(_QWORD *)(SGDGetSessionState(v124) + 24);
  if ( *(_DWORD *)(v128 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v128,
      (unsigned int)&LockRelease,
      v129,
      v127,
      (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v130 = *(struct _ERESOURCE **)(v117 + 8);
  if ( v130 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v130);
    PsLeavePriorityRegion();
  }
  if ( !v126 )
  {
    v138 = 1LL;
    v137 = v93;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v137);
  }
  if ( v114 )
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v139);
}
