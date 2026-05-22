/*
 * XREFs of ??1HitTestResult@@QEAA@XZ @ 0x18004B488
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180019290 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800E203C (-HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014B9D0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014BBE8 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18014BF4C (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x1801548E8 (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x18019EEE0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x18019F8EC (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x18019FBD4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x1801A2760 (-RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0 @ 0x1801D0100 (_DWMInputRouter--HitTest_--_1_--dtor$0.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$3 @ 0x1801D0140 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$3.c)
 *     _DragNDropProcessor::GetDragSourceInputSite_::_1_::dtor$0 @ 0x1801D7841 (_DragNDropProcessor--GetDragSourceInputSite_--_1_--dtor$0.c)
 *     _DWMInputRouter::RequestViewHitTestHelper_::_1_::dtor$0 @ 0x1801D7865 (_DWMInputRouter--RequestViewHitTestHelper_--_1_--dtor$0.c)
 *     _EdgyProcessor::HitTestForTarget_::_1_::dtor$0 @ 0x1801D7C9E (_EdgyProcessor--HitTestForTarget_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$0_0 @ 0x1801D8F5C (_DWMInputRouter--HitTest_--_1_--dtor$0_0.c)
 *     _DWMInputRouter::RequestUIAHitTest_::_1_::dtor$0 @ 0x1801D8F6E (_DWMInputRouter--RequestUIAHitTest_--_1_--dtor$0.c)
 *     _TestCommands::RequestHitTest_::_1_::dtor$1 @ 0x1801D903D (_TestCommands--RequestHitTest_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HitTestResult::~HitTestResult(HitTestResult *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  char *v5; // rcx
  const struct std::nothrow_t *v6; // rdx
  char *v7; // rsi
  char *v8; // rbp
  __int64 v9; // rcx
  char *v10; // rcx
  __int64 v11; // rcx
  char *v12; // r8
  char *v13; // rcx
  char *v14; // r8

  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    v4 = *((_QWORD *)this + 13);
    while ( v3 != v4 )
    {
      v7 = *(char **)v3;
      if ( *(_QWORD *)v3 )
      {
        v8 = *(char **)(v3 + 8);
        while ( v7 != v8 )
        {
          v9 = *(_QWORD *)v7;
          if ( *(_QWORD *)v7 )
          {
            *(_QWORD *)v7 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          v7 += 8;
        }
        v5 = *(char **)v3;
        v6 = (const struct std::nothrow_t *)((*(_QWORD *)(v3 + 16) - *(_QWORD *)v3) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (unsigned __int64)v6 >= 0x1000 )
        {
          v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
          v12 = (char *)*((_QWORD *)v5 - 1);
          v13 = (char *)(v5 - v12);
          if ( (unsigned __int64)(v13 - 8) > 0x1F )
            goto LABEL_21;
          v5 = v12;
        }
        operator delete(v5, v6);
        *(_QWORD *)v3 = 0LL;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 16) = 0LL;
      }
      v3 += 24LL;
    }
    v10 = (char *)*((_QWORD *)this + 12);
    v6 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 14) - (_QWORD)v10) >> 3));
    if ( (unsigned __int64)v6 < 0x1000 )
    {
LABEL_14:
      operator delete(v10, v6);
      *((_QWORD *)this + 12) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
      *((_QWORD *)this + 14) = 0LL;
      goto LABEL_15;
    }
    v6 = (const struct std::nothrow_t *)((char *)v6 + 39);
    v14 = (char *)*((_QWORD *)v10 - 1);
    v13 = (char *)(v10 - v14);
    if ( (unsigned __int64)(v13 - 8) <= 0x1F )
    {
      v10 = v14;
      goto LABEL_14;
    }
LABEL_21:
    _o__invalid_parameter_noinfo_noreturn(v13, v6);
    __debugbreak();
    goto LABEL_22;
  }
LABEL_15:
  v11 = *((_QWORD *)this + 1);
  if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
LABEL_22:
    NtCloseCompositionInputSink(v11, a2);
}
