/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@W4InputType@@@Z @ 0x18004CC5C
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x1800767A0 (-ProcessPnpNotification@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ?ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z @ 0x1800361B4 (-ProcessDeviceArrival@Win32kInterop@InputETW@@SAXK@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x18004CD58 (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     ?TriggerUpdateInputTarget@CursorProcessor@@SAXXZ @ 0x18004D438 (-TriggerUpdateInputTarget@CursorProcessor@@SAXXZ.c)
 *     ??$_Insert_or_assign@AEBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$unordered_map@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x18004D4A4 (--$_Insert_or_assign@AEBKV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@.c)
 *     ?CreateDeviceInfo@Win32kInterop@@AEAA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x18004D648 (-CreateDeviceInfo@Win32kInterop@@AEAA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegac.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z @ 0x18009AE18 (-UnsuppressForDeviceArrivalImpl@CursorSuppressionProcessor@@AEAAXK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32kInterop::ProcessDeviceArrival(Win32kInterop *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rdx
  CursorSuppressionProcessor *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  int v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v12; // [rsp+58h] [rbp+20h] BYREF

  switch ( a3 )
  {
    case 2u:
      CursorProcessor::TriggerUpdateInputTarget();
      if ( CursorSuppressionProcessor::s_processor )
        CursorSuppressionProcessor::UnsuppressForDeviceArrivalImpl(v7, *(_DWORD *)(a2 + 4));
      break;
    case 0x20u:
      CursorProcessor::TriggerUpdateInputTarget();
      break;
    case 0u:
      return;
  }
  if ( !Win32kInterop::IsDeviceAttached(a1, *(_DWORD *)(a2 + 4), 0) )
  {
    InputETW::Win32kInterop::ProcessDeviceArrival(*(_DWORD *)(a2 + 4), v6);
    Win32kInterop::CreateDeviceInfo(v8, &v12, a3, a2);
    v9 = (*(__int64 (__fastcall **)(_QWORD *, void *, Win32kInterop *))(**((_QWORD **)a1 + 7) + 40LL))(
           *((_QWORD **)a1 + 7),
           v12,
           a1);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EB,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v9,
        v10[0]);
    std::unordered_map<unsigned long,std::unique_ptr<LegacyDeviceInfo>>::_Insert_or_assign<unsigned long const &,std::unique_ptr<LegacyDeviceInfo>>(
      (char *)a1 + 64,
      v10,
      v12,
      &v12);
    if ( v12 )
      operator delete(v12, (const struct std::nothrow_t *)0x60C);
  }
}
