/*
 * XREFs of NtUserOpenClipboard @ 0x140104A10
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140001940 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14003D99C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 *     _OpenClipboard @ 0x1401057A8 (_OpenClipboard.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1401D4B30 (-ForegroundInputOwnerMatch@@YAHPEBUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall NtUserOpenClipboard(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  __int64 v6; // rsi
  const wchar_t *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagTHREADINFO *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  const char *v27; // rbx
  int v28; // ecx
  int v29; // eax
  bool v30; // sf
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int LastError; // eax
  struct tagTHREADINFO *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // [rsp+40h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[8]; // [rsp+48h] [rbp-40h] BYREF
  const wchar_t *v55; // [rsp+90h] [rbp+8h] BYREF
  const wchar_t *v56; // [rsp+A0h] [rbp+18h] BYREF
  const char *v57; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(v55) = 0;
  EnterCrit(0LL, 0LL);
  if ( a1 )
  {
    v6 = ValidateHwnd(a1);
    if ( !v6 )
    {
      v23 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (const wchar_t *)(*((_QWORD *)PtiCurrent(v5, v4) + 58) + 984LL);
  v56 = v7;
  if ( *(_DWORD *)(W32GetUserSessionState(v9, v8) + 66132)
    || (v14 = PtiCurrent(v11, v10),
        v11 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 63016),
        *((_QWORD *)v14 + 62) == v11) )
  {
    if ( (unsigned int)dword_140398BF0 > 5
      && (qword_140398C00 & 0x400000000000LL) != 0
      && (qword_140398C08 & 0x400000000000LL) == qword_140398C08 )
    {
      v56 = v7;
      LODWORD(v55) = -2147024891;
      v27 = "OnLockscreen";
      v57 = "OnLockscreen";
      BugCheckParameter3[0] = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v11,
        (int)&unk_140366F6E,
        v12,
        (__int64)BugCheckParameter3,
        (void **)&v57,
        (__int64)&v55,
        &v56);
    }
    else
    {
      v27 = "OnLockscreen";
    }
    if ( (unsigned int)dword_140398BB8 <= 5 || (qword_140398BC8 & 1) == 0 || (qword_140398BD0 & 1) != qword_140398BD0 )
      goto LABEL_21;
LABEL_43:
    v56 = v7;
    LODWORD(v55) = -2147024891;
    v57 = v27;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v11,
      (__int64)&unk_140366F31,
      v12,
      v13,
      &v57,
      (__int64)&v55,
      &v56);
LABEL_21:
    v28 = 5;
LABEL_22:
    v23 = 0;
    UserSetLastError(v28);
    goto LABEL_17;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
  if ( CurrentProcessWin32Process )
  {
    v19 = -*(_QWORD *)CurrentProcessWin32Process;
    v18 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v18;
  }
  if ( *(_DWORD *)(CurrentProcessWin32Process + 876) )
  {
    v36 = PtiCurrent(v19, v18);
    v37 = *((_QWORD *)v36 + 62);
    v38 = *(_QWORD *)(v37 + 40);
    if ( !*(_QWORD *)(W32GetUserSessionState(v37, v39) + 18944) || !(unsigned int)ForegroundInputOwnerMatch(v36, 1) )
    {
      v42 = *(_QWORD *)(v38 + 112);
      if ( !v42 || *(struct tagTHREADINFO **)(v42 + 16) != v36 )
      {
        if ( (unsigned int)dword_140398BF0 > 5
          && (unsigned __int8)tlgKeywordOn(&dword_140398BF0, 0x400000000000LL, v40, v41) )
        {
          v56 = v7;
          LODWORD(v55) = -2147024891;
          v27 = "NoForeground";
          v57 = "NoForeground";
          v53 = 1LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
            v43,
            (int)&unk_140366F6E,
            v40,
            (__int64)&v53,
            (void **)&v57,
            (__int64)&v55,
            &v56);
        }
        else
        {
          v27 = "NoForeground";
        }
        if ( (unsigned int)dword_140398BB8 <= 5 || !(unsigned __int8)tlgKeywordOn(&dword_140398BB8, 1LL, v40, v41) )
          goto LABEL_21;
        goto LABEL_43;
      }
    }
  }
  if ( v6 )
  {
    v20 = PsGetCurrentProcessWin32Process(v19);
    v21 = v20;
    if ( v20 )
      v21 = -(__int64)(*(_QWORD *)v20 != 0LL) & v20;
    v22 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL);
    if ( *(_QWORD *)(v22 + 656) != *(_QWORD *)(v21 + 656) )
    {
      v44 = PsGetCurrentProcessWin32Process(v22);
      if ( v44 )
        v44 &= -(__int64)(*(_QWORD *)v44 != 0LL);
      if ( *(_QWORD *)(v44 + 656) )
      {
        v45 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL);
        if ( *(_QWORD *)(v45 + 656) )
          goto LABEL_62;
        v46 = PsGetCurrentProcessWin32Process(v45);
        if ( v46 )
          v46 &= -(__int64)(*(_QWORD *)v46 != 0LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v46 + 656) + 64LL) & 4) != 0 )
        {
LABEL_62:
          UserSetLastError(87);
          if ( (unsigned int)dword_140398BF0 > 5
            && (unsigned __int8)tlgKeywordOn(&dword_140398BF0, 0x400000000000LL, v47, v48) )
          {
            v56 = v7;
            LODWORD(v55) = -2147024809;
            v57 = "InvalidParameter";
            v53 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v49,
              (int)&unk_140366F6E,
              v47,
              (__int64)&v53,
              (void **)&v57,
              (__int64)&v55,
              &v56);
          }
          if ( (unsigned int)dword_140398BB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_140398BB8, 1LL, v47, v48) )
          {
            v56 = v7;
            LODWORD(v55) = -2147024809;
            v57 = "InvalidParameter";
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
              v50,
              (__int64)&unk_140366F31,
              v51,
              v52,
              &v57,
              (__int64)&v55,
              &v56);
          }
          v28 = 0;
          goto LABEL_22;
        }
      }
    }
  }
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, v6);
  v23 = OpenClipboard(v6, &v55);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v24);
  v5 = MmUserProbeAddress;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  *a2 = (_DWORD)v55;
  if ( (unsigned int)dword_140398BF0 > 5
    && (qword_140398C00 & 0x400000000000LL) != 0
    && (qword_140398C08 & 0x400000000000LL) == qword_140398C08 )
  {
    v57 = (const char *)v7;
    if ( v23 )
    {
      LastError = 0;
    }
    else
    {
      LastError = UserGetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    LODWORD(v55) = LastError;
    v53 = (__int64)"FunctionExit";
    BugCheckParameter3[0] = 1LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v5,
      (int)&unk_140366F6E,
      v25,
      (__int64)BugCheckParameter3,
      (void **)&v53,
      (__int64)&v55,
      (const wchar_t **)&v57);
  }
  if ( !v23 )
  {
    v29 = UserGetLastError();
    v30 = v29 < 0;
    if ( v29 > 0 )
      v30 = 1;
    if ( v30
      && (unsigned int)dword_140398BB8 > 5
      && (qword_140398BC8 & 1) != 0
      && (qword_140398BD0 & 1) == qword_140398BD0 )
    {
      v55 = v7;
      v31 = UserGetLastError();
      if ( v31 > 0 )
        v31 = (unsigned __int16)v31 | 0x80070000;
      LODWORD(v56) = v31;
      v57 = "FunctionExit";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v32,
        (__int64)&unk_140366F31,
        v33,
        v34,
        &v57,
        (__int64)&v56,
        &v55);
    }
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v5);
  return v23;
}
