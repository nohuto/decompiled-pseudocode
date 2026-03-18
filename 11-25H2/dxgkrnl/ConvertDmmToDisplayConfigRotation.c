/*
 * XREFs of ConvertDmmToDisplayConfigRotation @ 0x1402E9950
 * Callers:
 *     _lambda_e321288189de26641183b6e313240338_::operator() @ 0x1401BB498 (_lambda_e321288189de26641183b6e313240338_--operator().c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1402E7D24 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B614 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigRotation(enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1)
{
  __int64 result; // rax

  result = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1);
  if ( (_DWORD)result != 1 && (_DWORD)result != 2 && (unsigned int)(result - 3) >= 2 )
    return 1LL;
  return result;
}
