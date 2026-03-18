/*
 * XREFs of NtUserGetWindowCompositionAttribute @ 0x1402974D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x140046BBC (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x140046CE0 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x140046DB4 (IsTopLevelOrLayeredChildWindow.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z @ 0x1401FC558 (-GetWindowCompositionCornerStyle@@YAJPEAUtagWND@@PEAW4CORNER_STYLE@@@Z.c)
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEAUtagWND@@@Z @ 0x1402519A0 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEAUtagWND@@@Z.c)
 *     DwmSyncGetCompositionAttribute @ 0x14025C770 (DwmSyncGetCompositionAttribute.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserGetWindowCompositionAttribute(__int64 a1, void *a2)
{
  NTSTATUS WindowCompositionCornerStyle; // edi
  __int64 v4; // rsi
  __m128i v5; // xmm6
  size_t v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentProcessWow64Process; // rax
  int v11; // ebx
  void *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  struct tagRECT *v26; // rax
  __int64 v27; // rcx
  struct tagWND *v28; // r8
  int v29; // r8d
  __int64 v30; // rax
  LONG *v31; // rbx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  int v40; // ebx
  bool v41; // sf
  ULONG v42; // eax
  int v44; // [rsp+20h] [rbp-278h]
  struct tagRECT Src; // [rsp+28h] [rbp-270h] BYREF
  __int64 v46; // [rsp+38h] [rbp-260h]
  __int64 v47; // [rsp+58h] [rbp-240h] BYREF
  void *v48; // [rsp+60h] [rbp-238h]
  size_t Size; // [rsp+68h] [rbp-230h]
  __m128i v50; // [rsp+70h] [rbp-228h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-218h]
  volatile void *Address[2]; // [rsp+88h] [rbp-210h]
  SIZE_T v53; // [rsp+98h] [rbp-200h]
  __int64 v54[3]; // [rsp+B0h] [rbp-1E8h] BYREF
  _OWORD v55[3]; // [rsp+C8h] [rbp-1D0h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-1A0h]
  _OWORD v57[3]; // [rsp+100h] [rbp-198h] BYREF
  __int64 v58; // [rsp+130h] [rbp-168h]
  _OWORD v59[3]; // [rsp+138h] [rbp-160h] BYREF
  __int64 v60; // [rsp+168h] [rbp-130h]
  _OWORD v61[3]; // [rsp+170h] [rbp-128h] BYREF
  __int64 v62; // [rsp+1A0h] [rbp-F8h]
  _OWORD v63[3]; // [rsp+1A8h] [rbp-F0h] BYREF
  __int64 v64; // [rsp+1D8h] [rbp-C0h]
  _OWORD v65[3]; // [rsp+1E0h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+210h] [rbp-88h]
  _OWORD v67[3]; // [rsp+218h] [rbp-80h] BYREF
  __int64 v68; // [rsp+248h] [rbp-50h]

  v47 = a1;
  WindowCompositionCornerStyle = -1073741811;
  v44 = -1073741811;
  *(_OWORD *)Address = 0LL;
  v53 = 0LL;
  v4 = 0LL;
  Size = 0LL;
  Src = 0LL;
  v46 = 0LL;
  v50 = 0LL;
  Length = 0LL;
  RtlCopyFromUser(&v50, a2, 0x18uLL);
  v5 = v50;
  *(__m128i *)Address = v50;
  v53 = Length;
  v6 = (unsigned int)Length;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v7, v9);
  ProbeForWrite(
    (volatile void *)_mm_srli_si128(v5, 8).m128i_i64[0],
    (unsigned int)v6,
    CurrentProcessWow64Process != 0 ? 1 : 4);
  v11 = _mm_cvtsi128_si32(v5);
  if ( (unsigned int)(v11 - 1) <= 0x24 )
  {
    Size = *(_QWORD *)&word_1403579D8[8 * v50.m128i_i32[0]];
    WindowCompositionCornerStyle = v6 < Size ? 0xC0000023 : 0;
    v44 = WindowCompositionCornerStyle;
  }
  if ( WindowCompositionCornerStyle < 0 )
    goto LABEL_90;
  v12 = 0LL;
  v48 = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(v54, 1LL);
  v15 = ValidateHwnd(a1);
  if ( !v15 )
    goto LABEL_48;
  if ( v11 == 18 || v11 == 23 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 18953);
  if ( v11 == 21 )
  {
    v16 = (*(_DWORD *)(v15 + 384) >> 2) & 1;
LABEL_44:
    Src.left = v16;
    goto LABEL_50;
  }
  if ( !IsTopLevelWindow(v15) && (v11 != 20 || !(unsigned int)IsTopLevelOrLayeredChildWindow(v15)) )
  {
    WindowCompositionCornerStyle = -1073741816;
LABEL_14:
    v44 = WindowCompositionCornerStyle;
    goto LABEL_52;
  }
  switch ( v11 )
  {
    case 1:
      v16 = (unsigned __int8)IsWindowNCRenderingEnabled((__m128i **)v15);
      goto LABEL_44;
    case 20:
      memset(v55, 0, sizeof(v55));
      v56 = 0LL;
      if ( !_GetWindowCompositionInfo((struct tagTHREADINFO **)v15, (struct WINDOWCOMPOSITIONINFO *)v55) )
        goto LABEL_50;
      v17 = (v55[0] & 0x1000) == 0;
      goto LABEL_37;
    case 24:
      memset(v57, 0, sizeof(v57));
      v58 = 0LL;
      if ( !_GetWindowCompositionInfo((struct tagTHREADINFO **)v15, (struct WINDOWCOMPOSITIONINFO *)v57) )
        goto LABEL_50;
      v17 = (v57[0] & 0x4000) == 0;
      goto LABEL_37;
    case 25:
      memset(v59, 0, sizeof(v59));
      v60 = 0LL;
      if ( !_GetWindowCompositionInfo((struct tagTHREADINFO **)v15, (struct WINDOWCOMPOSITIONINFO *)v59) )
        goto LABEL_50;
      v17 = (v59[0] & 0x8000) == 0;
      goto LABEL_37;
    case 26:
      memset(v61, 0, sizeof(v61));
      v62 = 0LL;
      if ( !_GetWindowCompositionInfo((struct tagTHREADINFO **)v15, (struct WINDOWCOMPOSITIONINFO *)v61) )
        goto LABEL_50;
      v17 = (v61[0] & 0x10000) == 0;
      goto LABEL_37;
    case 27:
      WindowCompositionCornerStyle = GetWindowCompositionCornerStyle(
                                       (struct tagTHREADINFO **)v15,
                                       (enum CORNER_STYLE *)&Src);
      v44 = WindowCompositionCornerStyle;
      goto LABEL_50;
    case 29:
      memset(v63, 0, sizeof(v63));
      v64 = 0LL;
      if ( !_GetWindowCompositionInfo((struct tagTHREADINFO **)v15, (struct WINDOWCOMPOSITIONINFO *)v63) )
        goto LABEL_50;
      v17 = (v63[0] & 0x20000) == 0;
      goto LABEL_37;
    case 34:
      memset(v65, 0, sizeof(v65));
      v66 = 0LL;
      if ( !_GetWindowCompositionInfo((struct tagTHREADINFO **)v15, (struct WINDOWCOMPOSITIONINFO *)v65) )
        goto LABEL_50;
      v17 = DWORD2(v65[0]) == 0;
LABEL_37:
      if ( !v17 )
        Src.left = 1;
      goto LABEL_50;
    case 35:
LABEL_40:
      WindowCompositionCornerStyle = -1073741811;
      goto LABEL_14;
    case 30:
      memset(v67, 0, sizeof(v67));
      v68 = 0LL;
      if ( !_GetWindowCompositionInfo((struct tagTHREADINFO **)v15, (struct WINDOWCOMPOSITIONINFO *)v67) )
        goto LABEL_50;
      v16 = v68;
      goto LABEL_44;
  }
  if ( (unsigned int)(v11 - 31) <= 1 )
  {
    WindowCompositionCornerStyle = -1073741811;
    goto LABEL_49;
  }
  if ( v11 == 37 )
    goto LABEL_40;
  if ( !(unsigned int)IsWindowDesktopComposed(v15) )
  {
LABEL_48:
    WindowCompositionCornerStyle = -1073741816;
LABEL_49:
    v44 = WindowCompositionCornerStyle;
  }
LABEL_50:
  if ( WindowCompositionCornerStyle >= 0 )
  {
    v12 = (void *)ReferenceDwmApiPort(v14, v13);
    v48 = v12;
  }
LABEL_52:
  UserSessionSwitchLeaveCrit(v14);
  if ( WindowCompositionCornerStyle < 0 )
    goto LABEL_88;
  if ( v11 > 17 )
  {
    if ( v11 > 26 )
    {
      v37 = v11 - 27;
      if ( !v37 )
        goto LABEL_88;
      v38 = v37 - 1;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( !v39 )
          goto LABEL_88;
        v40 = v39 - 1;
        if ( !v40 )
          goto LABEL_88;
        v36 = v40 - 3;
        if ( v36 )
          goto LABEL_86;
      }
    }
    else
    {
      if ( v11 == 26 )
        goto LABEL_88;
      v32 = v11 - 18;
      if ( !v32 )
        goto LABEL_88;
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( !v34 )
          goto LABEL_88;
        v35 = v34 - 1;
        if ( !v35 )
          goto LABEL_88;
        v36 = v35 - 2;
        if ( !v36 )
          goto LABEL_88;
LABEL_86:
        if ( (unsigned int)(v36 - 1) < 2 )
          goto LABEL_88;
      }
    }
LABEL_87:
    WindowCompositionCornerStyle = -1073741811;
    goto LABEL_88;
  }
  if ( v11 == 17 )
    goto LABEL_87;
  if ( v11 > 9 )
  {
    if ( v11 != 12 )
      goto LABEL_87;
    v30 = PsGetCurrentProcessWow64Process(v19, v18, v20);
    v31 = (LONG *)Address[1];
    ProbeForRead(Address[1], 4uLL, v30 != 0 ? 1 : 4);
    Src.left = *v31;
    WindowCompositionCornerStyle = v44;
    if ( v44 < 0 )
      goto LABEL_88;
    v29 = 12;
LABEL_69:
    WindowCompositionCornerStyle = DwmSyncGetCompositionAttribute(v12, a1, v29, &Src);
    v12 = 0LL;
    goto LABEL_88;
  }
  if ( v11 == 9 )
    goto LABEL_87;
  v21 = v11 - 1;
  if ( !v21 )
    goto LABEL_88;
  v22 = v21 - 1;
  if ( !v22 )
    goto LABEL_87;
  v23 = v22 - 1;
  if ( !v23 )
    goto LABEL_87;
  v24 = v23 - 1;
  if ( !v24 )
    goto LABEL_87;
  v25 = v24 - 1;
  if ( !v25 )
  {
    v29 = 5;
    goto LABEL_69;
  }
  if ( v25 != 3 )
    goto LABEL_87;
  EnterLeaveCritShared::EnterLeaveCritShared(&v47, 1LL);
  v26 = (struct tagRECT *)ValidateHwnd(a1);
  if ( v26 )
  {
    Src = *WindowMargins::GetPhysicalFrameBounds((WindowMargins *)&v50, v26, v28);
    WindowCompositionCornerStyle = 0;
  }
  else
  {
    WindowCompositionCornerStyle = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v27);
LABEL_88:
  DereferenceDwmApiPort(v12);
  if ( WindowCompositionCornerStyle < 0 )
  {
LABEL_90:
    v42 = RtlNtStatusToDosError(WindowCompositionCornerStyle);
    UserSetLastError(v42);
    v41 = WindowCompositionCornerStyle < 0;
    goto LABEL_91;
  }
  memmove((void *)Address[1], &Src, Size);
  v41 = WindowCompositionCornerStyle < 0;
LABEL_91:
  LOBYTE(v4) = !v41;
  return v4;
}
