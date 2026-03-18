/*
 * XREFs of ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x140147DE0
 * Callers:
 *     RIMSetDeviceInputMode @ 0x14017D314 (RIMSetDeviceInputMode.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x140048F70 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     RIMSuppressAllActiveContacts @ 0x140055A50 (RIMSuppressAllActiveContacts.c)
 */

void __fastcall rimInvalidateInputs(struct RIMDEV *a1)
{
  __int64 UserSessionState; // rax

  if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
    RIMSuppressAllActiveContacts(*((struct RawInputManagerObject **)a1 + 40), *((_QWORD *)a1 + 57), 0x400u);
  if ( (*((_DWORD *)a1 + 42) & 0x10000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(a1);
    InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(UserSessionState + 16408), 9);
  }
}
