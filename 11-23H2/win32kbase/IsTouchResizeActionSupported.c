/*
 * XREFs of IsTouchResizeActionSupported @ 0x1C0233158
 * Callers:
 *     ?CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z @ 0x1C01BC324 (-CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z.c)
 *     ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01BC444 (-CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsTouchResizeActionSupported()
{
  if ( qword_1C0296E78 )
    return qword_1C0296E78();
  else
    return 3221225659LL;
}
