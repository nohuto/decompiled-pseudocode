/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x1409C3960
 * Callers:
 *     MiMapImageInSystemProcess @ 0x1407ED868 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x1407F6D40 (MiAllocateEnclaveVad.c)
 *     MiMapExParametersInitialize @ 0x14099F5A8 (MiMapExParametersInitialize.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409C3660 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetUserReservationHighestAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v4 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v4 = 0x7FFFFFFEFFFFLL;
    v2 = v4;
  }
  result = *(_QWORD *)(a1 + 872) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
