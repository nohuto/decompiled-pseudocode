/*
 * XREFs of ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x1401DA19C
 * Callers:
 *     ?MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z @ 0x1401B7680 (-MapFontFileInKernel@@YA_NPEAXPEAPEAX@Z.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x140303F08 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 *     ?bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z @ 0x140304B38 (-bMapFile@@YAHPEBGPEAUFILEVIEW@@HW4GreFileKind@@@Z.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z @ 0x140304C50 (-bMapFileRetainHandle@@YAHPEBGPEAUFILEVIEW@@KW4GreFileKind@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Gre::MapViewOfSectionObj::Map(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  return Gre::MapViewOfSectionObj::Map(a1, a2, a3, a4, v5);
}
