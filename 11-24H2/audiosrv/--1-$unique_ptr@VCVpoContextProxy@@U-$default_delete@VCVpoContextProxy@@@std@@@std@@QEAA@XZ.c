/*
 * XREFs of ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x18010B854
 * Callers:
 *     ?GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z @ 0x18010CB30 (-GetStreamVpoContext@CVADServer@@UEAAJPEAKPEAPEAX@Z.c)
 *     AudioServerCloseVpoContext @ 0x18010F4F0 (AudioServerCloseVpoContext.c)
 *     AudioServerGetEndpointVpoContext @ 0x180110A90 (AudioServerGetEndpointVpoContext.c)
 *     VPOCONTEXT_rundown @ 0x180112560 (VPOCONTEXT_rundown.c)
 *     _CVADServer::GetStreamVpoContext_::_1_::dtor$4 @ 0x180170815 (_CVADServer--GetStreamVpoContext_--_1_--dtor$4.c)
 *     AudioServerGetEndpointVpoContext$dtor$7 @ 0x180170926 (AudioServerGetEndpointVpoContext$dtor$7.c)
 * Callees:
 *     ??R?$default_delete@VCVpoContextProxy@@@std@@QEBAXPEAVCVpoContextProxy@@@Z @ 0x18010BD68 (--R-$default_delete@VCVpoContextProxy@@@std@@QEBAXPEAVCVpoContextProxy@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CVpoContextProxy>::operator()();
  return result;
}
