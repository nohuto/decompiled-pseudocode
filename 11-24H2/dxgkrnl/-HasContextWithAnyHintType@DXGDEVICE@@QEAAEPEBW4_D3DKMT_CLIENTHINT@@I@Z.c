/*
 * XREFs of ?HasContextWithAnyHintType@DXGDEVICE@@QEAAEPEBW4_D3DKMT_CLIENTHINT@@I@Z @ 0x1401BAE10
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403C9B44 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x14002BEA0 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::HasContextWithAnyHintType(
        ADAPTER_RENDER **this,
        const enum _D3DKMT_CLIENTHINT *a2)
{
  ADAPTER_RENDER **v4; // rax
  unsigned int v5; // edx
  const enum _D3DKMT_CLIENTHINT *v6; // rcx

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5551;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5551LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
    return 0;
  v4 = (ADAPTER_RENDER **)this[62];
LABEL_5:
  if ( v4 == this + 62 || !v4 )
    return 0;
  v5 = 0;
  v6 = a2;
  while ( *((_DWORD *)v4 + 36) != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 >= 8 )
    {
      v4 = (ADAPTER_RENDER **)*v4;
      goto LABEL_5;
    }
  }
  return 1;
}
