/*
 * XREFs of ?ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x140087038
 * Callers:
 *     ?HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z @ 0x140084C40 (-HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z.c)
 * Callees:
 *     DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___ @ 0x140048090 (DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c___.c)
 *     ?reset@?$unique_ptr@VDISPLAY_MUX_PAIRING@@U?$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd@@QEAAXPEAVDISPLAY_MUX_PAIRING@@@Z @ 0x14007C99C (-reset@-$unique_ptr@VDISPLAY_MUX_PAIRING@@U-$default_delete@VDISPLAY_MUX_PAIRING@@@wistd@@@wistd.c)
 *     _lambda_995b1012b958866616d8e16870c72d2c_::_lambda_995b1012b958866616d8e16870c72d2c_ @ 0x1400824A4 (_lambda_995b1012b958866616d8e16870c72d2c_--_lambda_995b1012b958866616d8e16870c72d2c_.c)
 *     _DXGKCALLONEXIT__lambda_34fe7687b77d331a2bb10033e5c8a81c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400827FC (_DXGKCALLONEXIT__lambda_34fe7687b77d331a2bb10033e5c8a81c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::ProcessMuxDeviceDeparture(DISPLAY_MUX_MGR *this, struct _UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // r10
  __int64 v3; // r9
  DISPLAY_MUX_PAIRING **v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+10h] BYREF
  struct _UNICODE_STRING *v12; // [rsp+78h] [rbp+18h] BYREF

  v12 = a2;
  v11 = 0;
  v8 = *(_OWORD *)lambda_995b1012b958866616d8e16870c72d2c_::_lambda_995b1012b958866616d8e16870c72d2c_(
                    &v9,
                    (__int64)&v11,
                    (__int64)&v12);
  DXGKCALLONEXIT__lambda_995b1012b958866616d8e16870c72d2c_((__int64)v10, &v8);
  --*(_DWORD *)(v3 + 108);
  v4 = (DISPLAY_MUX_PAIRING **)(v3 + 72);
  v5 = *(_QWORD *)(v3 + 72);
  if ( v5 )
  {
    if ( RtlEqualUnicodeString(v2, *(PCUNICODE_STRING *)(v5 + 8), 1u) )
    {
      wistd::unique_ptr<DISPLAY_MUX_PAIRING,wistd::default_delete<DISPLAY_MUX_PAIRING>>::reset(v4);
      v6 = v11;
      goto LABEL_7;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2786;
    v6 = -1073741294;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2776;
    v6 = -1073741601;
  }
  v11 = v6;
LABEL_7:
  DXGKCALLONEXIT__lambda_34fe7687b77d331a2bb10033e5c8a81c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v10);
  return v6;
}
