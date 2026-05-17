/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x18008DBE4
 * Callers:
 *     EtwpStopUmLogger @ 0x18008C4B4 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18008C9F0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18008CAC4 (EtwpUpdateUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18008E070 (EtwpFlushUmLogger.c)
 * Callees:
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 316) |= a2;
  ZwSetEvent(*(_QWORD *)(a1 + 112), 0LL);
  NtWaitForSingleObject(*(HANDLE *)(a1 + 120), 0, 0LL);
  result = *(unsigned int *)(a1 + 40);
  *(_DWORD *)(a1 + 316) &= ~a2;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}
