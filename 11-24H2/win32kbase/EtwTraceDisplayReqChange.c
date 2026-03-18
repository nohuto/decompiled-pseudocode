/*
 * XREFs of EtwTraceDisplayReqChange @ 0x14013D3F0
 * Callers:
 *     UserPowerInfoCallout @ 0x1401AEF84 (UserPowerInfoCallout.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x140150918 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceDisplayReqChange(__int64 a1)
{
  char v1; // di
  __int16 v2; // cx
  char v3; // bl
  int CurrentWin32kSessionId; // eax
  int v5; // ecx
  int v6; // r8d

  v1 = a1;
  if ( ((__int64)*(&WPP_MAIN_CB.Reserved + 1) & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x2000000000008000LL) != 0
    && (qword_14029ADB8 & 0x2000000000008000LL) == qword_14029ADB8 )
  {
    v2 = *(_WORD *)(W32GetUserSessionState(a1) + 69008);
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    {
      v3 = v2 == 0;
      CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
      McTemplateK0qhq_EtwWriteTransfer(v5, (unsigned int)&DisplayReqChangeEvent, v6, CurrentWin32kSessionId, v3, v1);
    }
  }
}
