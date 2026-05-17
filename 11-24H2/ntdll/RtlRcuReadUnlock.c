/*
 * XREFs of RtlRcuReadUnlock @ 0x180147D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlWakeAddressAll @ 0x180098E50 (RtlWakeAddressAll.c)
 */

signed __int64 __fastcall RtlRcuReadUnlock(__int64 a1, signed __int64 **a2)
{
  signed __int64 *v3; // rcx
  signed __int64 result; // rax
  __int64 *v5; // rcx

  v3 = *a2;
  if ( !*a2 )
    return RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 120));
  if ( !*v3 )
    __fastfail(0xEu);
  result = *v3 - 1;
  *v3 = result;
  if ( !result )
  {
    v5 = v3 + 2;
    *v5 = *(_QWORD *)(a1 + 16) | 1LL;
    return RtlWakeAddressAll((unsigned __int64)v5);
  }
  return result;
}
