/*
 * XREFs of ?QueryFeatureInterface@DXGADAPTER@@QEAAJW4_DXGK_FEATURE_ID@@GGPEAX@Z @ 0x140191DC0
 * Callers:
 *     DXGADAPTER_QueryFeatureInterface @ 0x14006C260 (DXGADAPTER_QueryFeatureInterface.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     DpiQueryFeatureDriverInterface @ 0x1402472A0 (DpiQueryFeatureDriverInterface.c)
 */

__int64 __fastcall DXGADAPTER::QueryFeatureInterface(__int64 a1, int a2, int a3, int a4, void *a5)
{
  int FeatureDriverInterface; // ebx

  FeatureDriverInterface = DpiQueryFeatureDriverInterface(*(_QWORD *)(a1 + 216), a2, a3, a4, a5);
  if ( FeatureDriverInterface < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13257;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 13257LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)FeatureDriverInterface;
}
