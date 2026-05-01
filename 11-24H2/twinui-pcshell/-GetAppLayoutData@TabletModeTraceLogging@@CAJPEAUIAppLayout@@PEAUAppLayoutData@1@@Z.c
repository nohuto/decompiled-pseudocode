/*
 * XREFs of ?GetAppLayoutData@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAUAppLayoutData@1@@Z @ 0x18051A75C
 * Callers:
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x18051AACC (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z @ 0x18051A834 (-GetAppLayoutItemData@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAUAppLayoutItemData@1@@Z.c)
 *     ?GetAppLayoutItems@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAPEAUIAppLayoutItem@@1@Z @ 0x18051A9F0 (-GetAppLayoutItems@TabletModeTraceLogging@@CAJPEAUIAppLayout@@PEAPEAUIAppLayoutItem@@1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TabletModeTraceLogging::GetAppLayoutData(
        struct IAppLayout *a1,
        struct TabletModeTraceLogging::AppLayoutData *a2)
{
  int AppLayoutItems; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IAppLayoutItem *v9; // [rsp+30h] [rbp+8h] BYREF
  struct IAppLayoutItem *v10; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a1 + 24LL))(a1);
  v10 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  AppLayoutItems = TabletModeTraceLogging::GetAppLayoutItems(a1, &v10, &v9);
  v5 = AppLayoutItems;
  if ( AppLayoutItems >= 0 )
  {
    AppLayoutItems = TabletModeTraceLogging::GetAppLayoutItemData(
                       v10,
                       (struct TabletModeTraceLogging::AppLayoutData *)((char *)a2 + 40));
    v5 = AppLayoutItems;
    if ( AppLayoutItems >= 0 )
    {
      if ( !v9
        || (AppLayoutItems = TabletModeTraceLogging::GetAppLayoutItemData(
                               v9,
                               (struct TabletModeTraceLogging::AppLayoutData *)((char *)a2 + 80)),
            v5 = AppLayoutItems,
            AppLayoutItems >= 0) )
      {
        v5 = 0;
        goto LABEL_10;
      }
      v6 = 473LL;
    }
    else
    {
      v6 = 470LL;
    }
  }
  else
  {
    v6 = 469LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
    (const char *)(unsigned int)AppLayoutItems);
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  return v5;
}
