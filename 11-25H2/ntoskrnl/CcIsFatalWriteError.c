/*
 * XREFs of CcIsFatalWriteError @ 0x1403BEC88
 * Callers:
 *     CcFlushCachePostProcessOneRange @ 0x1402D9210 (CcFlushCachePostProcessOneRange.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403A6780 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1403A73C0 (CcUnpinRepinnedBcb.c)
 *     CcWriteBehindPostProcess @ 0x1403ACE8C (CcWriteBehindPostProcess.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C235C (CcReferenceSharedCacheMapFileObject.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1403BF240 (FsRtlIsTotalDeviceFailure.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  char v5; // bl
  ULONG_PTR v6; // rax
  int v7; // esi

  if ( a2 >= 0 )
    return 0;
  v5 = 1;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x198CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = CcReferenceSharedCacheMapFileObject(a1);
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 8) + 52LL) & 0x10;
  ObFastDereferenceObjectDeferDelete((__int64 *)(a1 + 96), v6, 1666409283LL);
  if ( (a2 == -1073741740 || !v7 && a2 != -1073741672 && a2 != -1073741566 && a2 != -1073741202) && a2 != -1073741810 )
  {
    if ( a2 == -1073741667 )
    {
      if ( !v7 )
        return v5;
      return FsRtlIsTotalDeviceFailure(a2) == 0;
    }
    if ( a2 != -1073741662 )
      return FsRtlIsTotalDeviceFailure(a2) == 0;
  }
  return v5;
}
