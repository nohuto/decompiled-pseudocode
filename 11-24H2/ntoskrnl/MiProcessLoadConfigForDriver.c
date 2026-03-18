/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140A6587C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x140A658DC (LdrInitSecurityCookie.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x140A659F0 (MiProcessKernelCfgImageLoadConfig.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r8

  if ( !_bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    result = MiProcessKernelCfgImageLoadConfig();
    if ( (int)result < 0 )
      return result;
    if ( a2 )
    {
      v5 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
      v6 = ExGenRandom(0);
      LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), v7, v5 | v6);
    }
  }
  return 0LL;
}
