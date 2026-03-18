/*
 * XREFs of ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00381D0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00483E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0049F04 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00D1688 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00D33D8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0154130 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C0041730 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0043870 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00439B0 (-AcquireEntryLock@GdiHandleEntryTable@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C0044240 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0044340 (IsThreadCrossSessionAttached.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0047C58 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFA8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BBC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

__int64 __fastcall HmgRemoveObjectImpl(struct HOBJ__ *a1, unsigned int a2, int a3, char a4, char a5, unsigned int *a6)
{
  unsigned int v7; // r15d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct _ERESOURCE *v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r13d
  __int64 v16; // r12
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rdi
  __int64 v18; // rcx
  GdiHandleEntryDirectory **v19; // rdi
  unsigned int v20; // eax
  GdiHandleEntryDirectory *v21; // rcx
  struct _ENTRY *v22; // rax
  struct _ENTRY *v23; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v25; // edx
  char v26; // al
  __int64 v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  unsigned int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r13
  unsigned int v35; // eax
  _QWORD *v36; // rbx
  unsigned int v37; // edx
  unsigned int v38; // eax
  __int64 v39; // r14
  unsigned int v40; // r10d
  unsigned int v41; // edi
  __int64 v42; // r8
  __int64 v43; // rbx
  unsigned int v44; // eax
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rdx
  __int64 v48; // rdx
  char v49; // al
  int v50; // ebx
  unsigned int v51; // r14d
  __int64 v52; // rcx
  __int64 v53; // rdi
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 *v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rbx
  unsigned int v64; // eax
  __int64 v65; // r8
  unsigned __int64 v66; // rdx
  unsigned int v67; // r9d
  __int64 v68; // r8
  _DWORD *v69; // r14
  unsigned int v70; // ebx
  __int64 v71; // r8
  GdiHandleEntryDirectory *v72; // rcx
  __int64 v73; // rsi
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // r9
  _QWORD **v77; // r11
  unsigned __int64 v78; // r10
  __int64 v79; // rbx
  __int64 v80; // rdi
  __int64 v81; // rcx
  __int64 v82; // rcx
  int v83; // r8d
  struct _ERESOURCE *v84; // rcx
  __int64 v86; // rcx
  unsigned __int64 W32ProcessFromId; // rdi
  __int64 v88; // rcx
  struct OBJECT *v89; // rax
  unsigned int v90; // ebx
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v91; // rdx
  __int64 v92; // rcx
  _DWORD *v93; // rax
  int v94; // r8d
  unsigned int v95; // esi
  __int64 v96; // [rsp+48h] [rbp-29h] BYREF
  __int64 v97; // [rsp+50h] [rbp-21h]
  struct _ENTRY *v98; // [rsp+58h] [rbp-19h] BYREF
  int v99; // [rsp+60h] [rbp-11h]
  int v100; // [rsp+64h] [rbp-Dh]
  PVOID Object; // [rsp+C8h] [rbp+57h] BYREF
  unsigned int v102; // [rsp+D0h] [rbp+5Fh]
  int v103; // [rsp+D8h] [rbp+67h]
  unsigned int EtwGdiHandleType; // [rsp+E0h] [rbp+6Fh] BYREF

  v103 = a3;
  v102 = a2;
  v7 = (unsigned int)a1;
  SGDGetSessionState(a1);
  v10 = *(_QWORD *)(SGDGetSessionState(v8) + 24);
  v11 = *(struct _ERESOURCE **)(v10 + 1912);
  if ( v11 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v11);
  }
  v12 = *(_QWORD *)(v10 + 1912);
  v13 = *(_QWORD *)(SGDGetSessionState(v9) + 24);
  if ( *(_DWORD *)(v13 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v13,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v14,
      v12,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  if ( (a4 & 2) != 0 )
  {
    v16 = 0LL;
    v15 = 0;
  }
  else
  {
    v15 = 1;
    v16 = 0LL;
  }
  v96 = 0LL;
  CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v96);
  if ( !IsThreadCrossSessionAttached()
    && CurrentThreadWin32ThreadAndEnterCriticalRegion
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v97 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v97 = 0LL;
  }
  v99 = 1;
  v19 = *(GdiHandleEntryDirectory ***)(*(_QWORD *)(SGDGetSessionState(v18) + 24) + 8008LL);
  v20 = GdiHandleManager::DecodeIndex(v19, (unsigned __int16)v7 | (v7 >> 8) & 0xFF0000);
  v21 = v19[2];
  Object = 0LL;
  EtwGdiHandleType = 0;
  if ( !GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(
          v21,
          v20,
          (struct GdiHandleEntryTable **)&Object,
          &EtwGdiHandleType) )
  {
    v98 = 0LL;
    goto LABEL_86;
  }
  v22 = GdiHandleEntryTable::AcquireEntryLock((GdiHandleEntryTable *)Object, EtwGdiHandleType, 0);
  v98 = v22;
  v23 = v22;
  if ( !v22 )
  {
LABEL_86:
    v99 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_70;
  }
  _m_prefetchw((char *)v22 + 8);
  CurrentThread = (struct _KTHREAD *)*((unsigned int *)v22 + 2);
  v100 = *((_DWORD *)v22 + 2);
  if ( v15 )
  {
    v25 = (unsigned int)CurrentThread & 0xFFFFFFFE;
    if ( (((unsigned int)CurrentThread ^ v96 & 0xFFFFFFFD) & 0xFFFFFFFE) != 0
      && v25
      && (!v97 || v25 != *(_DWORD *)(v97 + 8)) )
    {
      goto LABEL_88;
    }
  }
  v26 = *((_BYTE *)v22 + 15);
  if ( (v26 & 0x20) != 0 )
    goto LABEL_88;
  if ( (v26 & 0x40) == 0 )
    goto LABEL_17;
  v89 = HANDLELOCK::pObj((HANDLELOCK *)&v98);
  if ( !*((_WORD *)v89 + 6) || (CurrentThread = KeGetCurrentThread(), *((struct _KTHREAD **)v89 + 2) != CurrentThread) )
  {
LABEL_88:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v98);
    if ( !v99 )
      goto LABEL_70;
  }
  v23 = v98;
LABEL_17:
  v27 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(CurrentThread) + 24) + 8008LL);
  v28 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v27, *(_DWORD *)v23 & 0xFFFFFF);
  v29 = *(_QWORD *)(v27 + 16);
  v30 = v28;
  v31 = *(_DWORD *)(v29 + 2056);
  v32 = v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16);
  if ( v28 >= (unsigned int)v32
    || (v28 >= v31
      ? (v32 = ((v28 - v31) >> 16) + 1,
         v33 = *(_QWORD *)(v29 + 8 * v32 + 8),
         v30 = -65536 * ((v28 - v31) >> 16) - v31 + v28)
      : (v33 = *(_QWORD *)(v29 + 8)),
        (unsigned int)v30 >= *(_DWORD *)(v33 + 20)) )
  {
    v34 = 0LL;
  }
  else
  {
    v32 = 2LL * (unsigned __int8)v30;
    v34 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * (v30 >> 8)) + 16LL * (unsigned __int8)v30 + 8);
  }
  if ( (a4 & 2) == 0
    || (v90 = *((_DWORD *)v23 + 2) & 0xFFFFFFFE, v90 == -2147483630)
    || v90 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)
    || !v90 )
  {
    if ( *((_BYTE *)v23 + 14) == a5 && *((_WORD *)v23 + 6) == HIWORD(v7) )
    {
      if ( (a4 & 4) != 0 || (v35 = *(_DWORD *)(v34 + 8), v32 = v102, v35 == v103) && *(_WORD *)(v34 + 12) == (_WORD)v102 )
      {
        if ( (a4 & 1) != 0 || (*((_BYTE *)v23 + 15) & 1) == 0 )
        {
          v36 = *(_QWORD **)(*(_QWORD *)(SGDGetSessionState(v32) + 24) + 8008LL);
          v37 = (unsigned __int16)*(_DWORD *)v34 | (*(_DWORD *)v34 >> 8) & 0xFF0000;
          Object = v36;
          v38 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v36, v37);
          v39 = v36[2];
          v40 = v38;
          v41 = *(_DWORD *)(v39 + 2056);
          EtwGdiHandleType = v41 + ((*(unsigned __int16 *)(v39 + 2) + 0xFFFF) << 16);
          if ( v38 >= EtwGdiHandleType )
          {
            v43 = 0LL;
          }
          else
          {
            if ( v38 >= v41 )
            {
              v42 = *(_QWORD *)(v39 + 8LL * (((v38 - v41) >> 16) + 1) + 8);
              v38 += -65536 * ((v38 - v41) >> 16) - v41;
            }
            else
            {
              v42 = *(_QWORD *)(v39 + 8);
            }
            v43 = 0LL;
            if ( v38 < *(_DWORD *)(v42 + 20)
              && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v42 + 24) + 8 * ((unsigned __int64)v38 >> 8))
                           + 16LL * (unsigned __int8)v38
                           + 8) )
            {
              v43 = *(_QWORD *)v42 + 24LL * v38;
            }
          }
          v44 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)Object, v40);
          v47 = v44;
          if ( v44 >= EtwGdiHandleType
            || (v44 >= v41
              ? (v45 = *(_QWORD *)(v39 + 8LL * (((v44 - v41) >> 16) + 1) + 8),
                 v47 = -65536 * ((v44 - v41) >> 16) - v41 + v44)
              : (v45 = *(_QWORD *)(v39 + 8)),
                (unsigned int)v47 >= *(_DWORD *)(v45 + 20)) )
          {
            v48 = 0LL;
          }
          else
          {
            v48 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8 * (v47 >> 8)) + 16LL * (unsigned __int8)v47 + 8);
          }
          if ( v48 != v34 )
            v43 = 0LL;
          v49 = *(_BYTE *)(v43 + 14);
          if ( v49 == 5 )
          {
            v91 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v34 + 680);
            v92 = 0LL;
          }
          else
          {
            if ( v49 != 16 )
            {
LABEL_45:
              v50 = *((_DWORD *)v23 + 2);
              v51 = v50 & 0xFFFFFFFE;
              if ( (v50 & 0xFFFFFFFE) != 0 && v51 != -2147483630 )
              {
                Object = 0LL;
                W32ProcessFromId = GetW32ProcessFromId(v51, (struct _EPROCESS **)&Object);
                if ( W32ProcessFromId )
                {
                  GreAcquireHmgrSemaphore(v86);
                  --*(_DWORD *)(W32ProcessFromId + 60);
                  GreReleaseHmgrSemaphore(v88);
                }
                if ( Object )
                  ObfDereferenceObject(Object);
              }
              EtwGdiHandleType = GetEtwGdiHandleType(*((unsigned __int8 *)v23 + 14), v48, v45, v46);
              v53 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v52) + 24) + 8008LL);
              v54 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v53, *(_DWORD *)v23 & 0xFFFFFF);
              v55 = *(_QWORD *)(v53 + 16);
              v56 = v54;
              v57 = *(unsigned int *)(v55 + 2056);
              v58 = (unsigned int)v57 + ((*(unsigned __int16 *)(v55 + 2) + 0xFFFF) << 16);
              if ( v54 >= (unsigned int)v58
                || (v54 >= (unsigned int)v57
                  ? (v58 = ((v54 - (unsigned int)v57) >> 16) + 1,
                     v55 = *(_QWORD *)(v55 + 8 * v58 + 8),
                     v56 = -65536 * ((v54 - (unsigned int)v57) >> 16) - (_DWORD)v57 + v54)
                  : (v55 = *(_QWORD *)(v55 + 8)),
                    (unsigned int)v56 >= *(_DWORD *)(v55 + 20)) )
              {
                v59 = 0LL;
              }
              else
              {
                v58 = 2LL * (unsigned __int8)v56;
                v59 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v55 + 24) + 8 * (v56 >> 8))
                                  + 16LL * (unsigned __int8)v56
                                  + 8);
              }
              v60 = *v59;
              if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
              {
                v93 = (_DWORD *)SGDGetUserSessionState(v58, v59, v55, v57);
                McTemplateK0pqqq_EtwWriteTransfer(
                  *v93,
                  (unsigned int)&GdiDestroyHandle,
                  v94,
                  v60,
                  EtwGdiHandleType,
                  *v93,
                  v51);
              }
              *((_BYTE *)v23 + 14) = 0;
              *((_QWORD *)v23 + 2) = 0LL;
              *((_DWORD *)v23 + 2) = v50 & 1;
              v61 = *(_QWORD *)(SGDGetSessionState(v58) + 24);
              v62 = *(_QWORD *)(v61 + 8008);
              v63 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v61) + 24) + 8008LL);
              v64 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v63, *(_DWORD *)v23 & 0xFFFFFF);
              v65 = *(_QWORD *)(v63 + 16);
              v66 = v64;
              v67 = *(_DWORD *)(v65 + 2056);
              if ( v64 >= v67 + ((*(unsigned __int16 *)(v65 + 2) + 0xFFFF) << 16)
                || (v64 >= v67
                  ? (v68 = *(_QWORD *)(v65 + 8LL * (((v64 - v67) >> 16) + 1) + 8),
                     v66 = -65536 * ((v64 - v67) >> 16) - v67 + v64)
                  : (v68 = *(_QWORD *)(v65 + 8)),
                    (unsigned int)v66 >= *(_DWORD *)(v68 + 20)) )
              {
                v69 = 0LL;
              }
              else
              {
                v69 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v68 + 24) + 8 * (v66 >> 8))
                                 + 16LL * (unsigned __int8)v66
                                 + 8);
              }
              v70 = (unsigned __int16)*v69 | (*v69 >> 8) & 0xFF0000;
              if ( v70 >= 0x10000 )
              {
                if ( *(_DWORD *)v62 > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *(GdiHandleEntryDirectory **)(v62 + 16),
                                              (unsigned __int16)*v69,
                                              1)
                       + 13) == HIWORD(v70) )
                    v70 = (unsigned __int16)v70;
                }
                else
                {
                  v70 = (unsigned __int16)*v69;
                }
              }
              v71 = *(_QWORD *)(v62 + 24);
              v72 = *(GdiHandleEntryDirectory **)(v62 + 16);
              if ( v71 )
              {
                v95 = *(_DWORD *)(v71 + 4LL * (unsigned __int16)v70);
                Object = (PVOID)(4LL * (unsigned __int16)v70);
                if ( v95 )
                {
                  if ( GdiHandleEntryDirectory::AcquireEntryLock(v72, v95, 1) )
                    GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v62 + 16), v95, 1);
                  *(_DWORD *)((char *)Object + *(_QWORD *)(v62 + 24)) = 0;
                  --*(_DWORD *)(v62 + 4);
                }
              }
              v73 = *(_QWORD *)(v62 + 16);
              v74 = *(_DWORD *)(v73 + 2056);
              if ( v70 >= v74 + ((*(unsigned __int16 *)(v73 + 2) + 0xFFFF) << 16) )
                goto LABEL_69;
              if ( v70 >= v74 )
              {
                v76 = *(_QWORD *)(v73 + 8LL * (((v70 - v74) >> 16) + 1) + 8);
                v70 += -65536 * ((v70 - v74) >> 16) - v74;
                v75 = v76;
              }
              else
              {
                v75 = *(_QWORD *)(v73 + 8);
                v76 = v75;
              }
              if ( v70 >= *(_DWORD *)(v76 + 20) )
              {
                v77 = (_QWORD **)(v75 + 24);
              }
              else
              {
                v77 = (_QWORD **)(v76 + 24);
                if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v76 + 24) + 8 * ((unsigned __int64)v70 >> 8))
                               + 16LL * (unsigned __int8)v70
                               + 8) )
                {
                  v78 = (unsigned __int64)v70 >> 8;
                  *(_QWORD *)(*(_QWORD *)(**v77 + 8 * v78) + 16LL * (unsigned __int8)v70 + 8) = 0LL;
                  *(_QWORD *)(*(_QWORD *)v76 + 24LL * v70) = *(unsigned int *)(v76 + 12);
                  --*(_DWORD *)(v76 + 16);
                  *(_DWORD *)(v76 + 12) = v70;
LABEL_68:
                  ExReleasePushLockExclusiveEx(*(_QWORD *)(**v77 + 8 * v78) + 16LL * (unsigned __int8)v70, 0LL);
                  KeLeaveCriticalRegion();
                  *(_BYTE *)v73 = 0;
LABEL_69:
                  *(_QWORD *)v69 = 0LL;
                  --*(_DWORD *)(v62 + 4);
                  v99 = 0;
                  v98 = 0LL;
                  KeLeaveCriticalRegion();
                  v16 = v34;
                  goto LABEL_70;
                }
              }
              v78 = (unsigned __int64)v70 >> 8;
              goto LABEL_68;
            }
            v91 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v34 + 136);
            v92 = 2LL;
          }
          TrackObjectReferenceDecrement(v92, v91);
          goto LABEL_45;
        }
      }
      else
      {
        *((_BYTE *)v23 + 15) |= 8u;
        if ( a6 )
          *a6 = v35;
      }
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v98);
LABEL_70:
  if ( v99 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v98);
  v79 = *(_QWORD *)(SGDGetSessionState(CurrentThread) + 24);
  v80 = *(_QWORD *)(v79 + 1912);
  v82 = *(_QWORD *)(SGDGetSessionState(v81) + 24);
  if ( *(_DWORD *)(v82 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v82, (unsigned int)&LockRelease, v83, v80, (__int64)L"GreBaseGlobals.hsemHmgr");
  v84 = *(struct _ERESOURCE **)(v79 + 1912);
  if ( v84 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v84);
    PsLeavePriorityRegion();
  }
  return v16;
}
