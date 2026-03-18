/*
 * XREFs of PsGetThreadTeb @ 0x140456DA0
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuAreaOld @ 0x14077A5B0 (PspWow64ReadOrWriteThreadCpuAreaOld.c)
 *     PspWow64SetContextThread @ 0x140913174 (PspWow64SetContextThread.c)
 *     PspFindFirstThreadByTebValue @ 0x140ABF77C (PspFindFirstThreadByTebValue.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetThreadTeb(__int64 a1)
{
  return *(_QWORD *)(a1 + 240);
}
