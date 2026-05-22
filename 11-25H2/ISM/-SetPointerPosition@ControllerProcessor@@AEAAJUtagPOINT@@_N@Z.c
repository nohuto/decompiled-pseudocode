/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18017A6D0
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017839C (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x180179D30 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x18017B084 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x18017B4F4 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1801791D4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x18017A50C (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(ControllerProcessor *this, struct tagPOINT a2, char a3)
{
  char v6; // r14
  int v7; // edi
  DWORD TickCount; // eax
  int v9; // eax
  ULONGLONG TickCount64; // rax
  int v11; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+9Ch] [rbp-64h]
  int v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A4h] [rbp-5Ch]
  __int16 v23; // [rsp+AAh] [rbp-56h]
  int v24; // [rsp+B4h] [rbp-4Ch]
  int v25; // [rsp+B8h] [rbp-48h]
  char v26; // [rsp+CCh] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  *(struct tagPOINT *)&v14 = a2;
  v6 = 1;
  if ( !IsEdition(253345LL) )
    v6 = a3;
  v7 = DWORD1(v14);
  if ( v6 || *((_QWORD *)this + 45) != __PAIR64__(DWORD1(v14), a2.x) )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v16, 0, 0x218uLL);
    v18 = 536;
    v16[0] = 4096;
    TickCount = GetTickCount();
    v26 = v6;
    v16[2] = TickCount;
    v17 = PerformanceCount;
    v19 = *((_QWORD *)this + 38);
    if ( v6 )
    {
      v23 = 1;
      v14 = 0LL;
      v15 = 0LL;
      GetPointerDeviceRects(-1LL, &v15, &v14);
      v24 = 0xFFFF * (a2.x - (int)v14) / (DWORD2(v14) - (int)v14 - 1);
      v25 = 0xFFFF * (v7 - DWORD1(v14)) / (HIDWORD(v14) - DWORD1(v14) - 1);
    }
    else
    {
      v23 = 0;
      *((_QWORD *)this + 45) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, (struct tagPOINT *)&v14);
      v9 = a2.x - *((_DWORD *)this + 90);
      v25 = v7 - *((_DWORD *)this + 91);
      v24 = v9;
    }
    TickCount64 = GetTickCount64();
    if ( *((_BYTE *)this + 7744)
      && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *((_QWORD *)this + 966) )
    {
      ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
      v21 = *((_DWORD *)this + 1934);
      v22 = *((_DWORD *)this + 1935);
      *((_BYTE *)this + 7744) = 0;
      v20 = 1;
    }
    *((struct tagPOINT *)this + 45) = a2;
    v11 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7BE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v11,
        PerformanceCount.LowPart);
  }
  return 0LL;
}
