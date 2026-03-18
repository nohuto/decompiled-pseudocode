/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1401693E0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140096080 (_tlgKeywordOn.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x14009C590 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z @ 0x1400CFD14 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1PEAIPEA_K@Z.c)
 *     McTemplateK0qqqzzzqx_EtwWriteTransfer @ 0x140115A78 (McTemplateK0qqqzzzqx_EtwWriteTransfer.c)
 *     McTemplateK0qqqzzzzqx_EtwWriteTransfer @ 0x14011E258 (McTemplateK0qqqzzzzqx_EtwWriteTransfer.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x140120F98 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     _GetTopLevelWindow @ 0x14012BDFC (_GetTopLevelWindow.c)
 *     Is_GetTopLevelWindowSupported @ 0x140131E9C (Is_GetTopLevelWindowSupported.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@44443AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x14013C2B8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U2@U2@U1@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapSz@G@@443AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14013CA4C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapSz@G@@U2@U2@U1@U-$_tlgWrapperByVal@$07@@U1@@-.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned int v3; // r8d
  int ThreadInfoFlags; // r14d
  const wchar_t *Buffer; // rdi
  const wchar_t *v6; // rsi
  struct tagWND *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 (__fastcall *TopLevelWindow)(__int64); // rax
  PEPROCESS ThreadProcess; // rax
  unsigned int *v14; // rdx
  __int64 v15; // r8
  wchar_t *v16; // r9
  ULONG64 v17; // rdx
  unsigned __int64 v18; // rax
  const wchar_t *v19; // rax
  __int64 v20; // rcx
  wchar_t *v21; // r15
  int v22; // eax
  const wchar_t *v23; // rdx
  const wchar_t *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  const WCHAR *v28; // rax
  const WCHAR *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // [rsp+80h] [rbp-2C8h] BYREF
  unsigned int v34; // [rsp+84h] [rbp-2C4h] BYREF
  unsigned int v35; // [rsp+88h] [rbp-2C0h] BYREF
  __int64 ProcessPeb; // [rsp+90h] [rbp-2B8h]
  int v37; // [rsp+98h] [rbp-2B0h]
  int v38; // [rsp+9Ch] [rbp-2ACh] BYREF
  unsigned int v39; // [rsp+A0h] [rbp-2A8h] BYREF
  unsigned int v40; // [rsp+A4h] [rbp-2A4h] BYREF
  unsigned int v41; // [rsp+A8h] [rbp-2A0h] BYREF
  const WCHAR *v42; // [rsp+B0h] [rbp-298h]
  struct tagTHREADINFO *v43; // [rsp+B8h] [rbp-290h] BYREF
  unsigned __int64 v44; // [rsp+C0h] [rbp-288h] BYREF
  PWSTR v45; // [rsp+C8h] [rbp-280h]
  wchar_t *v46; // [rsp+D0h] [rbp-278h]
  const wchar_t *v47; // [rsp+D8h] [rbp-270h]
  int v48; // [rsp+E0h] [rbp-268h] BYREF
  const WCHAR *v49; // [rsp+E8h] [rbp-260h] BYREF
  const WCHAR *v50; // [rsp+F0h] [rbp-258h] BYREF
  const WCHAR *v51; // [rsp+F8h] [rbp-250h] BYREF
  const WCHAR *v52; // [rsp+100h] [rbp-248h] BYREF
  const WCHAR *v53; // [rsp+108h] [rbp-240h] BYREF
  unsigned __int64 v54; // [rsp+110h] [rbp-238h]
  __int64 v55; // [rsp+118h] [rbp-230h] BYREF
  __int64 v56; // [rsp+120h] [rbp-228h] BYREF
  unsigned __int64 v57; // [rsp+128h] [rbp-220h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+130h] [rbp-218h] BYREF
  struct _UNICODE_STRING v59; // [rsp+140h] [rbp-208h] BYREF
  __int128 v60; // [rsp+150h] [rbp-1F8h]
  unsigned __int64 v61; // [rsp+170h] [rbp-1D8h]
  _BYTE v62[144]; // [rsp+180h] [rbp-1C8h] BYREF
  _BYTE v63[256]; // [rsp+210h] [rbp-138h] BYREF

  v43 = a1;
  if ( ((unsigned __int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_14029ADC8 - 1) <= 2u
     || (qword_14029ADB0 & 0x8001000000040000uLL) == 0
     || (qword_14029ADB8 & 0x8001000000040000uLL) != qword_14029ADB8
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( (unsigned int)dword_14029AF48 <= 5
      || !tlgKeywordOn((__int64)&dword_14029AF48, 0x400000000000LL)
      && (v3 <= 5 || !tlgKeywordOn((__int64)&dword_14029AF48, 0x40000LL)) )
    {
      return;
    }
  }
  v34 = 0;
  v33 = 0;
  v35 = 0;
  v44 = 0LL;
  UnicodeString = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 59),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v34,
    &v33,
    &v35,
    &v44);
  if ( v34 < 0x32 )
    return;
  if ( v33 < 0x32 )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v37 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 0x28) == 0 )
    return;
  Buffer = 0LL;
  v47 = 0LL;
  v6 = 0LL;
  v45 = 0LL;
  v7 = (struct tagWND *)ValidateHwndEx(*((_QWORD *)a1 + 164), 1, 0);
  v8 = (__int64)v7;
  if ( v7 )
  {
    if ( (int)EtwpGetClassName(v7, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v47 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported(v10, v9) < 0 )
      TopLevelWindow = 0LL;
    else
      TopLevelWindow = GetTopLevelWindow(v8, v11);
    if ( TopLevelWindow )
    {
      if ( (__int64 (__fastcall *)(__int64))v8 == TopLevelWindow )
      {
        v6 = Buffer;
        v45 = (PWSTR)Buffer;
      }
      else if ( (int)EtwpGetClassName((struct tagWND *const)TopLevelWindow, &v59) >= 0 )
      {
        v6 = v59.Buffer;
        v45 = v59.Buffer;
      }
    }
  }
  v46 = 0LL;
  v42 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v14 = (unsigned int *)(*(_QWORD *)(ProcessPeb + 32) + 96LL);
  if ( (unsigned __int64)v14 >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v15 = *v14;
  LODWORD(ProcessPeb) = v15;
  LODWORD(v60) = v15;
  v16 = (wchar_t *)*((_QWORD *)v14 + 1);
  *((_QWORD *)&v60 + 1) = v16;
  if ( ((unsigned __int8)v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = (ULONG64)v16 + (unsigned __int16)v15 + 2;
  if ( v17 <= (unsigned __int64)v16 || v17 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v15 > WORD1(ProcessPeb) )
  {
    if ( (v15 & 1) == 0 )
      goto LABEL_47;
    goto LABEL_46;
  }
  if ( (v15 & 1) != 0 )
  {
LABEL_46:
    LODWORD(ProcessPeb) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1137LL);
LABEL_47:
    ExRaiseAccessViolation();
  }
  v46 = v16;
  if ( (_WORD)v15 )
  {
    v61 = (unsigned __int64)(unsigned __int16)v15 >> 1;
    v18 = v61;
    v54 = v61;
    while ( v18 )
    {
      if ( v16[v18 - 1] == 92 )
      {
        if ( v18 == (unsigned __int64)(unsigned __int16)v15 >> 1 )
          v19 = L"Invalid";
        else
          v19 = &v16[v18];
        v42 = v19;
        break;
      }
      v54 = --v18;
    }
  }
  if ( !v42 )
    v42 = v46;
  v20 = *((_QWORD *)a1 + 58);
  if ( (*(_BYTE *)(v20 + 816) & 0x30) == 0x10 )
  {
    v21 = (wchar_t *)PsReferencePrimaryToken(*(PEPROCESS *)v20);
    v46 = v21;
    v56 = 256LL;
    v55 = 130LL;
    v22 = RtlQueryPackageIdentity(v21, v63, &v56, v62, &v55, 0LL);
    v37 = v22;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v23 = (const wchar_t *)v62;
      if ( v22 < 0 )
        v23 = &word_14025E168;
      v24 = (const wchar_t *)v63;
      if ( v22 < 0 )
        v24 = &word_14025E168;
      McTemplateK0qqqzzzzqx_EtwWriteTransfer(
        (__int64)v24,
        (__int64)v23,
        (unsigned int)v22,
        ThreadInfoFlags,
        v34,
        v33,
        Buffer,
        v6,
        v24,
        v23,
        v35,
        v44);
    }
    if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000040000LL) )
    {
      v48 = 2;
      v38 = 1;
      v57 = v44;
      v39 = v35;
      v53 = v6;
      v49 = Buffer;
      v50 = v42;
      v28 = (const WCHAR *)v62;
      if ( (int)v26 < 0 )
        v28 = &word_14025E168;
      v51 = v28;
      v29 = (const WCHAR *)v63;
      if ( (int)v26 < 0 )
        v29 = &word_14025E168;
      v52 = v29;
      v40 = v33;
      v41 = v34;
      LODWORD(v43) = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v25,
        byte_140275713,
        v26,
        v27,
        (__int64)&v43,
        (__int64)&v41,
        (__int64)&v40,
        &v52,
        &v51,
        &v50,
        &v49,
        &v53,
        (__int64)&v39,
        (__int64)&v57,
        (__int64)&v38,
        (__int64)&v48);
    }
    PsDereferencePrimaryToken(v21);
  }
  else
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      McTemplateK0qqqzzzqx_EtwWriteTransfer(v20, v17, v15, ThreadInfoFlags, v34, v33, Buffer, v6, v46, v35, v44);
    if ( (unsigned int)dword_14029AF48 > 5 && tlgKeywordOn((__int64)&dword_14029AF48, 0x400000040000LL) )
    {
      LODWORD(v43) = 1;
      v52 = (const WCHAR *)v44;
      v41 = v35;
      v51 = v6;
      v50 = Buffer;
      v49 = v42;
      v40 = v33;
      v39 = v34;
      v38 = ThreadInfoFlags;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v30,
        byte_140275659,
        v31,
        v32,
        (__int64)&v38,
        (__int64)&v39,
        (__int64)&v40,
        &v49,
        &v50,
        &v51,
        (__int64)&v41,
        (__int64)&v52,
        (__int64)&v43);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
  {
    if ( Buffer != v6 )
      RtlFreeUnicodeString(&v59);
  }
}
