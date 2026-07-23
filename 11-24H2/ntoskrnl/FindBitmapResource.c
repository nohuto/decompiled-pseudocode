/*
 * XREFs of FindBitmapResource @ 0x140C1C50C
 * Callers:
 *     BvgaDriverInitialize @ 0x140C1C310 (BvgaDriverInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     LdrAccessResource @ 0x14077E280 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x14077E5C0 (LdrFindResource_U.c)
 */

PVOID __fastcall FindBitmapResource(ULONG_PTR a1, ULONG *a2)
{
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+20h] [rbp-38h] BYREF
  PVOID ResourceBuffer; // [rsp+28h] [rbp-30h] BYREF
  _LDR_RESOURCE_INFO v6; // [rsp+30h] [rbp-28h] BYREF

  ResourceDataEntry = 0LL;
  ResourceBuffer = 0LL;
  v6.Language = 0LL;
  v6.Name = a1;
  v6.Type = 2LL;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &v6, 3u, &ResourceDataEntry) < 0
    || LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &ResourceBuffer, a2) < 0 )
  {
    return 0LL;
  }
  else
  {
    return ResourceBuffer;
  }
}
