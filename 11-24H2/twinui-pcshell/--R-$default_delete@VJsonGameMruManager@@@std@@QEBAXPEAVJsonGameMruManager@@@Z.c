/*
 * XREFs of ??R?$default_delete@VJsonGameMruManager@@@std@@QEBAXPEAVJsonGameMruManager@@@Z @ 0x1803156A4
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x180061E24 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@QEAA@XZ @ 0x18029A4F4 (--1-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMruManager@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1JsonGameMruManager@@QEAA@XZ @ 0x1801C18DC (--1JsonGameMruManager@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<JsonGameMruManager>::operator()(__int64 a1, void **a2)
{
  if ( a2 )
  {
    JsonGameMruManager::~JsonGameMruManager(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x50);
  }
}
