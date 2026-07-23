/*
 * XREFs of PopSaveHiberContext @ 0x140B70CF0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1406B4620 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     RtlNumberOfClearBits @ 0x140377850 (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x140455770 (RtlCopyBitMap.c)
 *     DbgUnLoadImageSymbols @ 0x1404B5F18 (DbgUnLoadImageSymbols.c)
 *     KdPowerTransition @ 0x1404F6260 (KdPowerTransition.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x1405421E0 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14057F770 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x14057FB08 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x14058642C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140586494 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x140586714 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14058683C (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x14058AC34 (VslNotifyShutdown.c)
 *     IoDumpStackResumeCapable @ 0x14058DFBC (IoDumpStackResumeCapable.c)
 *     IoGetDumpHiberRanges @ 0x14058E9CC (IoGetDumpHiberRanges.c)
 *     IoGetDumpStackTransferSizes @ 0x14058EB2C (IoGetDumpStackTransferSizes.c)
 *     IoInitializeDumpStack @ 0x14058EB70 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x14058EC80 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1405CABB0 (_PopInternalError.c)
 *     Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline @ 0x1405D0A68 (Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline.c)
 *     PopResetRangeEnum @ 0x1405D0E8C (PopResetRangeEnum.c)
 *     PopWriteSecurePages @ 0x1405D0EA4 (PopWriteSecurePages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B5DA44 (PopSetMemoryOverwriteRequestAction.c)
 *     PopSstInvokeNotificationHandlers @ 0x140B5DE00 (PopSstInvokeNotificationHandlers.c)
 *     PopCompressHiberBlocks @ 0x140B5E674 (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x140B5E85C (PopCreateDumpMdl.c)
 *     PopHiberWriteBootFreePageMap @ 0x140B5F5DC (PopHiberWriteBootFreePageMap.c)
 *     PopIsMktmeEnabled @ 0x140B5F684 (PopIsMktmeEnabled.c)
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 *     PopWriteChecksumPages @ 0x140B606AC (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140B60744 (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x140B60960 (PopWriteHiberImage.c)
 *     PopWriteImageHeader @ 0x140B60DD0 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x140B6208C (PopNotifyShutdownListener.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3)
{
  __int64 Number; // rbx
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // r8d
  _DWORD *v15; // rcx
  _DWORD *v16; // rdx
  _RTL_BITMAP *v17; // rax
  _IMAGE_NT_HEADERS64 *v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  ULONG_PTR v21; // rbx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  _QWORD *v26; // r14
  _QWORD *v27; // rbx
  _QWORD *v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  char *v31; // r12
  ULONG_PTR v32; // r14
  unsigned __int64 v33; // rax
  _QWORD *v34; // rcx
  PVOID v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // r12d
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // rbx
  ULONG v41; // eax
  _DWORD *v42; // rdi
  int v43; // esi
  __int64 v44; // rbx
  __int64 v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rax
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rax
  unsigned int v50; // r8d
  _QWORD *v51; // r9
  __int64 v52; // r11
  __int64 v53; // r10
  char *v54; // rdx
  __int64 v55; // rax
  ULONG v56; // eax
  _DWORD *v57; // rdi
  int v58; // esi
  __int64 v59; // rbx
  unsigned __int64 v60; // r14
  __int64 v61; // rdi
  unsigned __int64 v62; // rbx
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  char v69; // [rsp+38h] [rbp-D0h]
  unsigned int v70; // [rsp+3Ch] [rbp-CCh] BYREF
  _BYTE *v71; // [rsp+40h] [rbp-C8h]
  int v72; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v73; // [rsp+50h] [rbp-B8h]
  void (__fastcall *v74)(void *, void *, ULONG_PTR, ULONG); // [rsp+60h] [rbp-A8h]
  __m256i v75; // [rsp+68h] [rbp-A0h]
  __int128 v76; // [rsp+88h] [rbp-80h]
  __int128 v77; // [rsp+98h] [rbp-70h]
  __int128 v78; // [rsp+A8h] [rbp-60h]
  __int128 v79; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-40h]
  __m256i v81; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v82; // [rsp+F8h] [rbp-10h]
  __int128 v83; // [rsp+108h] [rbp+0h]
  __int128 v84; // [rsp+118h] [rbp+10h]
  __m256i v85; // [rsp+128h] [rbp+20h] BYREF
  __int128 v86; // [rsp+148h] [rbp+40h]
  __int128 v87; // [rsp+158h] [rbp+50h]
  __int128 v88; // [rsp+168h] [rbp+60h]
  _BYTE v89[320]; // [rsp+178h] [rbp+70h] BYREF

  v80 = 0LL;
  v74 = 0LL;
  v79 = 0LL;
  v73 = 0LL;
  memset_0(v89, 0, 0x138uLL);
  v72 = 0;
  v70 = 0;
  if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
    v71 = *(_BYTE **)(BugCheckParameter3 + 352);
  else
    v71 = v89;
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
    PopCheckpointSystemSleep(19);
  }
  if ( (unsigned int)Number >= *(_DWORD *)(BugCheckParameter3 + 288) )
    return 0;
  if ( (_DWORD)Number )
  {
    while ( !*(_BYTE *)(BugCheckParameter3 + 3) )
      _mm_pause();
    v4 = 168 * Number;
    PopCompressHiberBlocks((_BYTE *)BugCheckParameter3, v4 + *(_QWORD *)(BugCheckParameter3 + 296), 1);
    _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 8), 1u);
    while ( *(_DWORD *)(BugCheckParameter3 + 8) )
      _mm_pause();
    return (unsigned int)PopCompressHiberBlocks(
                           (_BYTE *)BugCheckParameter3,
                           v4 + *(_QWORD *)(BugCheckParameter3 + 296),
                           0);
  }
  PopWatchdogTimerCount = 0;
  if ( KeDisableInterrupts() )
    PopInternalError(0xA1E50uLL);
  if ( (PopSimulateHiberBugcheck & 0x80u) != 0 )
  {
    v69 = 0;
LABEL_30:
    dword_140F0BC58 |= 4u;
    byte_140F0BBC1 = 1;
    goto LABEL_31;
  }
  v69 = IoDumpStackResumeCapable((__int64)&v72);
  if ( !v69 )
    goto LABEL_30;
LABEL_31:
  if ( (unsigned int)PshedArePluginsPresent() )
  {
    dword_140F0BC58 |= 8u;
    byte_140F0BBC1 = 1;
  }
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v6, v5) )
  {
    dword_140F0BC58 |= 1u;
    byte_140F0BBC1 = 1;
  }
  if ( byte_140F0BBC1 && PopIsMktmeEnabled(v7) )
    KeBugCheckEx(0xA0u, 0x112uLL, 0xAuLL, BugCheckParameter3, 0LL);
  v8 = HvlHypervisorConnected == 0;
  v9 = *(_QWORD *)(BugCheckParameter3 + 216);
  *(_QWORD *)(BugCheckParameter3 + 176) = &v79;
  *(_QWORD *)(BugCheckParameter3 + 192) = &PoWakeState;
  *(_BYTE *)(BugCheckParameter3 + 1) = 1;
  if ( !v8 )
  {
    PopHibernateHvMinloopEnabled = 1;
    HvlDisableEnlightenment(0);
    guard_dispatch_icall_no_overrides(v11, v10);
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 16) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      v75.m256i_i64[0] = qword_140E27938;
      *(_OWORD *)&v75.m256i_u64[1] = xmmword_140E278D8;
      v75.m256i_i64[3] = qword_140E278D0;
      *(_QWORD *)&v76 = qword_140E278F0;
      *((_QWORD *)&v76 + 1) = qword_140E278E8;
      v77 = xmmword_140E27918;
      v78 = xmmword_140E27928;
      if ( *(_BYTE *)(BugCheckParameter3 + 488) )
      {
        v81 = v75;
        v82 = v76;
        v84 = v78;
        v83 = v77;
        v12 = HvlPrepareForSecureHibernate(&v81);
      }
      else
      {
        v85 = v75;
        v86 = v76;
        v88 = v78;
        v87 = v77;
        v12 = HvlPrepareForHibernate(
                (__int128 *)v85.m256i_i8,
                (_QWORD *)(v9 + 1128),
                (_QWORD *)(v9 + 1136),
                (_QWORD *)(v9 + 1144),
                (_QWORD *)(v9 + 1152));
      }
      v13 = v12;
      if ( v12 < 0 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v13, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
      }
      *(_DWORD *)(BugCheckParameter3 + 16) = 0;
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 20), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      *(_DWORD *)(BugCheckParameter3 + 16) = KeNumberProcessors_0;
      *(_DWORD *)(BugCheckParameter3 + 20) = 0;
    }
    if ( *(_BYTE *)(BugCheckParameter3 + 488) )
      HvlDiscardSecurePagesFromHibernation((PVOID)BugCheckParameter3);
    else
      HvlDiscardPagesFromHibernation((PVOID)BugCheckParameter3);
  }
  if ( *(_BYTE *)(BugCheckParameter3 + 493) )
  {
    *(_QWORD *)&v73 = v9;
    *((_QWORD *)&v73 + 1) = PopHiberNotificationDiscardMemoryCallback;
    v74 = PopHiberNotificationDiscardPhysicalMemoryCallback;
    PopSstInvokeNotificationHandlers(0);
  }
  ++*(_DWORD *)v9;
  v14 = 0;
  v15 = *(_DWORD **)(BugCheckParameter3 + 72);
  v16 = *(_DWORD **)(BugCheckParameter3 + 56);
  if ( (*(_DWORD *)(BugCheckParameter3 + 64) & 0xFFFFFFE0) != 0 )
  {
    do
    {
      ++v14;
      *v15++ |= *v16++;
    }
    while ( v14 < *(_DWORD *)(BugCheckParameter3 + 64) >> 5 );
  }
  v17 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
  if ( !byte_140F0BBC1 )
  {
    RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter3 + 64), (PRTL_BITMAP)(BugCheckParameter3 + 48), 0);
    v17 = (_RTL_BITMAP *)(BugCheckParameter3 + 64);
  }
  RtlSetAllBits(v17);
  *(_DWORD *)(BugCheckParameter3 + 200) = 8;
  PopHibernateInProgress = 1;
  IoGetDumpHiberRanges(v18, *(_QWORD *)(BugCheckParameter3 + 184));
  if ( !byte_140F0BBC1 )
    IoNotifyDump(1LL, v19);
  v20 = __rdtsc();
  v21 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 184));
  if ( (unsigned int)Feature_CrashDumpOneMBTransferSize__private_IsEnabledDeviceUsageNoInline() )
  {
    IoGetDumpStackTransferSizes(0LL, &v70);
    v22 = v70;
    if ( v70 >= 0x100000 )
    {
      v22 = 0x100000;
      v70 = 0x100000;
    }
    v23 = *(_DWORD *)(BugCheckParameter3 + 440);
    v24 = v22 >> 12;
    if ( v24 != v23 )
    {
      if ( v24 <= v23 )
        v23 = v24;
      *(_DWORD *)(BugCheckParameter3 + 440) = v23;
    }
  }
  v25 = __rdtsc();
  qword_140F0BFC8 += (((unsigned __int64)HIDWORD(v25) << 32) | (unsigned int)v25) - v20;
  if ( (v21 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
  {
    PopCheckpointSystemSleep(20);
    PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
    KeBugCheckEx(0xA0u, 0xCuLL, v21, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
  }
  PopMarkComponentsBootPhase((char *)BugCheckParameter3);
  v26 = (_QWORD *)(BugCheckParameter3 + 80);
  v27 = *(_QWORD **)(BugCheckParameter3 + 80);
  if ( v27 != (_QWORD *)(BugCheckParameter3 + 80) )
  {
    do
    {
      v28 = v27;
      v27 = (_QWORD *)*v27;
      v29 = v28[4];
      v30 = v28[3];
      v31 = (char *)v28[5];
      *(_QWORD *)(BugCheckParameter3 + 104) += v29 - v30;
      if ( v30 < v29 )
      {
        v32 = (ULONG_PTR)v71;
        do
        {
          PopCreateDumpMdl(BugCheckParameter3, v32, v30, v29);
          memmove(v31, *(const void **)(v32 + 24), *(unsigned int *)(v32 + 40));
          v33 = *(unsigned int *)(v32 + 40);
          v31 += v33;
          v30 += v33 >> 12;
        }
        while ( v30 < v29 );
        v26 = (_QWORD *)(BugCheckParameter3 + 80);
      }
    }
    while ( v27 != v26 );
  }
  PopResetRangeEnum((_QWORD *)BugCheckParameter3);
  v34 = *(_QWORD **)(BugCheckParameter3 + 176);
  v35 = qword_140F0BB98;
  *v34 = qword_140F0BB98;
  v34[1] = v35;
  v34[2] = 0LL;
  v71 = (_BYTE *)__rdtsc();
  v3 = PopWriteHeaderPages(BugCheckParameter3, (_DWORD *)v9);
  if ( v3 < 0 )
    goto LABEL_98;
  v37 = *(_DWORD *)(v9 + 80);
  if ( *(_BYTE *)(BugCheckParameter3 + 488) )
  {
    v38 = *(_DWORD *)(BugCheckParameter3 + 280) + 2;
    v39 = (*(_DWORD *)(BugCheckParameter3 + 32) >> 3) + 4095;
    *(_DWORD *)(BugCheckParameter3 + 200) = 3;
    *(_QWORD *)(v9 + 96) = (v39 >> 12) + v38;
    v40 = qword_140F0BFB8;
    PopWriteSecurePages(BugCheckParameter3);
    qword_140F0C280 = qword_140F0BFB8 - v40;
    qword_140F0C158 = *(unsigned int *)(BugCheckParameter3 + 284);
  }
  *(_DWORD *)(BugCheckParameter3 + 200) = 4;
  *(_QWORD *)(BugCheckParameter3 + 112) = BugCheckParameter3 + 64;
  v41 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 64));
  v42 = qword_140F0BC28;
  v43 = *(_DWORD *)(BugCheckParameter3 + 312);
  v44 = *(_QWORD *)(BugCheckParameter3 + 304);
  v45 = (v41 + *(_QWORD *)(BugCheckParameter3 + 104)) << 12;
  memset_0(qword_140F0BC28, 0, 0x40uLL);
  v42[2] = v43;
  v42[6] = 0;
  *(_QWORD *)v42 = v44;
  *((_QWORD *)v42 + 2) = v45;
  qword_140F0C160 = 0LL;
  qword_140F0C168 = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 360) = 0;
  *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
  v46 = qword_140F0BFB8;
  if ( v69 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 184) + 128LL) )
    *(_BYTE *)(BugCheckParameter3 + 424) = 1;
  v47 = *(_DWORD *)(BugCheckParameter3 + 284)
      + ((unsigned int)((*(_DWORD *)(BugCheckParameter3 + 32) >> 3) + 4095) >> 12)
      + *(_DWORD *)(BugCheckParameter3 + 280)
      + 2;
  *(_QWORD *)(v9 + 104) = v47;
  *(_QWORD *)(BugCheckParameter3 + 408) = v47 << 12;
  *(_BYTE *)(BugCheckParameter3 + 3) = 1;
  v48 = __rdtsc();
  PopWriteHiberImage(BugCheckParameter3, 1);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 8));
  while ( *(_DWORD *)(BugCheckParameter3 + 8) != *(_DWORD *)(BugCheckParameter3 + 288) )
    _mm_pause();
  v49 = __rdtsc();
  v50 = 0;
  for ( qword_140F0C288 = (((unsigned __int64)HIDWORD(v49) << 32) | (unsigned int)v49) - v48;
        v50 < *(_DWORD *)(BugCheckParameter3 + 288);
        *(_QWORD *)(168 * v55 + *(_QWORD *)(BugCheckParameter3 + 296) + 56) = 0LL )
  {
    v51 = &unk_140F0C220;
    v52 = 5LL;
    v53 = 168LL * v50 - (_QWORD)&unk_140F0C220;
    do
    {
      v54 = (char *)v51 + v53;
      *v51 += *(_QWORD *)((char *)v51 + v53 + *(_QWORD *)(BugCheckParameter3 + 296) + 88);
      ++v51;
      *(_QWORD *)&v54[*(_QWORD *)(BugCheckParameter3 + 296) + 88] = 0LL;
      --v52;
    }
    while ( v52 );
    qword_140F0BFD8 += *(_QWORD *)(168LL * v50 + *(_QWORD *)(BugCheckParameter3 + 296) + 40);
    *(_QWORD *)(168LL * v50 + *(_QWORD *)(BugCheckParameter3 + 296) + 40) = 0LL;
    qword_140F0C160 += *(_QWORD *)(168LL * v50 + *(_QWORD *)(BugCheckParameter3 + 296) + 56);
    v55 = v50++;
  }
  qword_140F0C270 = qword_140F0BFB8 - v46;
  qword_140F0C170 = qword_140F0C190;
  qword_140F0C180 = (unsigned int)dword_140F0C198;
  qword_140F0C190 = 0LL;
  dword_140F0C198 = 0;
  *(_DWORD *)(BugCheckParameter3 + 200) = 5;
  *(_QWORD *)(BugCheckParameter3 + 112) = BugCheckParameter3 + 48;
  *(_QWORD *)(BugCheckParameter3 + 128) = 0LL;
  v56 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 48));
  v57 = qword_140F0BC28;
  v58 = *(_DWORD *)(BugCheckParameter3 + 312);
  v59 = *(_QWORD *)(BugCheckParameter3 + 304);
  v60 = (unsigned __int64)v56 << 12;
  memset_0(qword_140F0BC28, 0, 0x40uLL);
  v57[6] = 0;
  *(_QWORD *)v57 = v59;
  v57[2] = v58;
  *((_QWORD *)v57 + 2) = v60;
  *(_QWORD *)(v9 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 408) + 4095LL) >> 12;
  v61 = qword_140F0BFB8;
  *(_DWORD *)(BugCheckParameter3 + 8) = 0;
  *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
  v62 = __rdtsc();
  PopWriteHiberImage(BugCheckParameter3, 0);
  qword_140F0C290 = __rdtsc() - v62;
  qword_140F0C278 = qword_140F0BFB8 - v61;
  PopHiberWriteBootFreePageMap(BugCheckParameter3, v9);
  *(_DWORD *)(BugCheckParameter3 + 200) = 7;
  PopWriteChecksumPages((_QWORD *)BugCheckParameter3);
  v63 = (__int64)v71;
  *(_DWORD *)(BugCheckParameter3 + 200) = 6;
  PopWriteImageHeader(BugCheckParameter3, v9, v37, v63);
  v3 = *(_DWORD *)(BugCheckParameter3 + 204);
  if ( v3 < 0 )
    goto LABEL_98;
  if ( dword_140F0B9AC == dword_140F0B9B4 )
  {
    if ( (PopSimulate & 0x8000) == 0 )
      DbgUnLoadImageSymbols(0LL, -2LL, 0LL);
    VslNotifyShutdown(1u);
  }
  if ( (PopSimulate & 0x1000) != 0 )
    HalReturnToFirmware(3);
  v3 = 0;
  if ( (PopSimulateHiberBugcheck & 0x10) != 0 )
  {
    v3 = 1073742484;
  }
  else
  {
LABEL_98:
    KdPowerTransition(4LL, v36);
    if ( v3 >= 0 && dword_140F0B9AC == 5 )
    {
      PopNotifyShutdownListener(v65, v64);
      if ( HvlHypervisorConnected )
        HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
  }
  PopCheckpointSystemSleep(24);
  guard_dispatch_icall_no_overrides(v67, v66);
  return (unsigned int)v3;
}
