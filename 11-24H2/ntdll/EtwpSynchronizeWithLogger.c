/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1800A96A4
 * Callers:
 *     EtwpStopUmLogger @ 0x1800A7F74 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800A84B0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800A8584 (EtwpUpdateUmLogger.c)
 *     EtwpFlushUmLogger @ 0x1800A9B30 (EtwpFlushUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x1801600D0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x180160210 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 316) |= a2;
  ZwSetEvent(*(HANDLE *)(a1 + 112), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 120), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 316) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
