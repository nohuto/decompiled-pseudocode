/*
 * XREFs of RaDeleteBus @ 0x140181334
 * Callers:
 *     RaidAdapterHack @ 0x140039D6C (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void *__fastcall RaDeleteBus(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 16));
    *(_BYTE *)a1 = 0;
    return memset_0((void *)(a1 + 8), 0, 0x40uLL);
  }
  return result;
}
