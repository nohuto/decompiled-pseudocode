/*
 * XREFs of AlpcpFreeMessageFunction @ 0x140989F90
 * Callers:
 *     ExFreeToPagedLookasideList @ 0x1403E03E0 (ExFreeToPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404408F0 (FsRtlUninitializeBaseMcb.c)
 *     AlpcpReleaseAttributes @ 0x140890220 (AlpcpReleaseAttributes.c)
 *     AlpcpDereferenceBlobEx @ 0x140890420 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140890620 (AlpcpUnlockBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcMessageDestroyProcedure @ 0x1409B08F0 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExDestroyHandle @ 0x14098A050 (ExDestroyHandle.c)
 *     ExMapHandleToPointerEx @ 0x14098A1A0 (ExMapHandleToPointerEx.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *P)
{
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = P[78] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = 0LL;
      if ( AlpcpSecondaryMessageTables )
        v4 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = ExMapHandleToPointerEx(v4, v5);
    ExDestroyHandle(v4, v5, v6);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v7, v8, v9);
  }
  ExFreePoolWithTag(P, 0);
}
