/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x140677E38
 * Callers:
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x14059D0F0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 *     MmGetDumpRange @ 0x140677B48 (MmGetDumpRange.c)
 * Callees:
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x14066EA30 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  char *AnyMultiplexedVm; // rbx
  unsigned __int8 CurrentIrql; // cl
  _QWORD v5[2]; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int8 v7; // [rsp+39h] [rbp-60h]
  char *v8; // [rsp+50h] [rbp-49h]
  unsigned __int64 v9; // [rsp+58h] [rbp-41h]
  __int64 v10; // [rsp+60h] [rbp-39h]
  __int64 (__fastcall *v11)(__int64, unsigned __int64 *, int); // [rsp+D8h] [rbp+3Fh]
  _QWORD *v12; // [rsp+E8h] [rbp+4Fh]

  memset_0(v6, 0, 0xC0uLL);
  v5[1] = 0LL;
  v10 = -1LL;
  v11 = MiCrashdumpRemovePte;
  v9 = 0xFFFF800000000000uLL;
  v12 = v5;
  v5[0] = a1;
  if ( MiSystemInSingleProcessorMode() )
  {
    v6[0] = 140800;
    return MiWalkPageTables((__int64)v6);
  }
  else
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
    v8 = AnyMultiplexedVm;
    v6[0] = 6;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      v7 = 17;
      MiLockWorkingSetSharedAtDpc((__int64)AnyMultiplexedVm);
    }
    else
    {
      v7 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    }
    MiWalkPageTables((__int64)v6);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
  }
}
