/*
 * XREFs of GetDesktopView @ 0x140194220
 * Callers:
 *     MapDesktop @ 0x14016A320 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1401940D0 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1401C7F4C (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     UserCommitDesktopMemory @ 0x1401D0160 (UserCommitDesktopMemory.c)
 *     zzzSetDesktop @ 0x14023D170 (zzzSetDesktop.c)
 *     NtUserDwmValidateWindow @ 0x140241330 (NtUserDwmValidateWindow.c)
 *     NtUserPostThreadMessage @ 0x140244040 (NtUserPostThreadMessage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  W32GetUserGdiSessionState(a1);
  for ( result = *(_QWORD **)(a1 + 696); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
