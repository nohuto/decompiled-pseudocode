/*
 * XREFs of MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_InitCoro$2 @ 0x18025A4B8
 * Callers:
 *     ?CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18022C080 (-CacheMonitorInfoCollectionAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@X.c)
 * Callees:
 *     MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync$_ResumeCoro$1 @ 0x18025A510 (MultitaskingViewGestureHandler--CacheMonitorInfoCollectionAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 81) = a4;
  *(_QWORD *)a2 = MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 80) = 0;
  return MultitaskingViewGestureHandler::CacheMonitorInfoCollectionAsync__ResumeCoro_1(a2);
}
