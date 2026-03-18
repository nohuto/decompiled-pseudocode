/*
 * XREFs of ?GetTargetId@CHolographicInteropTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802770B0
 * Callers:
 *     ?GetTargetId@CHolographicInteropTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802770C0 (-GetTargetId@CHolographicInteropTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CHolographicInteropTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802770D0 (-GetTargetId@CHolographicInteropTarget@@WFA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CHolographicInteropTarget::GetTargetId(
        CHolographicInteropTarget *this)
{
  return (CHolographicInteropTarget *)((char *)this + 112);
}
