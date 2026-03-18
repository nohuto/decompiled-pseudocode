/*
 * XREFs of ?DxgkpStopRenderAndSessionDisplayAdapters@@YAJAEAW4_DXGK_DIAG_BDD_FALLBACK_STAGE@@@Z @ 0x14018EFE4
 * Callers:
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1401894F8 (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1401D6728 (-ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x140406900 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkpStopRenderAndSessionDisplayAdapters(enum _DXGK_DIAG_BDD_FALLBACK_STAGE *a1)
{
  __int64 v2; // rbx
  DXGGLOBAL *v3; // rax
  DXGADAPTER *v4; // rsi
  struct DXGGLOBAL *v6; // rax
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v8; // rsi
  struct DXGGLOBAL *v9; // rax
  __int16 v10; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
  if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + 125) == v2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v8 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v11);
    if ( !v8 )
    {
      *(_DWORD *)a1 = 3;
      return 3221226021LL;
    }
    v10 = 1;
    v9 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v9, DxgkpEscapeStopAdapters, &v10, 4LL);
    DXGADAPTER::ReleaseReference(v8);
    if ( !HIBYTE(v10) )
    {
      *(_DWORD *)a1 = 6;
      return 3221225473LL;
    }
  }
  else
  {
    v11 = 0LL;
    v3 = DXGGLOBAL::GetGlobal();
    v4 = DXGGLOBAL::ReferenceWarpAdapter(v3, &v11);
    if ( !v4 )
    {
      *(_DWORD *)a1 = 2;
      return 3221226021LL;
    }
    v10 = 0;
    v6 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(v6, DxgkpEscapeStopAdapters, &v10, 3LL);
    DXGADAPTER::ReleaseReference(v4);
    if ( !HIBYTE(v10) )
    {
      *(_DWORD *)a1 = 5;
      return 3221225473LL;
    }
  }
  return 0LL;
}
