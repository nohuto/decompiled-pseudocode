/*
 * XREFs of ??$_Move_backward_unchecked@PEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@PEAU12@@std@@YAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@PEAU12@00@Z @ 0x1800AC3C8
 * Callers:
 *     ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x1800ACAB4 (--$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WINDOW@CCapture.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 */

_QWORD *__fastcall std::_Move_backward_unchecked<CCaptureManager::CAPTURE_FILTERED_WINDOW *,CCaptureManager::CAPTURE_FILTERED_WINDOW *>(
        CBaseObject **a1,
        CBaseObject **a2,
        _QWORD *a3)
{
  CBaseObject **v5; // rdi
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rax
  CBaseObject *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 != a1 )
  {
    v5 = a2 + 1;
    do
    {
      v5 -= 2;
      a3 -= 2;
      v6 = 0LL;
      *a3 = *(v5 - 1);
      if ( v9 != v5 )
      {
        v6 = *v5;
        *v5 = 0LL;
      }
      v7 = (CBaseObject *)a3[1];
      a3[1] = v6;
      v9[0] = v7;
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v9);
    }
    while ( v5 - 1 != a1 );
  }
  return a3;
}
