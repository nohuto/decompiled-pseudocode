/*
 * XREFs of ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FE3C
 * Callers:
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025F40 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::make_shared_GestureHandler_enum_GestureProcessorType_&_unsigned_short_const___ISystemInputRouterHitTest____lambda_80df7c2b76f58973f9ddec3659020abd__&_ @ 0x18009408C (std--make_shared_GestureHandler_enum_GestureProcessorType_-_unsigned_short_const___ISystemInputR.c)
 *     ??1?$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ @ 0x1800943EC (--1-$enable_shared_from_this@VGestureHandler@@@std@@IEAA@XZ.c)
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800F62C4 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 *     ??1CustomCursorApplication2@@QEAA@XZ @ 0x1800F63F0 (--1CustomCursorApplication2@@QEAA@XZ.c)
 *     ??1SystemCursor2@@QEAA@XZ @ 0x1800F9044 (--1SystemCursor2@@QEAA@XZ.c)
 *     ??1SystemCursorService2@@UEAA@XZ @ 0x1800F909C (--1SystemCursorService2@@UEAA@XZ.c)
 *     ??1SystemCursorShape2@@QEAA@XZ @ 0x1800F9128 (--1SystemCursorShape2@@QEAA@XZ.c)
 *     ??1SystemCursorShapeBitmap2@@QEAA@XZ @ 0x1800F9158 (--1SystemCursorShapeBitmap2@@QEAA@XZ.c)
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800F9E3C (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ??1GestureHandler@@QEAA@XZ @ 0x180141C08 (--1GestureHandler@@QEAA@XZ.c)
 *     ??1HandlerContext@ShellGesturesProcessor@@QEAA@XZ @ 0x1801591AC (--1HandlerContext@ShellGesturesProcessor@@QEAA@XZ.c)
 *     ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180159228 (--4-$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x180159418 (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall std::_Ref_count_base::_Decwref(std::_Ref_count_base *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)this + 8LL))(this);
}
