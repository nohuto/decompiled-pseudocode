/*
 * XREFs of ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x140086844
 * Callers:
 *     ?HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z @ 0x1400845B0 (-HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7___ @ 0x140048860 (DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7___.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_PAIRING@@U?$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_PAIRING@@@Z @ 0x14007C4A8 (-reset@-$unique_ptr@VDISPLAY_MUX_PAIRING@@U-$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd.c)
 *     _lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_ @ 0x140081E24 (_lambda_dbcf8364b3ea4150de008656de4589a7_--_lambda_dbcf8364b3ea4150de008656de4589a7_.c)
 *     _DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082144 (_DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140084C0C (-Init@DISPLAY_MUX_PAIRING@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z @ 0x1400876BC (-SetMdmStatus@DISPLAY_MUX_MGR@@AEAAXW4DISPLAYCONFIG_DISPLAYMUX_RUNTIME_STATUS@@J@Z.c)
 *     ?swap@?$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U?$default_delete@VDISPLAY_MUX_SWITCH_OPERATION@@@wistd@@@wistd@@QEAAXAEAV12@@Z @ 0x1400883C0 (-swap@-$unique_ptr@VDISPLAY_MUX_SWITCH_OPERATION@@U-$default_delete@VDISPLAY_MUX_SWITCH_OPERATIO.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::ProcessMuxDeviceArrival(DISPLAY_MUX_MGR *this, struct _UNICODE_STRING *a2)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  DISPLAY_MUX_PAIRING *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-20h] BYREF
  int v13; // [rsp+80h] [rbp+20h] BYREF
  struct _UNICODE_STRING *v14; // [rsp+88h] [rbp+28h] BYREF
  DISPLAY_MUX_PAIRING *v15; // [rsp+90h] [rbp+30h] BYREF

  v14 = a2;
  v13 = -1073741823;
  v10 = *(_OWORD *)lambda_dbcf8364b3ea4150de008656de4589a7_::_lambda_dbcf8364b3ea4150de008656de4589a7_(
                     &v11,
                     (__int64)&v13,
                     (__int64)&v14);
  DXGKCALLONEXIT__lambda_dbcf8364b3ea4150de008656de4589a7_((__int64)v12, &v10);
  ++*((_DWORD *)this + 27);
  if ( *((_DWORD *)this + 20) == 1 )
  {
    v4 = 0;
    if ( *((_QWORD *)this + 9) )
    {
      v13 = -1073741768;
      DISPLAY_MUX_MGR::SetMdmStatus(this, 2LL);
      v4 = v13;
      goto LABEL_12;
    }
    v5 = (DISPLAY_MUX_PAIRING *)operator new(0x20uLL, 0x4B677844u, 256LL, v3);
    if ( v5 )
    {
      *(_DWORD *)v5 = 0;
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
      *((_QWORD *)v5 + 3) = 0LL;
      v15 = v5;
      v13 = DISPLAY_MUX_PAIRING::Init(v5, v14, v6, v7);
      if ( v13 >= 0 )
      {
        wistd::unique_ptr<DISPLAY_MUX_SWITCH_OPERATION,wistd::default_delete<DISPLAY_MUX_SWITCH_OPERATION>>::swap(
          &v15,
          (char *)this + 72);
LABEL_11:
        wistd::unique_ptr<DISPLAY_MUX_PAIRING,wistd::default_delete<DISPLAY_MUX_PAIRING>>::reset(&v15);
        goto LABEL_12;
      }
      v8 = 5LL;
    }
    else
    {
      v15 = 0LL;
      v13 = -1073741801;
      v8 = 4LL;
    }
    DISPLAY_MUX_MGR::SetMdmStatus(this, v8);
    v4 = v13;
    goto LABEL_11;
  }
  WdLogSingleEntry0(2LL);
  v4 = -1073741762;
  WdLogGlobalForLineNumber = 2708;
  v13 = -1073741762;
LABEL_12:
  DXGKCALLONEXIT__lambda_16d75bc2076ed5e741d08f2a5e717111____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v12);
  return v4;
}
