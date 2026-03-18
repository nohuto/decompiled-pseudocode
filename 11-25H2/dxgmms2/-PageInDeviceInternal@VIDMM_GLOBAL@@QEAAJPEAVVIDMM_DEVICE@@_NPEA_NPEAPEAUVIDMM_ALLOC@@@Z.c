/*
 * XREFs of ?PageInDeviceInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E246C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E20E8 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1400E3558 (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140007FC0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E182C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E2754 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1400E27E4 (-PageInFaultedAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E2B68 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400E34BC (-FaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInDeviceInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        bool a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  _QWORD *v5; // r12
  bool v7; // r10
  VIDMM_GLOBAL *v9; // rbp
  int v10; // edi
  __int64 v12; // rdx
  __int64 v13; // r13
  struct VIDMM_ALLOC *v14; // rbx
  int i; // ebp
  _QWORD *v16; // r14
  _DWORD *v17; // rcx
  VIDMM_DEVICE *v18; // rcx
  _QWORD *v19; // r14
  _DWORD *v20; // rax
  struct _KTHREAD **VirtualAddressAllocator; // rdi
  VIDMM_PAGE_DIRECTORY *v22; // rcx
  int v23; // eax
  _BYTE v24[88]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (_QWORD *)((char *)a2 + 136);
  v7 = a3;
  v9 = this;
  v10 = 0;
  *a4 = 0;
  *a5 = 0LL;
  if ( (_QWORD *)*v5 == v5
    || (v12 = *((_QWORD *)a2 + 4)) != 0
    && (*(_BYTE *)(v12 + 204) || _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 200), 0, 0)) )
  {
    if ( *((_QWORD *)a2 + 31) )
      *((_QWORD *)a2 + 31) = 0LL;
    return (unsigned int)v10;
  }
  v13 = *((_QWORD *)a2 + 3);
  if ( v13 )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 808));
    v7 = a3;
  }
  v14 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 31);
  if ( !v14 )
    goto LABEL_9;
  if ( (*(_DWORD *)(**(_QWORD **)v14 + 24LL) & 0x100) != 0 )
  {
    VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                    *((VIDMM_PROCESS **)a2 + 1),
                                                    *(_DWORD *)(*((_QWORD *)v9 + 3) + 240LL),
                                                    *(_DWORD *)(**(_QWORD **)v14 + 24LL) & 0x3F);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, VirtualAddressAllocator + 7);
    v22 = *(VIDMM_PAGE_DIRECTORY **)(**(_QWORD **)v14 + 64LL);
    if ( (*(_DWORD *)v22 & 7) != 0 )
      v23 = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
              v22,
              (struct CVirtualAddressAllocator *)VirtualAddressAllocator,
              a5);
    else
      v23 = VIDMM_PAGE_TABLE::CommitPageTable(v22, (struct CVirtualAddressAllocator *)VirtualAddressAllocator, a5);
    v10 = v23;
    *a4 = v23 == -1073741267;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
LABEL_38:
    if ( v10 < 0 )
      goto LABEL_39;
    goto LABEL_48;
  }
  if ( (*((_DWORD *)v14 + 7) & 3) != 0 )
  {
    v10 = VIDMM_GLOBAL::PageInFaultedAllocation(v9, v14, v7, a4, a5);
    goto LABEL_38;
  }
  v10 = 0;
LABEL_48:
  *((_QWORD *)a2 + 31) = 0LL;
LABEL_9:
  for ( i = 0; i < 3; ++i )
  {
    v16 = (_QWORD *)*v5;
    while ( v16 != v5 )
    {
      v14 = (struct VIDMM_ALLOC *)(v16 - 7);
      v16 = (_QWORD *)*v16;
      v17 = **(_DWORD ***)v14;
      if ( i )
      {
        if ( i != 1 || *(_DWORD *)(*(_QWORD *)v17 + 48LL) >= 0xA0000000 )
          goto LABEL_17;
      }
      else if ( (v17[6] & 0x40) == 0 )
      {
LABEL_17:
        if ( v17[18] == 1 )
        {
          v10 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v14, a3, a4, a5);
          if ( v10 < 0 )
          {
LABEL_19:
            v9 = this;
LABEL_39:
            if ( (*((_DWORD *)v14 + 7) & 3) == 2 )
              VIDMM_GLOBAL::FaultOneAllocation(v9, (VIDMM_DEVICE **)v14);
            else
              VIDMM_DEVICE::FaultCommitment(v18, v14);
            *((_QWORD *)a2 + 31) = *a5;
            goto LABEL_30;
          }
        }
      }
    }
    v19 = (_QWORD *)*v5;
    while ( v19 != v5 )
    {
      v14 = (struct VIDMM_ALLOC *)(v19 - 7);
      v19 = (_QWORD *)*v19;
      v20 = **(_DWORD ***)v14;
      if ( i )
      {
        if ( i != 1 || *(_DWORD *)(*(_QWORD *)v20 + 48LL) >= 0xA0000000 )
          goto LABEL_25;
      }
      else if ( (v20[6] & 0x40) == 0 )
      {
LABEL_25:
        v10 = VIDMM_GLOBAL::PageInFaultedAllocation(this, v14, a3, a4, a5);
        if ( v10 < 0 )
          goto LABEL_19;
      }
    }
  }
LABEL_30:
  if ( v13 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 824));
    ExReleasePushLockSharedEx(v13 + 808, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v10;
}
