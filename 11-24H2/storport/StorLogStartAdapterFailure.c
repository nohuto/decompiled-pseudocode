/*
 * XREFs of StorLogStartAdapterFailure @ 0x14008FD04
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1400164A4 (RaidAdapterStartDeviceIrp.c)
 *     RaidPnPAsyncStartComplete @ 0x140065BA0 (RaidPnPAsyncStartComplete.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x140065F40 (RaidPnPAsyncStartCompleteWorker.c)
 * Callees:
 *     McTemplateK0qjzzqxxqq_EtwWriteTransfer @ 0x140086D44 (McTemplateK0qjzzqxxqq_EtwWriteTransfer.c)
 */

void __fastcall StorLogStartAdapterFailure(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  const wchar_t *v3; // rdx

  v2 = a2;
  if ( a1 && StorEtwLoggingEnabled && byte_140171466 < 0 )
  {
    v3 = (const wchar_t *)&unk_140151214;
    if ( *(_QWORD *)(a1 + 5080) )
      v3 = *(const wchar_t **)(a1 + 5080);
    McTemplateK0qjzzqxxqq_EtwWriteTransfer(
      a1 + 5064,
      (__int64)v3,
      v2,
      *(_DWORD *)(a1 + 56),
      a1 + 5064,
      *(const wchar_t **)(a1 + 4720),
      v3,
      *(_DWORD *)(a1 + 392),
      *(_QWORD *)(a1 + 104),
      *(_QWORD *)(a1 + 112),
      *(_DWORD *)(a1 + 6188),
      v2);
  }
}
