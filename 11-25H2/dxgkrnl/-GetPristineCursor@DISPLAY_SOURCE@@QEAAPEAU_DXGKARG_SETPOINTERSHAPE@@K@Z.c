/*
 * XREFs of ?GetPristineCursor@DISPLAY_SOURCE@@QEAAPEAU_DXGKARG_SETPOINTERSHAPE@@K@Z @ 0x1402CDF2C
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC238 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

struct _DXGKARG_SETPOINTERSHAPE *__fastcall DISPLAY_SOURCE::GetPristineCursor(DISPLAY_SOURCE *this, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // r9
  __int64 v6; // rax

  v3 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*((ADAPTER_DISPLAY **)this + 1)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5513;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DisplayCore->IsCoreResourceSharedOwner()",
      5513LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 204) < (unsigned int)v3 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 100));
    *((_DWORD *)this + 204) = 0;
    v6 = operator new[](v3, 0x4B677844u, 256LL, v5);
    *((_QWORD *)this + 100) = v6;
    if ( v6 )
      *((_DWORD *)this + 204) = v3;
  }
  return (struct _DXGKARG_SETPOINTERSHAPE *)((char *)this + 776);
}
