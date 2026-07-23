/*
 * XREFs of MmMapLockedRestartPages @ 0x1407E8790
 * Callers:
 *     <none>
 * Callees:
 *     MiTranslateCacheType @ 0x140394580 (MiTranslateCacheType.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 */

__int64 __fastcall MmMapLockedRestartPages(__int64 a1, int a2, int a3)
{
  int v5; // esi
  __int64 v6; // r9
  char *AnyMultiplexedVm; // rax
  unsigned __int64 v8; // rdx
  char v9; // r9

  v5 = MiTranslateCacheType(a2);
  if ( v5 == 3
    || (a3 & 0xBFFFFFFF) != 0
    || (v6 & 0xFFFFFFFFFFDFFFFFuLL) != 0
    || !MiReserveDriverPtes(
          (*(unsigned int *)(a1 + 40)
         + 4095LL
         + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12,
          v6) )
  {
    return 0LL;
  }
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  return MiMapMdlCommon((char *)a1, v8, (__int64)AnyMultiplexedVm, v9, v5);
}
