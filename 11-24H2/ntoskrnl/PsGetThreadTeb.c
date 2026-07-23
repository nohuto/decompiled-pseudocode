/*
 * XREFs of PsGetThreadTeb @ 0x14044C5E0
 * Callers:
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABA85C (PspFindFirstThreadByTebValue.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
