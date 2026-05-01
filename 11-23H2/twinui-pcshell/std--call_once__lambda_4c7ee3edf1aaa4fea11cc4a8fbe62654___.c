/*
 * XREFs of std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___ @ 0x18020CC2C
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180536860 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18010F11C (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA?AV?$shared_ptr@VUIAutomationHelpers@KeyboardHosting@@@0@XZ @ 0x180531C1C (--$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA-AV-$shared_ptr@VUIAutomationHel.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::call_once__lambda_4c7ee3edf1aaa4fea11cc4a8fbe62654___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  __int64 *v4; // rax
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  _BYTE v7[8]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+8h] BYREF

  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v5 = a1;
    v6 = 4;
    v4 = (__int64 *)std::make_shared<KeyboardHosting::UIAutomationHelpers,>(v7);
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(*(_QWORD *)a2 + 256LL), v4);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    v6 = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v5);
  }
}
