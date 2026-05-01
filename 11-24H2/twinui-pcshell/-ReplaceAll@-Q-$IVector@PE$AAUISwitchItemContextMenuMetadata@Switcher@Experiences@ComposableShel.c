/*
 * XREFs of ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1806B4FA0
 * Callers:
 *     ?ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAXP$01E$ABV?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@6@@Z @ 0x1806B5010 (-ReplaceAll@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@C_ea_1806B5010.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1806B81B0 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_1806B81B0.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@?$vector@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@V?$allocator@V?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@@std@@@std@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@_K@Z @ 0x1806AFCBC (--$_Assign_counted_range@PEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Composable.c)
 *     ?IncrementCounter@Details@Collections@Platform@@YAXAEAV?$shared_ptr@I@std@@@Z @ 0x1806B4070 (-IncrementCounter@Details@Collections@Platform@@YAXAEAV-$shared_ptr@I@std@@@Z.c)
 *     ?Notify@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@AE$AAAXW4CollectionChange@2Foundation@Windows@@I@Z @ 0x1806B4920 (-Notify@-$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Windo.c)
 *     ?ValidateSize@Details@Collections@Platform@@YAX_K@Z @ 0x1806B5368 (-ValidateSize@Details@Collections@Platform@@YAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall _ReplaceAll__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXP_01E_ABV__Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_6__Z(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  void *Exception; // rax
  void *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF
  __int64 v13; // [rsp+40h] [rbp+8h]
  __int64 v14; // [rsp+40h] [rbp+8h]

  v4 = (_QWORD *)(a1 + 80);
  try
  {
    Platform::Collections::Details::IncrementCounter(v4);
    Platform::Collections::Details::ValidateSize((Platform::Collections::Details *)*(unsigned int *)(a2 + 72), v5);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = v6 + 8LL * *(unsigned int *)(a2 + 72);
      v7 = *(_QWORD **)(a2 + 80);
    }
    else
    {
      v8 = 0LL;
    }
    std::vector<Platform::Agile<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>>::_Assign_counted_range<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc * *>(
      *(__int64 **)(a1 + 96),
      v7,
      (v8 - (__int64)v7) >> 3);
    Platform::Collections::Vector<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,std::equal_to<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>,1>::Notify(
      a1,
      0,
      0);
  }
  catch ( std::bad_alloc )
  {
    Exception = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v13 = Platform::OutOfMemoryException::OutOfMemoryException(Exception);
    v11 = __abi_winrt_ptr_ctor(v13);
    throw (Platform::OutOfMemoryException **)&v11;
  }
  catch ( std::exception )
  {
    v10 = Platform::Details::Heap::AllocateException(0x68uLL, 0x90uLL);
    v14 = Platform::FailureException::FailureException(v10);
    v12 = __abi_winrt_ptr_ctor(v14);
    throw (Platform::FailureException **)&v12;
  }
}
