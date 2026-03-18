/*
 * XREFs of ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x14000CEF8
 * Callers:
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401FD2D8 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x14000FBB0 (-Release@COREACCESS@@QEAAXXZ.c)
 */

__int64 __fastcall COREACCESS::operator=(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( *(_BYTE *)(a1 + 24) )
      COREACCESS::Release((COREACCESS *)a1);
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(a1 + 16));
  }
  v4 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  if ( v4 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v4 + 24));
    *(_QWORD *)(a1 + 8) = -1LL;
  }
  *(_BYTE *)(a2 + 24) = 0;
  return a1;
}
