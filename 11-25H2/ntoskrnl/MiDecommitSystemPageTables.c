/*
 * XREFs of MiDecommitSystemPageTables @ 0x140465E88
 * Callers:
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiReleaseDriverPtes @ 0x140A651C4 (MiReleaseDriverPtes.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiDeleteSystemPageTables @ 0x140465F44 (MiDeleteSystemPageTables.c)
 */

__int64 __fastcall MiDecommitSystemPageTables(__int64 a1, __int64 a2, int a3)
{
  unsigned int *AnyMultiplexedVm; // rbx
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d

  AnyMultiplexedVm = (unsigned int *)MiSystemVaTypeToVm(a3);
  if ( !AnyMultiplexedVm )
    AnyMultiplexedVm = (unsigned int *)MiGetAnyMultiplexedVm(6);
  MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, v6, v5, v4 - 1, 1);
  return AnyMultiplexedVm[46];
}
