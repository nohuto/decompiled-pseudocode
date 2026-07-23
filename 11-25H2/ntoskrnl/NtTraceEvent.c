/*
 * XREFs of NtTraceEvent @ 0x14030A680
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeAreInterruptsEnabled @ 0x140256C40 (KeAreInterruptsEnabled.c)
 *     EtwpOpenLogger @ 0x140257A00 (EtwpOpenLogger.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     EtwpTraceMessageVa @ 0x14030B270 (EtwpTraceMessageVa.c)
 *     EtwpCloseLogger @ 0x14030BE80 (EtwpCloseLogger.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     EtwTraceEvent @ 0x14030FA90 (EtwTraceEvent.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     EtwTraceRaw @ 0x14064325C (EtwTraceRaw.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     EtwpSetMark @ 0x14079ABA4 (EtwpSetMark.c)
 *     ObpRemoveObjectRoutine @ 0x14084AB80 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     EtwpUpdateEnableMask @ 0x140896F0C (EtwpUpdateEnableMask.c)
 *     EtwpAccessCheck @ 0x140898E74 (EtwpAccessCheck.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1409CF610 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1409CF758 (ObpDeregisterObject.c)
 */

NTSTATUS __cdecl NtTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  ULONG v7; // eax
  int v8; // r12d
  int v9; // edi
  char *v10; // r14
  int v11; // esi
  _WORD *v12; // rsi
  __int64 v13; // r13
  __int64 v14; // r8
  ULONG v15; // r15d
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
  __int64 GuidEntryByGuid; // rax
  _QWORD *v34; // r13
  struct _KTHREAD *v35; // rax
  signed __int64 *v36; // r14
  __int64 *v37; // rax
  int v38; // r9d
  __int64 *v39; // rdi
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
  __int64 *v50; // rax
  int v51; // r9d
  __int64 *v52; // rsi
  char v53; // r15
  __int64 v54; // rax
  int v55; // r9d
  int v56; // ecx
  __int64 v57; // rax
  signed __int64 v58; // rax
  signed __int64 v59; // rdx
  signed __int64 v60; // rtt
  int v61; // edx
  int v62; // edx
  unsigned __int8 v63; // [rsp+80h] [rbp-148h] BYREF
  char v64; // [rsp+81h] [rbp-147h]
  unsigned __int8 v65; // [rsp+82h] [rbp-146h] BYREF
  char v66; // [rsp+83h] [rbp-145h]
  NTSTATUS v67; // [rsp+84h] [rbp-144h]
  unsigned int *v68; // [rsp+88h] [rbp-140h]
  unsigned int v69; // [rsp+90h] [rbp-138h]
  int v70; // [rsp+94h] [rbp-134h]
  char PreviousMode; // [rsp+99h] [rbp-12Fh]
  char v72; // [rsp+9Ah] [rbp-12Eh]
  __int16 v73; // [rsp+9Ch] [rbp-12Ch]
  int v74; // [rsp+A0h] [rbp-128h]
  int v75; // [rsp+A4h] [rbp-124h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-120h]
  __int64 v77; // [rsp+B0h] [rbp-118h]
  __int64 v78; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v79; // [rsp+C0h] [rbp-108h]
  PVOID Object; // [rsp+C8h] [rbp-100h] BYREF
  int v81; // [rsp+D0h] [rbp-F8h]
  __int64 v82; // [rsp+D8h] [rbp-F0h]
  __int64 v83; // [rsp+E0h] [rbp-E8h]
  __int64 v84; // [rsp+E8h] [rbp-E0h]
  __int64 v85; // [rsp+F0h] [rbp-D8h]
  int v86; // [rsp+100h] [rbp-C8h]
  int v87; // [rsp+104h] [rbp-C4h]
  char *v88; // [rsp+108h] [rbp-C0h]
  char *v89; // [rsp+120h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+128h] [rbp-A0h]
  __int64 v91; // [rsp+130h] [rbp-98h]
  __int64 v92; // [rsp+138h] [rbp-90h]
  __int64 v93; // [rsp+140h] [rbp-88h]
  char *v94; // [rsp+148h] [rbp-80h] BYREF
  ULONG v95; // [rsp+150h] [rbp-78h]
  int v96; // [rsp+154h] [rbp-74h]
  __int128 v97; // [rsp+158h] [rbp-70h] BYREF
  __int128 v98; // [rsp+168h] [rbp-60h] BYREF
  __int128 v99; // [rsp+178h] [rbp-50h]

  v7 = Flags & 0xFF00;
  if ( v7 == 768 )
  {
    CurrentThread = KeGetCurrentThread();
    PreviousMode = CurrentThread->PreviousMode;
    if ( PreviousMode && ((unsigned __int8)Fields & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v77 = *((_QWORD *)Fields + 11);
    v91 = v77;
    v70 = *((_DWORD *)Fields + 21);
    v86 = v70;
    v8 = *((unsigned __int16 *)Fields + 41);
    v92 = *((unsigned __int16 *)Fields + 41);
    LODWORD(v68) = *((_DWORD *)Fields + 28);
    v87 = (int)v68;
    v79 = *((_QWORD *)Fields + 6);
    v93 = v79;
    v64 = *((_BYTE *)Fields + 44);
    v72 = v64;
    v9 = 0;
    v10 = 0LL;
    v88 = 0LL;
    if ( *((_BYTE *)Fields + 80) )
    {
      v10 = (char *)Fields + 96;
      v88 = (char *)Fields + 96;
    }
    Object = 0LL;
    v11 = ObReferenceObjectByHandle(TraceHandle, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
    v67 = v11;
    if ( v11 >= 0 )
    {
      v78 = 0LL;
      v12 = Object;
      v13 = *((_QWORD *)Object + 4);
      v14 = *((_QWORD *)Object + 5);
      v85 = v14;
      v15 = Flags >> 31;
      v98 = 0LL;
      v99 = 0LL;
      v16 = *((_QWORD *)Object + 13);
      v17 = v16 + 28;
      if ( !v16 )
        v17 = 0LL;
      v82 = v17;
      v18 = *((unsigned __int8 *)Object + 100);
      if ( (_BYTE)v18 )
      {
        v67 = EtwpWriteUserEvent(
                v13,
                v18,
                (unsigned __int16)v15,
                v8,
                (_DWORD)v68,
                (__int64)Fields,
                (__int64)v10,
                v64,
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
      v19 = *((unsigned __int8 *)v12 + 101);
      if ( (_BYTE)v19 )
        v67 = EtwpWriteUserEvent(
                v13,
                v19,
                (unsigned __int16)v15,
                v8,
                (_DWORD)v68,
                (__int64)Fields,
                (__int64)v10,
                v64,
                v79,
                v70,
                v77,
                (__int64)&v98,
                v14,
                v12[49],
                v17,
                (__int64)&v78);
      if ( *(_QWORD *)(v13 + 400) )
      {
        v98 = 0LL;
        v99 = 0LL;
        v61 = *((unsigned __int8 *)v12 + 102);
        if ( (_BYTE)v61 )
          v67 = EtwpWriteUserEvent(
                  *(_QWORD *)(v13 + 400),
                  v61,
                  (unsigned __int16)v15,
                  0,
                  (_DWORD)v68,
                  (__int64)Fields,
                  (__int64)v10,
                  v64,
                  v79,
                  v70,
                  v77,
                  (__int64)&v98,
                  0LL,
                  v12[49],
                  v82,
                  (__int64)&v78);
        v62 = *((unsigned __int8 *)v12 + 103);
        if ( (_BYTE)v62 )
          v67 = EtwpWriteUserEvent(
                  *(_QWORD *)(v13 + 400),
                  v62,
                  (unsigned __int16)v15,
                  0,
                  (_DWORD)v68,
                  (__int64)Fields,
                  (__int64)v10,
                  v64,
                  v79,
                  v70,
                  v77,
                  (__int64)&v98,
                  *(_QWORD *)(v85 + 400),
                  v12[49],
                  v82,
                  (__int64)&v78);
      }
      v20 = (signed __int64)(v12 - 24);
      if ( ObpTraceFlags )
        ObpPushStackInfo((__int64)(v12 - 24), 0, 1u, 0x746C6644u);
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
    return v11;
  }
  if ( v7 == 512 )
  {
    v94 = (char *)TraceHandle;
    v76 = 0LL;
    if ( FieldSize == 40 )
    {
      if ( KeGetCurrentThread()->PreviousMode == 1 )
      {
        v68 = (unsigned int *)Fields;
        if ( ((unsigned __int8)Fields & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v69 = v68[6];
        if ( (Flags & 0x80000000) != 0 )
        {
          LODWORD(v76) = v68[8];
          v69 |= 0x80u;
        }
        else
        {
          v76 = *((_QWORD *)v68 + 4);
        }
        v25 = v68[7];
        v81 = v25;
        if ( (unsigned int)v25 <= 0x10000 )
        {
          if ( (_DWORD)v25 && (v76 + v25 < v76 || v76 + v25 > 0x7FFFFFFF0000LL) )
            LODWORD(v25) = v81;
          HIDWORD(v94) = v25;
          return EtwpTraceMessageVa((_DWORD)v94, v69 | 0x40, (int)v68 + 8, *((unsigned __int16 *)v68 + 2), v76, 1);
        }
        v11 = -1073741811;
        v67 = -1073741811;
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
        v65 = 0;
        v47 = *(_QWORD *)(((__int64 (*)(void))PsGetCurrentServerSiloGlobals)() + 832);
        v48 = v46;
        if ( v46 == 0xFFFF || !v46 )
          v48 = *(unsigned __int8 *)(v47 + 4232);
        if ( v48 >= *(_DWORD *)(v47 + 16) )
          return -1073741816;
        v53 = KeGetCurrentThread()->PreviousMode;
        v54 = EtwpOpenLogger(v48, v47, v53, &v65);
        v56 = v54;
        if ( !v54 )
          return -1073741816;
        if ( (*(_DWORD *)(v54 + 12) & 0x2000000) != 0 )
        {
          v57 = v47 + 32LL * *(unsigned __int8 *)(v54 + 818) + 4284;
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
        EtwpCloseLogger(v48, v47, v65);
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
            v89 = (char *)Fields + 32;
            v73 = *((_WORD *)Fields + 3);
            v94 = (char *)Fields + 32;
            v95 = FieldSize;
            v96 = 0;
            EtwpLogSystemEventUnsafe(
              v27,
              (unsigned int)&v94,
              (unsigned int)KeGetCurrentThread(),
              v28,
              1,
              v73,
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
        if ( *(_DWORD *)(v30 + 4072) == v31 )
        {
          if ( ((unsigned __int8)Fields & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          return EtwpWriteUserEvent(
                   (int)v30 + 24,
                   *(unsigned __int8 *)(v30 + 4064),
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
  v83 = *((_QWORD *)Fields + 11);
  v74 = *((_DWORD *)Fields + 21);
  v75 = *((_DWORD *)Fields + 28);
  v84 = *((_QWORD *)Fields + 6);
  v66 = *((_BYTE *)Fields + 44);
  v97 = *(_OWORD *)TraceHandle;
  v32 = ((__int64 (*)(void))PsGetCurrentServerSiloGlobals)();
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(*(_QWORD *)(v32 + 832), &v97, 0LL);
  v34 = (_QWORD *)GuidEntryByGuid;
  if ( GuidEntryByGuid )
  {
    if ( *(_DWORD *)(GuidEntryByGuid + 96) )
    {
      v11 = EtwpAccessCheck(*(PSECURITY_DESCRIPTOR *)(GuidEntryByGuid + 72), 0x800u);
      v67 = v11;
      if ( v11 >= 0 )
      {
        v63 = 0;
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        v36 = v34 + 51;
        v37 = KeAbPreAcquire((__int64)(v34 + 51), 0LL);
        v39 = v37;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v34 + 102, 0LL) )
          ExfAcquirePushLockExclusiveEx(v34 + 51, v37, (__int64)(v34 + 51));
        if ( v39 )
          *((_BYTE *)v39 + 10) = 1;
        v34[52] = KeGetCurrentThread();
        LOBYTE(v38) = 1;
        EtwpUpdateEnableMask((_DWORD)v34, 0, 0, v38, (__int64)&v63);
        v34[52] = 0LL;
        _m_prefetchw(v36);
        v40 = *v36;
        v41 = *v36 - 16;
        if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v41 = 0LL;
        if ( (v40 & 2) != 0 || (v42 = *v36, v42 != _InterlockedCompareExchange64(v36, v41, v40)) )
          ExfReleasePushLock(v34 + 51);
        KeAbPostRelease((ULONG_PTR)(v34 + 51));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v43 = Flags >> 31;
        v11 = EtwpWriteUserEvent(
                (_DWORD)v34,
                v63,
                (unsigned __int16)v43,
                0,
                v75,
                (__int64)Fields,
                0LL,
                v66,
                v84,
                v74,
                v83,
                0LL,
                0LL,
                0,
                0LL,
                0LL);
        v67 = v11;
        if ( v34[50] )
        {
          v63 = 0;
          v49 = KeGetCurrentThread();
          --v49->KernelApcDisable;
          v50 = KeAbPreAcquire((__int64)(v34 + 51), 0LL);
          v52 = v50;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0LL) )
            ExfAcquirePushLockExclusiveEx(v34 + 51, v50, (__int64)(v34 + 51));
          if ( v52 )
            *((_BYTE *)v52 + 10) = 1;
          v34[52] = KeGetCurrentThread();
          LOBYTE(v51) = 1;
          EtwpUpdateEnableMask(v34[50], 0, 1, v51, (__int64)&v63);
          v34[52] = 0LL;
          _m_prefetchw(v36);
          v58 = *v36;
          v59 = *v36 - 16;
          if ( (*v36 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v59 = 0LL;
          if ( (v58 & 2) != 0 || (v60 = *v36, v60 != _InterlockedCompareExchange64(v36, v59, v58)) )
            ExfReleasePushLock(v34 + 51);
          KeAbPostRelease((ULONG_PTR)(v34 + 51));
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v11 = EtwpWriteUserEvent(
                  v34[50],
                  v63,
                  (unsigned __int16)v43,
                  0,
                  v75,
                  (__int64)Fields,
                  0LL,
                  v66,
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
      return v11;
    }
    EtwpUnreferenceGuidEntry((PVOID)GuidEntryByGuid);
  }
  return -1073741054;
}
