/*
 * XREFs of ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1400B2C00
 * Callers:
 *     ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x140028550 (--_GVIDMM_DEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400338D0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140033D04 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14003C2C8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z @ 0x14004603C (-VidMmSynchronizeWithWorkerThreadRun@@YAXPEBUVIDMM_WORKER_THREAD@@@Z.c)
 *     ?VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z @ 0x1400910A0 (-VidMmRemoveFromSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@@Z.c)
 *     ?VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z @ 0x1400915C8 (-VidMmCancelTask@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAUVIDMM_TASK@@@Z.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1400B2ED0 (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400B348C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ??1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ @ 0x1400B35D8 (--1VIDMM_PHYSICAL_DEVICE@@QEAA@XZ.c)
 *     FlushDevicePagingQueue @ 0x1400B3864 (FlushDevicePagingQueue.c)
 *     IsDeviceSelectedForPaging @ 0x1400B3DC8 (IsDeviceSelectedForPaging.c)
 */

void __fastcall VIDMM_DEVICE::~VIDMM_DEVICE(__int64 **this)
{
  unsigned int i; // edi
  __int64 *v3; // rax
  __int64 *v4; // rax
  __int64 v5; // rsi
  __int64 *v6; // rax
  __int64 *v7; // rcx
  struct _LIST_ENTRY *v8; // rdi
  VIDMM_GLOBAL *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *j; // rax
  __int64 v12; // rcx
  VIDMM_DEVICE **v13; // rdx
  VIDMM_DEVICE **v14; // rcx
  unsigned int k; // esi
  __int64 *v16; // rax
  __int64 *v17; // rax
  __int64 v18; // rdi
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rcx
  unsigned int m; // edi
  __int64 *v23; // rax
  void *v24; // rsi
  struct VIDMM_WORKER_THREAD2 *v25; // rcx
  _BYTE v26[40]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 15); ++i )
  {
    v3 = this[9];
    if ( v3 )
      FlushDevicePagingQueue(**this, &v3[4 * i]);
    v4 = this[10];
    v5 = 4LL * i;
    if ( v4 )
      FlushDevicePagingQueue(**this, &v4[v5]);
    v6 = this[11];
    if ( v6 )
      FlushDevicePagingQueue(**this, &v6[v5]);
  }
  v7 = *this;
  v8 = (struct _LIST_ENTRY *)(this + 23);
  if ( (*((_BYTE *)*this + 40937) & 0x10) != 0 )
  {
    VidMmCancelTask((struct VIDMM_TASK **)*v7, (struct VIDMM_TASK *)(this + 40));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v26,
      (struct _KTHREAD **)*this + 5569);
    if ( v8->Flink )
      VidMmRemoveFromSuspendList(v25, (struct VIDMM_DEVICE *)this);
  }
  else
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, (struct _KTHREAD **)v7 + 5569);
    if ( v8->Flink )
      VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v9, v8);
    v10 = *this + 5575;
    for ( j = (_QWORD *)*v10; j != v10; j = (_QWORD *)*j )
    {
      if ( this == (__int64 **)j[7] )
        j[7] = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(**this + 24), 0, 0);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  v12 = **this;
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v12 + 8) && (unsigned __int8)IsDeviceSelectedForPaging(v12, this) )
    VidMmSynchronizeWithWorkerThreadRun((const struct VIDMM_WORKER_THREAD *)**this);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, (struct _KTHREAD **)*this + 5569);
  v13 = (VIDMM_DEVICE **)this[25];
  if ( v13[1] != (VIDMM_DEVICE *)(this + 25) || (v14 = (VIDMM_DEVICE **)this[26], *v14 != (VIDMM_DEVICE *)(this + 25)) )
    __fastfail(3u);
  *v14 = (VIDMM_DEVICE *)v13;
  v13[1] = (VIDMM_DEVICE *)v14;
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
  for ( k = 0; k < *((_DWORD *)this + 15); ++k )
  {
    v16 = this[9];
    if ( v16 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v16[4 * k]);
    v17 = this[10];
    v18 = 4LL * k;
    if ( v17 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v17[v18]);
    v19 = this[11];
    if ( v19 )
      VIDMM_DEVICE_PAGING_QUEUE::DestroyState((VIDMM_DEVICE_PAGING_QUEUE *)&v19[v18]);
  }
  operator delete(this[9]);
  v20 = this[10];
  this[9] = 0LL;
  operator delete(v20);
  v21 = this[11];
  this[10] = 0LL;
  operator delete(v21);
  this[11] = 0LL;
  if ( this[5] )
  {
    for ( m = 0; m < *((_DWORD *)this + 15); ++m )
    {
      v23 = this[5];
      v24 = (void *)v23[m];
      if ( v24 )
      {
        VIDMM_PHYSICAL_DEVICE::~VIDMM_PHYSICAL_DEVICE((VIDMM_PHYSICAL_DEVICE *)v23[m]);
        operator delete(v24);
        this[5][m] = 0LL;
      }
    }
    operator delete(this[5]);
    this[5] = 0LL;
  }
  if ( (*((_BYTE *)this + 58) & 1) != 0 )
    VIDMM_PROCESS::CloseAdapter((VIDMM_PROCESS *)this[1], (struct VIDMM_GLOBAL *)*this);
}
