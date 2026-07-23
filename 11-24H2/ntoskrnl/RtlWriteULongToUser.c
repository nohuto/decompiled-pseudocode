/*
 * XREFs of RtlWriteULongToUser @ 0x1406FA0E4
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     ProbeForRead @ 0x1409A8C30 (ProbeForRead.c)
 */

void __fastcall RtlWriteULongToUser(_DWORD *a1, int a2)
{
  ProbeForRead(a1, 4uLL, 1u);
  *a1 = a2;
}
