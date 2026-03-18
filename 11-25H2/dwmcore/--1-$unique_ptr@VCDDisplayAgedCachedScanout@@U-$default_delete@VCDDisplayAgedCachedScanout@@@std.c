/*
 * XREFs of ??1?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@QEAA@XZ @ 0x180173300
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801732D4 (--$_Freenode@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_de.c)
 * Callees:
 *     ??1CDDisplayCachedScanout@@QEAA@XZ @ 0x180173518 (--1CDDisplayCachedScanout@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CDDisplayAgedCachedScanout>::~unique_ptr<CDDisplayAgedCachedScanout>(
        CDDisplayCachedScanout **a1)
{
  CDDisplayCachedScanout *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CDDisplayCachedScanout::~CDDisplayCachedScanout(*a1);
    operator delete(v1, 0x30uLL);
  }
}
