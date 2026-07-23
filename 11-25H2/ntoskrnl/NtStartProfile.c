/*
 * XREFs of NtStartProfile @ 0x1407B2640
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx2 @ 0x140267450 (KeAndAffinityEx2.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     MmSizeOfMdl @ 0x140457EF0 (MmSizeOfMdl.c)
 *     KeStartProfile @ 0x1404D7A60 (KeStartProfile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtStartProfile(HANDLE ProfileHandle)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 *v3; // rbx
  NTSTATUS v4; // edi
  __int64 Pool2; // rax
  char *v6; // rdi
  struct _MDL *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // r8
  PVOID v10; // r15
  int v11; // r10d
  int v12; // r9d
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // eax
  NTSTATUS started; // r14d
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ProfileHandle, 1u, ExProfileObjectType, PreviousMode, &Object, 0LL);
  v3 = (__int64 *)Object;
  if ( result >= 0 )
  {
    KeWaitForSingleObject(&ExpProfileStateMutex, Executive, 0, 0, 0LL);
    if ( v3[6] )
    {
      v4 = -1073741640;
LABEL_8:
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      ObfDereferenceObject(v3);
      return v4;
    }
    if ( ExpCurrentProfileUsage == KeQueryActiveProcessorCountEx(0xFFFFu) << 13 )
    {
      v4 = -1073741613;
      goto LABEL_8;
    }
    MmSizeOfMdl((PVOID)v3[3], *((unsigned int *)v3 + 8));
    Pool2 = ExAllocatePool2(0x40uLL);
    v6 = (char *)Pool2;
    P = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v4 = -1073741670;
      goto LABEL_8;
    }
    v7 = (struct _MDL *)(Pool2 + 616);
    v3[7] = Pool2 + 616;
    v3[5] = Pool2;
    v8 = *((unsigned int *)v3 + 8);
    v9 = v3[3];
    *(_QWORD *)(Pool2 + 616) = 0LL;
    *(_WORD *)(Pool2 + 624) = 8 * ((((unsigned __int64)(v9 & 0xFFF) + v8 + 4095) >> 12) + 6);
    *(_WORD *)(Pool2 + 626) = 0;
    *(_QWORD *)(Pool2 + 648) = v9 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(Pool2 + 660) = v9 & 0xFFF;
    *(_DWORD *)(Pool2 + 656) = v8;
    MmProbeAndLockPages((PMDL)(Pool2 + 616), PreviousMode, IoWriteAccess);
    v10 = MmMapLockedPagesSpecifyCache((PMDL)v3[7], 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v10 )
    {
      v11 = *((_DWORD *)v3 + 17);
      v12 = *((_DWORD *)v3 + 16);
      v13 = *((_DWORD *)v3 + 9);
      v14 = v3[2];
      v15 = v3[1];
      v16 = *v3;
      *(_DWORD *)v6 = 40370199;
      *((_QWORD *)v6 + 3) = v16;
      *((_QWORD *)v6 + 7) = v10;
      *((_QWORD *)v6 + 4) = v15;
      *((_QWORD *)v6 + 5) = v15 + v14;
      *((_DWORD *)v6 + 12) = v13 - 2;
      v6[610] = 0;
      *((_DWORD *)v6 + 16) = v12;
      *((_WORD *)v6 + 304) = v11;
      *((_QWORD *)v6 + 9) = 2097153LL;
      memset_0(v6 + 80, 0, 0x100uLL);
      if ( v3 == (__int64 *)-72LL )
        v17 = 0;
      else
        v17 = KeAndAffinityEx2((struct _KAFFINITY_EX *)(v3 + 9), &KeActiveProcessors, (struct _KAFFINITY_EX *)(v6 + 72));
      if ( !v17 )
        KiCopyAffinityEx((struct _KAFFINITY_EX *)(v6 + 72), *((_WORD *)v6 + 37), &KeActiveProcessors);
      started = KeStartProfile((ULONG_PTR)v6);
      if ( started >= 0 )
      {
        v3[6] = (__int64)v10;
        ++ExpCurrentProfileUsage;
        KeReleaseMutex(&ExpProfileStateMutex, 0);
        ObfDereferenceObject(v3);
        return 0;
      }
      else
      {
        KeReleaseMutex(&ExpProfileStateMutex, 0);
        MmUnlockPages(v7);
        ExFreePoolWithTag(v6, 0);
        ObfDereferenceObject(v3);
        return started;
      }
    }
    else
    {
      KeReleaseMutex(&ExpProfileStateMutex, 0);
      MmUnlockPages(v7);
      ExFreePoolWithTag(v6, 0);
      ObfDereferenceObject(v3);
      return -1073741670;
    }
  }
  return result;
}
