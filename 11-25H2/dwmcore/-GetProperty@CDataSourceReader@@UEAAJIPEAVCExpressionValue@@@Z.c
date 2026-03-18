/*
 * XREFs of ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801CFA00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x1801CFA44 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z.c)
 */

int __fastcall CDataSourceReader::GetProperty(CDataSourceReader *this, unsigned int a2, struct CExpressionValue *a3)
{
  if ( (*((_BYTE *)this + 88) & 1) != 0 )
    return DataProviderManager::GetPropertyValue(
             *(DataProviderManager **)(*((_QWORD *)this + 3) + 6424LL),
             this,
             *((_QWORD *)this + 9),
             *((_QWORD *)this + 10),
             a2,
             a3);
  else
    return -2147467259;
}
