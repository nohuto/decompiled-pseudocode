/*
 * XREFs of HvpViewMapAcquireChargesAndLockViewPages @ 0x140A4D5D8
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140883560 (HvpViewMapMakeViewRangeValid.c)
 * Callees:
 *     CmSiAcquireProcessLockedPagesCharge @ 0x1403C50A0 (CmSiAcquireProcessLockedPagesCharge.c)
 *     CmSiReleaseProcessLockedPagesCharge @ 0x1403C519C (CmSiReleaseProcessLockedPagesCharge.c)
 *     CmSiLockViewOfSection @ 0x140495EA0 (CmSiLockViewOfSection.c)
 */

__int64 __fastcall HvpViewMapAcquireChargesAndLockViewPages(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
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
