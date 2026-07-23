/*
 * XREFs of ObKillProcess @ 0x1409DFA28
 * Callers:
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1404523B0 (IoSetThreadHardErrorMode.c)
 *     ExSweepHandleTable @ 0x1409DFA8C (ExSweepHandleTable.c)
 *     ExDestroyHandleTable @ 0x1409DFC80 (ExDestroyHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  void *v1; // rsi
  BOOLEAN v3; // bl

  v1 = *(void **)(a1 + 768);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 768) = 0LL;
    ExDestroyHandleTable(v1);
  }
}
