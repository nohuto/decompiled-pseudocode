/*
 * XREFs of bDeleteSurface @ 0x1C0062930
 * Callers:
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     EngDeleteSurface @ 0x1C0062910 (EngDeleteSurface.c)
 *     ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B0970 (-StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C4AA0 (-StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1C0150CA8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C015E510 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C008B660 (HmgShareLockCheckIgnoreStockBit.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0159C00 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall bDeleteSurface(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned int v4; // ebx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v6);
  LOBYTE(v2) = 5;
  v3 = HmgShareLockCheckIgnoreStockBit(a1, v2);
  v4 = 0;
  v7 = v3;
  if ( v3 )
    v4 = SURFREF::bDeleteSurface((SURFREF *)v6);
  SURFREF::~SURFREF((SURFREF *)v6);
  return v4;
}
