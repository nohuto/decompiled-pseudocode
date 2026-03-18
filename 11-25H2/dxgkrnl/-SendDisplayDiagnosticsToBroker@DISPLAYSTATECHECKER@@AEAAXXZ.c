/*
 * XREFs of ?SendDisplayDiagnosticsToBroker@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401BF034
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401BE5E0 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x14006D370 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?SetRecoveryOptionForGivenInstanceGuid@LongPowerButtonHoldListener@@QEAAXU_GUID@@_N@Z @ 0x14006E334 (-SetRecoveryOptionForGivenInstanceGuid@LongPowerButtonHoldListener@@QEAAXU_GUID@@_N@Z.c)
 *     ?GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ @ 0x14006E3E0 (-GetLongPowerButtonHoldListener@DisplayDiagnostics@@QEAAPEAVLongPowerButtonHoldListener@@XZ.c)
 *     ?DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z @ 0x1401BB908 (-DxgkSendDisplayDiagnosticsToBroker@@YAJIPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@PEA_N@Z.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401BD9C8 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::SendDisplayDiagnosticsToBroker(DISPLAYSTATECHECKER *this)
{
  unsigned int BlackScreenDiagDataSize; // ebp
  __int64 v3; // r9
  void *v4; // rax
  struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *v5; // rsi
  char *v6; // rdi
  __int64 v7; // r9
  struct DXGGLOBAL *Global; // rax
  LongPowerButtonHoldListener *LongPowerButtonHoldListener; // rax
  char v10; // r8
  struct _GUID v11; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+48h] [rbp+10h] BYREF

  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v4 = (void *)operator new[](BlackScreenDiagDataSize, 0x4B677844u, 256LL, v3);
  v12 = v4;
  v5 = (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)v4;
  if ( v4 )
  {
    DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
      this,
      (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)v4,
      BlackScreenDiagDataSize);
    v6 = (char *)this + 14095;
    DxgkSendDisplayDiagnosticsToBroker(BlackScreenDiagDataSize, v5, (bool *)this + 14095, v7);
    if ( (unsigned __int8)*(_DWORD *)this == 8 )
    {
      if ( *v6 )
      {
        Global = DXGGLOBAL::GetGlobal();
        LongPowerButtonHoldListener = DisplayDiagnostics::GetLongPowerButtonHoldListener((struct DXGGLOBAL *)((char *)Global + 304928));
        if ( LongPowerButtonHoldListener )
        {
          v10 = *v6;
          v11 = *(struct _GUID *)((char *)this + 20);
          LongPowerButtonHoldListener::SetRecoveryOptionForGivenInstanceGuid(LongPowerButtonHoldListener, &v11, v10);
        }
      }
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 518;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v12);
}
