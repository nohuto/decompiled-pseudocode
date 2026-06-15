/*
 * XREFs of ??R?$default_delete@VCAudioSessionManager@@@std@@QEBAXPEAVCAudioSessionManager@@@Z @ 0x1800C7FE4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z @ 0x18008AFF0 (-RuntimeClassInitialize@CEndpointStore@@QEAAJPEBG@Z.c)
 *     ??1?$unique_ptr@VCAudioSessionManager@@U?$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA@XZ @ 0x1800A6EB8 (--1-$unique_ptr@VCAudioSessionManager@@U-$default_delete@VCAudioSessionManager@@@std@@@std@@QEAA.c)
 *     std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800C8800 (std--_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil--com_pt_ea_1800C8800.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionManager@@QEAA@XZ @ 0x1800C6838 (--1CAudioSessionManager@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CAudioSessionManager>::operator()(__int64 a1, CAudioSessionManager *a2)
{
  if ( a2 )
  {
    CAudioSessionManager::~CAudioSessionManager(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x130);
  }
}
