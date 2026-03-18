/*
 * XREFs of MmRemoveSystemCacheFromDump @ 0x14066C4E8
 * Callers:
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x1405999E0 (IopLiveDumpRemoveSystemCacheFromDump.c)
 *     MmGetDumpRange @ 0x14066C1F8 (MmGetDumpRange.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiSystemInSingleProcessorMode @ 0x140662EF0 (MiSystemInSingleProcessorMode.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall MmRemoveSystemCacheFromDump(__int64 a1)
{
  char *AnyMultiplexedVm; // rbx
  unsigned __int8 CurrentIrql; // cl
  _QWORD v5[2]; // [rsp+20h] [rbp-79h] BYREF
  int v6[2]; // [rsp+30h] [rbp-69h] BYREF
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
    return MiWalkPageTables(v6);
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
    MiWalkPageTables(v6);
    return MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v7);
  }
}
