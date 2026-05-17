/*
 * XREFs of LdrFindEntryForAddress @ 0x1800D0470
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrInitShimEngineDynamic @ 0x1800D01B0 (LdrInitShimEngineDynamic.c)
 *     LdrpIsReparsePoint @ 0x1800D02AC (LdrpIsReparsePoint.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpFindLoadedDllByAddress @ 0x18004F390 (LdrpFindLoadedDllByAddress.c)
 */

__int64 __fastcall LdrFindEntryForAddress(unsigned __int64 a1, __int64 *a2)
{
  int LoadedDllByAddress; // ebx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    LoadedDllByAddress = LdrpFindLoadedDllByAddress(a1, (unsigned __int64 *)&v7, &v6);
    if ( LoadedDllByAddress >= 0 )
    {
      v4 = v7;
      *a2 = v7;
      LdrpDereferenceModule(v4);
    }
  }
  else
  {
    return (unsigned int)-1073741515;
  }
  return (unsigned int)LoadedDllByAddress;
}
