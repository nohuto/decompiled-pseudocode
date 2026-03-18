/*
 * XREFs of ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x14010C480
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140036484 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140036BF0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400FDCE0 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x140108070 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::TrimOfferCommitmentInternal(
        struct _KTHREAD **this,
        struct VIDMM_PROCESS *a2,
        struct DXGDECOMMITITERATOR *a3,
        union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char v6; // bl
  unsigned __int64 v7; // r14
  unsigned __int64 v11; // r12
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  char v15; // bl
  bool v16; // r15
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // [rsp+20h] [rbp-58h]
  _BYTE v20[80]; // [rsp+28h] [rbp-50h] BYREF
  struct VIDMM_GLOBAL_ALLOC *v21; // [rsp+80h] [rbp+8h]
  _QWORD *v22; // [rsp+88h] [rbp+10h]

  v6 = (char)a4.0;
  v7 = a5;
  v11 = 0LL;
  v19 = *(_BYTE *)&a4.0 & 1;
  WdLogSingleEntry1(4LL, v19);
  WdLogGlobalForLineNumber = 26604;
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned int)(dword_1400815D0 << 20);
    if ( a5 < v7 )
      v7 = a5;
  }
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v20, this + 5135);
  v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * *((unsigned int *)this[3] + 60));
  if ( v12 && *(_QWORD *)(v12 + 200) == *(_QWORD *)a3 )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4988));
    v13 = (_QWORD *)(v12 + 104);
    v14 = (_QWORD *)*((_QWORD *)a3 + 3);
    v22 = v13;
    if ( v14 != v13 )
    {
      v15 = (v6 & 2) != 0;
      do
      {
        v21 = (struct VIDMM_GLOBAL_ALLOC *)(v14 - 35);
        *((_QWORD *)a3 + 3) = *v14;
        v16 = 0;
        if ( VIDMM_GLOBAL::IsAllocationDecommitCandidate(
               (VIDMM_GLOBAL *)this,
               (struct VIDMM_GLOBAL_ALLOC *)(v14 - 35),
               v15) )
        {
          this[5598] = (struct _KTHREAD *)(v14 - 35);
          v17 = *v14;
          if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v18 = (_QWORD *)v14[1], (_QWORD *)*v18 != v14) )
            __fastfail(3u);
          *v18 = v17;
          *(_QWORD *)(v17 + 8) = v18;
          *v14 = 0LL;
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          this[4989] = 0LL;
          ExReleasePushLockExclusiveEx(this + 4988, 0LL);
          KeLeaveCriticalRegion();
          if ( VIDMM_GLOBAL::DecommitGlobalAllocation((VIDMM_GLOBAL *)this, v21) )
          {
            v11 += *(_QWORD *)(*(_QWORD *)v21 + 16LL);
            v16 = v11 >= v7;
          }
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4988));
          this[5598] = 0LL;
          if ( v16 )
            break;
        }
        v14 = (_QWORD *)*((_QWORD *)a3 + 3);
      }
      while ( v14 != v22 );
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    this[4989] = 0LL;
    ExReleasePushLockExclusiveEx(this + 4988, 0LL);
    KeLeaveCriticalRegion();
    *a6 = v11;
    WdLogSingleEntry3(4LL, a5, v11, v19);
    WdLogGlobalForLineNumber = 26687;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
}
