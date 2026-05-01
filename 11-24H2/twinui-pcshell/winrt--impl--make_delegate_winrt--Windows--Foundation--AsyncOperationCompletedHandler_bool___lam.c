/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___ @ 0x18059331C
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801ED1D0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180293110 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncOperationCompletedHandler_bool___lambda_e144cef1f387178a308841941c02025f___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v7; // [rsp+40h] [rbp+8h]

  v7 = operator new(0x40uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 1));
  v7[2] = *(_QWORD *)a2;
  v7[3] = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v7 + 3);
  *((_DWORD *)v7 + 8) = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v7[5] = v4;
  v7[6] = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  v7[7] = v5;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *a1 = v7;
  *v7 = off_1807557B0;
  return a1;
}
