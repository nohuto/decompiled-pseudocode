/*
 * XREFs of MmGetPageBadStatus @ 0x140675C80
 * Callers:
 *     HalpPmemErrorDeferredHandler @ 0x140552F30 (HalpPmemErrorDeferredHandler.c)
 *     WheaAttemptRowOffline @ 0x14065B230 (WheaAttemptRowOffline.c)
 *     WheapProcessOfflineList @ 0x14065E000 (WheapProcessOfflineList.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C93D8 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x1407C9714 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067141C (MiGetPageInHugePageBadStatus.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1)
{
  unsigned int v1; // ebx
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 v5; // r8
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *a1 >> 12;
  v3 = 48 * v2 - 0x220000000000LL;
  if ( MiSafeLockPage(v2) == 17 )
  {
    v6 = 0;
    return MiGetPageInHugePageBadStatus(v2, 0LL, &v6);
  }
  else
  {
    if ( MiIsPageOnBadList(v3) )
    {
      v1 = -1073740023;
    }
    else if ( (*(_DWORD *)(v3 + 32) & 0x40000000) != 0 )
    {
      v1 = 259;
    }
    MiUnlockPage(v3, v5);
    return v1;
  }
}
