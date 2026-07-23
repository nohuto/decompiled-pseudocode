/*
 * XREFs of PopFxAcpiForwardPepWorkRequest @ 0x1404F318C
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140225BA0 (IoReleaseRemoveLockEx.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxAcpiForwardPepWorkRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  struct _IO_REMOVE_LOCK *v2; // rbx
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  HIDWORD(v3[0]) = 0;
  if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
    PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
  v2 = (struct _IO_REMOVE_LOCK *)(BugCheckParameter2 + 312);
  _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter2 + 316));
  if ( *(_BYTE *)(BugCheckParameter2 + 312) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter2 + 316), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(BugCheckParameter2 + 320), 0, 0);
  }
  else
  {
    v3[0] = 0LL;
    v3[2] = 0LL;
    v3[1] = *((_QWORD *)&PopFxPlatformInterface + 1);
    v3[3] = a2;
    guard_dispatch_icall_no_overrides(v3, a2);
    IoReleaseRemoveLockEx(v2, (PVOID)0x77466F50, 0x20u);
  }
}
