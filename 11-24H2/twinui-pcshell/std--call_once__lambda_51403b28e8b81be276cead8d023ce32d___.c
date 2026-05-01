/*
 * XREFs of std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___ @ 0x1804885FC
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180256970 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1_Init_once_completer@std@@QEAA@XZ @ 0x18044ED44 (--1_Init_once_completer@std@@QEAA@XZ.c)
 *     ??$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA?AV?$shared_ptr@VUIAutomationHelpers@KeyboardHosting@@@0@XZ @ 0x180485094 (--$make_shared@VUIAutomationHelpers@KeyboardHosting@@$$V@std@@YA-AV-$shared_ptr@VUIAutomationHel.c)
 */

void __fastcall std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___(union _RTL_RUN_ONCE *a1, __int64 a2)
{
  __int64 *v4; // rax
  union _RTL_RUN_ONCE *v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+38h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+8h] BYREF

  fPending = 0;
  if ( !__std_init_once_begin_initialize(a1, 0, &fPending, 0LL) )
    abort();
  if ( fPending )
  {
    v5 = a1;
    v6 = 4LL;
    v4 = std::make_shared<KeyboardHosting::UIAutomationHelpers,>(&v7);
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(*(_QWORD *)a2 + 760LL), v4);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    LODWORD(v6) = 0;
    std::_Init_once_completer::~_Init_once_completer((std::_Init_once_completer *)&v5);
  }
}
