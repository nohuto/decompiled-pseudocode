/*
 * XREFs of ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D3F20
 * Callers:
 *     NtUserGetRawPointerDeviceData @ 0x14016DA20 (NtUserGetRawPointerDeviceData.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x1400D46C8 (ApiSetEditionGetThreadPointerHookData.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D5510 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1401FBD20 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        unsigned int a7,
        int *a8)
{
  struct _LIST_ENTRY *v8; // rsi
  unsigned int v12; // ebx
  struct tagTHREADPOINTERDATA *ThreadPointerHookData; // r10
  unsigned __int64 v14; // rdx

  v8 = (struct _LIST_ENTRY *)((char *)a2 + 1208);
  v12 = 0;
  ThreadPointerHookData = (struct tagTHREADPOINTERDATA *)ApiSetEditionGetThreadPointerHookData((char *)a2 + 1208, a3);
  if ( (ThreadPointerHookData || (ThreadPointerHookData = CTouchProcessor::FindThreadPointerData(this, v8, a3)) != 0LL)
    && (*((_DWORD *)ThreadPointerHookData + 12) & 8) == 0
    && (v14 = *((_QWORD *)ThreadPointerHookData + 3)) != 0 )
  {
    LOBYTE(v12) = CTouchProcessor::GetPointerRawDataWithHistory(this, v14, a4, a5, a6, a7, a8) != 0;
    return v12;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
