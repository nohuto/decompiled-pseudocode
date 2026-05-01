/*
 * XREFs of ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18068A734
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$4 @ 0x18070462C (_PersistEnterprisePinDataToRegistry_--_1_--catch$4.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$26 @ 0x1807046C7 (_ShouldAddEnterprisePinToOutput_--_1_--catch$26.c)
 * Callees:
 *     ?reset@?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@QEAAXXZ @ 0x1803C4274 (-reset@-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-PropVariantClear@@YAJ0@ZP6AX0@Z$1-PropVar.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x180699008 (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,1>::set_flag_value<long>(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rdi

  result = tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock();
  v6 = result;
  if ( result )
  {
    result = wil::unique_struct<tagPROPVARIANT,long (*)(tagPROPVARIANT *),&long PropVariantClear(tagPROPVARIANT *),void (*)(tagPROPVARIANT *),&void PropVariantInit(tagPROPVARIANT *)>::reset(result + 16);
    *(_WORD *)(v6 + 16) = 3;
    *(_DWORD *)(v6 + 24) = a4;
  }
  return result;
}
