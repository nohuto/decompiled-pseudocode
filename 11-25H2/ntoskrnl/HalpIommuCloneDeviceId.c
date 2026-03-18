/*
 * XREFs of HalpIommuCloneDeviceId @ 0x1404DACA4
 * Callers:
 *     HalpIommuCreateDevice @ 0x14054ACF8 (HalpIommuCreateDevice.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x140550F70 (HalpIommuCreateIncreaseAliasTrack.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140337DCC (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140338EDC (HalpMmAllocCtxAlloc.c)
 *     IidCloneDeviceId @ 0x1408071D8 (IidCloneDeviceId.c)
 *     IidGetDeviceIdBufferSize @ 0x140A9E550 (IidGetDeviceIdBufferSize.c)
 */

__int64 __fastcall HalpIommuCloneDeviceId(void *Src, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // rax
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  result = IidGetDeviceIdBufferSize(Src, &v9);
  if ( (int)result >= 0 )
  {
    v6 = (void *)HalpMmAllocCtxAlloc(v5, v9);
    *a2 = (__int64)v6;
    if ( v6 )
    {
      v8 = IidCloneDeviceId(Src, v6);
      if ( v8 < 0 )
      {
        HalpMmAllocCtxFree(v7, *a2);
        *a2 = 0LL;
      }
      return (unsigned int)v8;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
