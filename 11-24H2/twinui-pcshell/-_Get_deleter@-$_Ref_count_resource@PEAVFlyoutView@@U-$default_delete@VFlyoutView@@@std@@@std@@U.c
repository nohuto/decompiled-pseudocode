/*
 * XREFs of ?_Get_deleter@?$_Ref_count_resource@PEAVFlyoutView@@U?$default_delete@VFlyoutView@@@std@@@std@@UEBAPEAXAEBVtype_info@@@Z @ 0x1805F7130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_resource<FlyoutView *,std::default_delete<FlyoutView>>::_Get_deleter(
        __int64 a1,
        __int64 a2)
{
  if ( (unsigned int)__std_type_info_compare(a2 + 8, &qword_1808C6E18) )
    return 0LL;
  else
    return a1 + 16;
}
