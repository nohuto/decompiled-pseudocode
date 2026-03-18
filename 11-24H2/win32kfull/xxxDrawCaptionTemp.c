/*
 * XREFs of xxxDrawCaptionTemp @ 0x14007B5FC
 * Callers:
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     NtUserDrawCaption @ 0x140293FD0 (NtUserDrawCaption.c)
 *     NtUserDrawCaptionTemp @ 0x1402940D0 (NtUserDrawCaptionTemp.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1400379A0 (GreSetBkMode.c)
 *     FillRect @ 0x140038250 (FillRect.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     xxxClientExtTextOutW @ 0x14003C3AC (xxxClientExtTextOutW.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreSetTextColor @ 0x14007A278 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x14007A308 (GreSetBkColor.c)
 *     GreExtTextOutW @ 0x14007A7F4 (GreExtTextOutW.c)
 *     ?GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z @ 0x14007C108 (-GetWindowSmIcon@@YAPEAUtagCURSOR@@PEAUtagWND@@@Z.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     DrawTextExWorker @ 0x14007C800 (DrawTextExWorker.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     _GetTextMetricsW @ 0x14007CEE4 (_GetTextMetricsW.c)
 *     ?FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z @ 0x14007D008 (-FillCaptionGradient@@YAXPEAUHDC__@@PEBUtagRECT@@H@Z.c)
 *     xxxGetWindowText @ 0x14007D964 (xxxGetWindowText.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     _HasCaptionIcon @ 0x1400B43E8 (_HasCaptionIcon.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x140185654 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     TextCopy @ 0x14018D23C (TextCopy.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxDrawCaptionTemp(
        struct tagWND *a1,
        HDC a2,
        RECT *a3,
        HFONT a4,
        struct tagCURSOR *a5,
        __int64 a6,
        unsigned int a7)
{
  LONG left; // eax
  __int64 v9; // rcx
  struct tagCURSOR *WindowSmIcon; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r15d
  __int64 v20; // rdx
  HBRUSH v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 *v24; // rbx
  int WindowText; // eax
  __int64 v26; // r15
  unsigned __int64 v27; // rcx
  int v28; // ecx
  int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int TextAlign; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  HBRUSH v43; // rax
  int v44; // ebx
  __int64 DpiMetricsForCurrentThread; // rax
  HFONT v46; // rcx
  int v47; // edx
  __int64 DpiServerInfoForCurrentThread; // rax
  unsigned int Layout; // eax
  unsigned int v50; // ebx
  int v51; // r15d
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  __int64 UserSessionState; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  int v77; // eax
  int v78; // edx
  int v79; // eax
  int v80; // edx
  const WCHAR *SourceString; // [rsp+28h] [rbp-D8h]
  const WCHAR *SourceStringa; // [rsp+28h] [rbp-D8h]
  int v83; // [rsp+40h] [rbp-C0h]
  HBRUSH v84; // [rsp+48h] [rbp-B8h]
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  unsigned int v87; // [rsp+58h] [rbp-A8h]
  _BYTE v88[20]; // [rsp+60h] [rbp-A0h] BYREF
  HFONT v89; // [rsp+78h] [rbp-88h]
  int v90; // [rsp+80h] [rbp-80h]
  int v91; // [rsp+84h] [rbp-7Ch]
  int v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h]
  struct tagTHREADINFO *v94; // [rsp+98h] [rbp-68h]
  __int128 v95; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v96; // [rsp+B0h] [rbp-50h]
  __int128 v97; // [rsp+C0h] [rbp-40h]
  __int128 v98; // [rsp+D0h] [rbp-30h]
  __int64 v99; // [rsp+E0h] [rbp-20h]
  int v100; // [rsp+E8h] [rbp-18h]
  _WORD v101[256]; // [rsp+F0h] [rbp-10h] BYREF

  left = a3->left;
  v9 = a6;
  WindowSmIcon = a5;
  *(_QWORD *)v88 = a6;
  v89 = a4;
  v87 = 1;
  v85 = 0;
  v93 = 0LL;
  v86 = 0;
  if ( a3->right <= left )
    return 0LL;
  if ( a1
    && !a5
    && (unsigned int)HasCaptionIcon(a1)
    && (a7 & 2) == 0
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    WindowSmIcon = GetWindowSmIcon(a1);
  }
  v83 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, a2) + 19928) + 4572LL);
  v14 = a7 & 0x10;
  v90 = a7 & 1;
  if ( (a7 & 1) != 0 )
  {
    if ( (a7 & 0x10) != 0 )
    {
      v53 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928);
      if ( *(_WORD *)(v53 + 6996) >= 8u )
      {
        v54 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19928);
        v55 = *(_DWORD *)(v54 + 4648);
        v53 = *(_QWORD *)(W32GetUserSessionState(v54, v56) + 19928);
        if ( v55 == *(_DWORD *)(v53 + 4568) )
        {
          v57 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19928);
          v58 = *(_DWORD *)(v57 + 4648);
          v53 = *(_QWORD *)(W32GetUserSessionState(v57, v59) + 19928);
          if ( v58 != *(_DWORD *)(v53 + 4588) )
          {
            v60 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19928);
            v16 = *(_DWORD *)(v60 + 4640);
            v62 = *(_QWORD *)(W32GetUserSessionState(v60, v61) + 19928);
            v19 = *(_DWORD *)(v62 + 4648);
            v21 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v62, v63) + 19928) + 4856LL);
            goto LABEL_11;
          }
        }
      }
      v64 = *(_QWORD *)(W32GetUserSessionState(v53, v52) + 19928);
      v16 = *(_DWORD *)(v64 + 4628);
      v66 = *(_QWORD *)(W32GetUserSessionState(v64, v65) + 19928);
      v19 = *(_DWORD *)(v66 + 4648);
      v84 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v66, v67) + 19928) + 4944LL);
LABEL_57:
      v83 = GreSetBkMode(a2, 1);
      goto LABEL_12;
    }
    v39 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928);
    v16 = *(_DWORD *)(v39 + 4604);
    v41 = *(_QWORD *)(W32GetUserSessionState(v39, v40) + 19928);
    v19 = *(_DWORD *)(v41 + 4576);
    v43 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v41, v42) + 19928) + 4712LL);
LABEL_55:
    v84 = v43;
    if ( (a7 & 0x20) == 0 )
      goto LABEL_12;
    v85 = 1;
    goto LABEL_57;
  }
  if ( (a7 & 0x10) == 0 )
  {
    v68 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928);
    v16 = *(_DWORD *)(v68 + 4644);
    v70 = *(_QWORD *)(W32GetUserSessionState(v68, v69) + 19928);
    v19 = *(_DWORD *)(v70 + 4580);
    v43 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v70, v71) + 19928) + 4720LL);
    goto LABEL_55;
  }
  v15 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19928);
  v16 = *(_DWORD *)(v15 + 4640);
  v18 = *(_QWORD *)(W32GetUserSessionState(v15, v17) + 19928);
  v19 = *(_DWORD *)(v18 + 4628);
  v21 = *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v18, v20) + 19928) + 4816LL);
LABEL_11:
  v84 = v21;
LABEL_12:
  v91 = GreSetTextColor(a2, v16);
  v92 = GreSetBkColor(a2, v19);
  if ( WindowSmIcon && (a7 & 2) == 0 )
  {
    if ( (a7 & 4) != 0 )
    {
      Layout = GreGetLayout(a2);
      v50 = Layout;
      v51 = Layout & 1;
      if ( (Layout & 1) != 0 )
        GreSetLayout(a2, 0xFFFFFFFFLL, Layout | 8);
      DrawCaptionIcon(a2, a3, WindowSmIcon, v84, a7);
      if ( v51 )
        GreSetLayout(a2, 0xFFFFFFFFLL, v50);
    }
    else
    {
      v23 = (unsigned int)(a3->bottom - a3->top);
      a3->left += v23;
    }
  }
  if ( (a7 & 8) == 0 )
    goto LABEL_40;
  v95 = 0LL;
  v24 = *(__int128 **)v88;
  v94 = PtiCurrent(v23, v22);
  if ( !*(_QWORD *)v88 )
  {
    if ( a1 )
    {
      if ( (a7 & 0x2000) == 0 )
      {
        WindowText = xxxGetWindowText(a1, v101);
LABEL_18:
        v27 = (unsigned __int16)WindowText;
        LODWORD(v26) = WindowText;
        LOWORD(v27) = 2 * WindowText;
LABEL_19:
        LOWORD(v95) = v27;
        LOWORD(v27) = v27 + 2;
        v24 = &v95;
        WORD1(v95) = v27;
        *((_QWORD *)&v95 + 1) = v101;
        *(_QWORD *)v88 = &v95;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) )
      {
        *(_OWORD *)v88 = 0LL;
        StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)v88);
        WindowText = TextCopy(StrName, v101, 255LL);
        goto LABEL_18;
      }
    }
    v101[0] = 0;
    v27 = 0LL;
    LODWORD(v26) = 0;
    goto LABEL_19;
  }
  v27 = *(unsigned __int16 *)(*(_QWORD *)v88 + 2LL) - 2LL;
  if ( v27 >= (unsigned __int16)**(_WORD **)v88 )
    LOWORD(v27) = **(_WORD **)v88;
  **(_WORD **)v88 = v27;
  v26 = (unsigned __int16)v27 >> 1;
  *(_WORD *)(*((_QWORD *)v24 + 1) + 2 * v26) = 0;
LABEL_20:
  if ( v89 )
  {
    v99 = 0LL;
    v100 = 0;
    v96 = 0LL;
    v97 = 0LL;
    v98 = 0LL;
    v89 = GreSelectFont(a2, v89);
    if ( (unsigned int)GetTextMetricsW(a2) )
      v28 = v96;
    else
      v28 = *(_DWORD *)(GetDpiServerInfoForCurrentThread() + 40);
    v29 = (a3->top + a3->bottom - v28) / 2;
  }
  else
  {
    if ( (a7 & 2) != 0 )
    {
      DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v27, 2LL);
      v46 = *(HFONT *)(DpiMetricsForCurrentThread + 40);
      v47 = *(_DWORD *)(DpiMetricsForCurrentThread + 52);
    }
    else
    {
      DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread();
      v46 = *(HFONT *)(DpiServerInfoForCurrentThread + 8);
      v47 = *(_DWORD *)(DpiServerInfoForCurrentThread + 20);
    }
    v29 = (a3->top + a3->bottom - v47) / 2;
    v89 = GreSelectFont(a2, v46);
  }
  if ( v85 )
    FillCaptionGradient(a2, a3, v90);
  else
    FillRect(a2, a3, v84);
  v33 = *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19928);
  if ( v84 == *(HBRUSH *)(v33 + 4944) )
  {
    UserSessionState = W32GetUserSessionState(v33, v32);
    GreSetTextColor(a2, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19928) + 4640LL));
    v76 = W32GetUserSessionState(v75, v74);
    GreSetBkColor(a2, *(_DWORD *)(*(_QWORD *)(v76 + 19928) + 4636LL));
  }
  if ( (unsigned int)CALL_LPK(v94) )
    xxxClientGetTextExtentPointW(a2, *((PCWSTR *)v24 + 1));
  else
    GreGetTextExtentW(a2);
  if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
  {
    TextAlign = GreGetTextAlign(a2);
    v86 = GreSetTextAlign(a2, TextAlign | 0x100u);
  }
  if ( (a7 & 0x4000) != 0 || (v44 = v93, (_DWORD)v26) && (int)v93 > a3->right - a3->left - 2 )
  {
    *(_QWORD *)&v88[12] = 0LL;
    *(_QWORD *)v88 = 20LL;
    *(_DWORD *)&v88[8] = 2;
    if ( (a7 & 0x4000) != 0 )
    {
      v34 = 34853;
    }
    else if ( !a1 || (v34 = 34854, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) == 0) )
    {
      v34 = 34852;
    }
    DrawTextExWorker(a2, v34, (__int64)v88);
    v87 = 0;
  }
  else
  {
    if ( a1 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x10) != 0 )
    {
      v77 = CALL_LPK(v94);
      v78 = a3->right - v44 - 2;
      SourceString = *(const WCHAR **)(*(_QWORD *)v88 + 8LL);
      if ( v77 )
        xxxClientExtTextOutW(a2, v78, v29, 4u, a3, SourceString, v26);
      else
        GreExtTextOutW(a2, v78, v29, 4, (__int64)a3, (__int64)SourceString, v26);
LABEL_36:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 25LL) & 0x20) != 0 )
        GreSetTextAlign(a2, v86);
      goto LABEL_38;
    }
    v79 = CALL_LPK(v94);
    v80 = a3->left + 2;
    SourceStringa = *(const WCHAR **)(*(_QWORD *)v88 + 8LL);
    if ( v79 )
      xxxClientExtTextOutW(a2, v80, v29, 4u, a3, SourceStringa, v26);
    else
      GreExtTextOutW(a2, v80, v29, 4, (__int64)a3, (__int64)SourceStringa, v26);
  }
  if ( a1 )
    goto LABEL_36;
LABEL_38:
  if ( v89 )
    GreSelectFont(a2, v89);
LABEL_40:
  GreSetTextColor(a2, v91);
  GreSetBkColor(a2, v92);
  if ( v84 == *(HBRUSH *)(*(_QWORD *)(W32GetUserSessionState(v36, v35) + 19928) + 4944LL) )
    GreSetBkMode(a2, v83);
  return v87;
}
