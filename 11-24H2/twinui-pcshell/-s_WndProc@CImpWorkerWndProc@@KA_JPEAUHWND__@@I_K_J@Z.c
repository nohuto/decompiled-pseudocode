/*
 * XREFs of ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804B9780
 * Callers:
 *     <none>
 * Callees:
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B912C (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B95B0 (-ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAA_NXZ @ 0x1804B9744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall CImpWorkerWndProc::s_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  HANDLE *WindowLongPtrW; // rax
  HANDLE *v9; // rbx
  __int64 v10; // rbp
  LONG_PTR v11; // rax
  LONG_PTR v12; // rbx

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_2136437049>::GetImpl'::`2'::impl) )
  {
    WindowLongPtrW = (HANDLE *)GetWindowLongPtrW(hWnd, 0);
    v9 = WindowLongPtrW;
    if ( WindowLongPtrW )
    {
      CImpWorkerWndProc::AddWndRef(WindowLongPtrW);
      v10 = (*((__int64 (__fastcall **)(HANDLE *, HWND, _QWORD, WPARAM, LPARAM))*v9 + 1))(v9, hWnd, Msg, wParam, lParam);
      if ( Msg == 130 )
      {
        SetWindowLongPtrW(hWnd, 0, 0LL);
        v9[1] = 0LL;
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_2136437049>::GetImpl'::`2'::impl) )
        {
          if ( *((_BYTE *)v9 + 16) )
          {
            SetEvent(v9[4]);
            CImpWorkerWndProc::ReleaseWndRef(v9);
          }
        }
      }
      CImpWorkerWndProc::ReleaseWndRef(v9);
      return v10;
    }
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  }
  v11 = GetWindowLongPtrW(hWnd, 0);
  v12 = v11;
  if ( !v11 )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  v10 = (*(__int64 (__fastcall **)(LONG_PTR, HWND, _QWORD, WPARAM, LPARAM))(*(_QWORD *)v11 + 8LL))(
          v11,
          hWnd,
          Msg,
          wParam,
          lParam);
  if ( Msg == 130 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    *(_QWORD *)(v12 + 8) = 0LL;
  }
  return v10;
}
