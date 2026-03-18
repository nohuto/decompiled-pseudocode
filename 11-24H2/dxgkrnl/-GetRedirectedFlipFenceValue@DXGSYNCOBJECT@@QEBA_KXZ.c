/*
 * XREFs of ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x1400541F0
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x14029F130 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall DXGSYNCOBJECT::GetRedirectedFlipFenceValue(DXGSYNCOBJECT *this)
{
  if ( *((_DWORD *)this + 101) != 3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 461;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetSyncObjectType() == D3DDDI_FENCE",
      461LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((_QWORD *)this + 15);
}
