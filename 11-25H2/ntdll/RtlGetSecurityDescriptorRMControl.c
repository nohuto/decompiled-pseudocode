/*
 * XREFs of RtlGetSecurityDescriptorRMControl @ 0x18010EA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlGetSecurityDescriptorRMControl(__int64 a1, _BYTE *a2)
{
  if ( (*(_WORD *)(a1 + 2) & 0x4000) != 0 )
  {
    *a2 = *(_BYTE *)(a1 + 1);
    return 1;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
