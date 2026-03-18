/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x140244118
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x14007FA20 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x14007FF0C (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x140244CC8 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x140081B28 (McTemplateK0xqq_EtwWriteTransfer.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // rdi
  int *v5; // rsi
  _DWORD *Pool2; // rax
  unsigned int v8; // ebx
  int updated; // eax
  int v11; // [rsp+20h] [rbp-38h]
  int v12; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v4 = (int *)(a1 + 408);
  v5 = (int *)(a1 + 416);
  DestinationString = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
  {
    v12 = *v5;
    v11 = *v4;
    McTemplateK0xqq_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(a1 + 96), v11, v12);
  }
  if ( !*(_QWORD *)(a1 + 592) )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 532LL, 1953656900LL, a4);
    *(_QWORD *)(a1 + 592) = Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 764;
      return v8;
    }
    *Pool2 = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 524LL) = *v4;
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *v5;
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 592),
              532LL,
              0LL,
              a1 + 420,
              0,
              0);
  v8 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    WdLogGlobalForLineNumber = 815;
  }
  return v8;
}
