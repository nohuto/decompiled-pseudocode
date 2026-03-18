/*
 * XREFs of ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1401155D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x140041074 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     ?VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400917F4 (-VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400ABB28 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FEF80 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1400FFA00 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEG.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
        VIDMM_GLOBAL **this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7)
{
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  VIDMM_GLOBAL *v14; // r10
  union _LARGE_INTEGER v15; // rdx
  struct VIDMM_GLOBAL_ALLOC *v16; // r8
  unsigned int v17; // edx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  VIDMM_GLOBAL *v22; // rcx
  union _LARGE_INTEGER v23; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER v24; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[3], a2);
    v11 = this[3];
    if ( a7 )
      VIDMM_GLOBAL::VerifyAllocationPagingOperationDone(v11, a2);
    else
      VIDMM_GLOBAL::VerifyAllocationIsIdle(v11, a2);
  }
  v12 = *(unsigned int *)(*((_QWORD *)this[3] + 3) + 444LL);
  if ( (v12 & 4) == 0 )
  {
    v13 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
    v24 = v15;
    if ( a2 )
    {
      v16 = a2;
      v17 = *((_DWORD *)a2 + 6) & 0x3F;
    }
    else
    {
      v16 = 0LL;
      v17 = 0;
    }
    VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(v14, v17, v16, v13, a3, a4, v24, a7);
  }
  v18 = a3 << 12;
  if ( (byte_140081241 & 0x10) != 0 )
  {
    if ( a2 && (v19 = *((_QWORD *)a2 + 6)) != 0 )
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL);
    else
      v20 = 0LL;
    v23.LowPart = a7;
    McTemplateK0ppxt_EtwWriteTransfer(v12, &EventApertureUnmapping, a3, v20, a2, a3 << 12, v23.QuadPart);
  }
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v22 = this[3];
  if ( IsEnabledDeviceUsageNoInline )
    _InterlockedAdd64((volatile signed __int64 *)v22 + 938, v18);
  else
    *((_QWORD *)v22 + 938) += v18;
  *((_QWORD *)this[3] + 5026) -= a3;
}
