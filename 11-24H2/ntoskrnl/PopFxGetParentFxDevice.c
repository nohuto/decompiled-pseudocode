/*
 * XREFs of PopFxGetParentFxDevice @ 0x1405CEB1C
 * Callers:
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     PopFxReferenceDevice @ 0x1403AA248 (PopFxReferenceDevice.c)
 */

__int64 __fastcall PopFxGetParentFxDevice(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // bp

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v2 = *(_QWORD *)(v1 + 80);
    v4 = v3;
    if ( v2 )
      PopFxReferenceDevice(*(_QWORD *)(v1 + 80), 6);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), v4);
  }
  return v2;
}
