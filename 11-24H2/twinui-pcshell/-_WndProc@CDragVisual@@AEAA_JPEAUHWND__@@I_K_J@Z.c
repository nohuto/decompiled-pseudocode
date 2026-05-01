/*
 * XREFs of ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180545E58
 * Callers:
 *     ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1805464D0 (-s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x1804CCF78 (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z @ 0x180542420 (-GetSingleViewFromLayout@AppLayoutHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@@Z.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x180544070 (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x180544570 (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 *     ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x18054473C (-_OnCancelDrag@CDragVisual@@AEAAXXZ.c)
 *     ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x1805447BC (-_OnCaptureChanged@CDragVisual@@AEAAXXZ.c)
 *     ?_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544868 (-_OnClick@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z @ 0x180544950 (-_OnFinishDrag@CDragVisual@@AEAAJIUtagPOINT@@@Z.c)
 *     ?_OnKeyDown@CDragVisual@@AEAAX_K@Z @ 0x1805449CC (-_OnKeyDown@CDragVisual@@AEAAX_K@Z.c)
 *     ?_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544A9C (-_OnLButtonDown@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544B50 (-_OnLButtonUp@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z @ 0x180544D10 (-_OnMouseMove@CDragVisual@@AEAAXUtagPOINT@@@Z.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x180544F08 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180544F50 (-_OnPointerDown@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z @ 0x180545080 (-_OnPointerUpdate@CDragVisual@@AEAAXIUtagPOINT@@@Z.c)
 *     ?_ShouldHandleInput@CDragVisual@@AEAA_NI@Z @ 0x180545520 (-_ShouldHandleInput@CDragVisual@@AEAA_NI@Z.c)
 *     ?_TrackMouseLeave@CDragVisual@@AEAAX_N@Z @ 0x180545650 (-_TrackMouseLeave@CDragVisual@@AEAAX_N@Z.c)
 *     ?s_IsPointerIdTouch@CDragVisual@@CA_NI@Z @ 0x180546494 (-s_IsPointerIdTouch@CDragVisual@@CA_NI@Z.c)
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x18054A4E4 (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall CDragVisual::_WndProc(CDragVisual *this, HWND hWnd, UINT a3, void *a4, LPARAM lParam)
{
  struct tagPOINT v5; // r13
  HWND v9; // rdi
  LPARAM v10; // r14
  LRESULT v11; // r13
  char *v12; // rbx
  bool v13; // zf
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int SingleViewFromLayout; // eax
  __int64 v17; // rdx
  struct IApplicationView **v18; // r8
  int (__fastcall ***v19)(_QWORD, GUID *, IRawElementProviderSimple **); // rdi
  int (__fastcall *v20)(_QWORD, GUID *, IRawElementProviderSimple **); // rbx
  unsigned __int8 x; // bl
  __int64 v22; // rbx
  __int64 v23; // rcx
  HWND v24; // rdx
  struct tagPOINT *v25; // rax
  HWND v26; // rdx
  struct tagPOINT *v27; // rax
  HWND v28; // rdx
  struct tagPOINT *v29; // rax
  __int64 v31; // [rsp+20h] [rbp-20h] BYREF
  IRawElementProviderSimple *el; // [rsp+28h] [rbp-18h] BYREF
  struct tagPOINT v33[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  void *ppvOut; // [rsp+80h] [rbp+40h] BYREF
  HWND v36; // [rsp+88h] [rbp+48h]

  v36 = hWnd;
  ppvOut = this;
  v9 = hWnd;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&ppvOut);
  v10 = lParam;
  LOBYTE(v5.x) = 0;
  v33[0] = v5;
  v11 = 0LL;
  if ( a3 > 0x202 )
  {
    switch ( a3 )
    {
      case 0x215u:
        CDragVisual::_OnCaptureChanged(this);
        break;
      case 0x245u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_38;
        if ( CDragVisual::_ShouldHandleInput(this, a3) )
        {
          v28 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)v10;
          HIDWORD(ppvOut) = SWORD1(v10);
          v29 = Geometry::CPoint::ScreenToClient(v33, v28, (LONG *)&ppvOut);
          CDragVisual::_OnPointerUpdate(this, (unsigned __int16)a4, *v29);
        }
        break;
      case 0x246u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_38;
        if ( CDragVisual::_ShouldHandleInput(this, a3) )
        {
          v26 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)v10;
          HIDWORD(ppvOut) = SWORD1(v10);
          v27 = Geometry::CPoint::ScreenToClient(v33, v26, (LONG *)&ppvOut);
          CDragVisual::_OnPointerDown(this, (unsigned __int16)a4, *v27);
        }
        break;
      case 0x247u:
        if ( !CDragVisual::s_IsPointerIdTouch((unsigned __int16)a4) )
          goto LABEL_38;
        if ( CDragVisual::_ShouldHandleInput(this, a3) )
        {
          v24 = (HWND)*((_QWORD *)this + 19);
          LODWORD(ppvOut) = (__int16)v10;
          HIDWORD(ppvOut) = SWORD1(v10);
          v25 = Geometry::CPoint::ScreenToClient(v33, v24, (LONG *)&ppvOut);
          if ( (_WORD)a4 )
          {
            if ( (unsigned __int16)a4 == *((_DWORD *)this + 82) )
            {
              if ( *((_BYTE *)this + 325) )
              {
                CDragVisual::_OnFinishDrag(this, (unsigned __int16)a4, *v25);
                *((_BYTE *)this + 325) = 0;
              }
              else
              {
                CDragVisual::_OnClick((HWND *)this, *v25);
              }
              *((_DWORD *)this + 82) = 0;
            }
          }
        }
        break;
      case 0x24Cu:
        CDragVisual::_OnPointerCaptureChanged(this, (unsigned __int16)a4);
        break;
      case 0x2A3u:
        if ( !CDragVisual::_ShouldHandleInput(this, 675) )
        {
LABEL_38:
          v11 = DefWindowProcW(v9, a3, (WPARAM)a4, v10);
          break;
        }
        CDragVisual::_TrackMouseLeave(this, 0);
        if ( *((HWND *)this + 19) != GetCapture() && !*((_DWORD *)this + 82) )
          CDragVisual::_ClearVisualFeedback(this);
        break;
      default:
        switch ( a3 )
        {
          case 0x327u:
            CDragVisual::_OnAppWindowSizeChanged(this, a4);
            break;
          case 0x401u:
            CDragVisual::_OnCancelDrag(this);
            break;
          case 0x402u:
            v23 = *((_QWORD *)this + 12);
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23);
            break;
        }
        goto LABEL_38;
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0x202u:
        if ( !CDragVisual::_ShouldHandleInput(this, 514) )
          goto LABEL_38;
        LODWORD(ppvOut) = (__int16)v10;
        HIDWORD(ppvOut) = SWORD1(v10);
        CDragVisual::_OnLButtonUp(this, (struct tagPOINT)ppvOut);
        break;
      case 6u:
        if ( !a4 && CDragVisual::_ShouldHandleInput(this, 6) )
        {
          v22 = 0LL;
          ppvOut = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
          if ( IUnknown_QueryService(
                 *((IUnknown **)this + 2),
                 &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
                 &GUID_84098f74_87a7_4582_b398_f6c3178e9dd6,
                 &ppvOut) >= 0 )
            v22 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut + 96LL))(ppvOut);
          if ( v10 != v22 )
            PostMessageW(*((HWND *)this + 19), 0x401u, 0LL, 0LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&ppvOut);
        }
        goto LABEL_38;
      case 0x10u:
        break;
      case 0x14u:
        v11 = 1LL;
        break;
      case 0x21u:
        x = *((_DWORD *)this + 37) != 6;
        v11 = -x & 3;
        goto LABEL_37;
      case 0x3Du:
        if ( *((_BYTE *)this + 272) && lParam == -25 )
        {
          v12 = (char *)this + 96;
          if ( *((_QWORD *)this + 12) )
            goto LABEL_31;
          if ( !*((_QWORD *)this + 17) )
            goto LABEL_31;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
          if ( (int)CDragVisualAcc_CreateInstance(
                      (struct IDragVisual *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
                      (const struct _GUID *)((char *)this + 24),
                      (void **)this + 12) < 0 )
            goto LABEL_31;
          v13 = *((_DWORD *)this + 37) == 6;
          v31 = 0LL;
          ppvOut = 0LL;
          if ( v13 )
          {
            v14 = *((_QWORD *)this + 17);
            v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 72LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
            SingleViewFromLayout = v15(v14, &v31);
            if ( SingleViewFromLayout >= 0 )
            {
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
              SingleViewFromLayout = AppLayoutHelpers::GetSingleViewFromLayout(
                                       *((AppLayoutHelpers **)this + 11),
                                       (struct IAppLayout *)&ppvOut,
                                       v18);
              if ( SingleViewFromLayout >= 0 )
              {
                v12 = (char *)this + 96;
                (*(void (__fastcall **)(_QWORD, void *, __int64))(**((_QWORD **)this + 12) + 88LL))(
                  *((_QWORD *)this + 12),
                  ppvOut,
                  v31);
                goto LABEL_30;
              }
              v17 = 2285LL;
            }
            else
            {
              v17 = 2284LL;
            }
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)v17,
              (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dragvisual.cpp",
              (const char *)(unsigned int)SingleViewFromLayout);
            v12 = (char *)this + 96;
          }
LABEL_30:
          (*(void (__fastcall **)(char *))(*((_QWORD *)this + 3) + 216LL))((char *)this + 24);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppvOut);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
LABEL_31:
          el = 0LL;
          v19 = *(int (__fastcall ****)(_QWORD, GUID *, IRawElementProviderSimple **))v12;
          if ( *(_QWORD *)v12
            && (v20 = **v19,
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el),
                v20(v19, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &el) >= 0) )
          {
            v11 = UiaReturnRawElementProvider(*((HWND *)this + 19), (WPARAM)a4, -25LL, el);
            x = 1;
          }
          else
          {
            x = v33[0].x;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&el);
          v9 = v36;
LABEL_37:
          if ( x )
            break;
          goto LABEL_38;
        }
        goto LABEL_38;
      default:
        switch ( a3 )
        {
          case 0x47u:
            goto LABEL_82;
          case 0x100u:
            if ( CDragVisual::_ShouldHandleInput(this, 256) )
            {
              CDragVisual::_OnKeyDown(this, (int)a4);
              goto LABEL_82;
            }
            break;
          case 0x200u:
            if ( CDragVisual::_ShouldHandleInput(this, 512) )
            {
              LODWORD(ppvOut) = (__int16)v10;
              HIDWORD(ppvOut) = SWORD1(v10);
              CDragVisual::_OnMouseMove(this, (struct tagPOINT)ppvOut);
              goto LABEL_82;
            }
            break;
          default:
            if ( a3 == 513 && CDragVisual::_ShouldHandleInput(this, 513) )
            {
              LODWORD(ppvOut) = (__int16)v10;
              HIDWORD(ppvOut) = SWORD1(v10);
              CDragVisual::_OnLButtonDown(this, (struct tagPOINT)ppvOut);
              goto LABEL_82;
            }
            break;
        }
        goto LABEL_38;
    }
  }
LABEL_82:
  if ( this )
    (*(void (__fastcall **)(CDragVisual *))(*(_QWORD *)this + 16LL))(this);
  return v11;
}
