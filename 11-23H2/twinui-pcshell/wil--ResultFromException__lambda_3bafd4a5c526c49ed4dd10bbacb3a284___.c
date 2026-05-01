/*
 * XREFs of wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___ @ 0x180508D70
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1802DC360 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009C4F4 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rbx
  __int64 *v3; // rsi
  std::_Ref_count_base *v4; // rcx

  v1 = *(__int64 **)a1[1];
  v2 = *a1;
  v3 = *(__int64 **)(*a1 + 440);
  while ( 1 )
  {
    v1 += 2;
    if ( v1 == v3 )
      break;
    std::shared_ptr<KBViewInfo>::operator=(v1 - 2, v1);
  }
  v4 = *(std::_Ref_count_base **)(*(_QWORD *)(v2 + 440) - 8LL);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  *(_QWORD *)(v2 + 440) -= 16LL;
  return 0LL;
}
