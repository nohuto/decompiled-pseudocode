/*
 * XREFs of ObpReleaseLookupContext @ 0x14025E7E0
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1406F8670 (ObpCreateSymbolicLinkName.c)
 *     ObReferenceObjectByName @ 0x14083F230 (ObReferenceObjectByName.c)
 *     ObpDecrementHandleCount @ 0x1408410A0 (ObpDecrementHandleCount.c)
 *     ObCloseHandleTableEntry @ 0x14084BFA0 (ObCloseHandleTableEntry.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     ObpDeleteNameCheck @ 0x14089B690 (ObpDeleteNameCheck.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ObpInsertOrLocateNamedObject @ 0x1409E45C0 (ObpInsertOrLocateNamedObject.c)
 *     ObCreateObjectTypeEx @ 0x140A9DB20 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x14025CDA0 (KiAbEntryFreeAndEnableInterrupts.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall ObpReleaseLookupContext(__int64 a1)
{
  __int64 v2; // rdi
  signed __int64 v3; // rax
  signed __int64 v4; // rdx
  signed __int64 v5; // rtt
  struct _KTHREAD *CurrentThread; // r10
  _KLOCK_ENTRIES *KernelAbEntries; // r8
  unsigned int i; // edx
  __int64 v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett

  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)a1 + 296LL;
    _m_prefetchw((const void *)v2);
    v3 = *(_QWORD *)v2;
    v4 = *(_QWORD *)v2 - 16LL;
    if ( (*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v4 = 0LL;
    if ( (v3 & 2) != 0
      || (v5 = *(_QWORD *)v2, v5 != _InterlockedCompareExchange64((volatile signed __int64 *)v2, v4, v3)) )
    {
      ExfReleasePushLock((_QWORD *)v2);
    }
    CurrentThread = KeGetCurrentThread();
    _disable();
    KernelAbEntries = CurrentThread->KernelAbEntries;
    for ( i = 0; i < KernelAbEntries->EntryCount; ++i )
    {
      v9 = (__int64)&KernelAbEntries->Entries[i];
      if ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_BYTE *)(v9 + 10)
        && (*(_QWORD *)v9 & 1) == 0 )
      {
        *(_BYTE *)(v9 + 10) = 0;
        KiAbEntryFreeAndEnableInterrupts(v9, (ULONG_PTR)CurrentThread, v2, 1, 0LL);
        goto LABEL_18;
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
LABEL_18:
    if ( *(_BYTE *)(a1 + 22) )
    {
      ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
      *(_BYTE *)(a1 + 22) = 0;
    }
    *(_QWORD *)a1 = 0LL;
    *(_BYTE *)(a1 + 21) = 0;
    KeLeaveCriticalRegionThread();
  }
}
