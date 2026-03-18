/*
 * XREFs of IommupCreateDeviceId @ 0x140567530
 * Callers:
 *     IommuDeviceCreate @ 0x140703920 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     HalpIommuGetDeviceId @ 0x140552280 (HalpIommuGetDeviceId.c)
 */

__int64 __fastcall IommupCreateDeviceId(__int64 a1, __int64 a2, __int64 *a3)
{
  int DeviceId; // edi

  *a3 = 0LL;
  if ( a1 )
  {
    DeviceId = HalpIommuGetDeviceId(a1, a3);
    if ( DeviceId >= 0 )
      return (unsigned int)DeviceId;
  }
  else
  {
    DeviceId = -1073741637;
  }
  if ( *a3 )
  {
    HalpMmAllocCtxFree(a1, *a3);
    *a3 = 0LL;
  }
  return (unsigned int)DeviceId;
}
