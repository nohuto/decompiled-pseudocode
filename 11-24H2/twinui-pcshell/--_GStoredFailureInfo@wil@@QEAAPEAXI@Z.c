/*
 * XREFs of ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x18032DA88
 * Callers:
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x18028EACC (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ.c)
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x180337E48 (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18002694C (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

volatile signed __int32 **__fastcall wil::StoredFailureInfo::`scalar deleting destructor'(
        volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 19);
  return this;
}
