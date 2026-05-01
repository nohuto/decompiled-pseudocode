/*
 * XREFs of _Platform::Collections::Details::Init_std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1________::_1_::catch$9 @ 0x180705DCB
 * Callers:
 *     <none>
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x180040654 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn Platform::Collections::Details::Init_std::vector_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1__std::allocator_Platform::Agile_WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata___1________::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  void *Exception; // rax
  __int64 v4; // rax

  Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
  *(_QWORD *)(a2 + 96) = Exception;
  v4 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
  *(_QWORD *)(a2 + 96) = v4;
  *(_QWORD *)(a2 + 32) = __abi_winrt_ptr_ctor(v4);
  throw (Platform::OutOfMemoryException **)(a2 + 32);
}
