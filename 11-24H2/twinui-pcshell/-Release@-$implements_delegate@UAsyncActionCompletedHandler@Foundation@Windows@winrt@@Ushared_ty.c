/*
 * XREFs of ?Release@?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@0@Z@@impl@winrt@@UEAAIXZ @ 0x180358D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@00@Z@@impl@winrt@@QEAA@XZ @ 0x180102D2C (--1-$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@-1-.c)
 *     ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x18028EFB8 (-decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall _Release___implements_delegate_UAsyncActionCompletedHandler_Foundation_Windows_winrt__Ushared_type__1____when_any_UIAsyncAction_Foundation_Windows_winrt__U1234__4_YA_AUIAsyncAction_234_AEBU6234_0_Z__impl_winrt__UEAAIXZ(
        volatile signed __int32 *Block)
{
  unsigned int v2; // edi

  v2 = winrt::impl::implements_delegate_base::decrement_reference(Block + 2);
  if ( !v2 && Block )
  {
    __1__implements_delegate_UAsyncActionCompletedHandler_Foundation_Windows_winrt__Ushared_type__1____when_any_UIAsyncAction_Foundation_Windows_winrt__U1234_U1234__4_YA_AUIAsyncAction_234_AEBU6234_00_Z__impl_winrt__QEAA_XZ((__int64)Block);
    operator delete((void *)Block);
  }
  return v2;
}
