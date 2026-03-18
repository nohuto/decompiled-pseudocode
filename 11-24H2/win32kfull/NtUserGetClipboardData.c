/*
 * XREFs of NtUserGetClipboardData @ 0x1402418A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x140001940 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x14003D99C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14003E060 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     UserGetLastError @ 0x1400841A4 (UserGetLastError.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1400945E8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     xxxGetClipboardData @ 0x140104130 (xxxGetClipboardData.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     Feature_ReadClipboardEvent__private_IsEnabledPreCheck @ 0x1401ED08C (Feature_ReadClipboardEvent__private_IsEnabledPreCheck.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1402808EC (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

void *__fastcall NtUserGetClipboardData(unsigned int a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // r14
  const wchar_t *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct tagWINDOWSTATION *v11; // r15
  __int64 v12; // r8
  const char *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  void *ClipboardData; // rbx
  bool HasUILimit; // al
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // r8
  int LastError; // eax
  int v29; // eax
  bool v30; // sf
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  const char *v36; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-A0h] BYREF
  const char *v38; // [rsp+50h] [rbp-98h] BYREF
  LONGLONG TimeQuadPart; // [rsp+60h] [rbp-88h] BYREF
  HANDLE ThreadProcessId; // [rsp+70h] [rbp-78h]
  LONGLONG v41[2]; // [rsp+78h] [rbp-70h] BYREF
  __int64 v42; // [rsp+88h] [rbp-60h] BYREF
  __int128 Src; // [rsp+90h] [rbp-58h] BYREF
  _QWORD v44[3]; // [rsp+A8h] [rbp-40h] BYREF
  const wchar_t *v45; // [rsp+100h] [rbp+18h] BYREF
  const wchar_t *v46; // [rsp+108h] [rbp+20h] BYREF

  Src = 0LL;
  EnterCrit(0LL, 0LL);
  UserSetLastError(0);
  v6 = PtiCurrent(v5, v4);
  v7 = (const wchar_t *)(*((_QWORD *)v6 + 58) + 984LL);
  v45 = v7;
  v11 = CheckClipboardAccess(v9, v8);
  if ( !v11 )
  {
    if ( (unsigned int)dword_140398BF0 > 5 && tlgKeywordOn((__int64)&dword_140398BF0, 0x400000000000LL) )
    {
      v46 = v7;
      LODWORD(v45) = -2147024891;
      v13 = "AccessDenied";
      v37 = (__int64)"AccessDenied";
      v36 = (const char *)1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        (int)&unk_140366FF7,
        v12,
        (__int64)&v36,
        (void **)&v37,
        (__int64)&v45,
        &v46);
    }
    else
    {
      v13 = "AccessDenied";
    }
    if ( (unsigned int)dword_140398BB8 <= 5 || !tlgKeywordOn((__int64)&dword_140398BB8, 1LL) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    HasUILimit = tagPROCESSINFO::HasUILimit(*((tagPROCESSINFO **)v6 + 58), 2u);
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v6 + 132, 0, 0) & 0x20000000) != 0 )
      v18 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 58) + 760LL) + 32LL) & 2;
    else
      v18 = 0;
    HasUILimit = v18 != 0;
  }
  if ( HasUILimit )
  {
    UserSetLastError(5);
    if ( (unsigned int)dword_140398BF0 > 5 && tlgKeywordOn((__int64)&dword_140398BF0, 0x400000000000LL) )
    {
      v46 = v7;
      LODWORD(v45) = -2147024891;
      v13 = "RestrictedThread";
      v36 = "RestrictedThread";
      v37 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        (int)&unk_140366FF7,
        v19,
        (__int64)&v37,
        (void **)&v36,
        (__int64)&v45,
        &v46);
    }
    else
    {
      v13 = "RestrictedThread";
    }
    if ( (unsigned int)dword_140398BB8 <= 5 || !tlgKeywordOn((__int64)&dword_140398BB8, 1LL) )
      goto LABEL_9;
LABEL_8:
    v36 = v13;
    LODWORD(v45) = -2147024891;
    v46 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v10,
      (__int64)&unk_140366FB7,
      v14,
      v15,
      &v36,
      (__int64)&v45,
      &v46);
LABEL_9:
    ClipboardData = 0LL;
    goto LABEL_57;
  }
  if ( !*(_DWORD *)(*((_QWORD *)v6 + 58) + 876LL) || (unsigned int)InForegroundQueue(v6, 1) && (a1 == 1 || a1 == 13) )
  {
    Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v44, v11);
    Feature_ReadClipboardEvent__private_IsEnabledPreCheck();
    LODWORD(ThreadProcessId) = 0;
    TimeQuadPart = 0LL;
    v25 = *((_QWORD *)v11 + 14);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 16);
      ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v26);
      TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(v26 + 464));
    }
    v41[0] = PsGetProcessCreateTimeQuadPart(**((PEPROCESS **)v6 + 58));
    EtwTraceUiAuditReadClipboard(
      *(unsigned int *)(*((_QWORD *)v6 + 58) + 56LL),
      v41,
      (unsigned int)ThreadProcessId,
      &TimeQuadPart,
      *((_DWORD *)v11 + 36));
    LODWORD(Src) = a1;
    ClipboardData = xxxGetClipboardData((struct tagTHREADINFO **)v11, a1, (__int64)&Src);
    if ( ClipboardData )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (void *)MmUserProbeAddress;
      RtlCopyVolatileMemory(a2, &Src, 0x10uLL);
    }
    Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)v44);
    if ( (unsigned int)dword_140398BF0 > 5 && tlgKeywordOn((__int64)&dword_140398BF0, 0x400000000000LL) )
    {
      v45 = v7;
      if ( ClipboardData )
      {
        LastError = 0;
      }
      else
      {
        LastError = UserGetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
      }
      LODWORD(v46) = LastError;
      v38 = "FunctionExit";
      v42 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v10,
        (int)&unk_140366FF7,
        v27,
        (__int64)&v42,
        (void **)&v38,
        (__int64)&v46,
        &v45);
    }
    if ( !ClipboardData )
    {
      v29 = UserGetLastError();
      v30 = v29 < 0;
      if ( v29 > 0 )
        v30 = 1;
      if ( v30 && (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 1LL) )
      {
        v45 = v7;
        v31 = UserGetLastError();
        if ( v31 > 0 )
          v31 = (unsigned __int16)v31 | 0x80070000;
        LODWORD(v37) = v31;
        v46 = (const wchar_t *)"FunctionExit";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          v32,
          (__int64)&unk_140366FB7,
          v33,
          v34,
          &v46,
          (__int64)&v37,
          &v45);
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_140398BF0 > 5 && tlgKeywordOn((__int64)&dword_140398BF0, 0x400000000000LL) )
    {
      v46 = v7;
      LODWORD(v45) = -2147024891;
      v36 = "UnsupportedFormatForLowBoxApp";
      v37 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v20,
        (int)&unk_140366FF7,
        v21,
        (__int64)&v37,
        (void **)&v36,
        (__int64)&v45,
        &v46);
    }
    if ( (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 1LL) )
    {
      v46 = v7;
      LODWORD(v45) = -2147024891;
      v36 = "UnsupportedFormatForLowBoxApp";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v22,
        (__int64)&unk_140366FB7,
        v23,
        v24,
        &v36,
        (__int64)&v45,
        &v46);
    }
    ClipboardData = 0LL;
    UserSetLastError(5);
  }
LABEL_57:
  UserSessionSwitchLeaveCrit(v10);
  return ClipboardData;
}
