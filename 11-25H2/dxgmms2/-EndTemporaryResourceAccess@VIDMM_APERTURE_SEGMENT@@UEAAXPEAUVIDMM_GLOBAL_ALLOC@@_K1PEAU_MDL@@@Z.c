/*
 * XREFs of ?EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A2F30
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z @ 0x1400A3BF0 (-UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAU_MDL@@@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400FF540 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        void **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  unsigned __int64 LogicalAddress; // rax

  VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(this, (struct VIDMM_GLOBAL_ALLOC *)a2, a3, a4, a5);
  if ( *(_BYTE *)(*((_QWORD *)this + 3) + 40107LL) )
  {
    if ( a5 != *((struct _MDL **)this + 38) )
    {
      LogicalAddress = VidMmiGetLogicalAddress(a2[44], a3);
      SysMmUnmapIommuRange(
        *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 224LL),
        LogicalAddress,
        a5,
        0);
    }
  }
}
