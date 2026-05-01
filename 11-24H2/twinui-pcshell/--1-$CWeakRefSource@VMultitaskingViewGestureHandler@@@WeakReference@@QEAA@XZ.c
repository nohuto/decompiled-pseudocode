/*
 * XREFs of ??1?$CWeakRefSource@VMultitaskingViewGestureHandler@@@WeakReference@@QEAA@XZ @ 0x1802CF8F4
 * Callers:
 *     _MultitaskingViewGestureHandler::MultitaskingViewGestureHandler_::_1_::dtor$11 @ 0x1806D3D5E (_MultitaskingViewGestureHandler--MultitaskingViewGestureHandler_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WeakReference::CWeakRefSource<MultitaskingViewGestureHandler>::~CWeakRefSource<MultitaskingViewGestureHandler>(
        __int64 *a1)
{
  if ( *a1 )
    *(_QWORD *)(*a1 + 16) = 0LL;
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
