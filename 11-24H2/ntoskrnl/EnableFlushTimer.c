/*
 * XREFs of EnableFlushTimer @ 0x14044A108
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404B3FD0 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140A49730 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1403AF158 (ExpCheckForFreedEnhancedTimer.c)
 *     KeSetTimer2 @ 0x1403B0C60 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x14044A1DC (ExpTimerSetParametersAreValid.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EnableFlushTimer(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  __int64 v3; // rdi
  ULONG_PTR BugCheckParameter4; // r8
  ULONG_PTR v5; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+38h] [rbp-20h] BYREF

  if ( BugCheckParameter1 )
  {
    BugCheckParameter3[1] = -1LL;
    v3 = -10000LL * a2;
    BugCheckParameter3[0] = 0LL;
    if ( v3 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
    {
      v5 = -10000LL * a2;
      KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&v5, 0LL);
    }
    if ( !(unsigned __int8)ExpTimerSetParametersAreValid(BugCheckParameter3) )
      KeBugCheckEx(0xC7u, 9uLL, 1uLL, (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
    ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
    KeSetTimer2(BugCheckParameter1, (LARGE_INTEGER)v3, 0LL, (__int64)BugCheckParameter3);
  }
}
