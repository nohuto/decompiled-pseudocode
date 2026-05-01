/*
 * XREFs of RmAcquireResources @ 0x18000F960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x18000FA70 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 *     ?RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK_KPEAXHW4RmPend@@PEAHPEA_K@Z @ 0x18000FADC (-RmAcquireResources@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK_KPEAXHW4RmPend@@PEAHPEA_K.c)
 */

__int64 __fastcall RmAcquireResources(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // rax
  struct ResourceManagerProxy *v15; // [rsp+60h] [rbp-18h] BYREF

  v15 = 0LL;
  result = GetResourceManagerProxy(&v15);
  if ( (int)result >= 0 )
  {
    result = ResourceManagerProxy::RmAcquireResources(v15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
