/*
 * XREFs of ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x18019F8EC
 * Callers:
 *     ?RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z @ 0x1801B7510 (-RequestUIAHitTest@UIAHitTestServer@@MEAAJPEAVBamoUIAHitTestStub@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019E50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x180025DEC (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ??$As@UIUIAHitTestInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIUIAHitTestInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003882C (--$As@UIUIAHitTestInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     ?GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ @ 0x18005D664 (-GetInputSiteHierarchyManager@ISMStatics@@SAPEAUIInputSiteHierarchyManager@@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x18019FA54 (-RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
struct _GUID *__fastcall DWMInputRouter::RequestUIAHitTest(
        __int64 **this,
        struct _GUID *__return_ptr retstr,
        unsigned int a3,
        unsigned int a4)
{
  __int64 *InputSiteHierarchyManager; // rbx
  __int64 *InputSiteManager; // rax
  __int64 *v10; // rdi
  __int64 *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  struct _GUID v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B8h]
  _BYTE v21[132]; // [rsp+4Ch] [rbp-B4h] BYREF
  bool v22[104]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+138h] [rbp+38h]

  *retstr = GUID_NULL;
  memset_0(v21, 0, 0x7CuLL);
  HIDWORD(v19) = a3;
  v20 = a4;
  LODWORD(v19) = 0;
  InputSiteHierarchyManager = (__int64 *)ISMStatics::GetInputSiteHierarchyManager();
  InputSiteManager = (__int64 *)ISMStatics::GetInputSiteManager();
  HitTestHelper::HitTestRequestWithRetry(v22, &v19, this[23], InputSiteManager, InputSiteHierarchyManager);
  if ( v22[0] )
  {
    v10 = *(__int64 **)(v23 - 24);
    v11 = *(__int64 **)(v23 - 16);
    while ( v10 != v11 )
    {
      v12 = *v10;
      v13 = 0LL;
      *(_QWORD *)&v18.Data1 = 0LL;
      v14 = *(_QWORD *)(v12 + 488);
      v15 = *(_QWORD *)(v12 + 496);
      if ( v14 != v15 )
      {
        do
        {
          if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IUIAHitTestInputObjectProxy>(
                      (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8),
                      (__int64 *)&v18) >= 0 )
            break;
          v14 += 16LL;
        }
        while ( v14 != v15 );
        v13 = *(_QWORD *)&v18.Data1;
      }
      if ( v13 )
      {
        *retstr = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        break;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      ++v10;
    }
  }
  v18 = *retstr;
  InputETW::UIAHitTest::RequestUIAHitTest(a3, a4, v22[0], &v18);
  HitTestResult::~HitTestResult((HitTestResult *)v22, v16);
  return retstr;
}
