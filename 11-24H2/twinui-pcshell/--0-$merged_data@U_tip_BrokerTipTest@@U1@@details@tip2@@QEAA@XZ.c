/*
 * XREFs of ??0?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806665AC
 * Callers:
 *     ?start@?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180666A70 (-start@-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_BYTE *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 288) = 1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 296) = 1;
  return result;
}
