/*
 * XREFs of ?ConfirmRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801DC310
 * Callers:
 *     ?ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801DC290 (-ConfirmCompSurfInfoUpate@CComposition@@QEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::ConfirmRecordedStatistics(
        CGlobalCompositionSurfaceInfo *this,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  (*(void (__fastcall **)(_QWORD, const struct tagCOMPOSITION_TARGET_ID *))(**((_QWORD **)this + 16) + 48LL))(
    *((_QWORD *)this + 16),
    a2);
}
