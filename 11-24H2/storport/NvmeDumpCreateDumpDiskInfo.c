/*
 * XREFs of NvmeDumpCreateDumpDiskInfo @ 0x14019F410
 * Callers:
 *     NvmeDumpStorageGetDumpInfoIoctl @ 0x14019FE00 (NvmeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeDumpCreateDumpDiskData @ 0x14019F334 (NvmeDumpCreateDumpDiskData.c)
 *     NvmeNativeDumpFreeNvmeDumpDiskData @ 0x14019F81C (NvmeNativeDumpFreeNvmeDumpDiskData.c)
 *     NvmeNativeDumpFreeDumpDiskInfo @ 0x14019F868 (NvmeNativeDumpFreeDumpDiskInfo.c)
 */

__int64 __fastcall NvmeDumpCreateDumpDiskInfo(__int64 a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rdi
  __int64 Pool; // rax
  __int64 v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  *a2 = 0LL;
  v11 = 0;
  v12 = 0LL;
  Pool = RaidAllocatePool(64LL, 72LL, 1145266514LL, v2);
  v13 = Pool;
  v7 = Pool;
  if ( Pool )
  {
    v9 = (_QWORD *)(Pool + 8);
    v9[1] = v9;
    *v9 = v9;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 24) = *(_OWORD *)(a1 + 160);
    *(_DWORD *)(v7 + 40) = 0;
    v8 = NvmeDumpCreateDumpDiskData(a1, &v12, &v11);
    if ( v8 < 0 )
    {
      v3 = v12;
    }
    else
    {
      v13 = 0LL;
      *(_DWORD *)(v7 + 44) = v11;
      *(_QWORD *)(v7 + 48) = v12;
      *a2 = v7;
      v7 = 0LL;
      v12 = 0LL;
    }
  }
  else
  {
    v8 = -1073741670;
  }
  if ( v3 )
    NvmeNativeDumpFreeNvmeDumpDiskData(&v12);
  if ( v7 )
    NvmeNativeDumpFreeDumpDiskInfo(&v13);
  return (unsigned int)v8;
}
