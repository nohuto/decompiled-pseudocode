/*
 * XREFs of NvmeNativeDumpCreateNvmeDumpDiskData @ 0x1401A0AE0
 * Callers:
 *     NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A07D8 (NvmeNativeDumpCreateDumpDiskInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidGetTelemetryLogPageIds @ 0x14003A6E8 (RaidGetTelemetryLogPageIds.c)
 */

__int64 __fastcall NvmeNativeDumpCreateNvmeDumpDiskData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  _DWORD *Pool; // rax
  _DWORD *v9; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  *a2 = 0LL;
  *a3 = 0;
  Pool = (_DWORD *)RaidAllocatePool(64LL, 120LL, 1145266514LL, v3);
  v9 = Pool;
  if ( Pool )
  {
    *Pool = 1145917490;
    Pool[1] = 8194;
    Pool[2] = 120;
    Pool[25] = *(_DWORD *)(a1 + 56);
    ObfReferenceObject(*(PVOID *)(a1 + 8));
    *((_QWORD *)v9 + 2) = a1;
    *a2 = v9;
    *a3 = 120;
    RaidGetTelemetryLogPageIds(17, 64LL, (_WORD *)0x60);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
