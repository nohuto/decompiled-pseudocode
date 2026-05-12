/*
 * XREFs of NvmeNativeDumpCreateDumpDiskInfo @ 0x1401A07D8
 * Callers:
 *     NvmeNativeDumpStorageGetDumpInfoIoctl @ 0x1401A0D80 (NvmeNativeDumpStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidUnitFreeDumpInfo @ 0x14009E1F0 (RaidUnitFreeDumpInfo.c)
 *     NvmeNativeDumpFreeNvmeDumpDiskData @ 0x14019F81C (NvmeNativeDumpFreeNvmeDumpDiskData.c)
 *     NvmeNativeDumpCreateNvmeDumpDiskData @ 0x1401A0AE0 (NvmeNativeDumpCreateNvmeDumpDiskData.c)
 */

__int64 __fastcall NvmeNativeDumpCreateDumpDiskInfo(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  PVOID v3; // rdi
  _QWORD *Pool; // rax
  _QWORD *v7; // rbx
  int v8; // esi
  _QWORD *v9; // rax
  int v11; // [rsp+50h] [rbp+30h] BYREF
  PVOID v12; // [rsp+58h] [rbp+38h] BYREF
  PVOID v13; // [rsp+60h] [rbp+40h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0LL;
  *a2 = 0LL;
  v11 = 0;
  v12 = 0LL;
  Pool = (_QWORD *)RaidAllocatePool(64LL, 72LL, 1145266514LL, v2);
  v13 = Pool;
  v7 = Pool;
  if ( Pool )
  {
    v9 = Pool + 1;
    v9[1] = v9;
    *v9 = v9;
    *(_DWORD *)v7 = 72;
    *(_OWORD *)(v7 + 3) = *(_OWORD *)(a1 + 160);
    *((_DWORD *)v7 + 10) = 0;
    v8 = NvmeNativeDumpCreateNvmeDumpDiskData(a1, &v12, &v11);
    if ( v8 < 0 )
    {
      v3 = v12;
    }
    else
    {
      v13 = 0LL;
      *((_DWORD *)v7 + 11) = v11;
      v7[6] = v12;
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
    RaidUnitFreeDumpInfo(&v13);
  return (unsigned int)v8;
}
