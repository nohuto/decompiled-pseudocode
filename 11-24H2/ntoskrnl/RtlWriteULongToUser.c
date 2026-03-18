/*
 * XREFs of RtlWriteULongToUser @ 0x1406FC4A4
 * Callers:
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     ProbeForRead @ 0x1409B18E0 (ProbeForRead.c)
 */

void __fastcall RtlWriteULongToUser(_DWORD *a1, int a2)
{
  ProbeForRead(a1, 4uLL, 1u);
  *a1 = a2;
}
