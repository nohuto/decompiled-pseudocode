/*
 * XREFs of ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x14008529C
 * Callers:
 *     ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x140086F00 (-ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140084D78 (-Init@DISPLAY_MUX_DEVICE@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z @ 0x140087DDC (-SetPairingStatus@DISPLAY_MUX_PAIRING@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_PAIRING_STATUS@@J@Z.c)
 *     ?UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ @ 0x14008895C (-UseNonFullSupportComponents@DISPLAY_MUX_MGR@@QEAA_NXZ.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_DEVICE@@U?$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_DEVICE@@@Z @ 0x140088974 (-reset@-$unique_ptr@VDISPLAY_MUX_DEVICE@@U-$default_delete@VDISPLAY_MUX_DEVICE@@@wistd@@@wistd@@.c)
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::Init(DISPLAY_MUX_PAIRING *this, struct _UNICODE_STRING *a2)
{
  DISPLAY_MUX_DEVICE **v3; // rsi
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rbx

  v3 = (DISPLAY_MUX_DEVICE **)((char *)this + 8);
  v5 = operator new(0xA8uLL, 0x4B677844u, 256LL);
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *(_OWORD *)(v5 + 16) = 0LL;
    *(_OWORD *)(v5 + 32) = 0LL;
    *(_OWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 72) = 0;
    *(_QWORD *)(v5 + 80) = 0LL;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_QWORD *)(v5 + 96) = 0LL;
  }
  wistd::unique_ptr<DISPLAY_MUX_DEVICE,wistd::default_delete<DISPLAY_MUX_DEVICE>>::reset(v3, v5);
  if ( !*v3 )
  {
    v6 = -1073741801;
    v7 = 10LL;
LABEL_5:
    DISPLAY_MUX_PAIRING::SetPairingStatus(this, v7);
    return (unsigned int)v6;
  }
  v6 = DISPLAY_MUX_DEVICE::Init(*v3, a2);
  if ( v6 < 0 )
  {
    v7 = 11LL;
    goto LABEL_5;
  }
  v9 = 1LL;
  v10 = *((_QWORD *)*v3 + 8);
  if ( HIDWORD(v10) != 1 )
    v9 = 12LL;
  DISPLAY_MUX_PAIRING::SetPairingStatus(this, v9);
  if ( (_DWORD)v10 != 4 && !DISPLAY_MUX_MGR::UseNonFullSupportComponents(qword_140161380) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1673;
    DISPLAY_MUX_PAIRING::SetPairingStatus(this, 14LL);
  }
  return 0LL;
}
