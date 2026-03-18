/*
 * XREFs of ?SetOrAppendWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@AEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@_N@Z @ 0x180279428
 * Callers:
 *     ?AppendWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@@Z @ 0x180276230 (-AppendWindowInfos@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV-$.c)
 *     ?SetWindowInfos@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV?$span@$$CBU_DWMCaptureWindowInformation@@$0?0@gsl@@@Z @ 0x18027A504 (-SetWindowInfos@-$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJAEBV-$spa.c)
 * Callees:
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180027994 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ??$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U_DWMCaptureWindowInformation@@@std@@@std@@@1@PEBU_DWMCaptureWindowInformation@@_K@Z @ 0x180274058 (--$_Insert_counted_range@PEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformati.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetOrAppendWindowInfos(
        CResource *this,
        __int64 a2,
        char a3)
{
  __int64 v4; // rax

  if ( !a3 )
  {
    v4 = *((_QWORD *)this + 16);
    if ( v4 != *((_QWORD *)this + 17) )
      *((_QWORD *)this + 17) = v4;
  }
  std::vector<_DWMCaptureWindowInformation>::_Insert_counted_range<_DWMCaptureWindowInformation const *>(
    (__int64)this + 128,
    *((_BYTE **)this + 17),
    *(const void **)(a2 + 8),
    (32LL * *(_QWORD *)a2) >> 5);
  CResource::OnPropertyChanged(this);
  return 0LL;
}
