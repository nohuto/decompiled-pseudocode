/*
 * XREFs of RaSetBusData @ 0x140069048
 * Callers:
 *     StorPortSetBusDataByOffset @ 0x140074B20 (StorPortSetBusDataByOffset.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaSetBusData(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 56))(*(_QWORD *)(a1 + 16));
}
