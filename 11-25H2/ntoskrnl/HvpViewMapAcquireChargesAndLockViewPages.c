/*
 * XREFs of HvpViewMapAcquireChargesAndLockViewPages @ 0x140A4D5D8
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140883560 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C50A0 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiLockViewOfSection @ 0x140495EA0 (CmSiLockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapAcquireChargesAndLockViewPages(__int64 a1, void **a2, void *a3, ULONG_PTR a4)
{
  ULONG_PTR v7; // rcx
  int locked; // ebx

  locked = CmSiAcquireProcessLockedPagesCharge(a2, a4);
  if ( locked >= 0 )
  {
    locked = CmSiLockViewOfSection(v7, a2, a3, a4);
    if ( locked < 0 )
      CmSiReleaseProcessLockedPagesCharge(a2, a4);
    else
      return 0;
  }
  return (unsigned int)locked;
}
