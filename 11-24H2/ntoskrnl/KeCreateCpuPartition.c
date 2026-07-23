/*
 * XREFs of KeCreateCpuPartition @ 0x1405BD068
 * Callers:
 *     PsCreateCpuPartition @ 0x14077665C (PsCreateCpuPartition.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeCreateCpuPartition(__int64 *a1, int a2)
{
  __int16 v2; // bx
  size_t v5; // rbp
  __int64 Pool2; // rax
  unsigned int v7; // edi
  __int64 v8; // rsi

  v2 = KiMaximumGroups;
  v5 = 8LL * (unsigned __int16)KiMaximumGroups;
  Pool2 = ExAllocatePool2(0x40uLL, v5 + 120, 0x7543694Bu);
  v7 = 0;
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = Pool2 + 112;
    *(_WORD *)(Pool2 + 112) = 1;
    *(_WORD *)(Pool2 + 114) = v2;
    *(_DWORD *)(Pool2 + 116) = 0;
    memset_0((void *)(Pool2 + 120), 0, v5);
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 24) = v8 + 16;
    *(_QWORD *)(v8 + 16) = v8 + 16;
    *(_QWORD *)(v8 + 32) = a1;
    memset_0((void *)(v8 + 40), 0, 0x40uLL);
    *(_QWORD *)(v8 + 64) = v8 + 40;
    *(_QWORD *)(v8 + 56) = KiAvailableCpusWorkItemCallbackWrapper;
    *(_QWORD *)(v8 + 40) = 0LL;
    *(_QWORD *)(v8 + 88) = KiAvailableCpusPartitionWorkItemCallback;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_DWORD *)(v8 + 80) = 0;
    *(_QWORD *)(v8 + 96) = v8;
    *(_DWORD *)(v8 + 104) = a2;
    *a1 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
