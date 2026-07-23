/*
 * XREFs of PopCheckDisabledState @ 0x14099FC54
 * Callers:
 *     PopFilterCapabilities @ 0x14099F88C (PopFilterCapabilities.c)
 * Callees:
 *     <none>
 */

char __fastcall PopCheckDisabledState(int a1)
{
  __int64 *v1; // r8
  char v2; // dl

  v1 = (__int64 *)PowerStateDisableReasonListHead;
  v2 = 0;
  while ( v1 != &PowerStateDisableReasonListHead )
  {
    if ( *((_BYTE *)v1 + a1 + 16) )
      return 1;
    v1 = (__int64 *)*v1;
  }
  return v2;
}
