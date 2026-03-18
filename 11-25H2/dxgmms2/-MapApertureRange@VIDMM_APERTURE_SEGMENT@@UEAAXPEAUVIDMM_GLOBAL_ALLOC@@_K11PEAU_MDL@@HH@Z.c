/*
 * XREFs of ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1401154B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     McTemplateK0ppxt_EtwWriteTransfer @ 0x140041074 (McTemplateK0ppxt_EtwWriteTransfer.c)
 *     Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline @ 0x14004CD44 (Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1400BC1BC (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapApertureRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7,
        char a8)
{
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  ADAPTER_RENDER **v15; // r11
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r9
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v20; // rcx
  PMDL MemoryDescriptorList; // [rsp+30h] [rbp-28h]
  unsigned int v22; // [rsp+38h] [rbp-20h]

  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 444LL) & 4) == 0 )
  {
    v12 = VIDMM_SEGMENT::DriverId(this);
    VIDMM_GLOBAL::MapVideoApertureSegmentInternal(v15, *(_DWORD *)(v13 + 24) & 0x3F, a2, v12, v14, a4, a6, v22, a8, a7);
  }
  v16 = a3 << 12;
  if ( (byte_140081241 & 0x10) != 0 )
  {
    if ( a2 && (v17 = *((_QWORD *)a2 + 6)) != 0 )
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL);
    else
      v18 = 0LL;
    LODWORD(MemoryDescriptorList) = a7;
    McTemplateK0ppxt_EtwWriteTransfer((__int64)this, &EventApertureMapping, a3, v18, a2, a3 << 12, MemoryDescriptorList);
  }
  IsEnabledDeviceUsageNoInline = Feature_Servicing_KcsanInVidMmCore__private_IsEnabledDeviceUsageNoInline();
  v20 = *((_QWORD *)this + 3);
  if ( IsEnabledDeviceUsageNoInline )
    _InterlockedAdd64((volatile signed __int64 *)(v20 + 7496), v16);
  else
    *(_QWORD *)(v20 + 7496) += v16;
  *(_QWORD *)(*((_QWORD *)this + 3) + 40208LL) += a3;
}
