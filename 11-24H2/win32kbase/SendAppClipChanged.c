/*
 * XREFs of SendAppClipChanged @ 0x140048000
 * Callers:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x140047F28 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

__int64 __fastcall SendAppClipChanged(_OWORD *a1)
{
  __int64 UserSessionState; // rax
  _DWORD v3[10]; // [rsp+20h] [rbp-28h] BYREF

  memset(v3, 0, 32);
  v3[0] = 2;
  *(_OWORD *)&v3[2] = *a1;
  UserSessionState = W32GetUserSessionState(a1);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           *(_QWORD *)(UserSessionState + 16408),
           0LL,
           v3,
           32LL);
}
