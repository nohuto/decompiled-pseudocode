/*
 * XREFs of RIMIDECreateHIDDesc @ 0x1400C8E60
 * Callers:
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMSearchHidTLCInfo @ 0x1400C9484 (RIMSearchHidTLCInfo.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     IsProcessHidRawInputSupported @ 0x1400C9610 (IsProcessHidRawInputSupported.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1400C9648 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1400C970C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E67B0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     RIMIDEFreeInjectedInfo @ 0x140131BC4 (RIMIDEFreeInjectedInfo.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x140146DF8 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMIsInteractiveCtrl @ 0x140151E50 (RIMIsInteractiveCtrl.c)
 *     RIMIDEAllocateInjectedInfo @ 0x14019FB00 (RIMIDEAllocateInjectedInfo.c)
 *     RIMFreeHidDesc @ 0x1401DD0C4 (RIMFreeHidDesc.c)
 *     RIMFreePointerDevice @ 0x1401E03EC (RIMFreePointerDevice.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1401E3074 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall RIMIDECreateHIDDesc(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  __int128 v4; // xmm1
  __int64 v6; // r13
  __int128 v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int16 epi16; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  __int128 v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 UserSessionState; // rax
  __int64 v18; // rcx
  char v19; // r14
  bool v20; // r12
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  USAGE Usage; // r8
  USAGE UsagePage; // eax^2
  char v27; // si
  bool v28; // r13
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  char v32; // r14
  bool v33; // r12
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  __int64 v37; // r14
  __int64 v38; // r8
  unsigned int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v46; // r8
  __m128i v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  _HIDP_CAPS v52; // [rsp+90h] [rbp-70h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+100h] [rbp+0h]
  _HIDP_CAPS Capabilities; // [rsp+110h] [rbp+10h] BYREF
  _HIDP_DEVICE_DESC DeviceDescription; // [rsp+150h] [rbp+50h] BYREF

  v3 = 0;
  v4 = *(_OWORD *)(a3 + 56);
  v6 = a1;
  *(_OWORD *)&DeviceDescription.CollectionDesc = *(_OWORD *)(a3 + 24);
  v7 = *(_OWORD *)(a3 + 40);
  v8 = 0LL;
  v9 = 0LL;
  *(_OWORD *)&DeviceDescription.Dbg.ErrorCode = v4;
  *(_OWORD *)&DeviceDescription.ReportIDs = v7;
  *(_OWORD *)&DeviceDescription.Dbg.Args[3] = *(_OWORD *)(a3 + 72);
  memset(&Capabilities, 0, sizeof(Capabilities));
  v53 = *(_OWORD *)&DeviceDescription.CollectionDesc->UsagePage;
  v50 = *(__m128i *)&DeviceDescription.CollectionDesc->Reserved[11];
  PreparsedData = DeviceDescription.CollectionDesc->PreparsedData;
  epi16 = _mm_extract_epi16(v50, 5);
  if ( HidP_GetCaps(PreparsedData, &Capabilities) >= 0 && Capabilities.InputReportByteLength && epi16 )
  {
    v12 = Win32AllocPoolZInitImpl(256LL, 0x78uLL, 0x44687352u);
    v8 = v12;
    v13 = v12;
    if ( !v12 )
      goto LABEL_6;
    v14 = *(_OWORD *)&Capabilities.Usage;
    *(_QWORD *)(a2 + 440) = v12;
    *(_OWORD *)(v12 + 40) = v14;
    *(_OWORD *)(v12 + 56) = *(_OWORD *)&Capabilities.Reserved[3];
    *(_OWORD *)(v12 + 72) = *(_OWORD *)&Capabilities.Reserved[11];
    *(_OWORD *)(v12 + 88) = *(_OWORD *)&Capabilities.NumberInputValueCaps;
    v15 = Win32AllocPoolZInitImpl(256LL, *(unsigned __int16 *)(v12 + 44), 0x6A6E6952u);
    *(_QWORD *)(v13 + 24) = v15;
    if ( !v15 || (v16 = Win32AllocPoolZInitImpl(256LL, epi16, 0x6A6E6952u), (*(_QWORD *)(v13 + 16) = v16) == 0LL) )
LABEL_6:
      v3 = 1;
  }
  else
  {
    v3 = 1;
  }
  UserSessionState = W32GetUserSessionState(v10);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v51,
    (struct RIMLOCK *)(UserSessionState + 104));
  if ( !v3 )
  {
    memmove(*(void **)(v8 + 16), PreparsedData, epi16);
    *(_QWORD *)(v8 + 104) = epi16;
    *(_DWORD *)(v8 + 112) = 0x10000;
    v9 = RIMSearchHidTLCInfo(Capabilities.UsagePage, Capabilities.Usage);
    if ( v9 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v18 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v18 & 1) == 0)
        || (v19 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v19 = 0;
      }
      v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = W32GetUserSessionState(v18);
        LOBYTE(v22) = v20;
        LOBYTE(v23) = v19;
        WPP_RECORDER_AND_TRACE_SF_DDq(*((_QWORD *)WPP_GLOBAL_Control + 3), v23, v22, *(_QWORD *)(v21 + 19392));
      }
      goto LABEL_19;
    }
    v9 = RIMAllocateAndLinkHidTLCInfo(Capabilities.UsagePage, Capabilities.Usage);
    if ( !v9 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v29 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v30) = v28;
        LOBYTE(v31) = v27;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v31,
          v30,
          *(_QWORD *)(v29 + 19392),
          3,
          1,
          14,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
          a1);
      }
      v6 = a1;
      v3 = 1;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v32 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v32 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v32;
      WPP_RECORDER_AND_TRACE_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v36,
        v35,
        *(_QWORD *)(v34 + 19392),
        4,
        1,
        15,
        (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
        v9,
        Capabilities.UsagePage,
        Capabilities.Usage);
    }
  }
  if ( v3 )
  {
    v37 = a3;
LABEL_41:
    v38 = *(_QWORD *)&Capabilities.Usage;
    goto LABEL_42;
  }
LABEL_19:
  ++*(_DWORD *)(v9 + 20);
  Usage = Capabilities.Usage;
  UsagePage = Capabilities.UsagePage;
  *(_QWORD *)(a2 + 448) = v9;
  if ( UsagePage == 13 && ((unsigned __int16)(Usage - 1) <= 1u || (unsigned __int16)(Usage - 4) <= 1u) )
  {
    v37 = a3;
    *(_OWORD *)&v52.Usage = v53;
    *(_QWORD *)&v52.Reserved[11] = PreparsedData;
    *(__m128i *)&v52.Reserved[3] = v50;
    if ( !(unsigned int)RIMIDECreatePointerDeviceInfo(v6, a2, a3, v8, &v52) )
      v3 = 1;
    goto LABEL_41;
  }
  v52 = Capabilities;
  v37 = a3;
  if ( (unsigned int)RIMIsInteractiveCtrl(&v52) )
    *(_DWORD *)(a2 + 184) |= 0x100u;
LABEL_42:
  if ( v51 )
  {
    RIMUnlockExclusive(v51);
    v38 = *(_QWORD *)&Capabilities.Usage;
  }
  if ( !v3 )
  {
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(v6, Capabilities.UsagePage, v38) )
    {
      v39 = *(_DWORD *)(a2 + 168) & 0xFFFCFFFF | 0x10000;
      *(_DWORD *)(a2 + 184) |= 0x40u;
      *(_DWORD *)(a2 + 168) = v39;
    }
    else if ( *(_DWORD *)(v6 + 1056) )
    {
      v40 = IsProcessHidRawInputSupported();
      v41 = Capabilities.Usage;
      v42 = Capabilities.UsagePage;
      *(_DWORD *)(a2 + 168) = ((v40 >= 0) << 17) | *(_DWORD *)(a2 + 168) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(*(_QWORD *)(v6 + 32), v42, v41) )
        goto LABEL_56;
    }
    v43 = RIMIDEAllocateInjectedInfo(v37);
    *(_QWORD *)(a2 + 368) = v43;
    if ( !v43 )
    {
LABEL_56:
      v3 = 1;
      goto LABEL_60;
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v44);
    v46 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v46 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    *(_QWORD *)(v46 + 816) |= 0x200000uLL;
    *(_QWORD *)(*(_QWORD *)(a2 + 368) + 88LL) = v46;
  }
LABEL_60:
  *(_DWORD *)(v37 + 136) = 0;
  HidP_FreeCollectionDescription(&DeviceDescription);
  DeviceDescription.CollectionDesc = 0LL;
  if ( !v3 )
    return v8;
  if ( v8 )
    RIMFreeHidDesc((PVOID)v8);
  if ( *(_QWORD *)(a2 + 456) )
  {
    RIMFreePointerDevice(v6);
    *(_QWORD *)(a2 + 456) = 0LL;
  }
  RIMIDEFreeInjectedInfo(a2);
  return 0LL;
}
