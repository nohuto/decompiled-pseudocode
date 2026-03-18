/*
 * XREFs of xxxSetNCFonts @ 0x1C00CFFDC
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00D1EA0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1C001B770 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     GreCreateFontIndirectW @ 0x1C00C4BF8 (GreCreateFontIndirectW.c)
 *     GetCharDimensions @ 0x1C00CD400 (GetCharDimensions.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00CFDD8 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     UserSetFont @ 0x1C00D04FC (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C00D0848 (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C00D16B0 (GreMarkDeletableFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00D2224 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     GetDPIMetrics @ 0x1C00D8D88 (GetDPIMetrics.c)
 *     GreSelectFontInternal @ 0x1C011A874 (GreSelectFontInternal.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  HDC v3; // r15
  __int64 SessionDpiServerInfo; // r12
  __int64 v5; // r13
  __int64 SessionDpiMetrics; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  int CharDimensions; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *DPIMetrics; // rax
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  __int64 i; // rcx
  struct HLFONT__ *v22; // rcx
  int v23; // eax
  struct HLFONT__ *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  int v28; // edx
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  __int64 v33; // xmm0_8
  __int64 v35; // [rsp+28h] [rbp-E0h]
  __int64 v36; // [rsp+28h] [rbp-E0h]
  struct tagLOGFONTW v38; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v39[16]; // [rsp+A8h] [rbp-60h] BYREF
  int v40; // [rsp+B8h] [rbp-50h]

  memset(&v38.lfEscapement, 0, 60);
  memset_0(v39, 0, 0x5CuLL);
  v3 = *(HDC *)(gpDispInfo + 64LL);
  SessionDpiServerInfo = GetSessionDpiServerInfo();
  v5 = Get96DpiServerInfo();
  SessionDpiMetrics = GetSessionDpiMetrics();
  v7 = Get96DpiMetrics();
  v8 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v8, 139LL, SessionDpiServerInfo + 8)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiServerInfo + 8)) )
  {
    return 0LL;
  }
  *(_QWORD *)&v38.lfHeight = GreSelectFontInternal(v3, *(_QWORD *)(SessionDpiServerInfo + 8), 1LL);
  *(_DWORD *)(SessionDpiServerInfo + 16) = GetCharDimensions(v3, 0LL, (_DWORD *)(SessionDpiServerInfo + 20));
  GreSelectFontInternal(v3, *(_QWORD *)(v5 + 8), 1LL);
  CharDimensions = GetCharDimensions(v3, 0LL, (_DWORD *)(v5 + 20));
  v10 = a2 + 124;
  *(_DWORD *)(v5 + 16) = CharDimensions;
  if ( !a2 )
    v10 = v8;
  v35 = v10;
  if ( !(unsigned int)UserSetFont(a1, v10, 142LL, SessionDpiMetrics + 32)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 32)) )
  {
    return 0LL;
  }
  GreSelectFontInternal(v3, *(_QWORD *)(SessionDpiMetrics + 32), 1LL);
  *(_DWORD *)(SessionDpiMetrics + 40) = GetCharDimensions(v3, 0LL, (_DWORD *)(SessionDpiMetrics + 44));
  GreSelectFontInternal(v3, *(_QWORD *)(v7 + 32), 1LL);
  *(_DWORD *)(v7 + 40) = GetCharDimensions(v3, 0LL, (_DWORD *)(v7 + 44));
  v11 = a2 + 224;
  if ( !a2 )
    v11 = v35;
  v36 = v11;
  if ( !(unsigned int)UserSetFont(a1, v11, 145LL, SessionDpiMetrics)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)SessionDpiMetrics) )
  {
    return 0LL;
  }
  if ( gMenuState[17] )
  {
    DPIMetrics = (_QWORD *)GetDPIMetrics();
    GreSelectFontInternal(gMenuState[17], *DPIMetrics, 1LL);
  }
  GreSelectFontInternal(v3, *(_QWORD *)SessionDpiMetrics, 1LL);
  v13 = GetCharDimensions(v3, (__int64)&v38.lfEscapement, (_DWORD *)(SessionDpiMetrics + 12));
  v14 = *(_DWORD *)&v38.lfOutPrecision;
  v15 = *(_DWORD *)(SessionDpiMetrics + 12);
  *(_DWORD *)(SessionDpiMetrics + 8) = v13;
  *(_DWORD *)(SessionDpiMetrics + 16) = *(_DWORD *)&v38.lfFaceName[6];
  *(_DWORD *)(SessionDpiMetrics + 20) = v14;
  v16 = ((_WORD)v15 + (_WORD)v14 + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 28) = v15 + v14 + 2;
  *(_DWORD *)(SessionDpiMetrics + 24) = v38.lfOrientation;
  SetDpiDepSysMet(27LL, (unsigned int)(v16 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v16 - 1));
  GreSelectFontInternal(v3, *(_QWORD *)v7, 1LL);
  v17 = GetCharDimensions(v3, (__int64)&v38.lfEscapement, (_DWORD *)(v7 + 12));
  v18 = *(_DWORD *)&v38.lfOutPrecision;
  v19 = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v7 + 8) = v17;
  *(_DWORD *)(v7 + 16) = *(_DWORD *)&v38.lfFaceName[6];
  *(_DWORD *)(v7 + 20) = v18;
  *(_DWORD *)(v7 + 28) = v19 + v18 + 2;
  v20 = (((_WORD)v19 + (_WORD)v18 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v7 + 24) = v38.lfOrientation;
  for ( i = 2512LL; i < 2520; i += 4LL )
    *(_DWORD *)(i + gpsi) = v20;
  GreSelectFontInternal(v3, *(_QWORD *)&v38.lfHeight, 1LL);
  ++*(_DWORD *)(SessionDpiMetrics + 24);
  ++*(_DWORD *)(v7 + 24);
  v22 = *(struct HLFONT__ **)(SessionDpiMetrics + 48);
  if ( v22 && v22 != *(struct HLFONT__ **)(SessionDpiServerInfo + 24) )
  {
    GreMarkDeletableFont(v22);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 48));
    *(_QWORD *)(SessionDpiMetrics + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)SessionDpiMetrics, 92LL, (__int64)v39) )
    return 0LL;
  v23 = v40;
  if ( v40 <= 700 )
    v23 = 700;
  v40 = v23;
  *(_QWORD *)(SessionDpiMetrics + 48) = GreCreateFontIndirectW((__int64)v39, 0x88u);
  v24 = *(struct HLFONT__ **)(v7 + 48);
  if ( v24 && v24 != *(struct HLFONT__ **)(v5 + 24) )
  {
    GreMarkDeletableFont(v24);
    GreDeleteObject(*(_QWORD *)(v7 + 48));
    *(_QWORD *)(v7 + 48) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(HBRUSH *)v7, 92LL, (__int64)v39) )
    return 0LL;
  v25 = v40;
  if ( v40 <= 700 )
    v25 = 700;
  v40 = v25;
  *(_QWORD *)(v7 + 48) = GreCreateFontIndirectW((__int64)v39, 0x88u);
  v26 = a2 + 316;
  if ( !a2 )
    v26 = v36;
  if ( !(unsigned int)UserSetFont(a1, v26, 156LL, SessionDpiMetrics + 56)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 56)) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)(a2 + 408);
    *(_OWORD *)(gpsi + 5020LL) = *(_OWORD *)(a2 + 424);
    *(_OWORD *)(gpsi + 5036LL) = *(_OWORD *)(a2 + 440);
    *(_OWORD *)(gpsi + 5052LL) = *(_OWORD *)(a2 + 456);
    *(_OWORD *)(gpsi + 5068LL) = *(_OWORD *)(a2 + 472);
    *(_QWORD *)(gpsi + 5084LL) = *(_QWORD *)(a2 + 488);
    *(_DWORD *)(gpsi + 5092LL) = *(_DWORD *)(a2 + 496);
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile((struct tagLOGFONTW *)&v38.lfEscapement, a1, 0x9Du);
    v28 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v29 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v30 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    v31 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v32 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v33 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    *(_OWORD *)(gpsi + 5004LL) = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    *(_OWORD *)(gpsi + 5020LL) = v29;
    *(_OWORD *)(gpsi + 5036LL) = v30;
    *(_OWORD *)(gpsi + 5052LL) = v31;
    *(_OWORD *)(gpsi + 5068LL) = v32;
    *(_QWORD *)(gpsi + 5084LL) = v33;
    *(_DWORD *)(gpsi + 5092LL) = v28;
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  UpdateDpiMetricsCacheDPISERVERINFO();
  return 1LL;
}
