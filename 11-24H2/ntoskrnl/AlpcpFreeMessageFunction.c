/*
 * XREFs of AlpcpFreeMessageFunction @ 0x140896B30
 * Callers:
 *     ExFreeToPagedLookasideList @ 0x1403C00D0 (ExFreeToPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1404365C0 (FsRtlUninitializeBaseMcb.c)
 *     AlpcMessageDestroyProcedure @ 0x140897C10 (AlpcMessageDestroyProcedure.c)
 *     AlpcpUnlockBlob @ 0x1408980A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14089EBC0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExMapHandleToPointerEx @ 0x140896120 (ExMapHandleToPointerEx.c)
 *     ExDestroyHandle @ 0x1408961C0 (ExDestroyHandle.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeMessageFunction(_DWORD *P)
{
  unsigned int v2; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int *v4; // rdi
  unsigned int v5; // ebx
  __int64 *v6; // rax

  v2 = P[78] & 0x7FFFFFFF;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( (v2 & 0xFC000000) != 0 )
    {
      v4 = 0LL;
      if ( AlpcpSecondaryMessageTables )
        v4 = *(unsigned int **)(AlpcpSecondaryMessageTables + 8 * ((unsigned __int64)v2 >> 26));
    }
    else
    {
      v4 = (unsigned int *)AlpcMessageTable;
    }
    v5 = v2 & 0x3FFFFFF;
    v6 = ExMapHandleToPointerEx(v4, v5, KeGetCurrentThread()->PreviousMode);
    ExDestroyHandle((__int64)v4, v5, v6);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  ExFreePoolWithTag(P, 0);
}
