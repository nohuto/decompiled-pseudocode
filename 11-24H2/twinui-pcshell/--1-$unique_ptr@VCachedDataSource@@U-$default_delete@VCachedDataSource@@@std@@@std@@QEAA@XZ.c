/*
 * XREFs of ??1?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@std@@QEAA@XZ @ 0x1802CEBEC
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x18011963C (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??R?$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z @ 0x18069C9FC (--R-$default_delete@VCachedDataSource@@@std@@QEBAXPEAVCachedDataSource@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CachedDataSource>::~unique_ptr<CachedDataSource>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CachedDataSource>::operator()();
  return result;
}
