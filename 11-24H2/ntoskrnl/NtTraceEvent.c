/*
 * XREFs of NtTraceEvent @ 0x140325D10
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140257DF0 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     EtwpTraceMessageVa @ 0x140326900 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     EtwTraceEvent @ 0x140346CD0 (EtwTraceEvent.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140347D90 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140347F50 (EtwpOpenLogger.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     EtwTraceRaw @ 0x14064F1FC (EtwTraceRaw.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwpSetMark @ 0x1407A9F74 (EtwpSetMark.c)
 *     EtwpUpdateEnableMask @ 0x14083658C (EtwpUpdateEnableMask.c)
 *     EtwpAccessCheck @ 0x1408383D4 (EtwpAccessCheck.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     ObpRemoveObjectRoutine @ 0x140846830 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409D2920 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409D2A68 (ObpDeregisterObject.c)
 */

__int64 __fastcall NtTraceEvent(__int128 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // r15d
  unsigned int v7; // eax
  int v8; // r12d
  int v9; // edi
  __int64 v10; // r14
  NTSTATUS v11; // esi
  unsigned __int16 *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r8
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  int v19; // edx
  signed __int64 v20; // rbx
  signed __int64 v21; // rax
  bool v22; // cc
  signed __int64 v23; // rax
  __int64 v25; // rcx
  unsigned __int16 v26; // r10
  __int64 v27; // r11
  unsigned int v28; // r9d
  __int64 v29; // r9
  __int64 v30; // r10
  int v31; // edx
  __int64 v32; // rax
  ULONG_PTR GuidEntryByGuid; // rax
  ULONG_PTR v34; // r13
  struct _KTHREAD *v35; // rax
  signed __int64 *v36; // r14
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // rsi
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  signed __int64 v42; // rtt
  unsigned int v43; // r15d
  signed __int64 v44; // rcx
  signed __int64 i; // rax
  unsigned __int16 v46; // r10
  __int64 v47; // r14
  unsigned int v48; // edi
  struct _KTHREAD *v49; // rax
  __int64 v50; // rax
  int v51; // r9d
  __int64 v52; // rsi
  unsigned __int8 v53; // r15
  __int64 v54; // rax
  int v55; // r9d
  int v56; // ecx
  __int64 v57; // rax
  signed __int64 v58; // rax
  signed __int64 v59; // rdx
  signed __int64 v60; // rtt
  int v61; // edx
  int v62; // edx
  char v63; // [rsp+80h] [rbp-158h]
  unsigned __int8 v64; // [rsp+81h] [rbp-157h] BYREF
  char v65; // [rsp+82h] [rbp-156h]
  _WORD v66[2]; // [rsp+84h] [rbp-154h] BYREF
  unsigned int v67; // [rsp+88h] [rbp-150h]
  __int64 v68; // [rsp+90h] [rbp-148h]
  int v69; // [rsp+98h] [rbp-140h]
  int v70; // [rsp+9Ch] [rbp-13Ch]
  char PreviousMode; // [rsp+A1h] [rbp-137h]
  char v72; // [rsp+A2h] [rbp-136h]
  __int16 v73; // [rsp+A4h] [rbp-134h]
  int v74; // [rsp+A8h] [rbp-130h]
  int v75; // [rsp+ACh] [rbp-12Ch]
  unsigned __int64 v76; // [rsp+B0h] [rbp-128h]
  __int64 v77; // [rsp+B8h] [rbp-120h]
  __int64 v78; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-110h]
  PVOID Object; // [rsp+D0h] [rbp-108h] BYREF
  int v81; // [rsp+D8h] [rbp-100h]
  __int64 v82; // [rsp+E0h] [rbp-F8h]
  __int64 v83; // [rsp+E8h] [rbp-F0h]
  __int64 v84; // [rsp+F0h] [rbp-E8h]
  __int64 v85; // [rsp+F8h] [rbp-E0h]
  int v86; // [rsp+108h] [rbp-D0h]
  int v87; // [rsp+10Ch] [rbp-CCh]
  __int64 v88; // [rsp+110h] [rbp-C8h]
  __int64 v89; // [rsp+128h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp-A8h]
  __int64 v91; // [rsp+138h] [rbp-A0h]
  __int64 v92; // [rsp+140h] [rbp-98h]
  __int64 v93; // [rsp+148h] [rbp-90h]
  __int128 *v94; // [rsp+150h] [rbp-88h] BYREF
  unsigned int v95; // [rsp+158h] [rbp-80h]
  int v96; // [rsp+15Ch] [rbp-7Ch]
  __int128 v97; // [rsp+160h] [rbp-78h] BYREF
  __int128 v98; // [rsp+170h] [rbp-68h] BYREF
  __int128 v99; // [rsp+180h] [rbp-58h]

  v6 = a2;
  v7 = a2 & 0xFF00;
  if ( v7 == 768 )
  {
    CurrentThread = KeGetCurrentThread();
    PreviousMode = CurrentThread->PreviousMode;
    if ( PreviousMode && (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v77 = *(_QWORD *)(a4 + 88);
    v91 = v77;
    v70 = *(_DWORD *)(a4 + 84);
    v86 = v70;
    v8 = *(unsigned __int16 *)(a4 + 82);
    v92 = *(unsigned __int16 *)(a4 + 82);
    LODWORD(v68) = *(_DWORD *)(a4 + 112);
    v87 = v68;
    v79 = *(_QWORD *)(a4 + 48);
    v93 = v79;
    v63 = *(_BYTE *)(a4 + 44);
    v72 = v63;
    v9 = 0;
    v10 = 0LL;
    v88 = 0LL;
    if ( *(_BYTE *)(a4 + 80) )
    {
      v10 = a4 + 96;
      v88 = a4 + 96;
    }
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    v67 = v11;
    if ( v11 >= 0 )
    {
      v78 = 0LL;
      v12 = (unsigned __int16 *)Object;
      v13 = *((_QWORD *)Object + 4);
      v14 = *((_QWORD *)Object + 5);
      v85 = v14;
      v15 = v6 >> 31;
      v98 = 0LL;
      v99 = 0LL;
      v16 = *((_QWORD *)Object + 14);
      v17 = v16 + 28;
      if ( !v16 )
        v17 = 0LL;
      v82 = v17;
      v18 = *((unsigned __int16 *)Object + 50);
      if ( (_WORD)v18 )
      {
        v67 = EtwpWriteUserEvent(
                v13,
                v18,
                (unsigned __int16)v15,
                v8,
                v68,
                a4,
                v10,
                v63,
                v79,
                v70,
                v77,
                (__int64)&v98,
                0LL,
                *((_WORD *)Object + 49),
                v17,
                (__int64)&v78);
        v17 = v82;
        v14 = v85;
      }
      v19 = v12[51];
      if ( (_WORD)v19 )
        v67 = EtwpWriteUserEvent(
                v13,
                v19,
                (unsigned __int16)v15,
                v8,
                v68,
                a4,
                v10,
                v63,
                v79,
                v70,
                v77,
                (__int64)&v98,
                v14,
                v12[49],
                v17,
                (__int64)&v78);
      if ( *(_QWORD *)(v13 + 656) )
      {
        v98 = 0LL;
        v99 = 0LL;
        v61 = v12[52];
        if ( (_WORD)v61 )
          v67 = EtwpWriteUserEvent(
                  *(_QWORD *)(v13 + 656),
                  v61,
                  (unsigned __int16)v15,
                  0,
                  v68,
                  a4,
                  v10,
                  v63,
                  v79,
                  v70,
                  v77,
                  (__int64)&v98,
                  0LL,
                  v12[49],
                  v82,
                  (__int64)&v78);
        v62 = v12[53];
        if ( (_WORD)v62 )
          v67 = EtwpWriteUserEvent(
                  *(_QWORD *)(v13 + 656),
                  v62,
                  (unsigned __int16)v15,
                  0,
                  v68,
                  a4,
                  v10,
                  v63,
                  v79,
                  v70,
                  v77,
                  (__int64)&v98,
                  *(_QWORD *)(v85 + 656),
                  v12[49],
                  v82,
                  (__int64)&v78);
      }
      v20 = (signed __int64)(v12 - 24);
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v12 - 48);
      v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL);
      v22 = v21 <= 1;
      v23 = v21 - 1;
      if ( v22 )
      {
        if ( *(_QWORD *)(v20 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v20 + 24) ^ (unsigned __int64)BYTE1(v20)],
            (ULONG_PTR)Object,
            1uLL,
            *(_QWORD *)(v20 + 8));
        if ( v23 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v23);
        if ( KeGetCurrentThread()->SpecialApcDisable || !KeAreInterruptsEnabled() || KeGetCurrentIrql() )
        {
          _m_prefetchw(&ObpRemoveObjectList);
          v44 = ObpRemoveObjectList;
          *(_QWORD *)(v20 + 8) = ObpRemoveObjectList;
          for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, v20, v44);
                i != v44;
                i = _InterlockedCompareExchange64(&ObpRemoveObjectList, v20, i) )
          {
            v44 = i;
            *(_QWORD *)(v20 + 8) = i;
          }
          if ( !v44 )
          {
            if ( ObGetCurrentIrql() > 2u )
              KeInsertQueueDpc(&ObpRemoveObjectDpc, 0LL, 0LL);
            else
              ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
          }
        }
        else
        {
          if ( (*(_BYTE *)(v20 + 26) & 0x40) != 0
            && *(_BYTE *)(*(_QWORD *)(v20 - ObpInfoMaskToOffset[*(_BYTE *)(v20 + 26) & 0x7F]) + 24LL) )
          {
            ObpHandleRevocationBlockRemoveObject();
          }
          LOBYTE(v9) = ObpTraceFlags != 0;
          if ( v9 )
            ObpDeregisterObject(v12 - 24);
          ObpRemoveObjectRoutine(v12 - 24, 0LL);
        }
      }
      return v67;
    }
    return (unsigned int)v11;
  }
  if ( v7 == 512 )
  {
    v94 = a1;
    v76 = 0LL;
    if ( a3 == 40 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        v68 = a4;
        if ( (a4 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v69 = *(_DWORD *)(v68 + 24);
        if ( (int)a2 < 0 )
        {
          LODWORD(v76) = *(_DWORD *)(v68 + 32);
          v69 |= 0x80u;
        }
        else
        {
          v76 = *(_QWORD *)(v68 + 32);
        }
        v25 = *(unsigned int *)(v68 + 28);
        v81 = v25;
        if ( (unsigned int)v25 <= 0x10000 )
        {
          if ( (_DWORD)v25 && (v76 + v25 > 0x7FFFFFFF0000LL || v76 + v25 < v76) )
            LODWORD(v25) = v81;
          HIDWORD(v94) = v25;
          return EtwpTraceMessageVa((_DWORD)v94, v69 | 0x40u, (int)v68 + 8, *(unsigned __int16 *)(v68 + 4), v76, 1);
        }
        v11 = -1073741811;
        v67 = -1073741811;
        return (unsigned int)v11;
      }
      return 3221225659LL;
    }
    return 3221225485LL;
  }
  if ( v7 <= 0x600 )
  {
    switch ( v7 )
    {
      case 0x600u:
        v64 = 0;
        v47 = *(_QWORD *)(((__int64 (*)(void))PsGetCurrentServerSiloGlobals)() + 832);
        v48 = v46;
        if ( v46 == 0xFFFF || !v46 )
          v48 = *(unsigned __int8 *)(v47 + 4504);
        if ( v48 < *(_DWORD *)(v47 + 16)
          && (v53 = KeGetCurrentThread()->PreviousMode, v54 = EtwpOpenLogger(v48, v47, v53, &v64), v56 = v54, v54) )
        {
          if ( (*(_DWORD *)(v54 + 12) & 0x2000000) != 0 )
          {
            v57 = v47 + 32LL * *(unsigned __int8 *)(v54 + 818) + 4556;
            if ( v57 && (*(_DWORD *)(v57 + 4) & 0x28) != 0 )
              LOBYTE(v55) = 1;
            else
              v55 = 0;
            v11 = EtwpSetMark(v56, a4, a3, v55, v53);
          }
          else
          {
            v11 = -1073741811;
          }
          EtwpCloseLogger(v48, v47, v64);
        }
        else
        {
          return (unsigned int)-1073741816;
        }
        return (unsigned int)v11;
      case 0x400u:
        v27 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2) + 832);
        v28 = 0;
        if ( v26 != 0xFFFF )
          v28 = v26;
        if ( v28 < *(_DWORD *)(v27 + 16) )
        {
          if ( a3 > 0xFFDF )
            return 3221225621LL;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( (a4 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v89 = a4 + 32;
            v73 = *(_WORD *)(a4 + 6);
            v94 = (__int128 *)(a4 + 32);
            v95 = a3;
            v96 = 0;
            EtwpLogSystemEventUnsafe(
              v27,
              (unsigned int)&v94,
              (unsigned int)KeGetCurrentThread(),
              v28,
              1,
              v73,
              v6 & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return 3221225659LL;
        }
        return 3221225485LL;
      case 0x100u:
        return (unsigned int)EtwTraceEvent(
                               (_DWORD)a1,
                               a4,
                               48,
                               (((int)a2 >> 31) & 0xFFF60000) - 1072431104,
                               KeGetCurrentThread()->PreviousMode);
      case 0x500u:
        v30 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, KeGetCurrentThread()[1].CycleTime) + 832);
        if ( *(_DWORD *)(v30 + 4344) == v31 )
        {
          if ( (a4 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          return (unsigned int)EtwpWriteUserEvent(
                                 (int)v30 + 24,
                                 *(unsigned __int16 *)(v30 + 4336),
                                 0,
                                 0,
                                 *(_DWORD *)(v29 + 112),
                                 a4,
                                 0LL,
                                 *(_BYTE *)(a4 + 44),
                                 *(_QWORD *)(a4 + 48),
                                 *(_DWORD *)(v29 + 84),
                                 *(_QWORD *)(v29 + 88),
                                 0LL,
                                 0LL,
                                 0,
                                 0LL,
                                 0LL);
        }
        return 3221225506LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
      return (unsigned int)EtwTraceEvent(
                             (_DWORD)a1,
                             a4,
                             72,
                             (((int)a2 >> 31) & 0xFFF60000) - 1072365568,
                             KeGetCurrentThread()->PreviousMode);
    if ( v7 == 2304 )
    {
      if ( (_DWORD)a2 == 2304 && a3 && a4 )
        return (unsigned int)EtwTraceRaw(a1, a4, a3, (unsigned __int8)KeGetCurrentThread()->PreviousMode);
      return 3221225485LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a1 )
    return 3221225485LL;
  if ( (a4 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v83 = *(_QWORD *)(a4 + 88);
  v74 = *(_DWORD *)(a4 + 84);
  v75 = *(_DWORD *)(a4 + 112);
  v84 = *(_QWORD *)(a4 + 48);
  v65 = *(_BYTE *)(a4 + 44);
  v97 = *a1;
  v32 = ((__int64 (*)(void))PsGetCurrentServerSiloGlobals)();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(v32 + 832), &v97, 0LL);
  v34 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v11 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u);
      v67 = v11;
      if ( v11 >= 0 )
      {
        v66[0] = 0;
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = (signed __int64 *)(v34 + 664);
        v37 = KeAbPreAcquire(v34 + 664, 0LL, 0LL);
        v39 = v37;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 664), 0LL) )
          ExfAcquirePushLockExclusiveEx(v34 + 664, v37, v34 + 664);
        if ( v39 )
          *(_BYTE *)(v39 + 10) = 1;
        *(_QWORD *)(v34 + 672) = KeGetCurrentThread();
        LOBYTE(v38) = 1;
        EtwpUpdateEnableMask(v34, 0, 0, v38, (__int64)v66);
        *(_QWORD *)(v34 + 672) = 0LL;
        _m_prefetchw(v36);
        v40 = *v36;
        v41 = *v36 - 16;
        if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v41 = 0LL;
        if ( (v40 & 2) != 0 || (v42 = *v36, v42 != _InterlockedCompareExchange64(v36, v41, v40)) )
          ExfReleasePushLock((_QWORD *)(v34 + 664));
        KeAbPostRelease(v34 + 664);
        KeLeaveCriticalRegionThread();
        v43 = v6 >> 31;
        v11 = EtwpWriteUserEvent(
                v34,
                v66[0],
                (unsigned __int16)v43,
                0,
                v75,
                a4,
                0LL,
                v65,
                v84,
                v74,
                v83,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
        v67 = v11;
        if ( *(_QWORD *)(v34 + 656) )
        {
          v66[0] = 0;
          v49 = KeGetCurrentThread();
          --v49->KernelApcDisable;
          v50 = KeAbPreAcquire(v34 + 664, 0LL, 0LL);
          v52 = v50;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
            ExfAcquirePushLockExclusiveEx(v34 + 664, v50, v34 + 664);
          if ( v52 )
            *(_BYTE *)(v52 + 10) = 1;
          *(_QWORD *)(v34 + 672) = KeGetCurrentThread();
          LOBYTE(v51) = 1;
          EtwpUpdateEnableMask(*(_QWORD *)(v34 + 656), 0, 1, v51, (__int64)v66);
          *(_QWORD *)(v34 + 672) = 0LL;
          _m_prefetchw(v36);
          v58 = *v36;
          v59 = *v36 - 16;
          if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v59 = 0LL;
          if ( (v58 & 2) != 0 || (v60 = *v36, v60 != _InterlockedCompareExchange64(v36, v59, v58)) )
            ExfReleasePushLock((_QWORD *)(v34 + 664));
          KeAbPostRelease(v34 + 664);
          KeLeaveCriticalRegionThread();
          v11 = EtwpWriteUserEvent(
                  *(_QWORD *)(v34 + 656),
                  v66[0],
                  (unsigned __int16)v43,
                  0,
                  v75,
                  a4,
                  0LL,
                  v65,
                  v84,
                  v74,
                  v83,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL);
        }
      }
      EtwpUnreferenceGuidEntry(v34);
      return (unsigned int)v11;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return 3221226242LL;
}
