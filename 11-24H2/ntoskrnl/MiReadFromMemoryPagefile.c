/*
 * XREFs of MiReadFromMemoryPagefile @ 0x1404D1F24
 * Callers:
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 *     MiPfExecuteReadList @ 0x140956C3C (MiPfExecuteReadList.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiTransferMemoryPagefileData @ 0x1404D1F70 (MiTransferMemoryPagefileData.c)
 */

LONG __fastcall MiReadFromMemoryPagefile(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  MiTransferMemoryPagefileData(a1, a2 + 272, *(_QWORD *)(a2 + 96) >> 12, 1LL);
  v3 = *(unsigned int *)(a2 + 312);
  *(_DWORD *)(a2 + 80) = 0;
  *(_QWORD *)(a2 + 88) = v3;
  return KeSetEvent((PRKEVENT)(a2 + 32), 0, 0);
}
