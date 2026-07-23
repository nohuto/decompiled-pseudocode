/*
 * XREFs of IommupCreateDeviceId @ 0x140564FBC
 * Callers:
 *     IommuDeviceCreate @ 0x1407014F0 (IommuDeviceCreate.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     HalpIommuGetDeviceId @ 0x14054FBC0 (HalpIommuGetDeviceId.c)
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
