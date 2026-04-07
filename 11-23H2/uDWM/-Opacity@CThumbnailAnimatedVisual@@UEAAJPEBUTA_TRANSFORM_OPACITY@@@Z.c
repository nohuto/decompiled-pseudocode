/*
 * XREFs of ?Opacity@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800E43F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Opacity(
        CThumbnailAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this - 36);
  *((double *)this + 7) = *((float *)a2 + 5);
  (*(void (__fastcall **)(char *))(v2 + 112))((char *)this - 288);
  return 0LL;
}
