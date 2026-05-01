/*
 * XREFs of MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_InitCoro$2 @ 0x18020D038
 * Callers:
 *     ?CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18020D2DC (-CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@X.c)
 * Callees:
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18020D0F0 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 82) = a4;
  *(_QWORD *)a2 = MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 81) = 0;
  return MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__ResumeCoro_1(a2);
}
