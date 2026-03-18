/*
 * XREFs of xxxSetNCFonts @ 0x140112490
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x140112218 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreCreateFontIndirectW @ 0x140037A84 (GreCreateFontIndirectW.c)
 *     UserSetFont @ 0x1401CD7E8 (UserSetFont.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1401CD9B8 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 *     GetCharDimensions @ 0x1401CDCAC (GetCharDimensions.c)
 *     GreMarkDeletableFont @ 0x1401CDE34 (GreMarkDeletableFont.c)
 *     UpdateDpiMetricsCacheDPISERVERINFO @ 0x1401E28B8 (UpdateDpiMetricsCacheDPISERVERINFO.c)
 *     UserSetAltScaleFont @ 0x1401F345C (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x140212988 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 *     InvalidateSecondaryDpiMetrics @ 0x14028775C (InvalidateSecondaryDpiMetrics.c)
 *     InvalidateSecondaryDpiServerInfos @ 0x1402877B4 (InvalidateSecondaryDpiServerInfos.c)
 *     Get96DpiMetrics @ 0x1402F1598 (Get96DpiMetrics.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     GetSessionDpiMetrics @ 0x1402F1988 (GetSessionDpiMetrics.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xxxSetNCFonts(struct _UNICODE_STRING *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  HDC v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 SessionDpiMetrics; // r14
  __int64 v15; // rsi
  HFONT *v16; // r13
  __int64 v17; // rbx
  HFONT *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 UserSessionState; // rbx
  __int64 DpiMetricsForCurrentThread; // rax
  int CharDimensions; // eax
  LONG lfWeight; // ecx
  int v28; // edx
  int v29; // ebx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct HLFONT__ *v36; // rcx
  int v37; // eax
  struct HLFONT__ *v38; // rcx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // ebx
  __int64 v44; // rcx
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  struct tagLOGFONTW *LogFontFromUserProfile; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v51; // [rsp+20h] [rbp-E0h]
  __int64 v52; // [rsp+20h] [rbp-E0h]
  __int64 v53; // [rsp+28h] [rbp-D8h]
  __int64 v54; // [rsp+28h] [rbp-D8h]
  __int128 v55; // [rsp+28h] [rbp-D8h]
  __int128 v56; // [rsp+28h] [rbp-D8h]
  HFONT v57; // [rsp+38h] [rbp-C8h]
  HFONT v58[2]; // [rsp+38h] [rbp-C8h]
  HFONT v59[2]; // [rsp+38h] [rbp-C8h]
  __int64 v60; // [rsp+48h] [rbp-B8h]
  __int128 v61; // [rsp+48h] [rbp-B8h]
  __int128 v62; // [rsp+48h] [rbp-B8h]
  __int128 v63; // [rsp+58h] [rbp-A8h]
  __int128 v64; // [rsp+58h] [rbp-A8h]
  __int128 v65; // [rsp+68h] [rbp-98h]
  __int128 v66; // [rsp+68h] [rbp-98h]
  struct tagLOGFONTW v67; // [rsp+78h] [rbp-88h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v69; // [rsp+F0h] [rbp-10h]
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int128 v71; // [rsp+110h] [rbp+10h]
  __int128 v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+130h] [rbp+30h]
  int v74; // [rsp+138h] [rbp+38h]
  __int16 v75; // [rsp+13Ch] [rbp+3Ch]
  __int128 v76; // [rsp+140h] [rbp+40h] BYREF
  __int128 v77; // [rsp+150h] [rbp+50h]
  __int128 v78; // [rsp+160h] [rbp+60h]
  __int128 v79; // [rsp+170h] [rbp+70h]
  __int128 v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+190h] [rbp+90h]
  int v82; // [rsp+198h] [rbp+98h]

  memset(&v67, 0, 60);
  memset_0(&v76, 0, 0x5CuLL);
  v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 57008);
  v7 = *(HDC *)(v6 + 72);
  v9 = *(_QWORD *)(W32GetUserSessionState(v6, v8) + 19928);
  v60 = v9;
  v12 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19928);
  v51 = v12;
  SessionDpiMetrics = GetSessionDpiMetrics(v13);
  v15 = Get96DpiMetrics();
  v53 = (a2 + 24) & -(__int64)(a2 != 0);
  if ( !(unsigned int)UserSetFont(a1, v53, 139LL, v9 + 5104)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(v9 + 5104), v12 + 5208) )
  {
    return 0LL;
  }
  v57 = GreSelectFont(v7, *(HFONT *)(v9 + 5104));
  *(_DWORD *)(v9 + 5112) = GetCharDimensions(v7);
  GreSelectFont(v7, *(HFONT *)(v12 + 5208));
  *(_DWORD *)(v12 + 5216) = GetCharDimensions(v7);
  v16 = (HFONT *)(SessionDpiMetrics + 40);
  v17 = a2 + 124;
  if ( !a2 )
    v17 = v53;
  if ( !(unsigned int)UserSetFont(a1, v17, 142LL, SessionDpiMetrics + 40)
    || !(unsigned int)UserSetAltScaleFont(*v16, v15 + 40) )
  {
    return 0LL;
  }
  GreSelectFont(v7, *v16);
  *(_DWORD *)(SessionDpiMetrics + 48) = GetCharDimensions(v7);
  GreSelectFont(v7, *(HFONT *)(v15 + 40));
  *(_DWORD *)(v15 + 48) = GetCharDimensions(v7);
  v18 = (HFONT *)(SessionDpiMetrics + 8);
  v19 = a2 + 224;
  if ( !a2 )
    v19 = v17;
  v54 = v19;
  if ( !(unsigned int)UserSetFont(a1, v19, 145LL, SessionDpiMetrics + 8)
    || !(unsigned int)UserSetAltScaleFont(*v18, v15 + 8) )
  {
    return 0LL;
  }
  UserSessionState = W32GetUserSessionState(v21, v20);
  if ( *(_QWORD *)(UserSessionState + 66064) )
  {
    DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v23, v22);
    GreSelectFont(*(HDC *)(UserSessionState + 66064), *(HFONT *)(DpiMetricsForCurrentThread + 8));
  }
  GreSelectFont(v7, *v18);
  CharDimensions = GetCharDimensions(v7);
  lfWeight = v67.lfWeight;
  v28 = *(_DWORD *)(SessionDpiMetrics + 20);
  *(_DWORD *)(SessionDpiMetrics + 16) = CharDimensions;
  *(_DWORD *)(SessionDpiMetrics + 24) = *(_DWORD *)&v67.lfFaceName[2];
  *(_DWORD *)(SessionDpiMetrics + 28) = lfWeight;
  v29 = ((_WORD)v28 + (_WORD)lfWeight + 1) & 0xFFFE;
  *(_DWORD *)(SessionDpiMetrics + 36) = v28 + lfWeight + 2;
  *(_DWORD *)(SessionDpiMetrics + 32) = v67.lfWidth;
  SetDpiDepSysMet(27LL, (unsigned int)(v29 - 1));
  SetDpiDepSysMet(28LL, (unsigned int)(v29 - 1));
  GreSelectFont(v7, *(HFONT *)(v15 + 8));
  v30 = GetCharDimensions(v7);
  v31 = (unsigned int)v67.lfWeight;
  v32 = *(unsigned int *)(v15 + 20);
  *(_DWORD *)(v15 + 16) = v30;
  *(_DWORD *)(v15 + 24) = *(_DWORD *)&v67.lfFaceName[2];
  *(_DWORD *)(v15 + 28) = v31;
  v33 = (((_WORD)v32 + (_WORD)v31 + 1) & 0xFFFE) - 1;
  *(_DWORD *)(v15 + 36) = v32 + v31 + 2;
  *(_DWORD *)(v15 + 32) = v67.lfWidth;
  v34 = *(_QWORD *)(W32GetUserSessionState(v31, v32) + 19928);
  *(_DWORD *)(v34 + 2512) = v33;
  *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v34) + 19928) + 2516LL) = v33;
  GreSelectFont(v7, v57);
  ++*(_DWORD *)(SessionDpiMetrics + 32);
  ++*(_DWORD *)(v15 + 32);
  v36 = *(struct HLFONT__ **)(SessionDpiMetrics + 56);
  if ( v36 && v36 != *(struct HLFONT__ **)(v60 + 5120) )
  {
    GreMarkDeletableFont(v36);
    GreDeleteObject(*(_QWORD *)(SessionDpiMetrics + 56));
    *(_QWORD *)(SessionDpiMetrics + 56) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW((Gre::Base *)*v18, 92LL, &v76) )
    return 0LL;
  v37 = v77;
  v68 = v76;
  if ( (int)v77 <= 700 )
    v37 = 700;
  v70 = v78;
  LODWORD(v77) = v37;
  v69 = v77;
  v71 = v79;
  v73 = v81;
  v72 = v80;
  v74 = v82;
  v75 = 257;
  *(_QWORD *)(SessionDpiMetrics + 56) = GreCreateFontIndirectW(&v68);
  v38 = *(struct HLFONT__ **)(v15 + 56);
  if ( v38 && v38 != *(struct HLFONT__ **)(v51 + 5224) )
  {
    GreMarkDeletableFont(v38);
    GreDeleteObject(*(_QWORD *)(v15 + 56));
    *(_QWORD *)(v15 + 56) = 0LL;
  }
  if ( !(unsigned int)GreExtGetObjectW(*(Gre::Base **)(v15 + 8), 96LL, &v68) )
    return 0LL;
  v39 = v69;
  if ( (int)v69 <= 700 )
    v39 = 700;
  LODWORD(v69) = v39;
  *(_QWORD *)(v15 + 56) = GreCreateFontIndirectW(&v68);
  v40 = a2 + 316;
  if ( !a2 )
    v40 = v54;
  if ( !(unsigned int)UserSetFont(a1, v40, 156LL, SessionDpiMetrics + 64)
    || !(unsigned int)UserSetAltScaleFont(*(_QWORD *)(SessionDpiMetrics + 64), v15 + 64) )
  {
    return 0LL;
  }
  if ( a2 )
  {
    v43 = *(_DWORD *)(a2 + 496);
    v61 = *(_OWORD *)(a2 + 408);
    *(_OWORD *)v58 = *(_OWORD *)(a2 + 424);
    v55 = *(_OWORD *)(a2 + 440);
    v63 = *(_OWORD *)(a2 + 456);
    v65 = *(_OWORD *)(a2 + 472);
    v52 = *(_QWORD *)(a2 + 488);
    v44 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 19928);
    *(_OWORD *)(v44 + 5004) = v61;
    *(_OWORD *)(v44 + 5020) = *(_OWORD *)v58;
    v45 = v63;
    *(_OWORD *)(v44 + 5036) = v55;
    v46 = v65;
  }
  else
  {
    LogFontFromUserProfile = GetLogFontFromUserProfile(&v67, a1, 0x9Du);
    v43 = *(_DWORD *)&LogFontFromUserProfile->lfFaceName[30];
    v66 = *(_OWORD *)&LogFontFromUserProfile->lfHeight;
    v64 = *(_OWORD *)&LogFontFromUserProfile->lfWeight;
    v62 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[2];
    *(_OWORD *)v59 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[10];
    v56 = *(_OWORD *)&LogFontFromUserProfile->lfFaceName[18];
    v52 = *(_QWORD *)&LogFontFromUserProfile->lfFaceName[26];
    v44 = *(_QWORD *)(W32GetUserSessionState(v49, v48) + 19928);
    *(_OWORD *)(v44 + 5004) = v66;
    *(_OWORD *)(v44 + 5020) = v64;
    v45 = *(_OWORD *)v59;
    *(_OWORD *)(v44 + 5036) = v62;
    v46 = v56;
  }
  *(_OWORD *)(v44 + 5052) = v45;
  *(_OWORD *)(v44 + 5068) = v46;
  *(_QWORD *)(v44 + 5084) = v52;
  *(_DWORD *)(v44 + 5092) = v43;
  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
  {
    InvalidateSecondaryDpiServerInfos();
    InvalidateSecondaryDpiMetrics();
  }
  else
  {
    InvalidateKMDpiMetricsCacheDPIMETRICS();
    UpdateDpiMetricsCacheDPISERVERINFO();
  }
  return 1LL;
}
