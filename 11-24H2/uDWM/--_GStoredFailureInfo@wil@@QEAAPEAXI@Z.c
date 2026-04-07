/*
 * XREFs of ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800E07AC
 * Callers:
 *     ??1test_state@tip2@@QEAA@XZ @ 0x18009892C (--1test_state@tip2@@QEAA@XZ.c)
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z @ 0x1800E2FA4 (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAA_N_K@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180033604 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

volatile signed __int32 **__fastcall wil::StoredFailureInfo::`scalar deleting destructor'(
        volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 19);
  return this;
}
