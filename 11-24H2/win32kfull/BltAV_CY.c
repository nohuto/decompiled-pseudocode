/*
 * XREFs of BltAV_CY @ 0x1402F7F90
 * Callers:
 *     ExpandAV_CY @ 0x1402F81A0 (ExpandAV_CY.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BltAV_CY(__int64 a1)
{
  __int64 result; // rax

  (*(void (**)(void))(a1 + 232))();
  result = *(int *)(a1 + 260);
  *(_QWORD *)(a1 + 248) += result;
  return result;
}
