/*
 * XREFs of ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1400D5FD0
 * Callers:
 *     NtUserGetPointerCursorId @ 0x14016D200 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D46C8 (ApiSetEditionGetThreadPointerHookData.c)
 *     ApiSetDoesPointerHaveSingleCursor @ 0x1400D6080 (ApiSetDoesPointerHaveSingleCursor.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FBD20 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1401FF070 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorId(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int *a4)
{
  struct _LIST_ENTRY *v4; // rbp
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  unsigned __int64 v9; // rbx

  v4 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((__int64)a2 + 1208, a3);
  if ( (ThreadPointerHookData || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v4, a3)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0 )
  {
    v9 = *((_QWORD *)ThreadPointerHookData + 3);
    if ( v9 )
    {
      if ( (unsigned int)ApiSetDoesPointerHaveSingleCursor() )
      {
        *a4 = 0;
        return 1LL;
      }
      if ( (unsigned int)CTouchProcessor::GetPointerCursorIdFromMsgData(this, v9, a4) )
        return 1LL;
    }
  }
  UserSetLastError(87);
  return 0LL;
}
