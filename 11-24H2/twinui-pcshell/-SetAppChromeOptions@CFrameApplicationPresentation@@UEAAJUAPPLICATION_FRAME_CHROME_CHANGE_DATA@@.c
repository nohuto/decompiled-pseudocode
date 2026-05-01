/*
 * XREFs of ?SetAppChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x18030AB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::SetAppChromeOptions(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *a1;
  a1[73] = a2;
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(v2 + 152))(a1, a1[72]);
}
