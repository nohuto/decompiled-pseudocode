/*
 * XREFs of ?DxgkOpenDwmHandleForCompositionObjectReference@@YAJPEAXPEAPEAX@Z @ 0x14000B3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z @ 0x14000B630 (-OpenDwmHandle@DxgkCompositionObject@@QEBAJPEAPEAX@Z.c)
 */

__int64 __fastcall DxgkOpenDwmHandleForCompositionObjectReference(void *a1, void **a2)
{
  return DxgkCompositionObject::OpenDwmHandle(a1, a2);
}
