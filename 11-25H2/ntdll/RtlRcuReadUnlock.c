/*
 * XREFs of RtlRcuReadUnlock @ 0x1801492D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWakeAddressAll @ 0x1800044C0 (RtlWakeAddressAll.c)
 */

void __fastcall RtlRcuReadUnlock(_RTL_SRWLOCK *a1, __int64 **a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  unsigned __int64 *v5; // rcx

  v3 = *a2;
  if ( *a2 )
  {
    if ( !*v3 )
      __fastfail(0xEu);
    v4 = *v3 - 1;
    *v3 = v4;
    if ( !v4 )
    {
      v5 = (unsigned __int64 *)(v3 + 2);
      *v5 = a1[2].Value | 1;
      RtlWakeAddressAll(v5);
    }
  }
  else
  {
    RtlReleaseSRWLockShared(a1 + 15);
  }
}
