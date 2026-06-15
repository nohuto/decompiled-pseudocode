/*
 * XREFs of ?GetModuleInfo@@YAXPEBGW4APO_TYPE@@AEBU_GUID@@PEAUIComCatalog@@PEAPEAG44PEA_NPEAUIPropertyStore@@@Z @ 0x140016780
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x140046CD0 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV?$vector@U_GUID@@V?$allocator@U_GUID@@@std@@@std@@PEAUIComCatalog@@AEAV?$vector@EV?$allocator@E@std@@@3@PEAUIPropertyStore@@@Z @ 0x14004BCC8 (-GetCompositeModuleInfo@@YAXPEBGW4APO_TYPE@@AEBV-$vector@U_GUID@@V-$allocator@U_GUID@@@std@@@std.c)
 * Callees:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z @ 0x140016868 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAUIPropertyStore@@PEAPEAG3@Z.c)
 *     ?IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z @ 0x140043EBC (-IsCapXAPO@@YAJPEBGW4APO_TYPE@@U_GUID@@PEA_N@Z.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140044BB4 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     ?IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z @ 0x140065DC0 (-IsSafeToCoCreateForCapabilityChecks@@YA_NPEBG0@Z.c)
 */

__int64 __fastcall GetModuleInfo(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        struct IComCatalog *a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6,
        unsigned __int16 **a7,
        _BYTE *a8,
        struct IPropertyStore *a9)
{
  __int64 result; // rax
  struct _GUID v13; // [rsp+30h] [rbp-18h] BYREF

  result = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    result = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( result )
  {
    GetModuleName(a3, a4, a9, a5, a7);
    if ( *a5 )
      GetModuleVersion(*a5, a6);
    if ( *a5 && *a6 && IsSafeToCoCreateForCapabilityChecks(*a5, *a6) )
    {
      v13 = *a3;
      return IsCapXAPO(a1, a2, &v13, a8);
    }
    else
    {
      result = (__int64)a8;
      *a8 = 0;
    }
  }
  return result;
}
