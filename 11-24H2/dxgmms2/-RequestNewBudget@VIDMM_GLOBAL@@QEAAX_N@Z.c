/*
 * XREFs of ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400DF530
 * Callers:
 *     ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x140092CA0 (-ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GR.c)
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x140093560 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1400B9FAC (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z @ 0x1400BC068 (-DestroyAdapterInfo@VIDMM_PROCESS@@QEAAXK@Z.c)
 *     ?SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z @ 0x1400DF358 (-SetMemoryBudgetTarget@VIDMM_GLOBAL@@QEAAXKK@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1400DF3C4 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ @ 0x1400DF510 (-NotifyProcessStatusChange@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1400E0F20 (-CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x1400350FC (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall VIDMM_GLOBAL::RequestNewBudget(VIDMM_GLOBAL *this, char a2)
{
  unsigned int v3; // esi
  unsigned int v4; // r10d
  __int64 v5; // r11
  __int64 i; // r9
  __int64 v7; // rcx
  struct _RTL_BALANCED_NODE *v8; // rcx
  _QWORD *j; // rax
  _QWORD **v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  void *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v14 = &VIDMM_PARTITION::_PartitionLock;
    ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
    v3 = *((_DWORD *)this + 1736);
    v4 = 0;
    v15 = 1;
LABEL_3:
    if ( v4 < v3 )
    {
      v5 = 0LL;
      for ( i = 552LL; ; i += 24LL )
      {
        if ( i >= 600 )
        {
          ++v4;
          goto LABEL_3;
        }
        v7 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8LL * v4);
        if ( (*(_BYTE *)(i + v7) & 1) != 0 )
        {
          v8 = VIDMM_PARTITION::_PartitionTree;
          for ( j = 0LL; v8; v8 = v8->Children[0] )
            j = v8->Children;
          while ( j )
          {
            if ( *(_BYTE *)(*(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + j[5] + 24)
                          + 344LL * v4
                          + 136) )
            {
              v15 = 0;
              ExReleasePushLockSharedEx(v14, 0LL);
              goto LABEL_25;
            }
            v10 = (_QWORD **)j[1];
            v11 = j;
            if ( v10 )
            {
              v12 = *v10;
              for ( j = (_QWORD *)j[1]; v12; v12 = (_QWORD *)*v12 )
                j = v12;
            }
            else
            {
              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*j == v11 )
                  break;
                v11 = j;
              }
            }
          }
        }
        else if ( *(_BYTE *)(v5 + v7 + 720) )
        {
          DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v13);
          goto LABEL_25;
        }
        v5 += 344LL;
      }
    }
    v15 = 0;
    ExReleasePushLockSharedEx(v14, 0LL);
  }
  else
  {
LABEL_25:
    _InterlockedIncrement64((volatile signed __int64 *)this + 5583);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)this + 24LL), 0, 0);
  }
}
