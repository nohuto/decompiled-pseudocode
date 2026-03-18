/*
 * XREFs of EnableFlushTimer @ 0x1403D1370
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1403D0F14 (InsertEventEntryInLookUpTable.c)
 *     ?TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1404B9130 (-TlgAggregateInternalFlushTimerCallbackKernelMode@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z @ 0x140A51EA0 (-TlgAggregateInternalFlushWorkItemRoutineKernelMode@@YAXPEAX@Z.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1403C0598 (ExpCheckForFreedEnhancedTimer.c)
 *     KeSetTimer2 @ 0x1403C20A0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1403D1F40 (ExpTimerSetParametersAreValid.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
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
    KeSetTimer2(BugCheckParameter1, v3, 0LL, (__int64)BugCheckParameter3);
  }
}
