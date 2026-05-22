/*
 * XREFs of ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025980
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180087F00 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x18002404C (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18003AF78 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800584E8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FF1C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F4210 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x180141B78 (-TryResumeGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@_KI@Z.c)
 *     ?InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z @ 0x1801449E0 (-InitializeForGesture@GestureHandler@@QEAAXIW4InputType@@UGestureTargetData@@@Z.c)
 *     ??$GetAttachedObject@UIAnimationTargetClientProxy@@VAnimationTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VAnimationTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x180156B2C (--$GetAttachedObject@UIAnimationTargetClientProxy@@VAnimationTargetClientProxy@@@InputSite@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall ShellGesturesProcessor::TryFindResumableAnimationTarget(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int *a3,
        __int64 a4)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v8; // r13
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int ProcessId; // eax
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  std::_Ref_count_base *v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-8h]
  _QWORD *v21; // [rsp+80h] [rbp+30h] BYREF

  v21 = a1;
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v9 = *(_QWORD *)(a4 + 104);
  v10 = *(_QWORD **)(v9 - 24);
  v11 = *(_QWORD **)(v9 - 16);
  while ( 1 )
  {
    if ( v10 == v11 )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      return a2;
    }
    InputSite::GetAttachedObject<IAnimationTargetClientProxy,AnimationTargetClientProxy>(*v10, &v21);
    v13 = v21;
    if ( v21 )
      break;
LABEL_11:
    if ( v13 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
    }
    ++v10;
  }
  v14 = GestureServices::TryResumeGestureHandler(v8, &v19, v21[9], a3[10]);
  std::weak_ptr<SystemCursorService2>::lock(v14, &v17);
  if ( v20 )
    std::_Ref_count_base::_Decwref(v20);
  if ( !v17 )
  {
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    goto LABEL_11;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD *))(v13[1] + 24LL))(v13 + 1);
  ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(v13[4] + 16LL));
  v19 = v15;
  v20 = (std::_Ref_count_base *)ProcessId;
  GestureHandler::InitializeForGesture(v17, a3[10], *a3, &v19);
  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(a2, &v17);
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
  return a2;
}
