/*
 * XREFs of ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x14006D30C
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14006D07C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CEC70 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x14006D710 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x14006D790 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z @ 0x14006D810 (-ReservePools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_K@Z.c)
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14006D880 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x14006DAC0 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x14006E2A4 (-Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z.c)
 *     ?StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x14006E7E0 (-StaticAllocate@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPoo.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x14006E820 (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x14006E920 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140074908 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Initialize(
        DirectComposition::CApplicationChannel *this,
        unsigned int *a2,
        void **a3)
{
  int v6; // eax
  unsigned __int64 v7; // rdx
  NTSTATUS Batch; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessSequenceNumber; // rax
  void *v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  PVOID *v18; // rbx
  __int64 v19; // rax
  DirectComposition::CBatchSharedMemoryPoolSet *v20; // rbx
  int v21; // eax
  enum _EVENT_TYPE v22; // ecx
  __int64 v24; // rcx
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  enum _EVENT_TYPE v28; // ecx
  int v29; // eax
  struct DirectComposition::CBatch *v30; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp+40h] BYREF
  DirectComposition::CBatchSharedMemoryPool *v34; // [rsp+C8h] [rbp+58h] BYREF

  v6 = DirectComposition::CChannel::Initialize(this);
  ViewSize = 0LL;
  Batch = 0;
  if ( v6 < 0 )
    Batch = v6;
  if ( Batch >= 0 )
  {
    *((_DWORD *)this + 684) = (unsigned int)PsGetCurrentProcessId();
    CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
    *((_QWORD *)this + 339) = CurrentProcess;
    ProcessSequenceNumber = PsGetProcessSequenceNumber(CurrentProcess);
    v15 = (void *)*((_QWORD *)this + 339);
    *((_QWORD *)this + 341) = ProcessSequenceNumber;
    Batch = ObReferenceObjectByPointer(v15, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  }
  v16 = *((_DWORD *)this + 688);
  if ( !v16 )
    goto LABEL_11;
  if ( Batch < 0 )
  {
LABEL_12:
    v20 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
    goto LABEL_15;
  }
  v17 = (v16 + 4095) & 0xFFFFF000;
  *((_DWORD *)this + 688) = v17;
  if ( !v17 )
  {
    Batch = -1073741801;
    goto LABEL_12;
  }
  v18 = (PVOID *)((char *)this + 2744);
  v31 = v17;
  Batch = MmCreateSection((char *)this + 2744, 6LL, 0LL, &v31, 4, 138412032, 0LL, 0LL);
  if ( Batch < 0 )
    goto LABEL_12;
  Batch = MmMapViewInSessionSpace(*v18, (PVOID *)this + 345, &ViewSize);
  if ( Batch < 0 )
    goto LABEL_12;
  v19 = *((unsigned int *)this + 688);
  v32 = 0LL;
  Batch = MmMapViewOfSection(
            *v18,
            *((_QWORD *)this + 339),
            (char *)this + 2768,
            0LL,
            v19,
            &v32,
            &ViewSize,
            2,
            0x400000,
            4);
LABEL_11:
  if ( Batch < 0 )
    goto LABEL_12;
  v21 = (*(__int64 (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this);
  Batch = DirectComposition::CEvent::Create(v22, v21 != 2, (struct DirectComposition::CEvent **)this + 30);
  if ( Batch < 0 )
    goto LABEL_12;
  v20 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
  Batch = DirectComposition::CBatchSharedMemoryPoolSet::ReservePools(
            (DirectComposition::CApplicationChannel *)((char *)this + 2632),
            v7);
LABEL_15:
  if ( Batch >= 0 )
  {
    DirectComposition::CBatchSharedMemoryPoolSet::StaticAllocate(
      v20,
      v7,
      (struct DirectComposition::CBatchSharedMemoryPool **)this + 333,
      (unsigned __int64 *)this + 334);
    v34 = 0LL;
    if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                v20,
                0x28uLL,
                &v34,
                (unsigned __int64 *)this + 335) >= 0 )
    {
      DirectComposition::CBatchSharedMemoryPool::UseSpace(v34, 0x28uLL);
      *(_BYTE *)(v24 + 64) = 0;
    }
    Batch = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 24);
    if ( Batch >= 0 )
    {
      v30 = 0LL;
      Batch = DirectComposition::CApplicationChannel::CreateBatch(this, &v30);
      **((_QWORD **)this + 24) = v30;
      if ( Batch >= 0 )
      {
        v25 = DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)this + 23);
        v26 = *((_QWORD *)this + 23);
        Batch = v25;
        v27 = *((_QWORD *)this + 335);
        *(_QWORD *)(v26 + 136) = *((_QWORD *)this + 333);
        *(_QWORD *)(v26 + 144) = v27;
      }
    }
  }
  *((_BYTE *)this + 265) &= ~0x10u;
  *((_BYTE *)this + 267) = 0;
  if ( Batch >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 2
      || (Batch = DirectComposition::CEvent::Create(v28, 1, (struct DirectComposition::CEvent **)this + 29), Batch >= 0) )
    {
      DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      v29 = DirectComposition::CConnection::RegisterChannel(
              *((DirectComposition::CConnection **)this + 5),
              this,
              (unsigned int *)this + 7);
      Batch = v29;
      if ( v29 < 0 )
      {
        if ( v29 == -1073741300 )
        {
          *((_DWORD *)this + 6) = 3;
          Batch = 0;
        }
      }
      else
      {
        DirectComposition::CApplicationChannel::OpenChannel(this);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      KeLeaveCriticalRegion();
      if ( Batch >= 0 )
      {
        if ( a2 )
          *a2 = *((_DWORD *)this + 688);
        if ( a3 )
          *a3 = (void *)*((_QWORD *)this + 346);
      }
    }
  }
  return (unsigned int)Batch;
}
