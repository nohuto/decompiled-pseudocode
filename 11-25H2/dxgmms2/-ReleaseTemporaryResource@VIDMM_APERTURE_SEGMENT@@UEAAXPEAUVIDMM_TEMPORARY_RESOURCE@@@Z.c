/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_TEMPORARY_RESOURCE@@@Z @ 0x1400A36F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400D4D64 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2)
{
  VIDMM_LINEAR_POOL::Free(this[26], a2[2]);
}
