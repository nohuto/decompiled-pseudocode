/*
 * XREFs of NtMapCMFModule @ 0x1407B4B70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExConvertExclusiveToSharedLite @ 0x140280040 (ExConvertExclusiveToSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CMFCheckAccess @ 0x1407B3114 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x1407B39A0 (CMFFlushHitsFile.c)
 *     CMFRegisterEventTime @ 0x1407B408C (CMFRegisterEventTime.c)
 *     CMFUnmapModules @ 0x1407B48F0 (CMFUnmapModules.c)
 *     MiUnmapViewOfSection @ 0x1408B4494 (MiUnmapViewOfSection.c)
 *     MmMapViewInSessionSpace @ 0x1408BA360 (MmMapViewInSessionSpace.c)
 *     MmMapViewOfSection @ 0x1408FBFC0 (MmMapViewOfSection.c)
 *     MUIInitializeResourceLock @ 0x140A16C28 (MUIInitializeResourceLock.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  PULONG v6; // r15
  PULONG v7; // r12
  ULONG v8; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  ULONG v11; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v13; // eax
  unsigned int v14; // ebx
  _DWORD *v15; // rcx
  struct _KTHREAD *v16; // rax
  ULONG v17; // ebx
  unsigned int v18; // r12d
  int v19; // ebx
  int v20; // r15d
  bool v21; // r13
  PVOID *v22; // rsi
  void *Pool2; // rax
  __int64 v24; // rax
  int v25; // r12d
  NTSTATUS v26; // eax
  signed __int64 v27; // rsi
  signed __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  NTSTATUS v34; // [rsp+50h] [rbp-128h]
  int v35; // [rsp+58h] [rbp-120h]
  PVOID MappedBase; // [rsp+60h] [rbp-118h] BYREF
  KPROCESSOR_MODE v37; // [rsp+68h] [rbp-110h]
  unsigned int v38; // [rsp+6Ch] [rbp-10Ch]
  int v39; // [rsp+70h] [rbp-108h]
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-100h] BYREF
  int v41; // [rsp+80h] [rbp-F8h]
  __int64 v42; // [rsp+88h] [rbp-F0h] BYREF
  PVOID *v43; // [rsp+90h] [rbp-E8h]
  unsigned int v44; // [rsp+98h] [rbp-E0h]
  HANDLE Handle; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v46; // [rsp+A8h] [rbp-D0h] BYREF
  __int128 v47; // [rsp+B8h] [rbp-C0h]
  __int128 v48; // [rsp+C8h] [rbp-B0h]
  __int64 v49; // [rsp+D8h] [rbp-A0h]
  __int128 v50; // [rsp+E0h] [rbp-98h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-88h]
  __int128 v52; // [rsp+100h] [rbp-78h]
  struct _KEVENT Event; // [rsp+110h] [rbp-68h] BYREF
  struct _KTHREAD *v55; // [rsp+130h] [rbp-48h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v8 = Index;
  v50 = 0LL;
  v51 = 0LL;
  *(_QWORD *)&v52 = 0LL;
  DWORD2(v52) = 0;
  v42 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  MappedBase = 0LL;
  ViewSize = 0LL;
  v35 = 0;
  v38 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v34 = -1073741823;
    goto LABEL_116;
  }
  if ( (What & 0xFFE0FE81) != 0 )
    goto LABEL_5;
  v34 = MUIInitializeResourceLock(&CMFLock);
  if ( (v34 & 0xC0000000) == 0xC0000000 )
    goto LABEL_116;
  if ( (What & 0x20000) != 0 )
  {
    if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
    {
LABEL_5:
      v34 = -1073741811;
      goto LABEL_116;
    }
    v11 = What & 0x1C0000;
    if ( v11 == (CMFFlagsCache & 0x1C0000) )
      goto LABEL_11;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(CMFLock, 1u);
    if ( v11 != (CMFFlagsCache & 0x1C0000) )
    {
      if ( CMFDirectorySectionPointer )
      {
        if ( !v11 )
        {
          v34 = -1073741637;
LABEL_30:
          ExReleaseResourceLite(CMFLock);
          KeLeaveCriticalRegion();
          goto LABEL_116;
        }
        if ( CMFDirectorySectionPointer )
        {
          v13 = 0x80000000;
          v44 = 0x80000000;
          if ( (CMFFlagsCache & 0x1C0000) != 0 )
            v13 = -1073741824;
          v44 = v13;
          v34 = CMFCheckAccess((__int64)CMFDirectorySectionPointer, v13, PreviousMode);
          if ( (v34 & 0xC0000000) == 0xC0000000 )
            goto LABEL_30;
        }
      }
      v14 = CMFFlagsCache & 0xFFE3FFFF | v11;
      CMFFlagsCache = v14;
      if ( CMFDirectorySectionPointer && ((v14 & 0x80000) != 0 || (v14 & 0x100000) != 0) )
      {
        MappedBase = 0LL;
        ViewSize = 104LL;
        v42 = 0LL;
        if ( MmMapViewInSessionSpace(CMFDirectorySectionPointer, &MappedBase, &ViewSize) >= 0 )
        {
          v15 = MappedBase;
          if ( MappedBase )
          {
            if ( ViewSize >= 0x68 )
            {
              *((_DWORD *)MappedBase + 12) &= 0xFFE3FFFF;
              v15[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
              v15 = MappedBase;
            }
            MiRemoveFromSystemSpace((ULONG_PTR)v15, 1);
            MappedBase = 0LL;
          }
        }
        CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
        CMFRegisterEventTime(4u);
      }
    }
    v34 = 0;
    goto LABEL_30;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  ExAcquireResourceSharedLite(CMFLock, 1u);
  if ( !CMFFlagsCache )
  {
    v17 = What | 1;
LABEL_48:
    v18 = v17 & 0xFFFFFECF;
    v38 = v18;
    v19 = v17 & 0x130;
    v39 = (v18 & 0x40) != 0 ? 4 : 2;
    v20 = (v18 & 0x40) != 0 ? -1073741824 : 0x80000000;
    v41 = v20;
    v35 = 10000;
    switch ( v19 )
    {
      case 16:
        if ( (unsigned int)CMFCacheIndex < 0x2710 )
        {
          v35 = CMFCacheIndex;
LABEL_56:
          v21 = (v18 & 2) != 0;
          v22 = &CMFDirectorySectionPointer;
LABEL_67:
          v43 = v22;
          v24 = (__int64)*v22;
          goto LABEL_71;
        }
        if ( v8 < 0x2710 )
        {
          v35 = v8;
          goto LABEL_56;
        }
        if ( CMFFirstAccess )
        {
          CMFRegisterEventTime(1u);
          CMFFirstAccess = 0;
        }
        break;
      case 32:
        if ( v8 < 0x1E && CMFCacheIndex != 10000 )
        {
          v35 = CMFCacheIndex;
          if ( !CMFSegmentSectionPointer )
          {
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
            MappedBase = Pool2;
            if ( !Pool2 )
            {
              v34 = -1073741801;
              goto LABEL_96;
            }
            memset_0(Pool2, 0, 0xF0uLL);
            if ( _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CMFSegmentSectionPointer,
                   (signed __int64)MappedBase,
                   0LL) )
            {
              ExFreePoolWithTag(MappedBase, 0);
            }
            MappedBase = 0LL;
            v18 = v38;
          }
          v21 = (v18 & 4) != 0;
          v22 = (PVOID *)((char *)CMFSegmentSectionPointer + 8 * v8);
          goto LABEL_67;
        }
        break;
      case 256:
        v35 = CMFCacheIndex;
        v22 = &CMFHitsSectionPointer;
        v43 = &CMFHitsSectionPointer;
        if ( CMFHitsSectionPointer )
          goto LABEL_85;
        CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
        v24 = 0LL;
        v21 = (v18 & 8) != 0;
        v18 = v38;
        v22 = v43;
LABEL_71:
        if ( !v24 )
        {
          ExReleaseResourceLite(CMFLock);
          ExAcquireResourceExclusiveLite(CMFLock, 1u);
          if ( ((CMFFlagsCache ^ v18) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
          {
            v34 = -1073741823;
            goto LABEL_96;
          }
          v20 = v41;
          if ( *v22 )
          {
            v25 = v39;
LABEL_84:
            ExConvertExclusiveToSharedLite(CMFLock);
LABEL_86:
            MappedBase = 0LL;
            ViewSize = 0LL;
            v42 = 0LL;
            if ( BaseAddress )
            {
              if ( v19 == 256 || (v34 = CMFCheckAccess((__int64)*v22, v20, v37), (v34 & 0xC0000000) != 0xC0000000) )
              {
                v55 = KeGetCurrentThread();
                v34 = MmMapViewOfSection(
                        (unsigned int)*v43,
                        v55->ApcState.Process,
                        (unsigned int)&MappedBase,
                        0,
                        0LL,
                        (__int64)&v42,
                        (__int64)&ViewSize,
                        1,
                        0x400000,
                        v25);
                if ( (v34 & 0xC0000000) == 0xC0000000 )
                {
                  MappedBase = 0LL;
                }
                else if ( v19 == 256 )
                {
                  v27 = CMFHitsLastFlushTime;
                  v28 = MEMORY[0xFFFFF78000000014];
                  if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL
                    && v27 == _InterlockedCompareExchange64(
                                &CMFHitsLastFlushTime,
                                MEMORY[0xFFFFF78000000014],
                                CMFHitsLastFlushTime)
                    && (int)CMFFlushHitsFile(MappedBase, ViewSize) < 0 )
                  {
                    _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v27, v28);
                  }
                }
              }
            }
            goto LABEL_96;
          }
          LODWORD(v46) = 0x8000000;
          *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(v41, v35);
          BYTE12(v46) = v21;
          *((_QWORD *)&v47 + 1) = __PAIR64__(Index, v18);
          v25 = v39;
          LODWORD(v48) = v39;
          *((_QWORD *)&v48 + 1) = v22;
          LODWORD(v49) = v19;
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          *(_QWORD *)&v47 = &Event;
          LODWORD(v50) = 48;
          *((_QWORD *)&v50 + 1) = 0LL;
          DWORD2(v51) = 512;
          *(_QWORD *)&v51 = 0LL;
          v52 = 0LL;
          v34 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, &v50, 0LL, 0LL, CMFSystemThreadRoutine, &v46, 0LL, 0LL);
          if ( (v34 & 0xC0000000) != 0xC0000000 )
          {
            ZwClose(Handle);
            v26 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v34 = v26;
            if ( v26 )
            {
              if ( v26 >= 0 )
                v34 = -1073741823;
              goto LABEL_96;
            }
            v38 = DWORD2(v47);
            v34 = DWORD1(v48);
            if ( (DWORD1(v48) & 0xC0000000) != 0xC0000000 )
            {
              if ( v19 == 16 )
                CMFRegisterEventTime(2u);
              goto LABEL_84;
            }
          }
LABEL_96:
          v7 = CacheIndexOut;
          goto LABEL_97;
        }
LABEL_85:
        v25 = v39;
        goto LABEL_86;
    }
    v34 = -1073741811;
    goto LABEL_96;
  }
  if ( (CMFFlagsCache & 0xF) != 0 )
    v17 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
  else
    v17 = What | 1;
  if ( (CMFFlagsCache & 0x100000) != 0 )
  {
    if ( (v17 & 0x10000) == 0 )
    {
      v34 = -1073741672;
      goto LABEL_98;
    }
    v17 |= 0x100000u;
    goto LABEL_46;
  }
  if ( (CMFFlagsCache & 0x80000) == 0 )
  {
    if ( (CMFFlagsCache & 0x40000) != 0 )
      v17 |= 0x40000u;
    goto LABEL_46;
  }
  if ( (v17 & 0x130) != 0x20 || (v17 & 0x10000) != 0 )
  {
    v17 |= 0x80000u;
LABEL_46:
    v8 = Index;
    goto LABEL_48;
  }
  v34 = -1073741672;
LABEL_97:
  v6 = CacheFlagsOut;
LABEL_98:
  ExReleaseResourceLite(CMFLock);
  KeLeaveCriticalRegion();
  if ( (v34 & 0xC0000000) != 0xC0000000 )
  {
    v29 = 0x7FFFFFFF0000LL;
    if ( BaseAddress )
    {
      v30 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
        v30 = (__int64)BaseAddress;
      *(_QWORD *)v30 = *(_QWORD *)v30;
      *BaseAddress = MappedBase;
      MappedBase = 0LL;
    }
    if ( ViewSizeOut )
    {
      v31 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ViewSizeOut < 0x7FFFFFFF0000LL )
        v31 = (__int64)ViewSizeOut;
      *(_DWORD *)v31 = *(_DWORD *)v31;
      *ViewSizeOut = ViewSize;
    }
    if ( v7 )
    {
      v32 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
        v32 = (__int64)v7;
      *(_DWORD *)v32 = *(_DWORD *)v32;
      *v7 = v35;
    }
    if ( v6 )
    {
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        v29 = (__int64)v6;
      *(_DWORD *)v29 = *(_DWORD *)v29;
      *v6 = v38;
    }
LABEL_11:
    v34 = 0;
  }
LABEL_116:
  if ( MappedBase )
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process);
  return v34;
}
