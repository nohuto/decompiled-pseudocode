/*
 * XREFs of EtwpAllocateLbrData @ 0x1407B1C9C
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407B1E3C (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407B1EE8 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateLbrData(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(0x40uLL, 0x14uLL, 0x78777445u);
  if ( !Pool2 )
    return 3221225495LL;
  *(_DWORD *)(Pool2 + 4) = -1;
  *(_QWORD *)(a1 + 1072) = Pool2;
  return 0LL;
}
