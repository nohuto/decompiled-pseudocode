/*
 * XREFs of _lambda_995b1012b958866616d8e16870c72d2c_::_lambda_995b1012b958866616d8e16870c72d2c_ @ 0x1400824A4
 * Callers:
 *     ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x140086F00 (-ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x140087038 (-ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_995b1012b958866616d8e16870c72d2c_::_lambda_995b1012b958866616d8e16870c72d2c_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
