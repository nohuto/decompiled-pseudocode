/*
 * XREFs of ?VidMmQueryAllocationSizeInSystemMemory@VIDMM_EXPORT@@QEAA_KPEBUVIDMM_MULTI_ALLOC@@_N@Z @ 0x14003EB08
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140218FB0 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmQueryAllocationSizeInSystemMemory(
        VIDMM_EXPORT *this,
        const struct VIDMM_MULTI_ALLOC *a2,
        char a3)
{
  const struct VIDMM_MULTI_ALLOC *v3; // r9

  v3 = a2;
  LOBYTE(a2) = a3;
  return (*(__int64 (__fastcall **)(const struct VIDMM_MULTI_ALLOC *, const struct VIDMM_MULTI_ALLOC *))(*((_QWORD *)this + 1) + 584LL))(
           v3,
           a2);
}
