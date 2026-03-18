/*
 * XREFs of GetDesktopView @ 0x1C0035CC0
 * Callers:
 *     NtUserDwmValidateWindow @ 0x1C0035AC0 (NtUserDwmValidateWindow.c)
 *     _MapDesktopObject @ 0x1C0035BF0 (_MapDesktopObject.c)
 *     ?IsHotKey@@YAPEAUtagHOTKEY@@II@Z @ 0x1C0036308 (-IsHotKey@@YAPEAUtagHOTKEY@@II@Z.c)
 *     UserCommitDesktopMemory @ 0x1C0084640 (UserCommitDesktopMemory.c)
 *     NtUserPostThreadMessage @ 0x1C0116180 (NtUserPostThreadMessage.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall GetDesktopView(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  for ( result = *(_QWORD **)(a1 + 704); result && result[1] != a2; result = (_QWORD *)*result )
    ;
  return result;
}
