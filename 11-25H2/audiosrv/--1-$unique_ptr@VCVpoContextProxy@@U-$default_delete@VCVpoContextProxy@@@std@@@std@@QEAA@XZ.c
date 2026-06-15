/*
 * XREFs of ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x180105704
 * Callers:
 *     AudioServerCloseVpoContext @ 0x180108D70 (AudioServerCloseVpoContext.c)
 *     AudioServerGetEndpointVpoContext @ 0x18010A020 (AudioServerGetEndpointVpoContext.c)
 *     AudioServerGetStreamVpoContext @ 0x18010A340 (AudioServerGetStreamVpoContext.c)
 *     VPOCONTEXT_rundown @ 0x18010BB20 (VPOCONTEXT_rundown.c)
 *     AudioServerGetStreamVpoContext$dtor$6 @ 0x180167427 (AudioServerGetStreamVpoContext$dtor$6.c)
 * Callees:
 *     ??R?$default_delete@VCVpoContextProxy@@@std@@QEBAXPEAVCVpoContextProxy@@@Z @ 0x180105B70 (--R-$default_delete@VCVpoContextProxy@@@std@@QEBAXPEAVCVpoContextProxy@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CVpoContextProxy>::operator()();
  return result;
}
