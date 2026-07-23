/*
 * XREFs of TtmiLogInactivityTimerReset @ 0x14076D32C
 * Callers:
 *     TtmiResetInactivityTimer @ 0x14076FCB0 (TtmiResetInactivityTimer.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall TtmiLogInactivityTimerReset(int a1)
{
  int SessionId; // eax
  int v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140FD88C8 > 5 && tlgKeywordOn((__int64)&dword_140FD88C8, 1LL) )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    v8 = 0;
    v11 = 0;
    v3 = SessionId;
    v7 = 4;
    v6 = &v3;
    v10 = 4;
    v9 = &v4;
    v4 = a1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140FD88C8, (unsigned __int8 *)&word_14005138E, 0LL, 0LL, 4u, &v5);
  }
}
