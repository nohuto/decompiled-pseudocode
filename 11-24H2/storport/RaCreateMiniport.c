/*
 * XREFs of RaCreateMiniport @ 0x140184A84
 * Callers:
 *     RaidCreateAdapter @ 0x140043580 (RaidCreateAdapter.c)
 *     CreateNvmeAdapter @ 0x1400CB1EC (CreateNvmeAdapter.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaCreateMiniport(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)(a1 + 8), 0, 0xE0uLL);
  result = 0LL;
  *(_BYTE *)(a1 + 248) &= 0xF9u;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
