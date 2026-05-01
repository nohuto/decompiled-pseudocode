/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289A9C
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801B24D8 (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B2DBC (-LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Window.c)
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802891CC (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180289C94 (-LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Int.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289EA4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTip.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289FE8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802D0B9C (--1-$tip_test@V-$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12.c)
 *     ??1XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18044ED0C (--1XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180456720 (--1XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@AEAAKXZ @ 0x180289E5C (-Release@-$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@deta.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>::Release(v1);
  return result;
}
