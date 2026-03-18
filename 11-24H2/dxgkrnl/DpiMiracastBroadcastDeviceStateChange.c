/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x14024AF28
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14007FAF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1400800A0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x14008058C (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080D18 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x14024BAD8 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x1400821A8 (McTemplateK0xqq_EtwWriteTransfer.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rdi
  int *v4; // rsi
  _DWORD *Pool2; // rax
  unsigned int v7; // ebx
  int updated; // eax
  int v10; // [rsp+20h] [rbp-38h]
  int v11; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v3 = (int *)(a1 + 408);
  v4 = (int *)(a1 + 416);
  DestinationString = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
  {
    v11 = *v4;
    v10 = *v3;
    McTemplateK0xqq_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(a1 + 96), v10, v11);
  }
  if ( !*(_QWORD *)(a1 + 592) )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 532LL, 1953656900LL);
    *(_QWORD *)(a1 + 592) = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 764;
      return v7;
    }
    *Pool2 = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 524LL) = *v3;
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *v4;
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 592),
              532LL,
              0LL,
              a1 + 420,
              0,
              0);
  v7 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    WdLogGlobalForLineNumber = 815;
  }
  return v7;
}
