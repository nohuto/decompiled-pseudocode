/*
 * XREFs of CcIsFatalWriteError @ 0x140260830
 * Callers:
 *     CcFlushCachePostProcessOneRange @ 0x140275FC0 (CcFlushCachePostProcessOneRange.c)
 *     CcWriteBehindPostProcess @ 0x14027A62C (CcWriteBehindPostProcess.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14040B624 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x14048F410 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x1402090F0 (ObFastDereferenceObjectDeferDelete.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1402091EC (CcReferenceSharedCacheMapFileObject.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140260640 (FsRtlIsTotalDeviceFailure.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  ObFastDereferenceObjectDeferDelete((__int64 *)(a1 + 96), v6);
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
