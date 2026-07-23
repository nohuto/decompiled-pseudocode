/*
 * XREFs of WheaPrmTranslateDimmAddress @ 0x14065CD20
 * Callers:
 *     <none>
 * Callees:
 *     WheapPrmTranslateDimmAddressIntel @ 0x14065CDE0 (WheapPrmTranslateDimmAddressIntel.c)
 */

__int64 WheaPrmTranslateDimmAddress()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  result = 3221225659LL;
  if ( !CurrentPrcb->CpuID )
    return 3221225473LL;
  if ( CurrentPrcb->CpuVendor == 2 )
    return WheapPrmTranslateDimmAddressIntel();
  return result;
}
