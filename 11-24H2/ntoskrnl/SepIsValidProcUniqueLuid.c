/*
 * XREFs of SepIsValidProcUniqueLuid @ 0x140794500
 * Callers:
 *     SepRmValidateProcUniqueLuidWrkr @ 0x140793C40 (SepRmValidateProcUniqueLuidWrkr.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     SepFindMatchingLuidEntry @ 0x140794464 (SepFindMatchingLuidEntry.c)
 */

__int64 __fastcall SepIsValidProcUniqueLuid(struct _LIST_ENTRY **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  signed __int64 *v4; // rsi
  _QWORD *v5; // rbx
  signed __int64 *v6; // rbx
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v3 = -1073741275;
  --CurrentThread->KernelApcDisable;
  v4 = (signed __int64 *)SeLuidToIndexMapping;
  v5 = KeAbPreAcquire(SeLuidToIndexMapping, 0LL);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v5, (__int64)v4);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  SepFindMatchingLuidEntry(*(PRTL_DYNAMIC_HASH_TABLE *)(SeLuidToIndexMapping + 8), a1, &v8);
  if ( v8 )
    v3 = *(_BYTE *)(v8 + 48) != 0 ? 0xC0000225 : 0;
  v6 = (signed __int64 *)SeLuidToIndexMapping;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)SeLuidToIndexMapping, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KeLeaveCriticalRegion();
  return v3;
}
