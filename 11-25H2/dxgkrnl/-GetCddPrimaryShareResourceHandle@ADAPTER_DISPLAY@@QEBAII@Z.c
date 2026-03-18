/*
 * XREFs of ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x140196D28
 * Callers:
 *     DxgkGetSharedPrimaryHandle @ 0x1401AA510 (DxgkGetSharedPrimaryHandle.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x14040674C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1369;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      1369LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1370;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 1370LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *(_QWORD *)(3984 * v3 + *((_QWORD *)this + 16) + 88);
  if ( !v4 || (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 4LL) & 0x10) != 0 )
    return 0LL;
  else
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 56LL) + 24LL);
}
