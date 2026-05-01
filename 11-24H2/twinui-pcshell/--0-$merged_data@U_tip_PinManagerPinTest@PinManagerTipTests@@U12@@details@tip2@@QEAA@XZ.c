/*
 * XREFs of ??0?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@QEAA@XZ @ 0x1805E2F6C
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A5A4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  *(_DWORD *)(a1 + 272) = 0;
  *(_WORD *)(a1 + 276) = 0;
  memset_0((void *)(a1 + 278), 0, 0x206uLL);
  *(_WORD *)(a1 + 796) = 0;
  memset_0((void *)(a1 + 798), 0, 0x206uLL);
  *(_DWORD *)(a1 + 1324) = -1;
  *(_DWORD *)(a1 + 1316) = 0;
  *(_BYTE *)(a1 + 1320) = 0;
  *(_DWORD *)(a1 + 1328) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 1336) = 1;
  return result;
}
