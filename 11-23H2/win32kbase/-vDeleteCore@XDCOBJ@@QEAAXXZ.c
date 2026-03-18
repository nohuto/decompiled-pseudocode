/*
 * XREFs of ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x1C0088250
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C0044560 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0043870 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0044030 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0046EB0 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z @ 0x1C0047C58 (-ReleaseLockAndEntry@GdiHandleEntryDirectory@@QEAAXI_N@Z.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C00892E0 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00946EC (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00DFA8C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0151B34 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0151BBC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0152140 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C016BBC8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C016BC80 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsPFTOBJ_bUnloadWorkhorseSupported @ 0x1C02326D8 (IsPFTOBJ_bUnloadWorkhorseSupported.c)
 */

void __fastcall XDCOBJ::vDeleteCore(__int64 **this)
{
  __int64 v2; // rbx
  __int64 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rax
  __int64 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rbx
  volatile signed __int32 *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rbx
  struct HPATH__ *v16; // rdx
  _QWORD *v17; // rbx
  __int64 *v18; // rdx
  __int16 *v19; // rbp
  unsigned __int8 v20; // r15
  __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  struct _ERESOURCE *v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rax
  _DWORD *v32; // r12
  __int64 v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned __int64 v36; // rdx
  unsigned int v37; // r9d
  __int64 v38; // r8
  int v39; // ebx
  signed int v40; // r14d
  __int64 v41; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r13
  struct _ERESOURCE *v48; // r15
  __int64 v49; // r15
  int v50; // edx
  __int64 v51; // rcx
  int v52; // r8d
  __int64 v53; // rsi
  __int64 v54; // r15
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // r8d
  struct _ERESOURCE *v58; // rcx
  char EtwGdiHandleType; // r15
  __int64 v60; // rcx
  __int64 v61; // rsi
  unsigned int v62; // eax
  __int64 v63; // r8
  unsigned __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // rcx
  unsigned __int8 v67; // cl
  __int64 *v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // rsi
  __int64 v72; // rbx
  unsigned int v73; // eax
  __int64 v74; // r8
  unsigned __int64 v75; // rdx
  unsigned int v76; // r9d
  __int64 v77; // r8
  _DWORD *v78; // r15
  int v79; // eax
  unsigned int v80; // ebx
  __int64 v81; // r8
  __int64 v82; // r14
  unsigned int v83; // edx
  __int64 v84; // r8
  _QWORD *v85; // r12
  _QWORD **v86; // r11
  unsigned __int64 v87; // r10
  __int64 v88; // rbx
  __int64 v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // r8d
  struct _ERESOURCE *v93; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v94; // rcx
  __int64 v95; // rax
  _QWORD *v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rbp
  struct _ERESOURCE *v100; // r14
  __int64 v101; // rbp
  __int64 v102; // r14
  __int64 v103; // r9
  _QWORD *ProcessWin32Process; // rax
  _DWORD *v105; // rax
  int v106; // r8d
  unsigned int v107; // r14d
  _DWORD *v108; // [rsp+40h] [rbp-E8h] BYREF
  int v109; // [rsp+48h] [rbp-E0h]
  _QWORD v110[3]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v111[8]; // [rsp+70h] [rbp-B8h] BYREF
  int *v112; // [rsp+78h] [rbp-B0h]
  unsigned __int8 v113; // [rsp+130h] [rbp+8h]
  __int64 v114; // [rsp+138h] [rbp+10h] BYREF
  PEPROCESS Process; // [rsp+140h] [rbp+18h] BYREF

  v2 = (*this)[220];
  v114 = 0LL;
  if ( qword_1C0294C38 && (int)qword_1C0294C38() >= 0 && qword_1C0294C40 )
    qword_1C0294C40(&v114, v2);
  v3 = *this;
  v4 = (volatile signed __int32 *)(*this)[154];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v4, 1LL);
    v3[154] = 0LL;
  }
  v5 = v3[151];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v5 - 16, 0LL);
    v3[151] = 0LL;
  }
  v6 = *this;
  v7 = (volatile signed __int32 *)(*this)[171];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v7, 1LL);
    v6[171] = 0LL;
  }
  v8 = v6[168];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v8 - 16, 0LL);
    v6[168] = 0LL;
  }
  v9 = *this;
  v10 = (volatile signed __int32 *)(*this)[188];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v10, 1LL);
    v9[188] = 0LL;
  }
  v11 = v9[185];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v11 - 16, 0LL);
    v9[185] = 0LL;
  }
  v12 = *this;
  v13 = (volatile signed __int32 *)(*this)[205];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v13, 1LL);
    v12[205] = 0LL;
  }
  v14 = v12[202];
  if ( v14 )
  {
    v13 = (volatile signed __int32 *)(v14 - 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 - 16), 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v13, 0LL);
    v12[202] = 0LL;
  }
  v15 = *this;
  v16 = (struct HPATH__ *)(*this)[25];
  if ( v16 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v111, v16);
    if ( v112 && (v112[21] & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v112, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v111);
    v15[25] = 0LL;
  }
  if ( qword_1C0294C48 && (int)qword_1C0294C48() >= 0 && qword_1C0294C50 )
    qword_1C0294C50(this);
  v17 = (_QWORD *)(*this)[259];
  while ( v17 )
  {
    v96 = v17;
    v17 = (_QWORD *)v17[1];
    v99 = *(_QWORD *)(SGDGetSessionState(v13) + 24);
    v100 = *(struct _ERESOURCE **)(v99 + 48);
    if ( v100 )
    {
      PsEnterPriorityRegion(v98, v97);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v100);
    }
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemPublicPFT", *(_QWORD *)(v99 + 48), 14);
    v101 = *(_QWORD *)(v99 + 6368);
    v102 = *(_QWORD *)(*v96 + 128LL);
    v110[0] = v102;
    --*(_DWORD *)(*v96 + 64LL);
    if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 && qword_1C0294C00 )
    {
      v103 = 64LL;
      if ( v102 != v101 )
        v103 = 32LL;
      qword_1C0294C00(v110, *v96, 0LL, v103);
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v96);
  }
  v18 = (__int64 *)(*this)[37];
  if ( v18 && v18 != *this + 33 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v18);
    (*this)[37] = 0LL;
  }
  v19 = 0LL;
  v20 = 0;
  v21 = **this;
  SGDGetSessionState(v13);
  v25 = *(_QWORD *)(SGDGetSessionState(v22) + 24);
  v26 = *(struct _ERESOURCE **)(v25 + 1912);
  if ( v26 )
  {
    PsEnterPriorityRegion(v24, v23);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v26);
  }
  v27 = *(_QWORD *)(v25 + 1912);
  v28 = *(_QWORD *)(SGDGetSessionState(v24) + 24);
  if ( *(_DWORD *)(v28 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(
      v28,
      (unsigned int)L"GreBaseGlobals.hsemHmgr",
      v29,
      v27,
      17,
      (__int64)L"GreBaseGlobals.hsemHmgr");
  v108 = 0LL;
  v109 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v108, (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v109 )
  {
    v31 = SGDGetSessionState(v30);
    v32 = v108;
    v33 = *(_QWORD *)(*(_QWORD *)(v31 + 24) + 8008LL);
    v34 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v33, *v108 & 0xFFFFFF);
    v35 = *(_QWORD *)(v33 + 16);
    v36 = v34;
    v37 = *(_DWORD *)(v35 + 2056);
    if ( v34 < v37 + ((*(unsigned __int16 *)(v35 + 2) + 0xFFFF) << 16) )
    {
      if ( v34 >= v37 )
      {
        v38 = *(_QWORD *)(v35 + 8LL * (((v34 - v37) >> 16) + 1) + 8);
        v36 = -65536 * ((v34 - v37) >> 16) - v37 + v34;
      }
      else
      {
        v38 = *(_QWORD *)(v35 + 8);
      }
      if ( (unsigned int)v36 < *(_DWORD *)(v38 + 20) )
        v19 = *(__int16 **)(*(_QWORD *)(**(_QWORD **)(v38 + 24) + 8 * (v36 >> 8)) + 16LL * (unsigned __int8)v36 + 8);
    }
    v39 = v32[2];
    v113 = *((_BYTE *)v32 + 14);
    v40 = v39 & 0xFFFFFFFE;
    if ( (v39 & 0xFFFFFFFE) == 0 || v40 == -2147483630 )
    {
LABEL_44:
      EtwGdiHandleType = GetEtwGdiHandleType(*((_BYTE *)v32 + 14));
      v61 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v60) + 24) + 8008LL);
      v62 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v61, *v32 & 0xFFFFFF);
      v63 = *(_QWORD *)(v61 + 16);
      v64 = v62;
      v65 = *(unsigned int *)(v63 + 2056);
      v66 = (unsigned int)v65 + ((*(unsigned __int16 *)(v63 + 2) + 0xFFFF) << 16);
      if ( v62 >= (unsigned int)v66
        || (v62 >= (unsigned int)v65
          ? (v66 = ((v62 - (unsigned int)v65) >> 16) + 1,
             v63 = *(_QWORD *)(v63 + 8 * v66 + 8),
             v64 = -65536 * ((v62 - (unsigned int)v65) >> 16) - (_DWORD)v65 + v62)
          : (v63 = *(_QWORD *)(v63 + 8)),
            (unsigned int)v64 >= *(_DWORD *)(v63 + 20)) )
      {
        v68 = 0LL;
      }
      else
      {
        v67 = v64;
        v64 >>= 8;
        v66 = 2LL * v67;
        v68 = *(__int64 **)(*(_QWORD *)(**(_QWORD **)(v63 + 24) + 8 * v64) + 8 * v66 + 8);
      }
      v69 = *v68;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
      {
        v105 = (_DWORD *)SGDGetUserSessionState(v66, v64, v63, v65);
        McTemplateK0pqqq_EtwWriteTransfer(
          *v105,
          (unsigned int)&GdiDestroyHandle,
          v106,
          v69,
          EtwGdiHandleType,
          *v105,
          v40);
      }
      *((_BYTE *)v32 + 14) = 0;
      *((_QWORD *)v32 + 2) = 0LL;
      v32[2] = v39 & 1;
      v70 = *(_QWORD *)(SGDGetSessionState(v66) + 24);
      v71 = *(_QWORD *)(v70 + 8008);
      v72 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v70) + 24) + 8008LL);
      v73 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v72, *v32 & 0xFFFFFF);
      v74 = *(_QWORD *)(v72 + 16);
      v75 = v73;
      v76 = *(_DWORD *)(v74 + 2056);
      if ( v73 >= v76 + ((*(unsigned __int16 *)(v74 + 2) + 0xFFFF) << 16)
        || (v73 >= v76
          ? (v77 = *(_QWORD *)(v74 + 8LL * (((v73 - v76) >> 16) + 1) + 8), v75 = -65536 * ((v73 - v76) >> 16)
                                                                               - v76
                                                                               + v73)
          : (v77 = *(_QWORD *)(v74 + 8)),
            (unsigned int)v75 >= *(_DWORD *)(v77 + 20)) )
      {
        v78 = 0LL;
      }
      else
      {
        v78 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v77 + 24) + 8 * (v75 >> 8)) + 16LL * (unsigned __int8)v75 + 8);
      }
      v79 = (unsigned __int16)*v78;
      v80 = v79 | (*v78 >> 8) & 0xFF0000;
      if ( v80 >= 0x10000 )
      {
        if ( *(_DWORD *)v71 > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *(GdiHandleEntryDirectory **)(v71 + 16),
                                      (unsigned __int16)v79,
                                      1)
               + 13) == HIWORD(v80) )
            v80 = (unsigned __int16)v80;
        }
        else
        {
          v80 = (unsigned __int16)v79;
        }
      }
      v81 = *(_QWORD *)(v71 + 24);
      if ( v81 )
      {
        v107 = *(_DWORD *)(v81 + 4LL * (unsigned __int16)v80);
        if ( v107 )
        {
          if ( GdiHandleEntryDirectory::AcquireEntryLock(*(GdiHandleEntryDirectory **)(v71 + 16), v107, 1) )
            GdiHandleEntryDirectory::ReleaseLockAndEntry(*(GdiHandleEntryDirectory **)(v71 + 16), v107, 1);
          *(_DWORD *)(4LL * (unsigned __int16)v80 + *(_QWORD *)(v71 + 24)) = 0;
          --*(_DWORD *)(v71 + 4);
        }
      }
      v82 = *(_QWORD *)(v71 + 16);
      v83 = *(_DWORD *)(v82 + 2056);
      if ( v80 >= v83 + ((*(unsigned __int16 *)(v82 + 2) + 0xFFFF) << 16) )
        goto LABEL_67;
      if ( v80 >= v83 )
      {
        v84 = *(_QWORD *)(v82 + 8LL * (((v80 - v83) >> 16) + 1) + 8);
        v80 += -65536 * ((v80 - v83) >> 16) - v83;
      }
      else
      {
        v84 = *(_QWORD *)(v82 + 8);
      }
      if ( v80 >= *(_DWORD *)(v84 + 20) )
      {
        v86 = (_QWORD **)(v84 + 24);
      }
      else
      {
        v85 = *(_QWORD **)(v84 + 24);
        v86 = (_QWORD **)(v84 + 24);
        if ( *(_QWORD *)(*(_QWORD *)(*v85 + 8 * ((unsigned __int64)v80 >> 8)) + 16LL * (unsigned __int8)v80 + 8) )
        {
          v87 = (unsigned __int64)v80 >> 8;
          *(_QWORD *)(*(_QWORD *)(*v85 + 8 * v87) + 16LL * (unsigned __int8)v80 + 8) = 0LL;
          *(_QWORD *)(*(_QWORD *)v84 + 24LL * v80) = *(unsigned int *)(v84 + 12);
          --*(_DWORD *)(v84 + 16);
          *(_DWORD *)(v84 + 12) = v80;
LABEL_66:
          ExReleasePushLockExclusiveEx(*(_QWORD *)(**v86 + 8 * v87) + 16LL * (unsigned __int8)v80, 0LL);
          KeLeaveCriticalRegion();
          *(_BYTE *)v82 = 0;
LABEL_67:
          *(_QWORD *)v78 = 0LL;
          --*(_DWORD *)(v71 + 4);
          KeLeaveCriticalRegion();
          v20 = v113;
          goto LABEL_68;
        }
      }
      v87 = (unsigned __int64)v80 >> 8;
      goto LABEL_66;
    }
    Process = 0LL;
    if ( v40 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
    {
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v41);
      v44 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
        v44 = 0LL;
    }
    else
    {
      if ( PsLookupProcessByProcessId((HANDLE)v40, &Process) < 0 )
      {
LABEL_42:
        if ( Process )
          ObfDereferenceObject(Process);
        goto LABEL_44;
      }
      ProcessWin32Process = (_QWORD *)PsGetProcessWin32Process(Process);
      v44 = ProcessWin32Process;
      if ( ProcessWin32Process && !*ProcessWin32Process )
        v44 = 0LL;
    }
    if ( v44 )
    {
      v47 = *(_QWORD *)(SGDGetSessionState(v43) + 24);
      v48 = *(struct _ERESOURCE **)(v47 + 1912);
      if ( v48 )
      {
        PsEnterPriorityRegion(v46, v45);
        ExEnterCriticalRegionAndAcquireResourceExclusive(v48);
      }
      v49 = *(_QWORD *)(v47 + 1912);
      v51 = *(_QWORD *)(SGDGetSessionState(v46) + 24);
      if ( *(_DWORD *)(v51 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pqz_EtwWriteTransfer(v51, v50, v52, v49, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
      --*((_DWORD *)v44 + 15);
      v53 = *(_QWORD *)(SGDGetSessionState(v51) + 24);
      v54 = *(_QWORD *)(v53 + 1912);
      v56 = *(_QWORD *)(SGDGetSessionState(v55) + 24);
      if ( *(_DWORD *)(v56 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v56, (unsigned int)&LockRelease, v57, v54, (__int64)L"GreBaseGlobals.hsemHmgr");
      v58 = *(struct _ERESOURCE **)(v53 + 1912);
      if ( v58 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v58);
        PsLeavePriorityRegion();
      }
    }
    goto LABEL_42;
  }
LABEL_68:
  v88 = *(_QWORD *)(SGDGetSessionState(v30) + 24);
  v89 = *(_QWORD *)(v88 + 1912);
  v91 = *(_QWORD *)(SGDGetSessionState(v90) + 24);
  if ( *(_DWORD *)(v91 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(v91, (unsigned int)&LockRelease, v92, v89, (__int64)L"GreBaseGlobals.hsemHmgr");
  v93 = *(struct _ERESOURCE **)(v88 + 1912);
  if ( v93 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v93);
    PsLeavePriorityRegion();
  }
  if ( v19 )
  {
    v94 = *(NSInstrumentation::CLeakTrackingAllocator **)(SGDGetSessionState(v93) + 24);
    if ( v19[7] >= 0 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v19);
    else
      NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v94, *((void **)v94 + v20 + 244), v19);
  }
  v95 = v114;
  *this = 0LL;
  if ( v95 )
  {
    if ( (*(_DWORD *)(v95 + 712) & 0x81) != 0 && qword_1C0294BB8 && (int)qword_1C0294BB8() >= 0 )
    {
      if ( qword_1C0294BC0 )
        qword_1C0294BC0(&v114);
    }
    RFONTOBJ::vReleaseCache((RFONTOBJ *)&v114);
  }
}
