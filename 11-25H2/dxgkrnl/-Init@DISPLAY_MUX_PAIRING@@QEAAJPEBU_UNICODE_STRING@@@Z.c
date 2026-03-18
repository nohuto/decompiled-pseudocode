/*
 * XREFs of ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140084C0C
 * Callers:
 *     ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x140086844 (-ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1400846E8 (-Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x140087720 (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x140088334 (-UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_DEVICE@@U?$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_DEVICE@@@Z @ 0x14008834C (-reset@-$unique_ptr@VDISPLAY_MUX_DEVICE@@U-$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::Init(
        DISPLAY_MUX_PAIRING *this,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  DISPLAY_MUX_DEVICE **v5; // rsi
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx

  v5 = (DISPLAY_MUX_DEVICE **)((char *)this + 8);
  v7 = operator new(0xA8uLL, 0x4B677844u, 256LL, a4);
  if ( v7 )
  {
    *(_OWORD *)v7 = 0LL;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    *(_OWORD *)(v7 + 48) = 0LL;
    *(_DWORD *)(v7 + 72) = 0;
    *(_QWORD *)(v7 + 80) = 0LL;
    *(_QWORD *)(v7 + 88) = 0LL;
    *(_QWORD *)(v7 + 96) = 0LL;
  }
  wistd::unique_ptr<DISPLAY_MUX_DEVICE,wistd::default_delete<DISPLAY_MUX_DEVICE>>::reset(v5, v7);
  if ( !*v5 )
  {
    v8 = -1073741801;
    v9 = 10LL;
LABEL_5:
    DISPLAY_MUX_PAIRING::SetPairingStatus(this, v9);
    return (unsigned int)v8;
  }
  v8 = DISPLAY_MUX_DEVICE::Init(*v5, a2);
  if ( v8 < 0 )
  {
    v9 = 11LL;
    goto LABEL_5;
  }
  v11 = 1LL;
  v12 = *((_QWORD *)*v5 + 8);
  if ( HIDWORD(v12) != 1 )
    v11 = 12LL;
  DISPLAY_MUX_PAIRING::SetPairingStatus(this, v11);
  if ( (_DWORD)v12 != 4 && !DISPLAY_MUX_MGR::UseNonFullSupportComponents(qword_14015E3C0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1661;
    DISPLAY_MUX_PAIRING::SetPairingStatus(this, 14LL);
  }
  return 0LL;
}
