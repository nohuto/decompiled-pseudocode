/*
 * XREFs of ??1SURFMEM@@QEAA@XZ @ 0x1C0046370
 * Callers:
 *     ?EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z @ 0x1C000BB40 (-EngCreateLockedBitmap@@YAPEAU_SURFOBJ@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C005E63C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005E88C (-hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?CreateDriverSurfMem@@YA?AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C005E8F8 (-CreateDriverSurfMem@@YA-AVSURFMEM@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C005EB50 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C015AC20 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0043870 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0044240 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z @ 0x1C0047B94 (-ReleaseLockAndEntry@GdiHandleEntryTable@@QEAAXI_N@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0047C58 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0048150 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009D9C0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x1C00B5870 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFA8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ?vFreeKernelSection@@YAXPEAX@Z @ 0x1C01586AC (-vFreeKernelSection@@YAXPEAX@Z.c)
 *     EngFreeUserMem @ 0x1C016A030 (EngFreeUserMem.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BBC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C016D424 (-ReleaseReferenceCountedObjectHandle@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C016EC54 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall SURFMEM::~SURFMEM(SURFMEM *this)
{
  __int64 *v1; // rbx
  _DWORD *v3; // r15
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // r14
  _BYTE *v16; // rsi
  __int64 v17; // r13
  _QWORD *v18; // rax
  bool v19; // zf
  char v20; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned int v28; // r9d
  __int64 v29; // r8
  unsigned int v30; // ebx
  __int64 v31; // rdx
  unsigned int v32; // r8d
  __int64 v33; // r10
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r14
  struct _ERESOURCE *v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v41; // r8d
  __int64 v42; // rcx
  __int64 v43; // rax
  _BYTE *v44; // r14
  __int64 v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  unsigned int v49; // r9d
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rbx
  __int64 v53; // r12
  unsigned int v54; // eax
  __int64 v55; // r13
  unsigned int v56; // r10d
  unsigned int v57; // r14d
  __int64 v58; // r8
  __int64 v59; // rdi
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  char v66; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v67; // rbx
  __int64 v68; // rcx
  unsigned __int8 *v69; // r12
  int v70; // ebx
  signed int v71; // r14d
  __int64 v72; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v74; // rcx
  _QWORD *v75; // rdi
  __int64 v76; // rcx
  __int64 v77; // r13
  struct _ERESOURCE *v78; // r12
  __int64 v79; // r12
  int v80; // edx
  __int64 v81; // rcx
  int v82; // r8d
  __int64 v83; // rdi
  __int64 v84; // r12
  __int64 v85; // rcx
  __int64 v86; // rcx
  struct _ERESOURCE *v87; // rcx
  char EtwGdiHandleType; // r13
  __int64 v89; // rcx
  __int64 v90; // rdi
  unsigned int v91; // eax
  __int64 v92; // r8
  unsigned __int64 v93; // rdx
  __int64 v94; // r9
  __int64 v95; // rcx
  __int64 *v96; // rdx
  __int64 v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // rbx
  unsigned int v101; // eax
  __int64 v102; // r8
  unsigned __int64 v103; // rdx
  unsigned int v104; // r9d
  __int64 v105; // rax
  _DWORD *v106; // r14
  unsigned int v107; // r12d
  __int64 v108; // rax
  GdiHandleEntryDirectory *v109; // rbx
  __int64 v110; // rcx
  __int64 *v111; // rax
  __int64 v112; // rcx
  void *v113; // rdi
  void *v114; // rbx
  __int128 v115; // xmm1
  __int128 v116; // xmm0
  __int128 v117; // xmm1
  __int128 v118; // xmm0
  __int64 v119; // rbx
  __int64 v120; // rdi
  void *v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // rdi
  __int64 v125; // rcx
  __int64 v126; // rcx
  int v127; // r8d
  struct _ERESOURCE *v128; // rcx
  __int64 CurrentThreadProcess; // rax
  __int16 v130; // r12
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v131; // rcx
  _QWORD *ProcessWin32Process; // rax
  _DWORD *v133; // rax
  int v134; // r8d
  unsigned int v135; // ebx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  __int64 ThreadWin32Thread; // r14
  __int64 CurrentProcess; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  struct _KPROCESS *v143; // r14
  _QWORD *v144; // r14
  _QWORD *v145; // rax
  _QWORD *v146; // rcx
  _QWORD *v147; // rdx
  PVOID Object[2]; // [rsp+40h] [rbp-49h] BYREF
  __int128 v149; // [rsp+50h] [rbp-39h]
  _OWORD v150[4]; // [rsp+68h] [rbp-21h] BYREF
  PEPROCESS v151; // [rsp+F0h] [rbp+67h] BYREF
  PEPROCESS Process; // [rsp+F8h] [rbp+6Fh] BYREF
  struct GdiHandleEntryTable *v153; // [rsp+100h] [rbp+77h] BYREF
  __int64 v154; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(__int64 **)this;
  if ( !*(_QWORD *)this )
    return;
  v3 = 0LL;
  if ( (*((_BYTE *)this + 8) & 1) == 0 )
  {
    v130 = *((_DWORD *)this + 3) != 0;
    v34 = *v1;
    SGDGetSessionState(this);
    v37 = *(_QWORD *)(SGDGetSessionState(v35) + 24);
    v38 = *(struct _ERESOURCE **)(v37 + 1912);
    if ( v38 )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v38);
    }
    v39 = *(_QWORD *)(v37 + 1912);
    v40 = *(_QWORD *)(SGDGetSessionState(v36) + 24);
    if ( *(_DWORD *)(v40 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      McTemplateK0pqz_EtwWriteTransfer(
        v40,
        (unsigned int)L"GreBaseGlobals.hsemHmgr",
        v41,
        v39,
        17,
        (__int64)L"GreBaseGlobals.hsemHmgr");
    Object[0] = 0LL;
    LODWORD(Object[1]) = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)Object, (unsigned __int16)v34 | ((unsigned int)v34 >> 8) & 0xFF0000, 1, 0, 0);
    if ( LODWORD(Object[1]) )
    {
      v43 = SGDGetSessionState(v42);
      v44 = Object[0];
      v45 = *(_QWORD *)(*(_QWORD *)(v43 + 24) + 8008LL);
      v46 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v45, *(_DWORD *)Object[0] & 0xFFFFFF);
      v47 = *(_QWORD *)(v45 + 16);
      v48 = v46;
      v49 = *(_DWORD *)(v47 + 2056);
      v50 = v49 + ((*(unsigned __int16 *)(v47 + 2) + 0xFFFF) << 16);
      if ( v46 >= (unsigned int)v50
        || (v46 >= v49
          ? (v50 = ((v46 - v49) >> 16) + 1,
             v51 = *(_QWORD *)(v47 + 8 * v50 + 8),
             v48 = -65536 * ((v46 - v49) >> 16) - v49 + v46)
          : (v51 = *(_QWORD *)(v47 + 8)),
            (unsigned int)v48 >= *(_DWORD *)(v51 + 20)) )
      {
        v52 = 0LL;
      }
      else
      {
        v50 = 2LL * (unsigned __int8)v48;
        v52 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v51 + 24) + 8 * (v48 >> 8)) + 16LL * (unsigned __int8)v48 + 8);
      }
      if ( v44[14] == 5 && *((_WORD *)v44 + 6) == WORD1(v34) )
      {
        if ( *(_WORD *)(v52 + 12) == v130 && *(_DWORD *)(v52 + 8) == 1 )
        {
          v53 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v50) + 24) + 8008LL);
          v54 = GdiHandleManager::DecodeIndex(
                  (GdiHandleEntryDirectory **)v53,
                  (unsigned __int16)*(_DWORD *)v52 | (*(_DWORD *)v52 >> 8) & 0xFF0000u);
          v55 = *(_QWORD *)(v53 + 16);
          v56 = v54;
          v57 = *(_DWORD *)(v55 + 2056);
          LODWORD(v151) = v57 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16);
          if ( v54 >= (unsigned int)v151 )
          {
            v59 = 0LL;
          }
          else
          {
            if ( v54 >= v57 )
            {
              v58 = *(_QWORD *)(v55 + 8LL * (((v54 - v57) >> 16) + 1) + 8);
              v54 += -65536 * ((v54 - v57) >> 16) - v57;
            }
            else
            {
              v58 = *(_QWORD *)(v55 + 8);
            }
            v59 = 0LL;
            if ( v54 < *(_DWORD *)(v58 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v58 + 24) + 8 * ((unsigned __int64)v54 >> 8))
                           + 16LL * (unsigned __int8)v54
                           + 8) )
            {
              v59 = *(_QWORD *)v58 + 24LL * v54;
            }
          }
          v60 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v53, v56);
          v64 = v60;
          if ( v60 >= (unsigned int)v151
            || (v60 >= v57
              ? (v61 = ((v60 - v57) >> 16) + 1,
                 v62 = *(_QWORD *)(v55 + 8 * v61 + 8),
                 v64 = -65536 * ((v60 - v57) >> 16) - v57 + v60)
              : (v62 = *(_QWORD *)(v55 + 8)),
                (unsigned int)v64 >= *(_DWORD *)(v62 + 20)) )
          {
            v65 = 0LL;
          }
          else
          {
            v61 = 2LL * (unsigned __int8)v64;
            v65 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v62 + 24) + 8 * (v64 >> 8)) + 16LL * (unsigned __int8)v64 + 8);
          }
          if ( v65 != v52 )
            v59 = 0LL;
          v66 = *(_BYTE *)(v59 + 14);
          if ( v66 == 5 )
          {
            v67 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v52 + 680);
            v68 = *(_QWORD *)(SGDGetSessionState(v61) + 24);
            if ( v67 )
            {
              v131 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v68 + 8040);
              if ( v131 )
                NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v131, v67, 0);
            }
          }
          else if ( v66 == 16 )
          {
            TrackObjectReferenceDecrement(
              2LL,
              *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v52 + 136));
          }
          v69 = (unsigned __int8 *)Object[0];
          v70 = *((_DWORD *)Object[0] + 2);
          v71 = v70 & 0xFFFFFFFE;
          if ( (v70 & 0xFFFFFFFE) == 0 || v71 == -2147483630 )
          {
LABEL_80:
            EtwGdiHandleType = GetEtwGdiHandleType(v69[14], v65, v62, v63);
            v90 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v89) + 24) + 8008LL);
            v91 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v90, *(_DWORD *)v69 & 0xFFFFFF);
            v92 = *(_QWORD *)(v90 + 16);
            v93 = v91;
            v94 = *(unsigned int *)(v92 + 2056);
            v95 = (unsigned int)v94 + ((*(unsigned __int16 *)(v92 + 2) + 0xFFFF) << 16);
            if ( v91 >= (unsigned int)v95
              || (v91 >= (unsigned int)v94
                ? (v95 = ((v91 - (unsigned int)v94) >> 16) + 1,
                   v92 = *(_QWORD *)(v92 + 8 * v95 + 8),
                   v93 = -65536 * ((v91 - (unsigned int)v94) >> 16) - (_DWORD)v94 + v91)
                : (v92 = *(_QWORD *)(v92 + 8)),
                  (unsigned int)v93 >= *(_DWORD *)(v92 + 20)) )
            {
              v96 = 0LL;
            }
            else
            {
              v95 = 2LL * (unsigned __int8)v93;
              v96 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v92 + 24) + 8 * (v93 >> 8)) + 16LL * (unsigned __int8)v93 + 8);
            }
            v97 = *v96;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
            {
              v133 = (_DWORD *)SGDGetUserSessionState(v95, v96, v92, v94);
              McTemplateK0pqqq_EtwWriteTransfer(
                *v133,
                (unsigned int)&GdiDestroyHandle,
                v134,
                v97,
                EtwGdiHandleType,
                *v133,
                v71);
            }
            v69[14] = 0;
            *((_QWORD *)v69 + 2) = 0LL;
            *((_DWORD *)v69 + 2) = v70 & 1;
            v98 = *(_QWORD *)(SGDGetSessionState(v95) + 24);
            v99 = *(_QWORD *)(v98 + 8008);
            v100 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v98) + 24) + 8008LL);
            v101 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v100, *(_DWORD *)v69 & 0xFFFFFF);
            v102 = *(_QWORD *)(v100 + 16);
            v103 = v101;
            v104 = *(_DWORD *)(v102 + 2056);
            if ( v101 >= v104 + ((*(unsigned __int16 *)(v102 + 2) + 0xFFFF) << 16)
              || (v101 >= v104
                ? (v105 = *(_QWORD *)(v102 + 8LL * (((v101 - v104) >> 16) + 1) + 8),
                   v103 = -65536 * (((unsigned int)v103 - v104) >> 16) - v104 + (unsigned int)v103)
                : (v105 = *(_QWORD *)(v102 + 8)),
                  (unsigned int)v103 >= *(_DWORD *)(v105 + 20)) )
            {
              v106 = 0LL;
            }
            else
            {
              v106 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v105 + 24) + 8 * (v103 >> 8))
                                + 16LL * (unsigned __int8)v103
                                + 8);
            }
            v107 = GdiHandleManager::DecodeIndex(
                     (GdiHandleEntryDirectory **)v99,
                     (unsigned __int16)*v106 | (*v106 >> 8) & 0xFF0000u);
            v108 = *(_QWORD *)(v99 + 24);
            if ( v108 )
            {
              v135 = *(_DWORD *)(v108 + 4LL * (unsigned __int16)v107);
              if ( v135 )
              {
                if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v99 + 16), v135, 1) )
                  GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v99 + 16), v135, 1);
                *(_DWORD *)(*(_QWORD *)(v99 + 24) + 4LL * (unsigned __int16)v107) = 0;
                --*(_DWORD *)(v99 + 4);
              }
            }
            v109 = *(GdiHandleEntryDirectory **)(v99 + 16);
            v153 = 0LL;
            LODWORD(v151) = 0;
            if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v109, v107, &v153, (unsigned int *)&v151) )
            {
              GdiHandleEntryTable::ReleaseLockAndEntry(v153, (unsigned int)v151, 0);
              *(_BYTE *)v109 = 0;
            }
            *(_QWORD *)v106 = 0LL;
            --*(_DWORD *)(v99 + 4);
            KeLeaveCriticalRegion();
            GreReleaseHmgrSemaphore(v110);
            if ( (*((_BYTE *)this + 8) & 8) != 0 && *(_QWORD *)(*(_QWORD *)this + 128LL) )
            {
              v154 = *(_QWORD *)(*(_QWORD *)this + 128LL);
              XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v154);
              *(_QWORD *)(*(_QWORD *)this + 128LL) = 0LL;
            }
            if ( *((_DWORD *)this + 3) )
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
            v111 = *(__int64 **)this;
            v112 = *(unsigned __int16 *)(*(_QWORD *)this + 102LL);
            v113 = *(void **)(*(_QWORD *)this + 72LL);
            v114 = *(void **)(*(_QWORD *)this + 248LL);
            v115 = *(_OWORD *)(*(_QWORD *)this + 288LL);
            v150[0] = *(_OWORD *)(*(_QWORD *)this + 272LL);
            v116 = *((_OWORD *)v111 + 19);
            v150[1] = v115;
            v117 = *(_OWORD *)(v111 + 73);
            v150[2] = v116;
            v118 = *(_OWORD *)(v111 + 75);
            *(_OWORD *)Object = v117;
            v149 = v118;
            if ( (v112 & 8) != 0 )
            {
              if ( (v111[14] & 0x40000) != 0 && v113 )
              {
                if ( (v112 & 0x80u) == 0LL )
                {
                  EngFreeUserMem(v113);
                }
                else
                {
                  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                  if ( *(_QWORD *)(ThreadWin32Thread + 72) )
                  {
                    CurrentProcess = PsGetCurrentProcess(v137, v136, v138);
                    MmUnmapViewOfSection(CurrentProcess);
                    v141 = *(_QWORD *)(ThreadWin32Thread + 72);
                    v151 = 0LL;
                    if ( PsLookupProcessByProcessId((HANDLE)*(int *)(v141 + 8), &v151) >= 0 )
                    {
                      MmUnmapViewOfSection(v151);
                      ObfDereferenceObject(v151);
                    }
                  }
                  if ( !Object[0] )
                    KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
                  ObfDereferenceObject(Object[0]);
                }
              }
              goto LABEL_104;
            }
            if ( (v112 & 0x800) == 0 )
            {
              if ( (v112 & 0x10) != 0 )
                vFreeKernelSection(v113);
              goto LABEL_104;
            }
            v142 = *(_QWORD *)(SGDGetSessionState(v112) + 24);
            v143 = *(struct _KPROCESS **)(v142 + 104);
            v151 = v143;
            if ( v143 )
            {
              PsEnterPriorityRegion();
              ExEnterCriticalRegionAndAcquireResourceExclusive((PERESOURCE)v143);
            }
            v144 = *(_QWORD **)(*(_QWORD *)this + 264LL);
            if ( !v144 )
              goto LABEL_186;
            PsGetCurrentProcessWin32Process(v142);
            v145 = (_QWORD *)(*(_QWORD *)this + 528LL);
            v146 = (_QWORD *)*v145;
            if ( (_QWORD *)*v145 != v145 )
            {
              if ( (_QWORD *)v146[1] != v145 || (v147 = *(_QWORD **)(*(_QWORD *)this + 536LL), (_QWORD *)*v147 != v145) )
                __fastfail(3u);
              *v147 = v146;
              v146[1] = v147;
            }
            if ( v113 && v114 )
            {
              MmUnmapViewOfSection(*v144);
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)v150);
            }
            else
            {
LABEL_186:
              W32PIDLOCK::vCleanUp((W32PIDLOCK *)v150);
              if ( !v114 )
              {
LABEL_188:
                SEMOBJ::vUnlock((SEMOBJ *)&v151);
LABEL_104:
                v119 = *(_QWORD *)this;
                if ( *(_QWORD *)(*(_QWORD *)this + 680LL) )
                  ReleaseReferenceCountedObjectHandle(0LL);
                if ( *(_BYTE *)(v119 + 688) )
                {
                  v121 = *(void **)(v119 + 72);
                  if ( v121 )
                  {
                    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v121);
                    *(_QWORD *)(v119 + 72) = 0LL;
                  }
                }
                v120 = **(_QWORD **)(*(_QWORD *)(SGDGetSessionState(v112) + 24) + 6504LL);
                if ( v120 )
                {
                  memset((void *)v119, 0, 0x360uLL);
                  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v120 + 48), (PVOID)v119);
                }
                return;
              }
            }
            ObfDereferenceObject(v114);
            goto LABEL_188;
          }
          Process = 0LL;
          if ( v71 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
            CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v72);
            v75 = CurrentProcessWin32Process;
            if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
              v75 = 0LL;
          }
          else
          {
            if ( PsLookupProcessByProcessId((HANDLE)v71, &Process) < 0 )
            {
LABEL_78:
              if ( Process )
                ObfDereferenceObject(Process);
              goto LABEL_80;
            }
            ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
            v75 = ProcessWin32Process;
            if ( ProcessWin32Process && !*ProcessWin32Process )
              v75 = 0LL;
          }
          if ( v75 )
          {
            v77 = *(_QWORD *)(SGDGetSessionState(v74) + 24);
            v78 = *(struct _ERESOURCE **)(v77 + 1912);
            if ( v78 )
            {
              PsEnterPriorityRegion();
              ExEnterCriticalRegionAndAcquireResourceExclusive(v78);
            }
            v79 = *(_QWORD *)(v77 + 1912);
            v81 = *(_QWORD *)(SGDGetSessionState(v76) + 24);
            if ( *(_DWORD *)(v81 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pqz_EtwWriteTransfer(v81, v80, v82, v79, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
            --*((_DWORD *)v75 + 15);
            v83 = *(_QWORD *)(SGDGetSessionState(v81) + 24);
            v84 = *(_QWORD *)(v83 + 1912);
            v86 = *(_QWORD *)(SGDGetSessionState(v85) + 24);
            if ( *(_DWORD *)(v86 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
              McTemplateK0pz_EtwWriteTransfer(
                v86,
                (unsigned int)&LockRelease,
                v62,
                v84,
                (__int64)L"GreBaseGlobals.hsemHmgr");
            v87 = *(struct _ERESOURCE **)(v83 + 1912);
            if ( v87 )
            {
              ExReleaseResourceAndLeaveCriticalRegion(v87);
              PsLeavePriorityRegion();
            }
            v69 = (unsigned __int8 *)Object[0];
          }
          goto LABEL_78;
        }
        v44[15] |= 8u;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)Object);
      if ( LODWORD(Object[1]) )
        HANDLELOCK::vUnlock((HANDLELOCK *)Object);
      v123 = *(_QWORD *)(SGDGetSessionState(v122) + 24);
      v124 = *(_QWORD *)(v123 + 1912);
      v126 = *(_QWORD *)(SGDGetSessionState(v125) + 24);
      if ( *(_DWORD *)(v126 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v126,
          (unsigned int)&LockRelease,
          v127,
          v124,
          (__int64)L"GreBaseGlobals.hsemHmgr");
      v128 = *(struct _ERESOURCE **)(v123 + 1912);
      if ( v128 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v128);
        PsLeavePriorityRegion();
      }
    }
    else
    {
      GreReleaseHmgrSemaphore(v42);
    }
    *(_WORD *)(*(_QWORD *)this + 14LL) |= 0x4000u;
    if ( *((_DWORD *)this + 3) )
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
    HmgDecrementShareReferenceCountEx(*(int **)this, 0LL);
    return;
  }
  v4 = *(_DWORD *)v1;
  v5 = *(_DWORD *)v1;
  Process = 0LL;
  v6 = (unsigned __int16)v4 | (v5 >> 8) & 0xFF0000;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&Process);
  if ( (unsigned __int8)KeIsAttachedProcess() )
  {
    SGDGetUserSessionState(v8, v7, v9, v10);
    CurrentThreadProcess = PsGetCurrentThreadProcess();
    PsGetProcessSessionIdEx(CurrentThreadProcess);
  }
  LODWORD(Object[1]) = 1;
  v11 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  v12 = *(_QWORD *)(v11 + 8008);
  if ( v6 >= 0x10000 )
  {
    if ( *(_DWORD *)v12 > 0x10000u )
    {
      v11 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *(GdiHandleEntryDirectory **)(v12 + 16),
                                   (unsigned __int16)v6,
                                   1)
            + 13);
      if ( (_DWORD)v11 == HIWORD(v6) )
        v6 = (unsigned __int16)v6;
    }
    else
    {
      v6 = (unsigned __int16)v6;
    }
  }
  v13 = *(_QWORD *)(v12 + 16);
  v14 = *(_DWORD *)(v13 + 2056);
  if ( v6 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
    goto LABEL_34;
  if ( v6 >= v14 )
  {
    v11 = ((v6 - v14) >> 16) + 1;
    v15 = *(_QWORD *)(v13 + 8 * v11 + 8);
    v6 += -65536 * ((v6 - v14) >> 16) - v14;
  }
  else
  {
    v15 = *(_QWORD *)(v13 + 8);
  }
  v16 = 0LL;
  if ( v6 < *(_DWORD *)(v15 + 20) )
  {
    v17 = 16LL * (unsigned __int8)v6;
    v18 = *(_QWORD **)(v15 + 24);
    v153 = (struct GdiHandleEntryTable *)(8 * ((unsigned __int64)v6 >> 8));
    v151 = (PEPROCESS)(v17 + *(_QWORD *)((char *)v153 + *v18));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v151, 0LL);
    if ( v6 < *(_DWORD *)(v15 + 20) && *(_QWORD *)(*(_QWORD *)((char *)v153 + **(_QWORD **)(v15 + 24)) + v17 + 8) )
    {
      v11 = 24LL * v6;
      *(_DWORD *)(v11 + *(_QWORD *)v15 + 8) |= 1u;
      v16 = (_BYTE *)(v11 + *(_QWORD *)v15);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v151, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  Object[0] = v16;
  if ( !v16 )
    goto LABEL_34;
  _m_prefetchw(v16 + 8);
  v19 = (v16[15] & 0x20) == 0;
  HIDWORD(Object[1]) = *((_DWORD *)v16 + 2);
  if ( v19 )
  {
LABEL_17:
    v20 = v16[14];
    if ( v20 == 5 )
    {
      v21 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v1[85];
      v11 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
      if ( v21 )
      {
        v11 = *(_QWORD *)(v11 + 8040);
        if ( v11 )
          NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(
            (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)v11,
            v21,
            0);
      }
    }
    else if ( v20 == 16 )
    {
      TrackObjectReferenceDecrement(
        2LL,
        (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)v1[17]);
    }
    --*((_DWORD *)v1 + 2);
    v22 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
    v23 = *(_QWORD *)(v22 + 8008);
    v24 = SGDGetSessionState(v22);
    v25 = *(_DWORD *)v16 & 0xFFFFFF;
    v26 = *(_QWORD *)(*(_QWORD *)(v24 + 24) + 8008LL);
    if ( v25 >= 0x10000 )
    {
      if ( *(_DWORD *)v26 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v26 + 16),
                                    *(unsigned __int16 *)v16,
                                    1)
             + 13) == HIWORD(v25) )
          v25 = (unsigned __int16)v25;
      }
      else
      {
        v25 = *(unsigned __int16 *)v16;
      }
    }
    v27 = *(_QWORD *)(v26 + 16);
    v28 = *(_DWORD *)(v27 + 2056);
    if ( v25 < v28 + ((*(unsigned __int16 *)(v27 + 2) + 0xFFFF) << 16) )
    {
      if ( v25 >= v28 )
      {
        v29 = *(_QWORD *)(v27 + 8LL * (((v25 - v28) >> 16) + 1) + 8);
        v25 += -65536 * ((v25 - v28) >> 16) - v28;
      }
      else
      {
        v29 = *(_QWORD *)(v27 + 8);
      }
      if ( v25 < *(_DWORD *)(v29 + 20) )
        v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v29 + 24) + 8 * ((unsigned __int64)v25 >> 8))
                        + 16LL * (unsigned __int8)v25
                        + 8);
    }
    v30 = (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000;
    if ( v30 >= 0x10000 )
    {
      if ( *(_DWORD *)v23 > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *(GdiHandleEntryDirectory **)(v23 + 16),
                                    (unsigned __int16)*v3,
                                    1)
             + 13) == HIWORD(v30) )
          v30 = (unsigned __int16)v30;
      }
      else
      {
        v30 = (unsigned __int16)*v3;
      }
    }
    v31 = *(_QWORD *)(v23 + 16);
    v32 = *(_DWORD *)(v31 + 2056);
    if ( v30 < v32 + ((*(unsigned __int16 *)(v31 + 2) + 0xFFFF) << 16) )
    {
      if ( v30 >= v32 )
      {
        v33 = *(_QWORD *)(v31 + 8LL * (((v30 - v32) >> 16) + 1) + 8);
        v30 += -65536 * ((v30 - v32) >> 16) - v32;
      }
      else
      {
        v33 = *(_QWORD *)(v31 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v33 + 24LL * v30 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v30 >> 8)) + 16LL * (unsigned __int8)v30,
        0LL);
      KeLeaveCriticalRegion();
    }
LABEL_34:
    KeLeaveCriticalRegion();
    return;
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)Object);
  if ( LODWORD(Object[1]) )
  {
    v16 = Object[0];
    goto LABEL_17;
  }
}
