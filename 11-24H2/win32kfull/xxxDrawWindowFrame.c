/*
 * XREFs of xxxDrawWindowFrame @ 0x140255644
 * Callers:
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1401C4F1C (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     IsVisible @ 0x140036A48 (IsVisible.c)
 *     DrawEdge @ 0x140037D18 (DrawEdge.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetWindowBorders @ 0x14006E4E8 (GetWindowBorders.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     GetCaptionHeight @ 0x140073078 (GetCaptionHeight.c)
 *     xxxMenuBarDraw @ 0x1401FBF4C (xxxMenuBarDraw.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB060 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     xxxClientDrawScrollBar @ 0x1402BBD64 (xxxClientDrawScrollBar.c)
 *     xxxClientDrawSize @ 0x1402BBE28 (xxxClientDrawSize.c)
 *     DrawSize @ 0x1402E30EC (DrawSize.c)
 *     xxxDrawScrollBar @ 0x1402E695C (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall xxxDrawWindowFrame(struct tagWND *a1, HDC a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r8d
  unsigned int WindowBorders; // esi
  unsigned __int32 v14; // r12d
  _BYTE *v15; // rcx
  char v16; // dl
  int v17; // r8d
  __int64 v18; // rdx
  struct tagTHREADINFO *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int32 v22; // r12d
  __int64 v23; // rax
  Scrollbar::NonClient *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  Scrollbar::NonClient *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  Scrollbar::NonClient *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __m128i v34; // [rsp+20h] [rbp-30h] BYREF
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF

  v35 = 0LL;
  LODWORD(v6) = IsVisible((__int64)a1);
  if ( (_DWORD)v6 )
  {
    v10 = *(_QWORD *)(v7 + 40);
    LOBYTE(v6) = *(_BYTE *)(v10 + 17) & 0x81;
    if ( (_BYTE)v6 != 1 )
    {
      if ( *(_QWORD *)(v10 + 88) != *(_QWORD *)(v10 + 104) || (v6 = *(_QWORD *)(v10 + 96), v6 != *(_QWORD *)(v10 + 112)) )
      {
        if ( *(_QWORD *)(v10 + 136) || (LODWORD(v6) = GreGetClipBox(a2, &v35, 1LL), (_DWORD)v6 != 1) )
        {
          v11 = *((_QWORD *)a1 + 5);
          v34 = 0LL;
          if ( (*(_BYTE *)(v11 + 31) & 0x20) == 0 || (*(_BYTE *)(v11 + 17) & 1) != 0 )
          {
            WindowBorders = GetWindowBorders(*(unsigned int *)(v11 + 28), *(unsigned int *)(v11 + 24), v8, v9);
            GetRect((__int64)a1, (__int64)&v34, 34);
            v34.m128i_i32[0] += WindowBorders;
            v14 = v34.m128i_i32[1] + WindowBorders;
            v34.m128i_i32[2] -= WindowBorders;
            v34.m128i_i32[3] -= WindowBorders;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 1) != 0 && (a3 & 0x2000) == 0 )
              v14 += xxxMenuBarDraw(a1, a2, WindowBorders, WindowBorders);
            v15 = (_BYTE *)*((_QWORD *)a1 + 5);
            v16 = v15[30];
            if ( (v16 & 0xC0) != 0
              || (v15[24] & 1) != 0
              || (v16 & 4) != 0
              || (v15[25] & 1) != 0
              || (v15[26] & 2) != 0 && (v15[17] & 1) == 0 )
            {
              v17 = a3 & 0x2000 | 0x900D;
              if ( (a3 & 1) == 0 )
                v17 = a3 & 0x2000 | 0x900C;
              xxxDrawCaptionBar(a1, a2, v17 | 0x800);
            }
            v22 = GetCaptionHeight((__int64)a1) + v14;
            v23 = *((_QWORD *)a1 + 5);
            v34.m128i_i32[1] = v22;
            if ( (*(_BYTE *)(v23 + 20) & 0x10) != 0 )
            {
              WindowBorders += 2;
              DrawEdge(a2, &v34, 0xAu, 8207);
            }
            LOBYTE(v19) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL);
            if ( ((unsigned __int8)v19 & 2) != 0 && (a3 & 0x2000) == 0 )
            {
              if ( ((unsigned __int8)v19 & 4) != 0 )
              {
                if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                                     v19,
                                     v18,
                                     v20,
                                     v21)
                  && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v24) )
                {
                  v19 = PtiCurrent(v26, v25);
                  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v19 + 132, 0, 0) & 1) == 0 )
                    xxxClientDrawSize(
                      *(_QWORD *)a1,
                      a2,
                      WindowBorders,
                      WindowBorders,
                      v34.m128i_i64[0],
                      v34.m128i_i64[1],
                      v35,
                      *((_QWORD *)&v35 + 1));
                }
                else
                {
                  DrawSize(
                    a1,
                    a2,
                    WindowBorders,
                    WindowBorders,
                    v34.m128i_i64[0],
                    v34.m128i_i64[1],
                    v35,
                    *((_QWORD *)&v35 + 1));
                }
              }
              if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                                   v19,
                                   v18,
                                   v20,
                                   v21)
                && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v27) )
              {
                v19 = PtiCurrent(v29, v28);
                if ( (_InterlockedCompareExchange((volatile signed __int32 *)v19 + 132, 0, 0) & 1) == 0 )
                  xxxClientDrawScrollBar(*(_QWORD *)a1, a2, 1LL);
              }
              else
              {
                xxxDrawScrollBar(a1, a2, 1);
              }
            }
            v6 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v6 + 16) & 4) != 0 && (a3 & 0x2000) == 0 )
            {
              if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(
                                   v19,
                                   v18,
                                   v20,
                                   v21)
                && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v30) )
              {
                LOBYTE(v6) = _InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v32, v31) + 132, 0, 0);
                if ( (v6 & 1) == 0 )
                  LOBYTE(v6) = xxxClientDrawScrollBar(*(_QWORD *)a1, a2, 0LL);
              }
              else
              {
                LOBYTE(v6) = xxxDrawScrollBar(a1, a2, 0);
              }
            }
          }
          else
          {
            v12 = ((*(_BYTE *)(v11 + 16) & 0x40 | 0x240300u) >> 6) | 0x2000;
            if ( (a3 & 0x2000) == 0 )
              v12 = (*(_BYTE *)(v11 + 16) & 0x40 | 0x240300u) >> 6;
            LOBYTE(v6) = xxxDrawCaptionBar(a1, a2, v12);
          }
        }
      }
    }
  }
  return v6;
}
