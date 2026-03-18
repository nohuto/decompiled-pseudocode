/*
 * XREFs of MmGetPageBadStatus @ 0x140669050
 * Callers:
 *     HalpPmemErrorDeferredHandler @ 0x140552CF0 (HalpPmemErrorDeferredHandler.c)
 *     WheaAttemptRowOffline @ 0x140650B80 (WheaAttemptRowOffline.c)
 *     WheapProcessOfflineList @ 0x1406538A0 (WheapProcessOfflineList.c)
 *     WheapExecuteRowFailureCheck @ 0x1407B9718 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x1407B9A54 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14021E29C (MiIsPageOnBadList.c)
 *     MiSafeLockPage @ 0x140231E30 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiGetPageInHugePageBadStatus @ 0x1406647A4 (MiGetPageInHugePageBadStatus.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int8 v7; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1 >> 12;
  v5 = 48 * v4 - 0x220000000000LL;
  if ( MiSafeLockPage(v4, a2, a3) == 17 )
  {
    v8 = 0;
    return MiGetPageInHugePageBadStatus(v4, 0LL, &v8);
  }
  else
  {
    if ( MiIsPageOnBadList(v5) )
    {
      v3 = -1073740023;
    }
    else if ( (*(_DWORD *)(v5 + 32) & 0x40000000) != 0 )
    {
      v3 = 259;
    }
    MiUnlockPage(v5, v7);
    return v3;
  }
}
