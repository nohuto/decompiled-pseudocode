/*
 * XREFs of PopFxGetParentFxDevice @ 0x1405D13FC
 * Callers:
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     PopFxReferenceDevice @ 0x14029F788 (PopFxReferenceDevice.c)
 *     ExReleaseSpinLockExclusive @ 0x140379ED0 (ExReleaseSpinLockExclusive.c)
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
