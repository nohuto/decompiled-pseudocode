/*
 * XREFs of HalpCmcInitializeErrorPacketContents @ 0x140477E78
 * Callers:
 *     HalpCmciInitializeErrorPacket @ 0x140477DA0 (HalpCmciInitializeErrorPacket.c)
 *     HalpCmcInitializePolling @ 0x14053C5C4 (HalpCmcInitializePolling.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

GUID *__fastcall HalpCmcInitializeErrorPacketContents(GUID *a1)
{
  GUID *result; // rax

  memset_0(a1, 0, 0x4F8uLL);
  *(_DWORD *)a1[1].Data4 = HalpCmcErrorSourceId;
  *(_DWORD *)&a1[1].Data4[4] = 1;
  *(_DWORD *)a1[3].Data4 = 1;
  result = a1 + 5;
  *(_QWORD *)&a1[3].Data1 = a1 + 5;
  a1->Data1 = 1095059543;
  *(_DWORD *)&a1->Data2 = 3;
  *(_DWORD *)a1->Data4 = 1272;
  a1[2] = CMC_NOTIFY_TYPE_GUID;
  a1[4].Data1 = 80;
  *(_DWORD *)&a1[4].Data2 = 1192;
  return result;
}
