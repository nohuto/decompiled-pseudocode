/*
 * XREFs of ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x14019BD24
 * Callers:
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1401E7B3C (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_RENDER::AcquireOverlayId(ADAPTER_RENDER *this, struct DXGOVERLAY *a2)
{
  __int64 i; // rcx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3388;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pOverlayOwner != NULL", 3388LL, 0LL, 0LL, 0LL, 0LL);
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
