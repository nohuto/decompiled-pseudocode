/*
 * XREFs of MmGetPageBadStatus @ 0x140674AB0
 * Callers:
 *     HalpPmemErrorDeferredHandler @ 0x1405555F0 (HalpPmemErrorDeferredHandler.c)
 *     WheaAttemptRowOffline @ 0x14065CB10 (WheaAttemptRowOffline.c)
 *     WheapProcessOfflineList @ 0x14065F830 (WheapProcessOfflineList.c)
 *     WheapExecuteRowFailureCheck @ 0x1407C8EE8 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x1407C9224 (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiIsPageOnBadList @ 0x14030492C (MiIsPageOnBadList.c)
 *     MiGetPageInHugePageBadStatus @ 0x14067024C (MiGetPageInHugePageBadStatus.c)
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
