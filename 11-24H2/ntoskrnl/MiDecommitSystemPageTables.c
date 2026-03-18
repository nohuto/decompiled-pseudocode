/*
 * XREFs of MiDecommitSystemPageTables @ 0x1402342AC
 * Callers:
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiDeleteSystemPageTables @ 0x140234368 (MiDeleteSystemPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 */

__int64 __fastcall MiDecommitSystemPageTables(__int64 a1, __int64 a2, int a3)
{
  struct _LIST_ENTRY **AnyMultiplexedVm; // rbx
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d

  AnyMultiplexedVm = MiSystemVaTypeToVm(a3);
  if ( !AnyMultiplexedVm )
    AnyMultiplexedVm = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(6LL);
  MiDeleteSystemPageTables((_DWORD)AnyMultiplexedVm, v6, v5, v4 - 1, 1);
  return *((unsigned int *)AnyMultiplexedVm + 46);
}
