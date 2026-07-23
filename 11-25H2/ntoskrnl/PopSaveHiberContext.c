/*
 * XREFs of PopSaveHiberContext @ 0x140B5BF00
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x1406A83B0 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     RtlSetAllBits @ 0x1403397C0 (RtlSetAllBits.c)
 *     RtlNumberOfClearBits @ 0x140395F10 (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x1404614D0 (RtlCopyBitMap.c)
 *     DbgUnLoadImageSymbols @ 0x1404BBC28 (DbgUnLoadImageSymbols.c)
 *     KdPowerTransition @ 0x1404F6150 (KdPowerTransition.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalReturnToFirmware @ 0x140542060 (HalReturnToFirmware.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14057EC40 (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x14057EFD8 (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x140585ADC (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140585B44 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x140585DB8 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140585EE0 (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x14058A224 (VslNotifyShutdown.c)
 *     IoDumpStackResumeCapable @ 0x14058D76C (IoDumpStackResumeCapable.c)
 *     IoGetDumpHiberRanges @ 0x14058E17C (IoGetDumpHiberRanges.c)
 *     IoInitializeDumpStack @ 0x14058E320 (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x14058E430 (IoNotifyDump.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1405C8F30 (_PopInternalError.c)
 *     PopResetRangeEnum @ 0x1405CED14 (PopResetRangeEnum.c)
 *     PopWriteSecurePages @ 0x1405CED2C (PopWriteSecurePages.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140B4BA64 (PopSetMemoryOverwriteRequestAction.c)
 *     PopCompressHiberBlocks @ 0x140B4C604 (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x140B4C7EC (PopCreateDumpMdl.c)
 *     PopHiberWriteBootFreePageMap @ 0x140B4D4CC (PopHiberWriteBootFreePageMap.c)
 *     PopIsMktmeEnabled @ 0x140B4D574 (PopIsMktmeEnabled.c)
 *     PopMarkComponentsBootPhase @ 0x140B4D604 (PopMarkComponentsBootPhase.c)
 *     PopWriteChecksumPages @ 0x140B4E56C (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140B4E604 (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x140B4E820 (PopWriteHiberImage.c)
 *     PopWriteImageHeader @ 0x140B4EC1C (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x140B4FE94 (PopNotifyShutdownListener.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3)
{
  __int64 Number; // rbx
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // r13
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // r8d
  _DWORD *v13; // rcx
  _DWORD *v14; // rdx
  _RTL_BITMAP *v15; // rax
  _IMAGE_NT_HEADERS64 *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // rdi
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  unsigned __int64 v23; // rsi
  char *v24; // r12
  unsigned __int64 v25; // rbx
  _QWORD *v26; // rcx
  PVOID v27; // rax
  unsigned int v28; // r12d
  int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rbx
  ULONG v32; // eax
  _DWORD *v33; // rdi
  int v34; // esi
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned int v41; // r8d
  _QWORD *v42; // r9
  __int64 v43; // r11
  __int64 v44; // r10
  char *v45; // rdx
  __int64 v46; // rax
  ULONG v47; // eax
  _DWORD *v48; // rdi
  int v49; // esi
  __int64 v50; // rbx
  unsigned __int64 v51; // r14
  __int64 v52; // rdi
  unsigned __int64 v53; // rbx
  __int64 v54; // r9
  __int64 v55; // rcx
  char v57; // [rsp+38h] [rbp-D0h]
  int v58; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned __int64 v59; // [rsp+40h] [rbp-C8h]
  __m256i v60; // [rsp+48h] [rbp-C0h]
  __int128 v61; // [rsp+68h] [rbp-A0h]
  __int128 v62; // [rsp+78h] [rbp-90h]
  __int128 v63; // [rsp+88h] [rbp-80h]
  __int128 v64; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65; // [rsp+A8h] [rbp-60h]
  __m256i v66; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v67; // [rsp+D8h] [rbp-30h]
  __int128 v68; // [rsp+E8h] [rbp-20h]
  __int128 v69; // [rsp+F8h] [rbp-10h]
  __m256i v70; // [rsp+108h] [rbp+0h] BYREF
  __int128 v71; // [rsp+128h] [rbp+20h]
  __int128 v72; // [rsp+138h] [rbp+30h]
  __int128 v73; // [rsp+148h] [rbp+40h]
  _BYTE v74[24]; // [rsp+158h] [rbp+50h] BYREF
  void *Src; // [rsp+170h] [rbp+68h]
  size_t Size; // [rsp+180h] [rbp+78h]

  v65 = 0LL;
  v64 = 0LL;
  memset_0(v74, 0, 0x138uLL);
  v58 = 0;
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
    PopInternalError(0xA1DD5uLL);
  if ( (PopSimulateHiberBugcheck & 0x80u) != 0 )
  {
    v57 = 0;
LABEL_27:
    dword_140F0AE38 |= 4u;
    byte_140F0ADA1 = 1;
    goto LABEL_28;
  }
  v57 = IoDumpStackResumeCapable((__int64)&v58);
  if ( !v57 )
    goto LABEL_27;
LABEL_28:
  if ( (unsigned int)PshedArePluginsPresent() )
  {
    dword_140F0AE38 |= 8u;
    byte_140F0ADA1 = 1;
  }
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v5) )
  {
    dword_140F0AE38 |= 1u;
    byte_140F0ADA1 = 1;
  }
  if ( byte_140F0ADA1 && PopIsMktmeEnabled(v6) )
    KeBugCheckEx(0xA0u, 0x112uLL, 0xAuLL, BugCheckParameter3, 0LL);
  v7 = HvlHypervisorConnected == 0;
  v8 = *(_QWORD *)(BugCheckParameter3 + 216);
  *(_QWORD *)(BugCheckParameter3 + 176) = &v64;
  *(_QWORD *)(BugCheckParameter3 + 192) = &PoWakeState;
  *(_BYTE *)(BugCheckParameter3 + 1) = 1;
  if ( !v7 )
  {
    PopHibernateHvMinloopEnabled = 1;
    HvlDisableEnlightenment(0);
    guard_dispatch_icall_no_overrides(v9);
    if ( VslVsmEnabled || (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)(BugCheckParameter3 + 16), 1u);
      while ( *(_DWORD *)(BugCheckParameter3 + 16) != (_DWORD)KeNumberProcessors_0 )
        _mm_pause();
      v60.m256i_i64[0] = qword_140E275B8;
      *(_OWORD *)&v60.m256i_u64[1] = xmmword_140E27558;
      v60.m256i_i64[3] = qword_140E27550;
      *(_QWORD *)&v61 = qword_140E27570;
      *((_QWORD *)&v61 + 1) = qword_140E27568;
      v62 = xmmword_140E27598;
      v63 = xmmword_140E275A8;
      if ( *(_BYTE *)(BugCheckParameter3 + 484) )
      {
        v66 = v60;
        v67 = v61;
        v69 = v63;
        v68 = v62;
        v10 = HvlPrepareForSecureHibernate(&v66);
      }
      else
      {
        v70 = v60;
        v71 = v61;
        v73 = v63;
        v72 = v62;
        v10 = HvlPrepareForHibernate(
                (__int128 *)v70.m256i_i8,
                (_QWORD *)(v8 + 1128),
                (_QWORD *)(v8 + 1136),
                (_QWORD *)(v8 + 1144),
                (_QWORD *)(v8 + 1152));
      }
      v11 = v10;
      if ( v10 < 0 )
      {
        PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0xCuLL, v11, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
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
  ++*(_DWORD *)v8;
  v12 = 0;
  v13 = *(_DWORD **)(BugCheckParameter3 + 72);
  v14 = *(_DWORD **)(BugCheckParameter3 + 56);
  if ( (*(_DWORD *)(BugCheckParameter3 + 64) & 0xFFFFFFE0) != 0 )
  {
    do
    {
      ++v12;
      *v13++ |= *v14++;
    }
    while ( v12 < *(_DWORD *)(BugCheckParameter3 + 64) >> 5 );
  }
  v15 = (_RTL_BITMAP *)(BugCheckParameter3 + 48);
  if ( !byte_140F0ADA1 )
  {
    RtlCopyBitMap((PRTL_BITMAP)(BugCheckParameter3 + 64), (PRTL_BITMAP)(BugCheckParameter3 + 48), 0);
    v15 = (_RTL_BITMAP *)(BugCheckParameter3 + 64);
  }
  RtlSetAllBits(v15);
  *(_DWORD *)(BugCheckParameter3 + 200) = 8;
  PopHibernateInProgress = 1;
  IoGetDumpHiberRanges(v16, *(_QWORD *)(BugCheckParameter3 + 184));
  if ( !byte_140F0ADA1 )
    IoNotifyDump(1LL, v17);
  v18 = __rdtsc();
  v19 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 184));
  v20 = __rdtsc();
  qword_140F0B0E8 += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v18;
  if ( (v19 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
  {
    PopCheckpointSystemSleep(20);
    PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 184), 0x178u, 0LL);
    KeBugCheckEx(0xA0u, 0xCuLL, v19, *(_QWORD *)(BugCheckParameter3 + 184), 0LL);
  }
  PopMarkComponentsBootPhase((char *)BugCheckParameter3);
  v21 = *(_QWORD **)(BugCheckParameter3 + 80);
  while ( v21 != (_QWORD *)(BugCheckParameter3 + 80) )
  {
    v22 = v21;
    v21 = (_QWORD *)*v21;
    v23 = v22[4];
    v24 = (char *)v22[5];
    v25 = v22[3];
    *(_QWORD *)(BugCheckParameter3 + 104) += v23 - v25;
    while ( v25 < v23 )
    {
      PopCreateDumpMdl(BugCheckParameter3, (ULONG_PTR)v74, v25, v23);
      memmove(v24, Src, (unsigned int)Size);
      v24 += (unsigned int)Size;
      v25 += (unsigned __int64)(unsigned int)Size >> 12;
    }
  }
  PopResetRangeEnum((_QWORD *)BugCheckParameter3);
  v26 = *(_QWORD **)(BugCheckParameter3 + 176);
  v27 = qword_140F0AD78;
  *v26 = qword_140F0AD78;
  v26[1] = v27;
  v26[2] = 0LL;
  v59 = __rdtsc();
  v3 = PopWriteHeaderPages(BugCheckParameter3, (_DWORD *)v8);
  if ( v3 < 0 )
    goto LABEL_87;
  v28 = *(_DWORD *)(v8 + 80);
  if ( *(_BYTE *)(BugCheckParameter3 + 484) )
  {
    v29 = *(_DWORD *)(BugCheckParameter3 + 280) + 2;
    v30 = (*(_DWORD *)(BugCheckParameter3 + 32) >> 3) + 4095;
    *(_DWORD *)(BugCheckParameter3 + 200) = 3;
    *(_QWORD *)(v8 + 96) = (v30 >> 12) + v29;
    v31 = qword_140F0B0D8;
    PopWriteSecurePages(BugCheckParameter3);
    qword_140F0B3A0 = qword_140F0B0D8 - v31;
    qword_140F0B278 = *(unsigned int *)(BugCheckParameter3 + 284);
  }
  *(_DWORD *)(BugCheckParameter3 + 200) = 4;
  *(_QWORD *)(BugCheckParameter3 + 112) = BugCheckParameter3 + 64;
  v32 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 64));
  v33 = qword_140F0AE08;
  v34 = *(_DWORD *)(BugCheckParameter3 + 312);
  v35 = *(_QWORD *)(BugCheckParameter3 + 304);
  v36 = (v32 + *(_QWORD *)(BugCheckParameter3 + 104)) << 12;
  memset_0(qword_140F0AE08, 0, 0x40uLL);
  v33[6] = 0;
  v33[2] = v34;
  *(_QWORD *)v33 = v35;
  *((_QWORD *)v33 + 2) = v36;
  qword_140F0B280 = 0LL;
  qword_140F0B288 = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 360) = 0;
  *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
  v37 = qword_140F0B0D8;
  if ( v57 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 184) + 128LL) )
    *(_BYTE *)(BugCheckParameter3 + 424) = 1;
  v38 = *(_DWORD *)(BugCheckParameter3 + 284)
      + ((unsigned int)((*(_DWORD *)(BugCheckParameter3 + 32) >> 3) + 4095) >> 12)
      + *(_DWORD *)(BugCheckParameter3 + 280)
      + 2;
  *(_QWORD *)(v8 + 104) = v38;
  *(_QWORD *)(BugCheckParameter3 + 408) = v38 << 12;
  *(_BYTE *)(BugCheckParameter3 + 3) = 1;
  v39 = __rdtsc();
  PopWriteHiberImage(BugCheckParameter3, 1);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 8));
  while ( *(_DWORD *)(BugCheckParameter3 + 8) != *(_DWORD *)(BugCheckParameter3 + 288) )
    _mm_pause();
  v40 = __rdtsc();
  v41 = 0;
  for ( qword_140F0B3A8 = (((unsigned __int64)HIDWORD(v40) << 32) | (unsigned int)v40) - v39;
        v41 < *(_DWORD *)(BugCheckParameter3 + 288);
        *(_QWORD *)(168 * v46 + *(_QWORD *)(BugCheckParameter3 + 296) + 56) = 0LL )
  {
    v42 = &unk_140F0B340;
    v43 = 5LL;
    v44 = 168LL * v41 - (_QWORD)&unk_140F0B340;
    do
    {
      v45 = (char *)v42 + v44;
      *v42 += *(_QWORD *)((char *)v42 + v44 + *(_QWORD *)(BugCheckParameter3 + 296) + 88);
      ++v42;
      *(_QWORD *)&v45[*(_QWORD *)(BugCheckParameter3 + 296) + 88] = 0LL;
      --v43;
    }
    while ( v43 );
    qword_140F0B0F8 += *(_QWORD *)(168LL * v41 + *(_QWORD *)(BugCheckParameter3 + 296) + 40);
    *(_QWORD *)(168LL * v41 + *(_QWORD *)(BugCheckParameter3 + 296) + 40) = 0LL;
    qword_140F0B280 += *(_QWORD *)(168LL * v41 + *(_QWORD *)(BugCheckParameter3 + 296) + 56);
    v46 = v41++;
  }
  qword_140F0B390 = qword_140F0B0D8 - v37;
  qword_140F0B290 = qword_140F0B2B0;
  qword_140F0B2A0 = (unsigned int)dword_140F0B2B8;
  qword_140F0B2B0 = 0LL;
  dword_140F0B2B8 = 0;
  *(_DWORD *)(BugCheckParameter3 + 200) = 5;
  *(_QWORD *)(BugCheckParameter3 + 112) = BugCheckParameter3 + 48;
  *(_QWORD *)(BugCheckParameter3 + 128) = 0LL;
  v47 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 48));
  v48 = qword_140F0AE08;
  v49 = *(_DWORD *)(BugCheckParameter3 + 312);
  v50 = *(_QWORD *)(BugCheckParameter3 + 304);
  v51 = (unsigned __int64)v47 << 12;
  memset_0(qword_140F0AE08, 0, 0x40uLL);
  v48[6] = 0;
  *(_QWORD *)v48 = v50;
  v48[2] = v49;
  *((_QWORD *)v48 + 2) = v51;
  *(_QWORD *)(v8 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 408) + 4095LL) >> 12;
  v52 = qword_140F0B0D8;
  *(_DWORD *)(BugCheckParameter3 + 8) = 0;
  *(_QWORD *)(BugCheckParameter3 + 376) = 0LL;
  v53 = __rdtsc();
  PopWriteHiberImage(BugCheckParameter3, 0);
  qword_140F0B3B0 = __rdtsc() - v53;
  qword_140F0B398 = qword_140F0B0D8 - v52;
  PopHiberWriteBootFreePageMap(BugCheckParameter3, v8);
  *(_DWORD *)(BugCheckParameter3 + 200) = 7;
  PopWriteChecksumPages((_QWORD *)BugCheckParameter3);
  v54 = v59;
  *(_DWORD *)(BugCheckParameter3 + 200) = 6;
  PopWriteImageHeader(BugCheckParameter3, v8, v28, v54);
  v3 = *(_DWORD *)(BugCheckParameter3 + 204);
  if ( v3 < 0 )
    goto LABEL_87;
  if ( dword_140F0AE8C == dword_140F0AE94 )
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
LABEL_87:
    KdPowerTransition(4);
    if ( v3 >= 0 && dword_140F0AE8C == 5 )
    {
      PopNotifyShutdownListener();
      if ( HvlHypervisorConnected )
        HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
  }
  PopCheckpointSystemSleep(24);
  guard_dispatch_icall_no_overrides(v55);
  return (unsigned int)v3;
}
