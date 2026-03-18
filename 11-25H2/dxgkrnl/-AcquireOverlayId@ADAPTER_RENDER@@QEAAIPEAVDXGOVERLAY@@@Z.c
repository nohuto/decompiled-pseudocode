/*
 * XREFs of ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x140199834
 * Callers:
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401E290C (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_RENDER::AcquireOverlayId(ADAPTER_RENDER *this, struct DXGOVERLAY *a2)
{
  __int64 i; // rcx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3389;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pOverlayOwner != NULL", 3389LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 2) + 2444LL); i = (unsigned int)(i + 1) )
  {
    if ( !*((_QWORD *)this + i + 103) )
    {
      *((_QWORD *)this + i + 103) = a2;
      return (unsigned int)i;
    }
  }
  return 0xFFFFFFFFLL;
}
