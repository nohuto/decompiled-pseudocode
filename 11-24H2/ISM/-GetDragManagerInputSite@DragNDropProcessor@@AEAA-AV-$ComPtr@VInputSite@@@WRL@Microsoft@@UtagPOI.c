/*
 * XREFs of ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18014B9D0
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014AB20 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18014BBE8 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DA34 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18014DD44 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180021EFC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058BD8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x180148EC0 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18014A9D8 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18014B904 (-GetDragManager@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18019DC98 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall DragNDropProcessor::GetDragManagerInputSite(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned __int8 *a6)
{
  struct tagPOINT v7; // rbx
  bool *v9; // rsi
  unsigned __int8 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 *v18; // rsi
  __int64 *v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+38h] [rbp-C8h]
  bool v22[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  __int128 v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-50h]
  _BYTE v26[128]; // [rsp+C0h] [rbp-40h] BYREF

  v7 = (struct tagPOINT)a3;
  v20 = a2;
  v9 = (bool *)a6;
  *a2 = 0LL;
  v21 = 1;
  v22[0] = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  LOBYTE(a3) = 0;
  if ( !a6 || (v10 = *a6) == 0 )
  {
    v11 = HitTestHelper::ConvertInputTypeToPointerType(a4, a1, a3);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, struct tagPOINT, _QWORD))(**(_QWORD **)(v12 + 24) + 32LL))(
            *(_QWORD *)(v12 + 24),
            v26,
            v7,
            v11);
    HitTestResult::operator=((__int64)v22, v13);
    HitTestResult::~HitTestResult((HitTestResult *)v26, v14);
    v9 = v22;
    LOBYTE(a3) = 1;
    v10 = v22[0];
  }
  InputETW::DragNDrop::GetDragManager(v7, a4, a3, v10);
  if ( *v9 )
  {
    v16 = *((_QWORD *)v9 + 13);
    v17 = *(__int64 **)(v16 - 24);
    v18 = *(__int64 **)(v16 - 16);
    while ( v17 != v18 )
    {
      InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v17, (__int64 *)&v20);
      if ( v20 && v20 == a5 )
      {
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=(a2, v17);
        Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v20);
        break;
      }
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v20);
      ++v17;
    }
  }
  HitTestResult::~HitTestResult((HitTestResult *)v22, v15);
  return a2;
}
