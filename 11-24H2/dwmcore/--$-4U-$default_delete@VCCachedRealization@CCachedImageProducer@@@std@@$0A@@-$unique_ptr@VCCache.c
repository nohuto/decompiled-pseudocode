/*
 * XREFs of ??$?4U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@$0A@@?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180284DBC
 * Callers:
 *     ??$move@V?$move_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@0@0V12@@Z @ 0x18024A7F4 (--$move@V-$move_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_d.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@0@0V12@@Z @ 0x180286C2C (--$move_backward@V-$move_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$.c)
 * Callees:
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18006D684 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 */

__int64 **__fastcall std::unique_ptr<CCachedImageProducer::CCachedRealization>::operator=<std::default_delete<CCachedImageProducer::CCachedRealization>,0>(
        __int64 **a1,
        __int64 **a2)
{
  __int64 *v2; // rax
  __int64 *v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CCachedImageProducer::CCachedRealization>::operator()((__int64)a1, v4);
  return a1;
}
