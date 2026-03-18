/*
 * XREFs of ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1401C127C
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401C0F90 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ?GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x14006D130 (-GetBlackScreenDiagDataSize@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401C0378 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1401C1998 (-NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ.c)
 *     DxgkWriteDiagEntry @ 0x14031DEC0 (DxgkWriteDiagEntry.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackScreenDiagPacket(DISPLAYSTATECHECKER *this)
{
  unsigned int BlackScreenDiagDataSize; // esi
  void *v3; // rax
  struct _DXGK_DIAG_HEADER *v4; // rbx
  void *v5; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v6[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-18h]

  BlackScreenDiagDataSize = DISPLAYSTATECHECKER::GetBlackScreenDiagDataSize(this);
  v3 = (void *)operator new[](BlackScreenDiagDataSize, 0x4B677844u, 256LL);
  v5 = v3;
  v4 = (struct _DXGK_DIAG_HEADER *)v3;
  if ( v3 )
  {
    DISPLAYSTATECHECKER::GetBlackScreenDiagPacket(
      this,
      (struct _DXGK_DIAG_BLACK_SCREEN_PACKET2 *)v3,
      BlackScreenDiagDataSize);
    DxgkWriteDiagEntry(v4);
    v6[0] = 0x3800000033uLL;
    v7 = 0LL;
    DWORD2(v7) = 0;
    *(_QWORD *)&v7 = 0LL;
    v8 = 0LL;
    v6[1] = 0LL;
    if ( DISPLAYSTATECHECKER::NeedLidStateRecovery(this) )
      LODWORD(v8) = v8 | 1;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v6);
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 494;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&v5);
}
