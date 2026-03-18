/*
 * XREFs of TR_StopMapping @ 0x14002B458
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x14002B3E0 (ESM_StoppingMappingOnCancelStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 104LL))();
}
