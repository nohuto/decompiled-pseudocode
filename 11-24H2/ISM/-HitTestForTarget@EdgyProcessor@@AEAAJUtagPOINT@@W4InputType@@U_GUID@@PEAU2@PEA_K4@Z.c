/*
 * XREFs of ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x1801548E8
 * Callers:
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180153854 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180154BDC (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x18004B488 (--1HitTestResult@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDropTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x180148FE8 (--$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ?HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18015481C (-HitTestForTarget@Edgy@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x18019DC98 (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801A09AC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessor::HitTestForTarget(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        _QWORD *a4,
        struct tagPOINT *a5,
        __int64 *a6,
        _QWORD *a7)
{
  unsigned int v8; // edi
  unsigned int v10; // eax
  __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 *v15; // r14
  __int64 *v16; // rbp
  _QWORD *v17; // rsi
  _QWORD *v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int ProcessId; // eax
  _QWORD *v24; // [rsp+30h] [rbp-E8h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-E0h]
  _QWORD *v26; // [rsp+40h] [rbp-D8h]
  bool v27[104]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-60h]

  v8 = a3;
  v25 = a6;
  v26 = a7;
  v10 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a1, a3);
  (*(void (__fastcall **)(_QWORD, bool *, struct tagPOINT, _QWORD))(**(_QWORD **)(v11 + 344) + 32LL))(
    *(_QWORD *)(v11 + 344),
    v27,
    a2,
    v10);
  InputETW::Edgy::HitTestForTarget(a2, v8, v12, v27[0]);
  v14 = 0;
  if ( v27[0] )
  {
    if ( a5 && a6 && a7 )
    {
      v15 = *(__int64 **)(v28 - 24);
      v16 = *(__int64 **)(v28 - 16);
      while ( v15 != v16 )
      {
        InputSite::GetAttachedObject<IDropTargetClientProxy,BamoDropTargetClientProxy>(*v15, &v24);
        v17 = v24;
        if ( v24 )
        {
          v18 = v24 + 1;
          v19 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(v24[1] + 32LL))(v24 + 1);
          v20 = *v19 - *a4;
          if ( *v19 == *a4 )
            v20 = v19[1] - a4[1];
          if ( !v20 )
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v17 + 1);
            *v25 = v21;
            *a5 = PointerManipulationHelper::GetPositionRelativeToSite((struct InputSite *)*v15, a2);
            ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(v17[4] + 16LL));
            *v26 = ProcessId;
            (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
            break;
          }
        }
        if ( v17 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
        }
        ++v15;
      }
    }
  }
  else
  {
    v14 = -2147467259;
  }
  HitTestResult::~HitTestResult((HitTestResult *)v27, v13);
  return v14;
}
