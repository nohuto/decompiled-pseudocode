/*
 * XREFs of PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404BC5A4
 * Callers:
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x140270610 (IoReleaseRemoveLockEx.c)
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1404BC634 (PopFxFindAndReferenceAcpiDevice.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopFxAcpiForwardPepAcpiNotifyRequest(ULONG_PTR BugCheckParameter2, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  HIDWORD(v7[0]) = 0;
  if ( (int)PopFxFindAndReferenceAcpiDevice() >= 0 )
  {
    if ( !*(_QWORD *)(BugCheckParameter2 + 80) )
      PopFxBugCheck(0x668uLL, BugCheckParameter2, *a2, 0LL);
    v7[1] = *((_QWORD *)&PopFxPlatformInterface + 1);
    v7[0] = 0LL;
    v7[2] = 0LL;
    v7[3] = a2;
    guard_dispatch_icall_no_overrides(v7, v4, v5, v6);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 312), (PVOID)0x66466F50, 0x20u);
  }
}
