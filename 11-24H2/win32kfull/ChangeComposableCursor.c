/*
 * XREFs of ChangeComposableCursor @ 0x14020E090
 * Callers:
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x140194DB0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     MagpDestroyLensContext @ 0x1401ABD28 (MagpDestroyLensContext.c)
 *     MagSetLensContextInformation @ 0x1401AD0BC (MagSetLensContextInformation.c)
 *     ?DisableDwmSwCursorMoveSize@@YAHH@Z @ 0x140248F40 (-DisableDwmSwCursorMoveSize@@YAHH@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x140248F60 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     MagContextThreadCallout @ 0x14026E5D0 (MagContextThreadCallout.c)
 *     xxxDwmStopRedirection @ 0x1402B38D0 (xxxDwmStopRedirection.c)
 * Callees:
 *     SetPointer @ 0x140131500 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(__int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = a1;
  v3 = *(_DWORD *)(W32GetUserSessionState(a1, a2) + 36344) + ((_DWORD)a1 != 0 ? 1 : -1);
  if ( !*(_DWORD *)(W32GetUserSessionState(v4, (unsigned int)-v2) + 36344) && v2 )
  {
    SetPointer(0LL);
    *(_DWORD *)(W32GetUserSessionState(v11, v10) + 36348) = 1;
LABEL_8:
    SetPointer(1LL);
    goto LABEL_3;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v6, v5) + 36344) == 1 && !v2 )
  {
    SetPointer(0LL);
    *(_DWORD *)(W32GetUserSessionState(v13, v12) + 36348) = 0;
    goto LABEL_8;
  }
LABEL_3:
  result = W32GetUserSessionState(v8, v7);
  *(_DWORD *)(result + 36344) = v3;
  return result;
}
