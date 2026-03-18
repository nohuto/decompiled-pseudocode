/*
 * XREFs of ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1401DFD24
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1403EA850 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1404008A4 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

struct _LUID __fastcall OUTPUTDUPL_MGR::GetAdapterLuid(ADAPTER_DISPLAY **this, __int64 a2)
{
  ADAPTER_DISPLAY *v4; // rcx
  __int64 v5; // rax

  v4 = *this;
  if ( v4 && !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2544;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      2544LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_BYTE *)this + 88) )
  {
    v5 = (__int64)(this + 12);
    if ( !this )
      v5 = 120LL;
    *(_QWORD *)a2 = *(_QWORD *)v5;
  }
  else if ( *this )
  {
    *(_QWORD *)a2 = *(_QWORD *)(*((_QWORD *)*this + 2) + 412LL);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return (struct _LUID)a2;
}
