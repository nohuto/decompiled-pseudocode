/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x140169CA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x14009C590 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@35@Z @ 0x1400B1C74 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1400CFD14 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqqzzzqx_EtwWriteTransfer @ 0x1400F7D4C (McTemplateK0qqqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqzzzzqx_EtwWriteTransfer @ 0x14010B594 (McTemplateK0qqqqzzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x140120F98 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@335@Z @ 0x140123C70 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$.c)
 *     _GetTopLevelWindow @ 0x14012BDFC (_GetTopLevelWindow.c)
 *     Is_GetTopLevelWindowSupported @ 0x140131E9C (Is_GetTopLevelWindowSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned __int64 v3; // r13
  int v4; // eax
  unsigned int v5; // r12d
  int ThreadInfoFlags; // eax
  __int64 v7; // rcx
  int v8; // r15d
  const wchar_t *Buffer; // rdi
  const wchar_t *v10; // rsi
  wchar_t *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 (__fastcall *TopLevelWindow)(__int64); // rax
  int v16; // r13d
  PEPROCESS ThreadProcess; // rax
  ULONG64 v18; // rdx
  int v19; // ecx
  unsigned __int64 v20; // r8
  ULONG64 v21; // rdx
  PEPROCESS *v22; // rdx
  WCHAR *v23; // r14
  __int64 v24; // r8
  int v25; // r9d
  const wchar_t *v26; // rdx
  const wchar_t *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  const WCHAR *v31; // rax
  const WCHAR *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // [rsp+90h] [rbp-2D8h] BYREF
  unsigned int v37; // [rsp+94h] [rbp-2D4h] BYREF
  __int64 ProcessPeb; // [rsp+98h] [rbp-2D0h]
  int v39; // [rsp+A0h] [rbp-2C8h]
  int v40; // [rsp+A4h] [rbp-2C4h] BYREF
  int v41; // [rsp+A8h] [rbp-2C0h] BYREF
  unsigned int v42; // [rsp+ACh] [rbp-2BCh] BYREF
  unsigned int v43; // [rsp+B0h] [rbp-2B8h] BYREF
  int v44; // [rsp+B4h] [rbp-2B4h] BYREF
  wchar_t *v45; // [rsp+B8h] [rbp-2B0h]
  struct tagTHREADINFO *v46; // [rsp+C0h] [rbp-2A8h] BYREF
  const WCHAR *v47; // [rsp+C8h] [rbp-2A0h]
  PWSTR v48; // [rsp+D0h] [rbp-298h]
  const wchar_t *v49; // [rsp+D8h] [rbp-290h]
  int v50; // [rsp+E0h] [rbp-288h]
  int v51; // [rsp+E4h] [rbp-284h]
  int v52; // [rsp+E8h] [rbp-280h] BYREF
  const WCHAR *v53; // [rsp+F0h] [rbp-278h]
  const WCHAR *v54; // [rsp+F8h] [rbp-270h] BYREF
  const WCHAR *v55; // [rsp+100h] [rbp-268h] BYREF
  const WCHAR *v56; // [rsp+108h] [rbp-260h] BYREF
  const WCHAR *v57; // [rsp+110h] [rbp-258h] BYREF
  __int64 v58; // [rsp+118h] [rbp-250h] BYREF
  _QWORD v59[3]; // [rsp+120h] [rbp-248h] BYREF
  __int64 v60; // [rsp+138h] [rbp-230h] BYREF
  __int64 v61; // [rsp+140h] [rbp-228h] BYREF
  __int64 v62; // [rsp+148h] [rbp-220h] BYREF
  __int128 v63; // [rsp+150h] [rbp-218h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+160h] [rbp-208h] BYREF
  struct _UNICODE_STRING v65; // [rsp+170h] [rbp-1F8h] BYREF
  _BYTE v66[144]; // [rsp+1A0h] [rbp-1C8h] BYREF
  _BYTE v67[256]; // [rsp+230h] [rbp-138h] BYREF

  v46 = a1;
  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_14029ADC8 - 1) <= 2u
     || (qword_14029ADB0 & 0x8001000000040000uLL) == 0
     || (qword_14029ADB8 & 0x8001000000040000uLL) != qword_14029ADB8
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_14029AF48 <= 5 || !tlgKeywordOn((__int64)&dword_14029AF48, 0x40000LL) )
      return;
  }
  v37 = 0;
  v36 = 0;
  UnicodeString = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 326);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v50 = v3 - v4;
  if ( (unsigned int)(v3 - v4) < 0xC8 )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v8 = ThreadInfoFlags;
  v51 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < *(_DWORD *)(W32GetUserSessionState(v7) + 69368) )
    return;
  Buffer = 0LL;
  v49 = 0LL;
  v10 = 0LL;
  v48 = 0LL;
  v11 = (wchar_t *)ValidateHwndEx(*((_QWORD *)a1 + 164), 1, 0);
  v45 = v11;
  if ( v11 )
  {
    if ( (int)EtwpGetClassName((struct tagWND *const)v11, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v49 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported(v13, v12) < 0 )
      TopLevelWindow = 0LL;
    else
      TopLevelWindow = GetTopLevelWindow((__int64)v45, v14);
    if ( TopLevelWindow )
    {
      if ( v45 == (wchar_t *)TopLevelWindow )
      {
        v10 = Buffer;
        v48 = (PWSTR)Buffer;
      }
      else if ( (int)EtwpGetClassName((struct tagWND *const)TopLevelWindow, &v65) >= 0 )
      {
        v10 = v65.Buffer;
        v48 = v65.Buffer;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 59), v3, &v37, &v36, 0LL, 0LL);
  v16 = *((_DWORD *)a1 + 330);
  v39 = v16;
  v47 = (const WCHAR *)*((_QWORD *)a1 + 166);
  v53 = v47;
  v45 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v18 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
  if ( v18 >= MmUserProbeAddress )
    v18 = MmUserProbeAddress;
  v19 = *(_DWORD *)v18;
  LODWORD(ProcessPeb) = v19;
  LODWORD(v63) = v19;
  v20 = *(_QWORD *)(v18 + 8);
  *((_QWORD *)&v63 + 1) = v20;
  if ( (v20 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = v20 + (unsigned __int16)v19 + 2LL;
  if ( v21 <= v20 || v21 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v19 > WORD1(ProcessPeb) )
  {
    if ( (v19 & 1) == 0 )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( (v19 & 1) != 0 )
  {
LABEL_38:
    LODWORD(ProcessPeb) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 896LL);
LABEL_39:
    ExRaiseAccessViolation();
  }
  v59[1] = &v63;
  if ( &v63 )
    v45 = (wchar_t *)*((_QWORD *)&v63 + 1);
  v22 = (PEPROCESS *)*((_QWORD *)a1 + 58);
  if ( ((_BYTE)v22[102] & 0x30) == 0x10 )
  {
    v23 = (WCHAR *)PsReferencePrimaryToken(*v22);
    v53 = v23;
    v61 = 256LL;
    v60 = 130LL;
    v25 = RtlQueryPackageIdentity(v23, v67, &v61, v66, &v60, 0LL);
    v39 = v25;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v26 = (const wchar_t *)v66;
      if ( v25 < 0 )
        v26 = &word_14025E168;
      v27 = (const wchar_t *)v67;
      if ( v25 < 0 )
        v27 = &word_14025E168;
      McTemplateK0qqqqzzzzqx_EtwWriteTransfer(
        (__int64)v27,
        (__int64)v26,
        v24,
        v8,
        v5,
        v37,
        v36,
        Buffer,
        v10,
        v27,
        v26,
        v16,
        (char)v47);
    }
    if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x40000LL) )
    {
      v62 = 0x1000000LL;
      v52 = 2;
      v40 = 1;
      v59[0] = v47;
      v41 = v16;
      v54 = v10;
      v55 = Buffer;
      v56 = v45;
      v31 = (const WCHAR *)v66;
      if ( (int)v30 < 0 )
        v31 = (const WCHAR *)v29;
      v57 = v31;
      v32 = (const WCHAR *)v67;
      if ( (int)v30 < 0 )
        v32 = (const WCHAR *)v29;
      v58 = (__int64)v32;
      v42 = v36;
      v43 = v37;
      v44 = v5;
      LODWORD(v46) = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v28,
        byte_1402758CE,
        v29,
        v30,
        (__int64)&v46,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v42,
        (const WCHAR **)&v58,
        &v57,
        &v56,
        &v55,
        &v54,
        (__int64)&v41,
        (__int64)v59,
        (__int64)&v40,
        (__int64)&v52,
        (__int64)&v62);
    }
    PsDereferencePrimaryToken(v23);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqqzzzqx_EtwWriteTransfer(
        (__int64)v47,
        (__int64)v22,
        v20,
        v8,
        v5,
        v37,
        v36,
        Buffer,
        v10,
        v45,
        v16,
        (char)v47);
    if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x40000LL) )
    {
      v58 = 0x1000000LL;
      LODWORD(v46) = 1;
      v57 = v47;
      v44 = v16;
      v56 = v10;
      v55 = Buffer;
      v54 = v45;
      v43 = v36;
      v42 = v37;
      v41 = v5;
      v40 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v33,
        byte_1402757F7,
        v34,
        v35,
        (__int64)&v40,
        (__int64)&v41,
        (__int64)&v42,
        (__int64)&v43,
        &v54,
        &v55,
        &v56,
        (__int64)&v44,
        (__int64)&v57,
        (__int64)&v46,
        (__int64)&v58);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v10 )
  {
    if ( Buffer != v10 )
      RtlFreeUnicodeString(&v65);
  }
}
