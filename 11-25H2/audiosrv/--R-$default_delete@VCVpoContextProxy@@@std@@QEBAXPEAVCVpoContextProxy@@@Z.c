/*
 * XREFs of ??R?$default_delete@VCVpoContextProxy@@@std@@QEBAXPEAVCVpoContextProxy@@@Z @ 0x180105B70
 * Callers:
 *     ??$?4U?$default_delete@VCVpoContextProxy@@@std@@$0A@@?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801051DC (--$-4U-$default_delete@VCVpoContextProxy@@@std@@$0A@@-$unique_ptr@VCVpoContextProxy@@U-$default_.c)
 *     ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x180105704 (--1-$unique_ptr@VCVpoContextProxy@@U-$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x1800FA0A8 (--1CHMDManager@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CVpoContextProxy>::operator()(__int64 a1, CHMDManager *a2)
{
  if ( a2 )
  {
    CHMDManager::~CHMDManager(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x18);
  }
}
