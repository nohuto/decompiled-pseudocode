/*
 * XREFs of std::_Func_impl_no_alloc__lambda_01de1b5ef4ca3e46b34c9c5607c760ef__void_::_Copy @ 0x1800E2E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180060820 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ??0?$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDummyBroadcastProvider@@@Z @ 0x1800DEE38 (--0-$com_ptr_t@VDummyBroadcastProvider@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVDummyBroadcas.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_01de1b5ef4ca3e46b34c9c5607c760ef__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r10

  *a2 = off_180172078;
  a2[1] = *(_QWORD *)(a1 + 8);
  std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(a2 + 2, (_QWORD *)(a1 + 16));
  *(_BYTE *)(v3 + 32) = *(_BYTE *)(v2 + 32);
  wil::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>::com_ptr_t<DummyBroadcastProvider,wil::err_returncode_policy>(
    (volatile int **)(v3 + 40),
    *(volatile int **)(v2 + 40));
  return v4;
}
