/*
 * XREFs of ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x1800CF51C
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x1800CD900 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x1800CC458 (-ScreenDuplicationDisabled@WindowFrameLoggingTelemetry@@SAXXZ.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x1800CF588 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveInactiveVisuals(CProjectionBorderManager *this)
{
  CProjectionBorderManager *v1; // rsi
  int v2; // ebx
  __int64 v3; // rdi

  v1 = this;
  LOBYTE(this) = 0;
  v2 = *((_DWORD *)v1 + 106) - 1;
  if ( v2 >= 0 )
  {
    v3 = 56LL * v2;
    do
    {
      if ( !*(_BYTE *)(*((_QWORD *)v1 + 50) + v3 + 48) )
      {
        CProjectionBorderManager::_RemoveVisualByIndex(v1, v2);
        LOBYTE(this) = 1;
      }
      v3 -= 56LL;
      --v2;
    }
    while ( v2 >= 0 );
    if ( (_BYTE)this )
      WindowFrameLoggingTelemetry::ScreenDuplicationDisabled((__int64)this);
  }
}
