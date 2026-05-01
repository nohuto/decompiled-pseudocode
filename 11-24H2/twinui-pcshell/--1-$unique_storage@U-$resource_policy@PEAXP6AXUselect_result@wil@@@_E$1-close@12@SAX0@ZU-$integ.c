/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180231CE8
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1802B84F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@1.c)
 *     _lambda_3cfa92d190bc4310595425b1883be1f6_::operator() @ 0x18055CE2C (_lambda_3cfa92d190bc4310595425b1883be1f6_--operator().c)
 *     _lambda_f2ca46843af7fe20e5ddf713755dabab_::operator() @ 0x18055D5C0 (_lambda_f2ca46843af7fe20e5ddf713755dabab_--operator().c)
 * Callees:
 *     <none>
 */

HGDIOBJ __fastcall __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__QEAA_XZ(
        __int64 a1)
{
  HGDIOBJ result; // rax

  if ( *(_QWORD *)a1 )
    return SelectObject(*(HDC *)(a1 + 8), *(HGDIOBJ *)a1);
  return result;
}
