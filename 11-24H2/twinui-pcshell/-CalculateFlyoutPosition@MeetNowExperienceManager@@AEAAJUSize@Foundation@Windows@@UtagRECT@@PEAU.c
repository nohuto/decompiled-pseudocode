/*
 * XREFs of ?CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU5@@Z @ 0x1803C8578
 * Callers:
 *     ?PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z @ 0x1803CB154 (-PositionFlyout@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?UpdateClipRect@MeetNowExperienceManager@@AEAAJXZ @ 0x1803CC794 (-UpdateClipRect@MeetNowExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall MeetNowExperienceManager::CalculateFlyoutPosition(
        MeetNowExperienceManager *a1,
        SIZE a2,
        RECT *a3,
        struct tagRECT *a4)
{
  int v5; // eax
  RECT v7; // xmm0
  const char *v8; // r9
  int updated; // eax
  unsigned int v11; // esi
  LONG v12; // r8d
  LONG v13; // eax
  LONG v14; // r8d
  LONG v15; // eax
  SIZE v16; // [rsp+30h] [rbp-48h] BYREF
  POINT v17; // [rsp+38h] [rbp-40h] BYREF
  RECT v18; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5 = *((_DWORD *)a1 + 102) + *((_DWORD *)a1 + 104);
  v7 = *a3;
  v16 = a2;
  v17.x = v5 / 2;
  v17.y = (*((_DWORD *)a1 + 103) + *((_DWORD *)a1 + 105)) / 2;
  v18 = v7;
  v16.cx = (int)*(float *)&a2.cx;
  v16.cy = (int)*(float *)&a2.cy;
  if ( !CalculatePopupWindowPosition(&v17, &v16, 0x10054u, &v18, a4) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1A2,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
             v8);
  updated = MeetNowExperienceManager::UpdateClipRect(a1);
  v11 = updated;
  if ( updated >= 0 )
  {
    v12 = *((_DWORD *)a1 + 99);
    if ( a4->top >= v12 )
    {
      v14 = *((_DWORD *)a1 + 101);
      if ( a4->bottom > v14 )
      {
        OffsetRect(a4, 0, v14 - a4->bottom);
        v15 = *((_DWORD *)a1 + 99);
        if ( a4->top < v15 )
          a4->top = v15;
      }
    }
    else
    {
      OffsetRect(a4, 0, v12 - a4->top);
      v13 = *((_DWORD *)a1 + 101);
      if ( a4->bottom > v13 )
        a4->bottom = v13;
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
    return v11;
  }
}
