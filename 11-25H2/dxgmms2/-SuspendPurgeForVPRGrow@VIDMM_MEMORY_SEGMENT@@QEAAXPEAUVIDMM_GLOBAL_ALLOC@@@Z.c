/*
 * XREFs of ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140090370
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1400C10BC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003C2C8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1400E1744 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x140106118 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::SuspendPurgeForVPRGrow(VIDMM_MEMORY_SEGMENT *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  VIDMM_GLOBAL *v5; // rcx
  bool v6; // zf
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *v8; // rdx
  VIDMM_DEVICE *p_Blink; // rbx
  struct _LIST_ENTRY *v10[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v11[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 3);
  v10[1] = (struct _LIST_ENTRY *)v10;
  v10[0] = (struct _LIST_ENTRY *)v10;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v11, (struct _KTHREAD **)(v3 + 44552));
  if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(this, v10, a2, 6LL) )
  {
    WdLogSingleEntry0(3LL);
    v6 = *((_DWORD *)this + 113) == 0;
    WdLogGlobalForLineNumber = 3320;
    if ( !v6 )
    {
      v7 = v10[0];
      while ( v7 != (struct _LIST_ENTRY *)v10 )
      {
        v8 = v7;
        p_Blink = (VIDMM_DEVICE *)&v7[-12].Blink;
        v7 = v7->Flink;
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v5, v8);
        VIDMM_DEVICE::PartiallySuspend(p_Blink);
        VIDMM_DEVICE::FaultAllAllocations(p_Blink);
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11);
}
