/*
 * XREFs of ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1400C9C18
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1400707A0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1400C9E1C (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::SubmitBatch(
        DirectComposition::CApplicationChannel *this,
        LARGE_INTEGER *a2,
        struct DirectComposition::CBatch *a3,
        char a4,
        const struct DirectComposition::SynchronizationObject *a5)
{
  LARGE_INTEGER PerformanceCounter; // rax
  struct _ERESOURCE *v9; // rbx
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rdi
  struct _ERESOURCE *v12; // rbx
  LARGE_INTEGER v13; // rax
  union _SLIST_HEADER *v14; // rbx
  struct _ERESOURCE *v15; // rcx
  struct DirectComposition::CBatch *QuadPart; // rbx

  if ( a4 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = 0LL;
  a2[7] = PerformanceCounter;
  v9 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 16LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v9, 1u);
  if ( a5 && !*((_BYTE *)a5 + 33) )
    DirectComposition::CBatch::SetSynchronizationObject((DirectComposition::CBatch *)a2, a5);
  v10 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
  if ( v10 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
  }
  if ( *((int *)this + 6) <= 0
    && (v11 = *((_QWORD *)this + 5),
        v12 = *(struct _ERESOURCE **)(v11 + 16),
        KeEnterCriticalRegion(),
        ExAcquireResourceSharedLite(v12, 1u),
        LODWORD(v12) = *(_DWORD *)(v11 + 148),
        ExReleaseResourceLite(*(PERESOURCE *)(v11 + 16)),
        KeLeaveCriticalRegion(),
        (_DWORD)v12) )
  {
    v13 = *a2;
    v14 = (union _SLIST_HEADER *)*((_QWORD *)this + 5);
    a2[3] = *a2;
    if ( v13.QuadPart )
      *(_QWORD *)(v13.QuadPart + 24) = a3;
    ExpInterlockedPushEntrySList(v14 + 6, (PSLIST_ENTRY)a2);
    KeSetEvent(*(PRKEVENT *)(v14[5].Region + 8), 1, 0);
  }
  else
  {
    if ( a2 )
    {
      do
      {
        QuadPart = (struct DirectComposition::CBatch *)a2->QuadPart;
        a2->QuadPart = 0LL;
        DirectComposition::CBatch::ReturnToApplication((DirectComposition::CBatch *)a2, 0);
        a2 = (LARGE_INTEGER *)QuadPart;
      }
      while ( QuadPart );
    }
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, _QWORD))(*(_QWORD *)this + 16LL))(this, 0LL);
  }
  v15 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
  if ( v15 )
  {
    ExReleaseResourceLite(v15);
    KeLeaveCriticalRegion();
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  KeLeaveCriticalRegion();
}
