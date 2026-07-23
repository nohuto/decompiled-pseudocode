/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x140679018
 * Callers:
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x14059A070 (IopLiveDumpRemoveSystemCacheFromDump.c)
 *     MmGetDumpRange @ 0x140678D28 (MmGetDumpRange.c)
 * Callees:
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x14066FC00 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  __int64 v3; // rdx
  char *AnyMultiplexedVm; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 CurrentIrql; // cl
  _QWORD v8[2]; // [rsp+20h] [rbp-79h] BYREF
  int v9[2]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int8 v10; // [rsp+39h] [rbp-60h]
  char *v11; // [rsp+50h] [rbp-49h]
  unsigned __int64 v12; // [rsp+58h] [rbp-41h]
  __int64 v13; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v14)(__int64, unsigned __int64 *, int); // [rsp+D8h] [rbp+3Fh]
  _QWORD *v15; // [rsp+E8h] [rbp+4Fh]

  memset_0(v9, 0, 0xC0uLL);
  v8[1] = 0LL;
  v13 = -1LL;
  v14 = MiCrashdumpRemovePte;
  v12 = 0xFFFF800000000000uLL;
  v15 = v8;
  v8[0] = a1;
  if ( MiSystemInSingleProcessorMode() )
  {
    v9[0] = 140800;
    return MiWalkPageTables(v9);
  }
  else
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v11 = AnyMultiplexedVm;
    v9[0] = 6;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      v10 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)AnyMultiplexedVm);
    }
    else
    {
      v10 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v3, v5, v6);
    }
    MiWalkPageTables(v9);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v10);
  }
}
