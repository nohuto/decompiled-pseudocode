/*
 * XREFs of ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C19E4
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C0F90 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x14006D130 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?SetRecoveryOptionForGivenInstanceGuid@LongPowerButtonHoldListener@@QEAAXU_GUID@@_N@Z @ 0x14006EDB8 (-SetRecoveryOptionForGivenInstanceGuid@LongPowerButtonHoldListener@@QEAAXU_GUID@@_N@Z.c)
 *     ?GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ @ 0x14006EE64 (-GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ.c)
 *     ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401BE290 (-DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401C0378 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::SendDisplayDiagnosticsToBroker(DISPLAYSTATECHECKER *this)
{
  unsigned int BlackScreenDiagDataSize; // ebp
  void *v3; // rax
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v4; // rsi
  char *v5; // rdi
  struct DXGGLOBAL *Global; // rax
  LongPowerButtonHoldListener *LongPowerButtonHoldListener; // rax
  char v8; // r8
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  void *v10; // [rsp+48h] [rbp+10h] BYREF

  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v3 = (void *)operator new[](BlackScreenDiagDataSize, 0x4B677844u, 256LL);
  v10 = v3;
  v4 = (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)v3;
  if ( v3 )
  {
    DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
      this,
      (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)v3,
      BlackScreenDiagDataSize);
    v5 = (char *)this + 14095;
    DxgkSendDisplayDiagnosticsToBroker(BlackScreenDiagDataSize, v4, (bool *)this + 14095);
    if ( (unsigned __int8)*(_DWORD *)this == 8 )
    {
      if ( *v5 )
      {
        Global = DXGGLOBAL::GetGlobal();
        LongPowerButtonHoldListener = DisplayDiagnostics::GetLongPowerButtonHoldListener((struct DXGGLOBAL *)((char *)Global + 305008));
        if ( LongPowerButtonHoldListener )
        {
          v8 = *v5;
          v9 = *(struct _GUID *)((char *)this + 20);
          LongPowerButtonHoldListener::SetRecoveryOptionForGivenInstanceGuid(LongPowerButtonHoldListener, &v9, v8);
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 518;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v10);
}
