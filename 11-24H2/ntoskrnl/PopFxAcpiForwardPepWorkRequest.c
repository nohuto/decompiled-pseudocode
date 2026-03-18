/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x1404F588C
 * Callers:
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140270610 (IoReleaseRemoveLockEx.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2, __int64 a3, __int64 a4)
{
  struct _IO_REMOVE_LOCK *v4; // rbx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  HIDWORD(v5[0]) = 0;
  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  v4 = (struct _IO_REMOVE_LOCK *)(BugCheckParameter2 + 312);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 316));
  if ( *(_BYTE *)(BugCheckParameter2 + 312) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 316), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(BugCheckParameter2 + 320), 0, 0);
  }
  else
  {
    v5[0] = 0LL;
    v5[2] = 0LL;
    v5[1] = *((_QWORD *)&PopFxPlatformInterface + 1);
    v5[3] = a2;
    guard_dispatch_icall_no_overrides(v5, a2, a3, a4);
    IoReleaseRemoveLockEx(v4, (PVOID)0x77466F50, 0x20u);
  }
}
