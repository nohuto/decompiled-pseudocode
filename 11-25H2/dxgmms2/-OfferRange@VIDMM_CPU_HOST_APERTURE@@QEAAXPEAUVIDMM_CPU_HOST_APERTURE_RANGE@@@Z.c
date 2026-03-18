/*
 * XREFs of ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401019F8
 * Callers:
 *     MapInCpuHostAperture @ 0x1401146B4 (MapInCpuHostAperture.c)
 *     ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140114C34 (-OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::OfferRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE ***a2)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v2; // r8
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v3; // rax
  struct VIDMM_CPU_HOST_APERTURE_RANGE ****v4; // rax
  __int64 v5; // rcx

  v2 = *a2;
  if ( (*a2)[1] != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2
    || (v3 = a2[1], *v3 != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2)
    || (*v3 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v2,
        v2[1] = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v3,
        v4 = (struct VIDMM_CPU_HOST_APERTURE_RANGE ****)((char *)this + 16),
        v5 = *((_QWORD *)this + 2),
        *(struct VIDMM_CPU_HOST_APERTURE_RANGE *****)(v5 + 8) != v4) )
  {
    __fastfail(3u);
  }
  *a2 = (struct VIDMM_CPU_HOST_APERTURE_RANGE **)v5;
  a2[1] = (struct VIDMM_CPU_HOST_APERTURE_RANGE **)v4;
  *(_QWORD *)(v5 + 8) = a2;
  *v4 = a2;
}
