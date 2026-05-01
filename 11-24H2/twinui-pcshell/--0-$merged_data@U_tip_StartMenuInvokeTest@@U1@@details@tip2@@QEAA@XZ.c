/*
 * XREFs of ??0?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@QEAA@XZ @ 0x18028ACA0
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028AAF0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_StartMenuInvokeTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028B2D8 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>(
        __int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-60h]
  _OWORD v4[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v3 = 0x8730001EB27C5LL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)&v3 + 1) = "StartMenuInvokeTest";
  v4[0] = v3;
  v4[2] = 0uLL;
  v4[1] = 0x1002uLL;
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v4);
  *(_DWORD *)(a1 + 316) = -1;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 284) = 0;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_WORD *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 320) = 0;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_StartMenuInvokeTest,_tip_StartMenuInvokeTest>::`vftable';
  *(_QWORD *)(a1 + 264) = a1 + 16;
  result = a1;
  *(_DWORD *)(a1 + 328) = 1;
  return result;
}
