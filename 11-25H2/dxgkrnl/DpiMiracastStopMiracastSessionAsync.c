/*
 * XREFs of DpiMiracastStopMiracastSessionAsync @ 0x14007F330
 * Callers:
 *     DxgNotifyDpcCB @ 0x140029CC0 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14007F220 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionAsync(volatile signed __int32 *P, char a2, _QWORD *a3, int a4)
{
  unsigned int v8; // edi
  ULONG v9; // eax
  __int64 v10; // r9
  __int64 Pool2; // rax
  __int64 v12; // rdi
  PDEVICE_OBJECT v13; // rcx

  if ( !a2 || a3 )
  {
    _InterlockedIncrement(P + 6);
    _InterlockedXor(P + 7, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    v9 = IoSizeofWorkItem();
    Pool2 = ExAllocatePool2(64LL, v9 + 32LL, 1953656900LL, v10);
    v12 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = P;
      *(_BYTE *)(Pool2 + 8) = a2;
      if ( a3 )
        *(_QWORD *)(Pool2 + 16) = *a3;
      v13 = g_pDriverObject;
      *(_DWORD *)(Pool2 + 24) = a4;
      IoInitializeWorkItem(v13, (PIO_WORKITEM)(Pool2 + 32));
      IoQueueWorkItemEx((PIO_WORKITEM)(v12 + 32), DpiMiracastStopMiracastSessionWork, DelayedWorkQueue, (PVOID)v12);
      return 0;
    }
    else
    {
      v8 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      WdLogGlobalForLineNumber = 7214;
      DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    }
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, P, -1073741811LL);
    WdLogGlobalForLineNumber = 7182;
  }
  return v8;
}
