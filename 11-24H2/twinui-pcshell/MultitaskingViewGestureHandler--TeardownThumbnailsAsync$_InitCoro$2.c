/*
 * XREFs of MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_InitCoro$2 @ 0x18049FDBC
 * Callers:
 *     ?TeardownThumbnailsAsync@MultitaskingViewGestureHandler@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18049FFA4 (-TeardownThumbnailsAsync@MultitaskingViewGestureHandler@@AEAA-AUfire_and_forget@winrt@@XZ.c)
 * Callees:
 *     MultitaskingViewGestureHandler::TeardownThumbnailsAsync$_ResumeCoro$1 @ 0x18049FE10 (MultitaskingViewGestureHandler--TeardownThumbnailsAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::TeardownThumbnailsAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 65) = a4;
  *(_QWORD *)a2 = MultitaskingViewGestureHandler::TeardownThumbnailsAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 64) = 0;
  return MultitaskingViewGestureHandler::TeardownThumbnailsAsync__ResumeCoro_1(a2);
}
