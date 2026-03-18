/*
 * XREFs of PopSaveHiberContext @ 0x140B6EC80
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1406B3680 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlSetAllBits @ 0x1402E5D90 (RtlSetAllBits.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     RtlCopyBitMap @ 0x14037D810 (RtlCopyBitMap.c)
 *     RtlNumberOfClearBits @ 0x14042B450 (RtlNumberOfClearBits.c)
 *     DbgUnLoadImageSymbols @ 0x1404BB078 (DbgUnLoadImageSymbols.c)
 *     KdPowerTransition @ 0x1404F8980 (KdPowerTransition.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140544920 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405823F0 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x140582788 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x14058914C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405891B4 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x140589428 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140589550 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x14058D944 (VslNotifyShutdown.c)
 *     IoDumpStackResumeCapable @ 0x140590F9C (IoDumpStackResumeCapable.c)
 *     IoGetDumpHiberRanges @ 0x1405919AC (IoGetDumpHiberRanges.c)
 *     IoGetDumpStackTransferSizes @ 0x140591B0C (IoGetDumpStackTransferSizes.c)
 *     IoInitializeDumpStack @ 0x140591B50 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x140591C60 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1405CD440 (_PopInternalError.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D3348 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     PopResetRangeEnum @ 0x1405D376C (PopResetRangeEnum.c)
 *     PopWriteSecurePages @ 0x1405D3784 (PopWriteSecurePages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B5B9D4 (PopSetMemoryOverwriteRequestAction.c)
 *     PopSstInvokeNotificationHandlers @ 0x140B5BD90 (PopSstInvokeNotificationHandlers.c)
 *     PopCompressHiberBlocks @ 0x140B5C604 (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x140B5C7EC (PopCreateDumpMdl.c)
 *     PopHiberWriteBootFreePageMap @ 0x140B5D55C (PopHiberWriteBootFreePageMap.c)
 *     PopIsMktmeEnabled @ 0x140B5D604 (PopIsMktmeEnabled.c)
 *     PopMarkComponentsBootPhase @ 0x140B5D694 (PopMarkComponentsBootPhase.c)
 *     PopWriteChecksumPages @ 0x140B5E62C (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140B5E6C4 (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x140B5E8E0 (PopWriteHiberImage.c)
 *     PopWriteImageHeader @ 0x140B5ED50 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x140B5FFC0 (PopNotifyShutdownListener.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 Number; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // ebx
  unsigned int v25; // r8d
  _DWORD *v26; // rcx
  _DWORD *v27; // rdx
  RTL_BITMAP *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rdi
  ULONG_PTR v34; // rbx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // r14
  _QWORD *v43; // rbx
  _QWORD *v44; // rax
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rdi
  char *v47; // r12
  ULONG_PTR v48; // r14
  unsigned __int64 v49; // rax
  _QWORD *v50; // rcx
  PVOID v51; // rax
  unsigned int v52; // r12d
  int v53; // eax
  unsigned int v54; // ecx
  __int64 v55; // rbx
  ULONG v56; // eax
  _DWORD *v57; // rdi
  int v58; // esi
  __int64 v59; // rbx
  __int64 v60; // r14
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rbx
  unsigned __int64 v64; // rax
  unsigned int v65; // r8d
  _QWORD *v66; // r9
  __int64 v67; // r11
  __int64 v68; // r10
  char *v69; // rdx
  __int64 v70; // rax
  ULONG v71; // eax
  _DWORD *v72; // rdi
  int v73; // esi
  __int64 v74; // rbx
  unsigned __int64 v75; // r14
  __int64 v76; // rdi
  unsigned __int64 v77; // rbx
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rcx
  __int64 v82; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  char v88; // [rsp+38h] [rbp-D0h]
  unsigned int v89; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE *v90; // [rsp+40h] [rbp-C8h]
  int v91; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v92; // [rsp+50h] [rbp-B8h] BYREF
  void (__fastcall *v93)(void *, void *, ULONG_PTR, ULONG); // [rsp+60h] [rbp-A8h]
  __m256i v94; // [rsp+68h] [rbp-A0h]
  __int128 v95; // [rsp+88h] [rbp-80h]
  __int128 v96; // [rsp+98h] [rbp-70h]
  __int128 v97; // [rsp+A8h] [rbp-60h]
  __int128 v98; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v99; // [rsp+C8h] [rbp-40h]
  __m256i v100; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v101; // [rsp+F8h] [rbp-10h]
  __int128 v102; // [rsp+108h] [rbp+0h]
  __int128 v103; // [rsp+118h] [rbp+10h]
  __m256i v104; // [rsp+128h] [rbp+20h] BYREF
  __int128 v105; // [rsp+148h] [rbp+40h]
  __int128 v106; // [rsp+158h] [rbp+50h]
  __int128 v107; // [rsp+168h] [rbp+60h]
  _BYTE v108[320]; // [rsp+178h] [rbp+70h] BYREF

  v99 = 0LL;
  v93 = 0LL;
  v98 = 0LL;
  v92 = 0LL;
  memset_0(v108, 0, 0x138uLL);
  v91 = 0;
  v89 = 0;
  if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
    v90 = *(_BYTE **)(BugCheckParameter3 + 352);
  else
    v90 = v108;
  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 16) )
        _mm_pause();
      if ( PoResumeFromHibernate )
        return 1073742484;
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 20), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 20) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(19, v2, v3);
  }
  if ( (unsigned int)Number >= *(_DWORD *)(BugCheckParameter3 + 288) )
    return 0;
  if ( (_DWORD)Number )
  {
    while ( !*(_BYTE *)(BugCheckParameter3 + 3) )
      _mm_pause();
    v9 = 168 * Number;
    PopCompressHiberBlocks((_BYTE *)BugCheckParameter3, v9 + *(_QWORD *)(BugCheckParameter3 + 296), 1);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 8), 1u);
    while ( *(_DWORD *)(BugCheckParameter3 + 8) )
      _mm_pause();
    return (unsigned int)PopCompressHiberBlocks(
                           (_BYTE *)BugCheckParameter3,
                           v9 + *(_QWORD *)(BugCheckParameter3 + 296),
                           0);
  }
  PopWatchdogTimerCount = 0;
  if ( KeDisableInterrupts() )
    PopInternalError(0xA1E3EuLL);
  if ( (PopSimulateHiberBugcheck & 0x80u) != 0 )
  {
    v88 = 0;
LABEL_30:
    dword_140F0AE18 |= 4u;
    byte_140F0AD81 = 1;
    goto LABEL_31;
  }
  v88 = IoDumpStackResumeCapable((__int64)&v91, v6, v7, v8);
  if ( !v88 )
    goto LABEL_30;
LABEL_31:
  if ( (unsigned int)PshedArePluginsPresent() )
  {
    dword_140F0AE18 |= 8u;
    byte_140F0AD81 = 1;
  }
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v11, v10, v12, v13) )
  {
    dword_140F0AE18 |= 1u;
    byte_140F0AD81 = 1;
  }
  if ( byte_140F0AD81 && PopIsMktmeEnabled(v14) )
    KeBugCheckEx(0xA0u, 0x112uLL, 0xAuLL, BugCheckParameter3, 0LL);
  v17 = HvlHypervisorConnected == 0;
  v18 = *(_QWORD *)(BugCheckParameter3 + 216);
  *(_QWORD *)(BugCheckParameter3 + 176) = &v98;
  *(_QWORD *)(BugCheckParameter3 + 192) = &PoWakeState;
  *(_BYTE *)(BugCheckParameter3 + 1) = 1;
  if ( !v17 )
  {
    PopHibernateHvMinloopEnabled = 1;
    HvlDisableEnlightenment(0);
    guard_dispatch_icall_no_overrides(v20, v19, v21, v22);
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 16) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      v94.m256i_i64[0] = qword_140E277F8;
      *(_OWORD *)&v94.m256i_u64[1] = xmmword_140E27798;
      v94.m256i_i64[3] = qword_140E27790;
      *(_QWORD *)&v95 = qword_140E277B0;
      *((_QWORD *)&v95 + 1) = qword_140E277A8;
      v96 = xmmword_140E277D8;
      v97 = xmmword_140E277E8;
      if ( *(_BYTE *)(BugCheckParameter3 + 484) )
      {
        v100 = v94;
        v101 = v95;
        v103 = v97;
        v102 = v96;
        v23 = HvlPrepareForSecureHibernate(&v100);
      }
      else
      {
        v104 = v94;
        v105 = v95;
        v107 = v97;
        v106 = v96;
        v23 = HvlPrepareForHibernate(
                (__int128 *)v104.m256i_i8,
                (_QWORD *)(v18 + 1128),
                (_QWORD *)(v18 + 1136),
                (_QWORD *)(v18 + 1144),
                (_QWORD *)(v18 + 1152));
      }
      v24 = v23;
      if ( v23 < 0 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v24, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
      }
      *(_DWORD *)(BugCheckParameter3 + 16) = 0;
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 20), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      *(_DWORD *)(BugCheckParameter3 + 16) = KeNumberProcessors_0;
      *(_DWORD *)(BugCheckParameter3 + 20) = 0;
    }
    if ( *(_BYTE *)(BugCheckParameter3 + 484) )
      HvlDiscardSecurePagesFromHibernation((PVOID)BugCheckParameter3);
    else
      HvlDiscardPagesFromHibernation((PVOID)BugCheckParameter3);
  }
  if ( *(_BYTE *)(BugCheckParameter3 + 489) )
  {
    *(_QWORD *)&v92 = v18;
    *((_QWORD *)&v92 + 1) = PopHiberNotificationDiscardMemoryCallback;
    v93 = PopHiberNotificationDiscardPhysicalMemoryCallback;
    PopSstInvokeNotificationHandlers(0, (__int64)&v92, v15, v16);
  }
  ++*(_DWORD *)v18;
  v25 = 0;
  v26 = *(_DWORD **)(BugCheckParameter3 + 72);
  v27 = *(_DWORD **)(BugCheckParameter3 + 56);
  if ( (*(_DWORD *)(BugCheckParameter3 + 64) & 0xFFFFFFE0) != 0 )
  {
    do
    {
      ++v25;
      *v26++ |= *v27++;
    }
    while ( v25 < *(_DWORD *)(BugCheckParameter3 + 64) >> 5 );
  }
  v28 = (RTL_BITMAP *)(BugCheckParameter3 + 48);
  if ( !byte_140F0AD81 )
  {
    RtlCopyBitMap((unsigned int *)(BugCheckParameter3 + 64), BugCheckParameter3 + 48, 0);
    v28 = (RTL_BITMAP *)(BugCheckParameter3 + 64);
  }
  RtlSetAllBits(v28);
  *(_DWORD *)(BugCheckParameter3 + 200) = 8;
  PopHibernateInProgress = 1;
  IoGetDumpHiberRanges(v29, *(_QWORD *)(BugCheckParameter3 + 184));
  if ( !byte_140F0AD81 )
    IoNotifyDump(1LL, v30);
  v33 = __rdtsc();
  v34 = (int)IoInitializeDumpStack(
               *(_QWORD *)(BugCheckParameter3 + 184),
               (unsigned __int64)HIDWORD(v33) << 32,
               v31,
               v32);
  if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
  {
    IoGetDumpStackTransferSizes(0LL, &v89, v35, v36);
    v37 = v89;
    if ( v89 >= 0x100000 )
    {
      v37 = 0x100000;
      v89 = 0x100000;
    }
    v38 = *(_DWORD *)(BugCheckParameter3 + 440);
    v39 = v37 >> 12;
    if ( v39 != v38 )
    {
      if ( v39 <= v38 )
        v38 = v39;
      *(_DWORD *)(BugCheckParameter3 + 440) = v38;
    }
  }
  v40 = __rdtsc();
  v41 = (unsigned __int64)HIDWORD(v40) << 32;
  qword_140F0B388 += (v41 | (unsigned int)v40) - v33;
  if ( (v34 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
  {
    PopCheckpointSystemSleep(20, v41, v35);
    PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
    KeBugCheckEx(0xA0u, 0xCuLL, v34, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
  }
  PopMarkComponentsBootPhase((char *)BugCheckParameter3);
  v42 = (_QWORD *)(BugCheckParameter3 + 80);
  v43 = *(_QWORD **)(BugCheckParameter3 + 80);
  if ( v43 != (_QWORD *)(BugCheckParameter3 + 80) )
  {
    do
    {
      v44 = v43;
      v43 = (_QWORD *)*v43;
      v45 = v44[4];
      v46 = v44[3];
      v47 = (char *)v44[5];
      *(_QWORD *)(BugCheckParameter3 + 104) += v45 - v46;
      if ( v46 < v45 )
      {
        v48 = (ULONG_PTR)v90;
        do
        {
          PopCreateDumpMdl(BugCheckParameter3, v48, v46, v45);
          memmove(v47, *(const void **)(v48 + 24), *(unsigned int *)(v48 + 40));
          v49 = *(unsigned int *)(v48 + 40);
          v47 += v49;
          v46 += v49 >> 12;
        }
        while ( v46 < v45 );
        v42 = (_QWORD *)(BugCheckParameter3 + 80);
      }
    }
    while ( v43 != v42 );
  }
  PopResetRangeEnum((_QWORD *)BugCheckParameter3);
  v50 = *(_QWORD **)(BugCheckParameter3 + 176);
  v51 = qword_140F0AD58;
  *v50 = qword_140F0AD58;
  v50[1] = v51;
  v50[2] = 0LL;
  v90 = (_BYTE *)__rdtsc();
  v5 = PopWriteHeaderPages(BugCheckParameter3, (_DWORD *)v18);
  if ( v5 < 0 )
    goto LABEL_98;
  v52 = *(_DWORD *)(v18 + 80);
  if ( *(_BYTE *)(BugCheckParameter3 + 484) )
  {
    v53 = *(_DWORD *)(BugCheckParameter3 + 280) + 2;
    v54 = (*(_DWORD *)(BugCheckParameter3 + 32) >> 3) + 4095;
    *(_DWORD *)(BugCheckParameter3 + 200) = 3;
    *(_QWORD *)(v18 + 96) = (v54 >> 12) + v53;
    v55 = qword_140F0B378;
    PopWriteSecurePages(BugCheckParameter3);
    qword_140F0B640 = qword_140F0B378 - v55;
    qword_140F0B518 = *(unsigned int *)(BugCheckParameter3 + 284);
  }
  *(_DWORD *)(BugCheckParameter3 + 200) = 4;
  *(_QWORD *)(BugCheckParameter3 + 112) = BugCheckParameter3 + 64;
  v56 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 64));
  v57 = qword_140F0ADE8;
  v58 = *(_DWORD *)(BugCheckParameter3 + 312);
  v59 = *(_QWORD *)(BugCheckParameter3 + 304);
  v60 = (v56 + *(_QWORD *)(BugCheckParameter3 + 104)) << 12;
  memset_0(qword_140F0ADE8, 0, 0x40uLL);
  v57[2] = v58;
  v57[6] = 0;
  *(_QWORD *)v57 = v59;
  *((_QWORD *)v57 + 2) = v60;
  qword_140F0B520 = 0LL;
  qword_140F0B528 = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 360) = 0;
  *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
  v61 = qword_140F0B378;
  if ( v88 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 184) + 128LL) )
    *(_BYTE *)(BugCheckParameter3 + 424) = 1;
  v62 = *(_DWORD *)(BugCheckParameter3 + 284)
      + ((unsigned int)((*(_DWORD *)(BugCheckParameter3 + 32) >> 3) + 4095) >> 12)
      + *(_DWORD *)(BugCheckParameter3 + 280)
      + 2;
  *(_QWORD *)(v18 + 104) = v62;
  *(_QWORD *)(BugCheckParameter3 + 408) = v62 << 12;
  *(_BYTE *)(BugCheckParameter3 + 3) = 1;
  v63 = __rdtsc();
  PopWriteHiberImage(BugCheckParameter3, 1);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 8));
  while ( *(_DWORD *)(BugCheckParameter3 + 8) != *(_DWORD *)(BugCheckParameter3 + 288) )
    _mm_pause();
  v64 = __rdtsc();
  v65 = 0;
  for ( qword_140F0B648 = (((unsigned __int64)HIDWORD(v64) << 32) | (unsigned int)v64) - v63;
        v65 < *(_DWORD *)(BugCheckParameter3 + 288);
        *(_QWORD *)(168 * v70 + *(_QWORD *)(BugCheckParameter3 + 296) + 56) = 0LL )
  {
    v66 = &unk_140F0B5E0;
    v67 = 5LL;
    v68 = 168LL * v65 - (_QWORD)&unk_140F0B5E0;
    do
    {
      v69 = (char *)v66 + v68;
      *v66 += *(_QWORD *)((char *)v66 + v68 + *(_QWORD *)(BugCheckParameter3 + 296) + 88);
      ++v66;
      *(_QWORD *)&v69[*(_QWORD *)(BugCheckParameter3 + 296) + 88] = 0LL;
      --v67;
    }
    while ( v67 );
    qword_140F0B398 += *(_QWORD *)(168LL * v65 + *(_QWORD *)(BugCheckParameter3 + 296) + 40);
    *(_QWORD *)(168LL * v65 + *(_QWORD *)(BugCheckParameter3 + 296) + 40) = 0LL;
    qword_140F0B520 += *(_QWORD *)(168LL * v65 + *(_QWORD *)(BugCheckParameter3 + 296) + 56);
    v70 = v65++;
  }
  qword_140F0B630 = qword_140F0B378 - v61;
  qword_140F0B530 = qword_140F0B550;
  qword_140F0B540 = (unsigned int)dword_140F0B558;
  qword_140F0B550 = 0LL;
  dword_140F0B558 = 0;
  *(_DWORD *)(BugCheckParameter3 + 200) = 5;
  *(_QWORD *)(BugCheckParameter3 + 112) = BugCheckParameter3 + 48;
  *(_QWORD *)(BugCheckParameter3 + 128) = 0LL;
  v71 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 48));
  v72 = qword_140F0ADE8;
  v73 = *(_DWORD *)(BugCheckParameter3 + 312);
  v74 = *(_QWORD *)(BugCheckParameter3 + 304);
  v75 = (unsigned __int64)v71 << 12;
  memset_0(qword_140F0ADE8, 0, 0x40uLL);
  v72[6] = 0;
  *(_QWORD *)v72 = v74;
  v72[2] = v73;
  *((_QWORD *)v72 + 2) = v75;
  *(_QWORD *)(v18 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 408) + 4095LL) >> 12;
  v76 = qword_140F0B378;
  *(_DWORD *)(BugCheckParameter3 + 8) = 0;
  *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
  v77 = __rdtsc();
  PopWriteHiberImage(BugCheckParameter3, 0);
  qword_140F0B650 = __rdtsc() - v77;
  qword_140F0B638 = qword_140F0B378 - v76;
  PopHiberWriteBootFreePageMap(BugCheckParameter3, v18);
  *(_DWORD *)(BugCheckParameter3 + 200) = 7;
  PopWriteChecksumPages((_QWORD *)BugCheckParameter3);
  v78 = (__int64)v90;
  *(_DWORD *)(BugCheckParameter3 + 200) = 6;
  PopWriteImageHeader(BugCheckParameter3, v18, v52, v78);
  v5 = *(_DWORD *)(BugCheckParameter3 + 204);
  if ( v5 < 0 )
    goto LABEL_98;
  if ( dword_140F0B12C == dword_140F0B134 )
  {
    if ( (PopSimulate & 0x8000) == 0 )
      DbgUnLoadImageSymbols(0LL, -2LL, 0LL);
    VslNotifyShutdown(1u);
  }
  if ( (PopSimulate & 0x1000) != 0 )
    HalReturnToFirmware(3);
  v5 = 0;
  if ( (PopSimulateHiberBugcheck & 0x10) != 0 )
  {
    v5 = 1073742484;
  }
  else
  {
LABEL_98:
    KdPowerTransition(4);
    if ( v5 >= 0 && dword_140F0B12C == 5 )
    {
      PopNotifyShutdownListener(v81, v79, v80, v82);
      if ( HvlHypervisorConnected )
        HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
  }
  PopCheckpointSystemSleep(24, v79, v80);
  guard_dispatch_icall_no_overrides(v84, v83, v85, v86);
  return (unsigned int)v5;
}
