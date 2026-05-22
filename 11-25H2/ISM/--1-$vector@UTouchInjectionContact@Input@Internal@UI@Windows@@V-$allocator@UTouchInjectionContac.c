/*
 * XREFs of ??1?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x1800CAA68
 * Callers:
 *     _InputStateManager::InputStateManager_::_1_::dtor$5 @ 0x1801CB2B3 (_InputStateManager--InputStateManager_--_1_--dtor$5.c)
 *     _InputInjectionClientProxy::InjectTouchInput_::_1_::dtor$2 @ 0x1801D1400 (_InputInjectionClientProxy--InjectTouchInput_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::~vector<Windows::UI::Internal::Input::TouchInjectionContact>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
