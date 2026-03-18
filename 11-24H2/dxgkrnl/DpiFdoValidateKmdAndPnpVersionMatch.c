/*
 * XREFs of DpiFdoValidateKmdAndPnpVersionMatch @ 0x1403F0520
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x14000471C (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x14007D284 (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     IsKnownMismatchedVersionedDriver @ 0x14023C708 (IsKnownMismatchedVersionedDriver.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x140393240 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403D3630 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiGetDriverFullPath @ 0x140404974 (DpiGetDriverFullPath.c)
 */

__int64 __fastcall DpiFdoValidateKmdAndPnpVersionMatch(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r12
  unsigned int v4; // r13d
  __int64 v5; // rcx
  int DriverFullPath; // eax
  int FileVersion; // eax
  _WORD *v8; // r8
  __int64 v9; // r9
  _WORD *v10; // rax
  unsigned __int16 LowPart; // dx
  __int64 v12; // r8
  __int64 *v13; // rax
  unsigned int *v14; // r10
  int v15; // r9d
  unsigned int i; // r8d
  NTSTATUS v17; // r15d
  unsigned int j; // ebx
  unsigned int v19; // r15d
  unsigned int v20; // edi
  int v21; // eax
  NTSTATUS v22; // eax
  union _LARGE_INTEGER v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r11d
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  union _LARGE_INTEGER v33; // [rsp+70h] [rbp-98h] BYREF
  union _LARGE_INTEGER v34[2]; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v37; // [rsp+90h] [rbp-78h] BYREF
  int v38; // [rsp+94h] [rbp-74h] BYREF
  int v39; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING String; // [rsp+A0h] [rbp-68h] BYREF
  union _LARGE_INTEGER v41; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  union _LARGE_INTEGER *v43; // [rsp+C0h] [rbp-48h] BYREF
  PVOID P[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-30h] BYREF
  int v46; // [rsp+E0h] [rbp-28h]
  __int128 v47; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v48; // [rsp+F8h] [rbp-10h] BYREF
  int v49; // [rsp+100h] [rbp-8h]

  v1 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)P = 0LL;
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 40LL) + 28LL);
  if ( v4 < 0x6000
    || *(_DWORD *)(a1 + 1124) == 1297040209 && v4 < 0x8000
    || *(_BYTE *)(a1 + 2717)
    || *(_BYTE *)(a1 + 2716)
    || dword_140161378 == 5
    || *(_BYTE *)(a1 + 481)
    || *(_BYTE *)(a1 + 2718)
    || *(_BYTE *)(a1 + 1158) )
  {
    goto LABEL_56;
  }
  v5 = *(_QWORD *)(a1 + 24);
  v33.QuadPart = 0LL;
  DriverFullPath = DpiGetDriverFullPath(v5, P);
  if ( DriverFullPath < 0 )
  {
    WdLogSingleEntry1(2LL, DriverFullPath);
    WdLogGlobalForLineNumber = 9080;
    goto LABEL_56;
  }
  FileVersion = DxgkpGetFileVersion((struct _UNICODE_STRING *)P, &v33, 0LL);
  if ( FileVersion < 0 )
  {
    WdLogSingleEntry1(2LL, FileVersion);
    WdLogGlobalForLineNumber = 9091;
    goto LABEL_56;
  }
  v8 = *(_WORD **)(a1 + 4968);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    WdLogGlobalForLineNumber = 9100;
    goto LABEL_56;
  }
  *(_OWORD *)&v34[0].LowPart = 0LL;
  v9 = 0x7FFFLL;
  v10 = v8;
  while ( *v10 )
  {
    ++v10;
    if ( !--v9 )
    {
      LowPart = v34[0].LowPart;
      goto LABEL_21;
    }
  }
  v34[1].QuadPart = (LONGLONG)v8;
  LowPart = 2 * (0x7FFF - v9);
  LOWORD(v34[0].LowPart) = LowPart;
  HIWORD(v34[0].u.LowPart) = LowPart + 2;
LABEL_21:
  v12 = 0x7FFFLL;
  v48 = *(_QWORD *)L"00000";
  v49 = *(_DWORD *)L"0";
  v13 = &v48;
  String = 0LL;
  while ( *(_WORD *)v13 )
  {
    v13 = (__int64 *)((char *)v13 + 2);
    if ( !--v12 )
      goto LABEL_26;
  }
  String.Buffer = (wchar_t *)&v48;
  String.Length = 2 * (0x7FFF - v12);
  String.MaximumLength = String.Length + 2;
LABEL_26:
  v45 = 0LL;
  v47 = 0LL;
  v46 = 0;
  v14 = (unsigned int *)&v45;
  v15 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= LowPart >> 1 )
    {
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 9125;
      goto LABEL_56;
    }
    if ( *(_WORD *)(v34[1].QuadPart + 2LL * i) == 46 )
    {
      *v14++ = i;
      ++v15;
    }
    if ( v15 == 3 )
      break;
  }
  v17 = 0;
  for ( j = 0; j <= 3; ++j )
  {
    if ( j )
    {
      v19 = *((_DWORD *)&v45 + j - 1) + 1;
      if ( j == 3 )
      {
        v20 = LowPart >> 1;
        goto LABEL_37;
      }
    }
    else
    {
      v19 = 0;
    }
    v20 = *((_DWORD *)&v45 + j);
LABEL_37:
    if ( v19 >= v20 || v20 > LowPart >> 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9133;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"startCharIndex < endCharIndex && endCharIndex <= (PnPDriverVersionString.Length / sizeof(WCHAR))",
        9133LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v21 = RtlUnicodeStringCchCopyStringN(&String, (wchar_t *)(v34[1].QuadPart + 2LL * v19), v20 - v19);
    if ( v21 < 0 )
    {
      WdLogSingleEntry1(2LL, v21);
      WdLogGlobalForLineNumber = 9142;
      goto LABEL_56;
    }
    v22 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v47 + j);
    v17 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry1(2LL, v22);
      WdLogGlobalForLineNumber = 9153;
      goto LABEL_56;
    }
    LowPart = v34[0].LowPart;
  }
  v23 = v33;
  HIDWORD(v32) = WORD2(v47) | ((_DWORD)v47 << 16);
  LODWORD(v32) = WORD6(v47) | (DWORD2(v47) << 16);
  v24 = v32;
  if ( v32 != v33.QuadPart && !IsKnownMismatchedVersionedDriver(*(_DWORD *)(a1 + 1124), (__int64)&v32, (__int64)&v33) )
  {
    if ( (unsigned int)dword_14015E650 > 5 && tlgKeywordOn((__int64)&dword_14015E650, 0x400000000100LL) )
    {
      v35 = *(_DWORD *)(a1 + 1140);
      v36 = *(_DWORD *)(a1 + 1136);
      v37 = *(_DWORD *)(a1 + 1132);
      v38 = *(_DWORD *)(a1 + 1128);
      v43 = v34;
      v39 = v28;
      v41 = v23;
      v42 = v24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v25,
        (__int64)&unk_14013EBCE,
        v26,
        v27,
        (unsigned __int16 **)&v43,
        (__int64)&v42,
        (__int64)&v41,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35);
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
      2LL,
      a1,
      v24,
      (union _LARGE_INTEGER)v23.QuadPart,
      v17,
      -1073741438LL);
    v29 = *(unsigned int *)(a1 + 1124);
    WdLogGlobalForLineNumber = 9186;
    DxgCreateLiveDumpWithWdLogs(403LL, 2059LL, v29, v33.HighPart, v23.LowPart, v4 >= 0xB000);
    LOBYTE(v30) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v30) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detected. The a"
        "dapter will fail to start.");
      __debugbreak();
    }
    v3 = 1;
  }
LABEL_56:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return v3 != 0 ? 0xC0000182 : 0;
}
