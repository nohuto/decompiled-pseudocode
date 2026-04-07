/*
 * XREFs of ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x180108EAC
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ @ 0x180109E58 (-DismissCurrentTouchResizeHighlight@CWindowList@@QEAAXXZ.c)
 *     ?IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x18010ABC0 (-IsInWindowResizeChange@CWindowList@@UEAAJPEAUIDwmWindow@@_NIW4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x180025CB4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z @ 0x1800A261C (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@M@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x1800A280C (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z.c)
 *     ?GetResizeBorderOffsets@CTopLevelWindow@@QEAA?AUtagRECT@@I@Z @ 0x1800E5BE0 (-GetResizeBorderOffsets@CTopLevelWindow@@QEAA-AUtagRECT@@I@Z.c)
 *     ?EnsureAcrylicSheet@CWindowList@@AEAAJXZ @ 0x180109EAC (-EnsureAcrylicSheet@CWindowList@@AEAAJXZ.c)
 *     ?ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z @ 0x18010C02C (-ReleaseAcrylicSheetAndOwnerIfNotUsed@CWindowList@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowList::ApplyWindowResizeStateTransition(CWindowList *this)
{
  float v2; // xmm6_4
  struct CWindowData *v3; // rdx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // rbx
  const RECT *ResizeBorderOffsets; // rax
  __int64 v9; // r8
  CAcrylicSheet *v10; // rcx
  _BYTE v11[40]; // [rsp+30h] [rbp-98h]
  _OWORD v12[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v13; // [rsp+80h] [rbp-48h]
  struct tagRECT v14; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (*(_BYTE *)(*((_QWORD *)this + 88) + 677LL) & 0x40) == 0 )
  {
    if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22)
      || (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) )
    {
      v2 = FLOAT_0_000001;
    }
    else
    {
      v2 = FLOAT_0_1;
    }
    v3 = (struct CWindowData *)*((_QWORD *)this + 88);
    if ( (*((_BYTE *)v3 + 677) & 0x20) != 0 )
    {
      v4 = CWindowList::EnsureAcrylicSheet(this);
      if ( v4 < 0 )
      {
        v5 = 3258LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v4);
        return (unsigned int)v4;
      }
      v7 = *((_QWORD *)this + 68);
      ResizeBorderOffsets = CTopLevelWindow::GetResizeBorderOffsets(
                              *(CTopLevelWindow **)(*((_QWORD *)this + 88) + 440LL),
                              &v14,
                              *(_DWORD *)(*((_QWORD *)this + 88) + 784LL));
      *(_DWORD *)v11 = 0;
      *(_OWORD *)&v11[8] = 0LL;
      *(_OWORD *)&v11[24] = _xmm;
      v12[1] = *(_OWORD *)&v11[16];
      v12[0] = *(_OWORD *)v11;
      v13 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v11[24], *(__m128d *)&v11[24]);
      CAcrylicSheet::AnimateRect(v7, ResizeBorderOffsets, v9, 12, (__int64)v12);
    }
    else
    {
      v10 = (CAcrylicSheet *)*((_QWORD *)this + 68);
      if ( v10 )
        CAcrylicSheet::AnimateRect(v10, v3, v2);
    }
  }
  v4 = CWindowList::ReleaseAcrylicSheetAndOwnerIfNotUsed(this, 0);
  if ( v4 < 0 )
  {
    v5 = 3276LL;
    goto LABEL_9;
  }
  return 0LL;
}
