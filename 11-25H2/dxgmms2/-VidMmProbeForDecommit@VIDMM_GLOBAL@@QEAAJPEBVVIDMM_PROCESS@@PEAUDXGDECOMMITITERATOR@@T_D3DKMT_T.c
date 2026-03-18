/*
 * XREFs of ?VidMmProbeForDecommit@VIDMM_GLOBAL@@QEAAJPEBVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@@Z @ 0x140111B80
 * Callers:
 *     VidMmProbeForDecommit @ 0x140046700 (VidMmProbeForDecommit.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x140108070 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmProbeForDecommit(
        struct _KTHREAD **this,
        const struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4)
{
  unsigned int v8; // esi
  __int64 v9; // r13
  __int64 v10; // r15
  UINT v11; // ebx
  __int64 v12; // rcx
  char v13; // bl
  __int64 *v14; // rax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v16, this + 5135);
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)this[3] + 60));
  if ( v9 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4988));
    v10 = v9 + 104;
    v11 = a4.Value >> 1;
    v12 = *(_QWORD *)(v9 + 104);
    *((_QWORD *)a3 + 3) = v12;
    *(_QWORD *)a3 = *(_QWORD *)(v9 + 200);
    if ( (v11 & 1) == 0 )
    {
      if ( v12 == v10 )
      {
LABEL_9:
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        this[4989] = 0LL;
        ExReleasePushLockExclusiveEx(this + 4988, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_10;
      }
      v13 = v11 & 1;
      while ( !VIDMM_GLOBAL::IsAllocationDecommitCandidate(
                 (VIDMM_GLOBAL *)this,
                 (struct VIDMM_GLOBAL_ALLOC *)(v12 - 280),
                 v13) )
      {
        v14 = (__int64 *)*((_QWORD *)a3 + 3);
        v12 = *v14;
        *((_QWORD *)a3 + 3) = *v14;
        if ( v12 == v10 )
          goto LABEL_9;
      }
    }
    v8 = -1071775484;
    goto LABEL_9;
  }
LABEL_10:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16);
  return v8;
}
