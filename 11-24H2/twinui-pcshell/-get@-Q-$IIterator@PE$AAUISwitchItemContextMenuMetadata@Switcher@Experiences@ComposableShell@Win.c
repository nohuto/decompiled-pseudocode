/*
 * XREFs of ?get@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@HasCurrent@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAA_NXZ @ 0x1806B9030
 * Callers:
 *     ?get@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@HasCurrent@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@WBA@E$AAA_NXZ @ 0x1806B9070 (-get@-Q-$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Compos_ea_1806B9070.c)
 * Callees:
 *     ?ValidateCounter@Details@Collections@Platform@@YAXAEBV?$shared_ptr@I@std@@I@Z @ 0x1806B5304 (-ValidateCounter@Details@Collections@Platform@@YAXAEBV-$shared_ptr@I@std@@I@Z.c)
 */

bool __fastcall _get__Q__IIterator_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows__HasCurrent___IteratorForVectorView_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Details_2Platform__UE_AAA_NXZ(
        __int64 a1)
{
  Platform::Collections::Details::ValidateCounter((_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 80));
  return *(unsigned int *)(a1 + 84) < (unsigned __int64)((__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL)
                                                                 - **(_QWORD **)(a1 + 64)) >> 5);
}
