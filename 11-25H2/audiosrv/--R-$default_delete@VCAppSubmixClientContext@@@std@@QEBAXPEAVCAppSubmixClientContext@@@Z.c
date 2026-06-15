/*
 * XREFs of ??R?$default_delete@VCAppSubmixClientContext@@@std@@QEBAXPEAVCAppSubmixClientContext@@@Z @ 0x1800B0E50
 * Callers:
 *     ??$?4U?$default_delete@VCAppSubmixClientContext@@@std@@$0A@@?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AFEB8 (--$-4U-$default_delete@VCAppSubmixClientContext@@@std@@$0A@@-$unique_ptr@VCAppSubmixClientContex.c)
 *     ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1800B0C88 (--1-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientContext@@@std@@@std.c)
 * Callees:
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x180080C9C (--1CAppSubmixClientContext@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<CAppSubmixClientContext>::operator()(__int64 a1, CAppSubmixClientContext *a2)
{
  if ( a2 )
  {
    CAppSubmixClientContext::~CAppSubmixClientContext(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x70);
  }
}
