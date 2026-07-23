/*
 * XREFs of NtTraceEvent @ 0x1402CE8A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140288400 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     EtwTraceEvent @ 0x140325740 (EtwTraceEvent.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x140326790 (EtwpCloseLogger.c)
 *     EtwpOpenLogger @ 0x140326950 (EtwpOpenLogger.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     EtwTraceRaw @ 0x14064D8FC (EtwTraceRaw.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpSetMark @ 0x1407AA0B4 (EtwpSetMark.c)
 *     EtwpAccessCheck @ 0x14083669C (EtwpAccessCheck.c)
 *     EtwpUpdateEnableMask @ 0x14083745C (EtwpUpdateEnableMask.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409C2750 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409C2898 (ObpDeregisterObject.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 */

NTSTATUS __cdecl NtTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  ULONG v7; // eax
  int v8; // r12d
  int v9; // edi
  char *v10; // r14
  int v11; // esi
  unsigned __int16 *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r8
  ULONG v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edx
  __int64 v19; // rdx
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
  ULONG v43; // r15d
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
  char v62; // [rsp+80h] [rbp-158h]
  unsigned __int8 v63; // [rsp+81h] [rbp-157h] BYREF
  char v64; // [rsp+82h] [rbp-156h]
  _WORD v65[2]; // [rsp+84h] [rbp-154h] BYREF
  NTSTATUS v66; // [rsp+88h] [rbp-150h]
  unsigned int *v67; // [rsp+90h] [rbp-148h]
  unsigned int v68; // [rsp+98h] [rbp-140h]
  int v69; // [rsp+9Ch] [rbp-13Ch]
  char PreviousMode; // [rsp+A1h] [rbp-137h]
  char v71; // [rsp+A2h] [rbp-136h]
  __int16 v72; // [rsp+A4h] [rbp-134h]
  int v73; // [rsp+A8h] [rbp-130h]
  int v74; // [rsp+ACh] [rbp-12Ch]
  unsigned __int64 v75; // [rsp+B0h] [rbp-128h]
  __int64 v76; // [rsp+B8h] [rbp-120h]
  __int64 v77; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-110h]
  PVOID Object; // [rsp+D0h] [rbp-108h] BYREF
  int v80; // [rsp+D8h] [rbp-100h]
  __int64 v81; // [rsp+E0h] [rbp-F8h]
  __int64 v82; // [rsp+E8h] [rbp-F0h]
  __int64 v83; // [rsp+F0h] [rbp-E8h]
  __int64 v84; // [rsp+F8h] [rbp-E0h]
  int v85; // [rsp+108h] [rbp-D0h]
  int v86; // [rsp+10Ch] [rbp-CCh]
  char *v87; // [rsp+110h] [rbp-C8h]
  char *v88; // [rsp+128h] [rbp-B0h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp-A8h]
  __int64 v90; // [rsp+138h] [rbp-A0h]
  __int64 v91; // [rsp+140h] [rbp-98h]
  __int64 v92; // [rsp+148h] [rbp-90h]
  char *v93; // [rsp+150h] [rbp-88h] BYREF
  ULONG v94; // [rsp+158h] [rbp-80h]
  int v95; // [rsp+15Ch] [rbp-7Ch]
  __int128 v96; // [rsp+160h] [rbp-78h] BYREF
  __int128 v97; // [rsp+170h] [rbp-68h] BYREF
  __int128 v98; // [rsp+180h] [rbp-58h]

  v7 = Flags & 0xFF00;
  if ( v7 == 768 )
  {
    CurrentThread = KeGetCurrentThread();
    PreviousMode = CurrentThread->PreviousMode;
    if ( PreviousMode && ((unsigned __int8)Fields & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v76 = *((_QWORD *)Fields + 11);
    v90 = v76;
    v69 = *((_DWORD *)Fields + 21);
    v85 = v69;
    v8 = *((unsigned __int16 *)Fields + 41);
    v91 = *((unsigned __int16 *)Fields + 41);
    LODWORD(v67) = *((_DWORD *)Fields + 28);
    v86 = (int)v67;
    v78 = *((_QWORD *)Fields + 6);
    v92 = v78;
    v62 = *((_BYTE *)Fields + 44);
    v71 = v62;
    v9 = 0;
    v10 = 0LL;
    v87 = 0LL;
    if ( *((_BYTE *)Fields + 80) )
    {
      v10 = (char *)Fields + 96;
      v87 = (char *)Fields + 96;
    }
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    v66 = v11;
    if ( v11 >= 0 )
    {
      v77 = 0LL;
      v12 = (unsigned __int16 *)Object;
      v13 = *((_QWORD *)Object + 4);
      v14 = *((_QWORD *)Object + 5);
      v84 = v14;
      v15 = Flags >> 31;
      v97 = 0LL;
      v98 = 0LL;
      v16 = *((_QWORD *)Object + 14);
      v17 = v16 + 28;
      if ( !v16 )
        v17 = 0LL;
      v81 = v17;
      v18 = *((unsigned __int16 *)Object + 50);
      if ( (_WORD)v18 )
      {
        v66 = EtwpWriteUserEvent(
                v13,
                v18,
                (unsigned __int16)v15,
                v8,
                (_DWORD)v67,
                (__int64)Fields,
                (__int64)v10,
                v62,
                v78,
                v69,
                v76,
                (__int64)&v97,
                0LL,
                *((_WORD *)Object + 49),
                v17,
                (__int64)&v77);
        v17 = v81;
        v14 = v84;
      }
      v19 = v12[51];
      if ( (_WORD)v19 )
        v66 = EtwpWriteUserEvent(
                v13,
                v19,
                (unsigned __int16)v15,
                v8,
                (_DWORD)v67,
                (__int64)Fields,
                (__int64)v10,
                v62,
                v78,
                v69,
                v76,
                (__int64)&v97,
                v14,
                v12[49],
                v17,
                (__int64)&v77);
      if ( *(_QWORD *)(v13 + 656) )
      {
        v97 = 0LL;
        v98 = 0LL;
        v61 = v12[52];
        if ( (_WORD)v61 )
          v66 = EtwpWriteUserEvent(
                  *(_QWORD *)(v13 + 656),
                  v61,
                  (unsigned __int16)v15,
                  0,
                  (_DWORD)v67,
                  (__int64)Fields,
                  (__int64)v10,
                  v62,
                  v78,
                  v69,
                  v76,
                  (__int64)&v97,
                  0LL,
                  v12[49],
                  v81,
                  (__int64)&v77);
        v19 = v12[53];
        if ( (_WORD)v19 )
          v66 = EtwpWriteUserEvent(
                  *(_QWORD *)(v13 + 656),
                  v19,
                  (unsigned __int16)v15,
                  0,
                  (_DWORD)v67,
                  (__int64)Fields,
                  (__int64)v10,
                  v62,
                  v78,
                  v69,
                  v76,
                  (__int64)&v97,
                  *(_QWORD *)(v84 + 656),
                  v12[49],
                  v81,
                  (__int64)&v77);
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
            if ( ObGetCurrentIrql(0LL, v19) > 2u )
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
      return v66;
    }
    return v11;
  }
  if ( v7 == 512 )
  {
    v93 = (char *)TraceHandle;
    v75 = 0LL;
    if ( FieldSize == 40 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        v67 = (unsigned int *)Fields;
        if ( ((unsigned __int8)Fields & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v68 = v67[6];
        if ( (Flags & 0x80000000) != 0 )
        {
          LODWORD(v75) = v67[8];
          v68 |= 0x80u;
        }
        else
        {
          v75 = *((_QWORD *)v67 + 4);
        }
        v25 = v67[7];
        v80 = v25;
        if ( (unsigned int)v25 <= 0x10000 )
        {
          if ( (_DWORD)v25 && (v75 + v25 > 0x7FFFFFFF0000LL || v75 + v25 < v75) )
            LODWORD(v25) = v80;
          HIDWORD(v93) = v25;
          return EtwpTraceMessageVa((_DWORD)v93, v68 | 0x40, (int)v67 + 8, *((unsigned __int16 *)v67 + 2), v75, 1);
        }
        v11 = -1073741811;
        v66 = -1073741811;
        return v11;
      }
      return -1073741637;
    }
    return -1073741811;
  }
  if ( v7 <= 0x600 )
  {
    switch ( v7 )
    {
      case 0x600u:
        v63 = 0;
        v47 = *(_QWORD *)(((__int64 (*)(void))PsGetCurrentServerSiloGlobals)() + 832);
        v48 = v46;
        if ( v46 == 0xFFFF || !v46 )
          v48 = *(unsigned __int8 *)(v47 + 4504);
        if ( v48 >= *(_DWORD *)(v47 + 16) )
          return -1073741816;
        v53 = KeGetCurrentThread()->PreviousMode;
        v54 = EtwpOpenLogger(v48, v47, v53, &v63);
        v56 = v54;
        if ( !v54 )
          return -1073741816;
        if ( (*(_DWORD *)(v54 + 12) & 0x2000000) != 0 )
        {
          v57 = v47 + 32LL * *(unsigned __int8 *)(v54 + 818) + 4556;
          if ( v57 && (*(_DWORD *)(v57 + 4) & 0x28) != 0 )
            LOBYTE(v55) = 1;
          else
            v55 = 0;
          v11 = EtwpSetMark(v56, (int)Fields, FieldSize, v55, v53);
        }
        else
        {
          v11 = -1073741811;
        }
        EtwpCloseLogger(v48, v47, v63);
        return v11;
      case 0x400u:
        v27 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(TraceHandle, Flags) + 832);
        v28 = 0;
        if ( v26 != 0xFFFF )
          v28 = v26;
        if ( v28 < *(_DWORD *)(v27 + 16) )
        {
          if ( FieldSize > 0xFFDF )
            return -1073741675;
          if ( KeGetCurrentThread()->PreviousMode == 1 )
          {
            if ( ((unsigned __int8)Fields & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v88 = (char *)Fields + 32;
            v72 = *((_WORD *)Fields + 3);
            v93 = (char *)Fields + 32;
            v94 = FieldSize;
            v95 = 0;
            EtwpLogSystemEventUnsafe(
              v27,
              (unsigned int)&v93,
              (unsigned int)KeGetCurrentThread(),
              v28,
              1,
              v72,
              Flags & 0xC00F00FF | 0x3100,
              1);
            return 0;
          }
          return -1073741637;
        }
        return -1073741811;
      case 0x100u:
        return EtwTraceEvent(
                 (_DWORD)TraceHandle,
                 (_DWORD)Fields,
                 48,
                 (((int)Flags >> 31) & 0xFFF60000) - 1072431104,
                 KeGetCurrentThread()->PreviousMode);
      case 0x500u:
        v30 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(TraceHandle, KeGetCurrentThread()[1].CycleTime) + 832);
        if ( *(_DWORD *)(v30 + 4344) == v31 )
        {
          if ( ((unsigned __int8)Fields & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          return EtwpWriteUserEvent(
                   (int)v30 + 24,
                   *(unsigned __int16 *)(v30 + 4336),
                   0,
                   0,
                   *(_DWORD *)(v29 + 112),
                   (__int64)Fields,
                   0LL,
                   *((_BYTE *)Fields + 44),
                   *((_QWORD *)Fields + 6),
                   *(_DWORD *)(v29 + 84),
                   *(_QWORD *)(v29 + 88),
                   0LL,
                   0LL,
                   0,
                   0LL,
                   0LL);
        }
        return -1073741790;
    }
    return -1073741811;
  }
  if ( v7 != 1792 )
  {
    if ( v7 == 2048 )
      return EtwTraceEvent(
               (_DWORD)TraceHandle,
               (_DWORD)Fields,
               72,
               (((int)Flags >> 31) & 0xFFF60000) - 1072365568,
               KeGetCurrentThread()->PreviousMode);
    if ( v7 == 2304 )
    {
      if ( Flags == 2304 && FieldSize && Fields )
        return EtwTraceRaw(TraceHandle, Fields, FieldSize, (unsigned __int8)KeGetCurrentThread()->PreviousMode);
      return -1073741811;
    }
    return -1073741811;
  }
  if ( !TraceHandle )
    return -1073741811;
  if ( ((unsigned __int8)Fields & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((unsigned __int8)TraceHandle & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v82 = *((_QWORD *)Fields + 11);
  v73 = *((_DWORD *)Fields + 21);
  v74 = *((_DWORD *)Fields + 28);
  v83 = *((_QWORD *)Fields + 6);
  v64 = *((_BYTE *)Fields + 44);
  v96 = *(_OWORD *)TraceHandle;
  v32 = ((__int64 (*)(void))PsGetCurrentServerSiloGlobals)();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(v32 + 832), &v96, 0LL);
  v34 = GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v11 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u);
      v66 = v11;
      if ( v11 >= 0 )
      {
        v65[0] = 0;
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
        EtwpUpdateEnableMask(v34, 0, 0, v38, (__int64)v65);
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
        v43 = Flags >> 31;
        v11 = EtwpWriteUserEvent(
                v34,
                v65[0],
                (unsigned __int16)v43,
                0,
                v74,
                (__int64)Fields,
                0LL,
                v64,
                v83,
                v73,
                v82,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
        v66 = v11;
        if ( *(_QWORD *)(v34 + 656) )
        {
          v65[0] = 0;
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
          EtwpUpdateEnableMask(*(_QWORD *)(v34 + 656), 0, 1, v51, (__int64)v65);
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
                  v65[0],
                  (unsigned __int16)v43,
                  0,
                  v74,
                  (__int64)Fields,
                  0LL,
                  v64,
                  v83,
                  v73,
                  v82,
                  0LL,
                  0LL,
                  0,
                  0LL,
                  0LL);
        }
      }
      EtwpUnreferenceGuidEntry(v34);
      return v11;
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  return -1073741054;
}
