/*
 * XREFs of ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1400D426C
 * Callers:
 *     NtUserGetPointerInfoList @ 0x14016D3B0 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D46C8 (ApiSetEditionGetThreadPointerHookData.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1400D4AA0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FBD20 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned __int8 *a9)
{
  struct _LIST_ENTRY *v9; // rsi
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  unsigned __int64 v14; // rdx
  int v16; // ecx

  v9 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( !ThreadPointerHookData && (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v9, a3)) == 0LL
    || (*((_DWORD *)ThreadPointerHookData + 12) & 8) != 0
    || (v14 = *((_QWORD *)ThreadPointerHookData + 3)) == 0 )
  {
LABEL_13:
    v16 = 87;
    goto LABEL_12;
  }
  if ( (*((_DWORD *)ThreadPointerHookData + 12) & 1) == 0 )
  {
    v16 = 5;
    goto LABEL_12;
  }
  if ( a4 == 1 || a4 == *((_DWORD *)ThreadPointerHookData + 5) )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(this, v14, a4, a5, a6, a7, a8, a9) )
      return 1LL;
    goto LABEL_13;
  }
  v16 = 1629;
LABEL_12:
  UserSetLastError(v16);
  return 0LL;
}
