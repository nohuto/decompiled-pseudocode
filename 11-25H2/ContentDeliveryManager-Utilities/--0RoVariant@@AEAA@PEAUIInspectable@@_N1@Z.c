/*
 * XREFs of ??0RoVariant@@AEAA@PEAUIInspectable@@_N1@Z @ 0x180083708
 * Callers:
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x180083948 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180084C74 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18008548C (-GetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180086740 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

RoVariant *__fastcall RoVariant::RoVariant(RoVariant *this, struct IInspectable *a2)
{
  struct IInspectableVtbl *lpVtbl; // rax
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    lpVtbl = a2->lpVtbl;
    v7 = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a2,
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v7);
    if ( v5 < 0 )
    {
      if ( v5 == -2147467262 )
      {
        *(_QWORD *)this = a2;
        *((_DWORD *)this + 2) = 3;
      }
      else
      {
        *(_QWORD *)this = 0LL;
        *((_DWORD *)this + 2) = v5;
        ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      }
    }
    else
    {
      *(_QWORD *)this = v7;
      ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      *((_DWORD *)this + 2) = 7;
    }
  }
  else
  {
    *(_QWORD *)this = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  return this;
}
