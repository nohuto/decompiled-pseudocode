/*
 * XREFs of ?CompareNewValues@WindowIdChangedEventHelper@UwpWindowEventDispatcher@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1801C9310
 * Callers:
 *     ?UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001D870 (-UwpWindowAdded@UwpWindowEventDispatcher@@UEAAJUUwpWindowContextId@UwpWindowLifecycleManagement@.c)
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180020BD8 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 *     _lambda_a4d545b91c9e09961ecfadb7c1e91fee_::operator() @ 0x180427DAC (_lambda_a4d545b91c9e09961ecfadb7c1e91fee_--operator().c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1806846FC (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall UwpWindowEventDispatcher::WindowIdChangedEventHelper::CompareNewValues(
        UwpWindowEventDispatcher::WindowIdChangedEventHelper *this,
        struct IUwpWindowWrapperInternal *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  std::_Ref_count_base *v7; // rcx
  _BYTE v8[8]; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-10h]

  if ( !*(_BYTE *)this )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( *((_DWORD *)this + 6) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 256LL))(a2) )
  {
    *((_BYTE *)this + 28) = 1;
    *((_BYTE *)this + 36) = *((_DWORD *)this + 8) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 424LL))(a2);
    *((_BYTE *)this + 44) = *((_DWORD *)this + 10) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 432LL))(a2);
    *((_BYTE *)this + 52) = *((_DWORD *)this + 12) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 440LL))(a2);
    *((_BYTE *)this + 60) = *((_DWORD *)this + 14) != (*(unsigned int (__fastcall **)(struct IUwpWindowWrapperInternal *))(*(_QWORD *)a2 + 448LL))(a2);
    v4 = (__int64 *)(*(__int64 (__fastcall **)(struct IUwpWindowWrapperInternal *, _BYTE *))(*(_QWORD *)a2 + 264LL))(
                      a2,
                      v8);
    v5 = *v4;
    *v4 = 0LL;
    v6 = v4[1];
    v4[1] = 0LL;
    *((_QWORD *)this + 1) = v5;
    v7 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v6;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
  }
}
