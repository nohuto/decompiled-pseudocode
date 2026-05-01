/*
 * XREFs of RmReleaseResources @ 0x18000FA20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FA70 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z @ 0x18000FB90 (-RmReleaseResources@ResourceManagerProxy@@QEAAJ_K@Z.c)
 */

__int64 __fastcall RmReleaseResources(unsigned __int64 a1)
{
  __int64 result; // rax
  ResourceManagerProxy *v3; // rcx
  struct ResourceManagerProxy *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = GetResourceManagerProxy(&v4);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::RmReleaseResources(v3, a1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
