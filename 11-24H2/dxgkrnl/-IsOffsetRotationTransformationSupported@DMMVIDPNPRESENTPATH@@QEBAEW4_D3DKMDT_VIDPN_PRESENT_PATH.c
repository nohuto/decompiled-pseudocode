/*
 * XREFs of ?IsOffsetRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x140039C18
 * Callers:
 *     ?IsRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x140039B08 (-IsRotationTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTAT.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsOffsetRotationTransformationSupported(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int32 v2; // eax
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // eax
  unsigned __int8 result; // al
  __int32 v7; // eax
  __int32 v8; // eax
  __int32 v9; // eax

  v2 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(a2) - 1;
  if ( !v2 )
  {
    v5 = *(_DWORD *)(v3 + 124) >> 4;
    return v5 & 1;
  }
  v7 = v2 - 1;
  if ( !v7 )
  {
    v5 = *(_DWORD *)(v3 + 124) >> 5;
    return v5 & 1;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v5 = *(_DWORD *)(v3 + 124) >> 6;
    return v5 & 1;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v5 = *(_DWORD *)(v3 + 124) >> 7;
    return v5 & 1;
  }
  if ( v9 == 251 )
    return 1;
  WdLogSingleEntry1(2LL, v4);
  result = 0;
  WdLogGlobalForLineNumber = 726;
  return result;
}
