/*
 * XREFs of ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F5EE0
 * Callers:
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025F40 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x18009408C (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@?$_Ref_count_obj2@VCustomCursorApplication2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAIAEAPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F5E30 (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEAIAEAPEAVBamoCustomCursorControllerClient2Prox.c)
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800F62C4 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 *     ??$make_shared@VSystemCursorShapeBitmap2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@3@@std@@YA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@0@@Z @ 0x1800F8BF8 (--$make_shared@VSystemCursorShapeBitmap2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEAV-$share.c)
 *     ??0SystemCursor2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@PEBUCursorDeviceInfo@@@Z @ 0x1800F8D4C (--0SystemCursor2@@QEAA@V-$shared_ptr@VSystemCursorService2@@@std@@PEBUCursorDeviceInfo@@@Z.c)
 *     ??0SystemCursorShape2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@_K@Z @ 0x1800F8F14 (--0SystemCursorShape2@@QEAA@V-$shared_ptr@VSystemCursorService2@@@std@@_K@Z.c)
 *     ?CreateGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4GestureProcessorType@@@Z @ 0x180142250 (-CreateGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@IUtagPOINT@@_KW4.c)
 *     ?TryResumeGestureHandler@GestureServices@@QEAA?AV?$weak_ptr@VGestureHandler@@@std@@_KI@Z @ 0x180143D48 (-TryResumeGestureHandler@GestureServices@@QEAA-AV-$weak_ptr@VGestureHandler@@@std@@_KI@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  if ( a2[1] )
  {
    *a1 = *a2;
    v2 = a2[1];
    a1[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 12));
  }
  return a1;
}
