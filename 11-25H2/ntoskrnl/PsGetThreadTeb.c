/*
 * XREFs of PsGetThreadTeb @ 0x140456940
 * Callers:
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABB5E0 (PspFindFirstThreadByTebValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
