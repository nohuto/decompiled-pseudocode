/*
 * XREFs of NtStartProfile @ 0x1407C4440
 * Callers:
 *     <none>
 * Callees:
 *     KeAndAffinityEx2 @ 0x1402052E0 (KeAndAffinityEx2.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     MmSizeOfMdl @ 0x140458550 (MmSizeOfMdl.c)
 *     KeStartProfile @ 0x1404D6890 (KeStartProfile.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtStartProfile(void *a1)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  __int64 *v3; // rbx
  int v4; // edi
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
  int started; // r14d
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, ExProfileObjectType, PreviousMode, &Object, 0LL);
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
        v17 = KeAndAffinityEx2((struct _KAFFINITY_EX *)(v3 + 9), &KeActiveProcessors, (__int64)(v6 + 72));
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
