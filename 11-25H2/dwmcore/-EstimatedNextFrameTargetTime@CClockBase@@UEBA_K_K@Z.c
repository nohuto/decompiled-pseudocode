/*
 * XREFs of ?EstimatedNextFrameTargetTime@CClockBase@@UEBA_K_K@Z @ 0x1800CADF0
 * Callers:
 *     ?Ready@CTargetStats@@QEAA_N_K_N@Z @ 0x1800C9348 (-Ready@CTargetStats@@QEAA_N_K_N@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CClockBase::EstimatedNextFrameTargetTime(CClockBase *this, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rcx

  v2 = *((_QWORD *)this + 3);
  v3 = v2 + *((_QWORD *)this + 2);
  if ( v3 <= a2 )
    return v2 + a2 - (a2 - v3) % v2;
  return v3;
}
