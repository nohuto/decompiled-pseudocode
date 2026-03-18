/*
 * XREFs of NtUserSetClipboardData @ 0x1C01DA370
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C001149C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     UserGetLastError @ 0x1C00164E8 (UserGetLastError.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C002FD74 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CB2E8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _SetClipboardData @ 0x1C01FD39C (_SetClipboardData.c)
 */

__int64 __fastcall NtUserSetClipboardData(unsigned int a1, void *a2, __int64 *a3)
{
  __int64 v6; // rcx
  const unsigned __int16 *v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  const char *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // r11
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int LastError; // eax
  int v32; // eax
  bool v33; // sf
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  LONGLONG TimeQuadPart; // [rsp+50h] [rbp-48h] BYREF
  __int64 v40; // [rsp+58h] [rbp-40h] BYREF
  const char *v41; // [rsp+60h] [rbp-38h] BYREF
  __int64 v42; // [rsp+68h] [rbp-30h] BYREF
  __int64 v43; // [rsp+B8h] [rbp+20h] BYREF

  v43 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = *(_QWORD *)(gptiCurrent + 424LL);
  v7 = (const unsigned __int16 *)(v6 + 1008);
  v40 = v6 + 1008;
  v8 = *(_DWORD *)(v6 + 56);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)v6);
  EtwTraceUiAuditWriteClipboard(v8, &TimeQuadPart);
  v9 = gptiCurrent;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x20000000) != 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 768LL);
    v10 = *(_DWORD *)(v9 + 24) & 4;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
  {
    EtwTraceUiLimitWriteClipboard(v8, &TimeQuadPart);
    if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
    {
      v40 = (__int64)v7;
      LODWORD(v43) = -2147024891;
      v13 = "RestrictedThread";
      v41 = "RestrictedThread";
      v42 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v11,
        byte_1C031BDBB,
        v12,
        (__int64)&v42,
        (void **)&v41,
        (__int64)&v43,
        (const unsigned __int16 **)&v40);
    }
    else
    {
      v13 = "RestrictedThread";
    }
    if ( (unsigned int)dword_1C0354098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
      goto LABEL_12;
    goto LABEL_11;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_DWORD *)(CurrentProcessWin32Process + 900) )
  {
    v23 = gptiCurrent;
    v24 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL);
    if ( !gpqForeground || (LOBYTE(v25) = ForegroundInputOwnerMatch(gptiCurrent, 1), !v25) )
    {
      if ( v23 != *(_QWORD *)(v24 + 80) )
      {
        v26 = *(_QWORD *)(v24 + 112);
        if ( !v26 || *(_QWORD *)(v26 + 16) != v23 )
        {
          if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
          {
            v42 = (__int64)v7;
            LODWORD(v43) = -2147024891;
            v13 = "NoForeground";
            v41 = "NoForeground";
            v40 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v27,
              byte_1C031BDBB,
              v28,
              (__int64)&v40,
              (void **)&v41,
              (__int64)&v43,
              (const unsigned __int16 **)&v42);
          }
          else
          {
            v13 = "NoForeground";
          }
          if ( (unsigned int)dword_1C0354098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
            goto LABEL_12;
          goto LABEL_11;
        }
      }
    }
    if ( a1 != 1 && a1 != 13 )
    {
      if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
      {
        v42 = (__int64)v7;
        LODWORD(v43) = -2147024891;
        v13 = "UnsupportedFormatForLowBoxApp";
        v41 = "UnsupportedFormatForLowBoxApp";
        v40 = 1LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v29,
          byte_1C031BDBB,
          v30,
          (__int64)&v40,
          (void **)&v41,
          (__int64)&v43,
          (const unsigned __int16 **)&v42);
      }
      else
      {
        v13 = "UnsupportedFormatForLowBoxApp";
      }
      if ( (unsigned int)dword_1C0354098 <= 5 || !tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
        goto LABEL_12;
LABEL_11:
      LODWORD(v43) = -2147024891;
      v41 = v13;
      v42 = (__int64)v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v14,
        byte_1C031BD7B,
        v15,
        v16,
        (void **)&v41,
        (__int64)&v43,
        (const unsigned __int16 **)&v42);
LABEL_12:
      v17 = 0;
      UserSetLastError(5);
      goto LABEL_55;
    }
  }
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int64 *)MmUserProbeAddress;
  v43 = *a3;
  v17 = SetClipboardData(a1, a2, v43 != 0, HIDWORD(v43) != 0);
  if ( (unsigned int)dword_1C0354060 > 5 && tlgKeywordOn((__int64)&dword_1C0354060, 0x400000000000LL) )
  {
    v42 = (__int64)v7;
    if ( v17 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    LODWORD(v43) = LastError;
    v41 = "FunctionExit";
    v40 = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v19,
      byte_1C031BDBB,
      v20,
      (__int64)&v40,
      (void **)&v41,
      (__int64)&v43,
      (const unsigned __int16 **)&v42);
  }
  if ( !v17 )
  {
    v32 = UserGetLastError();
    v33 = v32 < 0;
    if ( v32 > 0 )
      v33 = 1;
    if ( v33 && (unsigned int)dword_1C0354098 > 5 && tlgKeywordOn((__int64)&dword_1C0354098, 1LL) )
    {
      v42 = (__int64)v7;
      v34 = UserGetLastError();
      if ( v34 > 0 )
        v34 = (unsigned __int16)v34 | 0x80070000;
      LODWORD(v43) = v34;
      v41 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v35,
        byte_1C031BD7B,
        v36,
        v37,
        (void **)&v41,
        (__int64)&v43,
        (const unsigned __int16 **)&v42);
    }
  }
LABEL_55:
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v17;
}
