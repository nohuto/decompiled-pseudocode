/*
 * XREFs of NvmeDumpCreateDumpDiskData @ 0x14019F334
 * Callers:
 *     NvmeDumpCreateDumpDiskInfo @ 0x14019F410 (NvmeDumpCreateDumpDiskInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidGetTelemetryLogPageIds @ 0x14003A6E8 (RaidGetTelemetryLogPageIds.c)
 */

__int64 __fastcall NvmeDumpCreateDumpDiskData(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  bool v5; // cc
  _DWORD *Pool; // rax
  _DWORD *v9; // rdi
  void *v10; // rcx

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 56) <= 0xFFu;
  *a2 = 0LL;
  *a3 = 0;
  if ( v5 )
  {
    Pool = (_DWORD *)RaidAllocatePool(64LL, 128LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v9 = Pool;
    if ( Pool )
    {
      *Pool = 1145917490;
      Pool[1] = 4098;
      Pool[2] = 104;
      v10 = *(void **)(a1 + 8);
      *a3 = 128;
      ObfReferenceObject(v10);
      *((_QWORD *)v9 + 2) = a1;
      *((_WORD *)v9 + 41) = 0;
      *((_BYTE *)v9 + 84) = *(_BYTE *)(a1 + 56) - 1;
      RaidGetTelemetryLogPageIds(17, (__int64)(v9 + 12), (_WORD *)v9 + 40);
      *a2 = v9;
      *a3 = 128;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741808;
  }
  return v3;
}
