/*
 * XREFs of MiCopyVirtualMemory @ 0x1409A9D80
 * Callers:
 *     NtQueryInformationThread @ 0x1409A7C80 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x1409A9710 (MiReadWriteVirtualMemory.c)
 *     MmCopyVirtualMemory @ 0x1409A9D40 (MmCopyVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1409AB830 (NtQueryInformationProcess.c)
 * Callees:
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     MmUnlockPages @ 0x140267F30 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x140282330 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14028F9F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB498 (MiVadRangeIsIoSpace.c)
 *     MiGetExceptionInfo @ 0x140672988 (MiGetExceptionInfo.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiDbgReadWriteEnclave @ 0x1409AA7B8 (MiDbgReadWriteEnclave.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409AA8A8 (VslDebugReadWriteSecureProcess.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyVirtualMemory(
        __int64 a1,
        char *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        KPROCESSOR_MODE a6,
        unsigned __int64 *a7,
        char a8)
{
  char *v10; // rdi
  __int64 v12; // rsi
  int v13; // edx
  unsigned __int64 v14; // r14
  int v15; // ebx
  unsigned __int64 v16; // r13
  unsigned __int64 IsIoSpace; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  int v25; // r14d
  ULONG_PTR v26; // rdi
  void *v27; // r10
  char SameThreadTransientFlags; // di
  unsigned int v29; // eax
  PVOID v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  _BYTE *v35; // r10
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  char *v38; // rcx
  unsigned __int64 v39; // rcx
  int v40; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // [rsp+30h] [rbp-3E8h] BYREF
  char v45; // [rsp+34h] [rbp-3E4h]
  int v46; // [rsp+38h] [rbp-3E0h]
  __int64 v47; // [rsp+40h] [rbp-3D8h]
  PVOID P; // [rsp+48h] [rbp-3D0h]
  void *Src; // [rsp+50h] [rbp-3C8h]
  unsigned __int64 v50; // [rsp+58h] [rbp-3C0h] BYREF
  PRKPROCESS PROCESS; // [rsp+60h] [rbp-3B8h]
  void *v52; // [rsp+68h] [rbp-3B0h]
  int v53; // [rsp+70h] [rbp-3A8h]
  char *v54; // [rsp+78h] [rbp-3A0h]
  __int64 v55; // [rsp+80h] [rbp-398h]
  PMDL p_MemoryDescriptorList; // [rsp+88h] [rbp-390h]
  ULONG_PTR v57; // [rsp+90h] [rbp-388h]
  PRKPROCESS v58; // [rsp+98h] [rbp-380h]
  unsigned __int64 v59; // [rsp+A0h] [rbp-378h]
  unsigned __int64 *v60; // [rsp+A8h] [rbp-370h]
  unsigned __int64 v61; // [rsp+B0h] [rbp-368h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-360h]
  unsigned __int64 v63; // [rsp+C0h] [rbp-358h]
  __int64 v64; // [rsp+C8h] [rbp-350h]
  __int64 v65; // [rsp+D0h] [rbp-348h]
  char *v66; // [rsp+D8h] [rbp-340h]
  __int64 v67; // [rsp+E0h] [rbp-338h]
  void *v68; // [rsp+E8h] [rbp-330h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+120h] [rbp-2F8h] BYREF
  _BYTE v71[512]; // [rsp+1D0h] [rbp-248h] BYREF

  v63 = (unsigned __int64)a4;
  v58 = (PRKPROCESS)a3;
  v10 = a2;
  v54 = a2;
  PROCESS = (PRKPROCESS)a1;
  v65 = a1;
  v66 = a2;
  v67 = a3;
  v68 = a4;
  v60 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(&MemoryDescriptorList, 0, 0xA8uLL);
  v12 = 0LL;
  v50 = 0LL;
  if ( a5 )
  {
    *v60 = 0LL;
    v13 = (16 * (a8 & 1) + 1) | 4;
    if ( (*(_BYTE *)(a1 + 368) & 1) == 0 )
      v13 = 16 * (a8 & 1) + 1;
    v57 = 0LL;
    v14 = (unsigned __int64)v10;
    Src = v10;
    v52 = a4;
    v59 = a5;
    v47 = a5;
    p_MemoryDescriptorList = &MemoryDescriptorList;
    CurrentThread = KeGetCurrentThread();
    v44 = 0;
    P = 0LL;
    v64 = 0LL;
    v53 = 0;
    v15 = v13 | 8;
    if ( (*(_BYTE *)(a3 + 368) & 1) == 0 )
      v15 = v13;
    v16 = v47;
    while ( 1 )
    {
      if ( !v16 )
      {
        if ( v57 )
          ExFreePoolWithTag(P, 0);
        *v60 = a5;
        return 0LL;
      }
      IsIoSpace = v16;
      v44 = 0;
      KeStackAttachProcess(PROCESS, &ApcState);
      if ( (char *)v14 == v10 )
      {
        if ( a6 )
        {
          v19 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)&v10[a5] > 0x7FFFFFFF0000LL || &v10[a5] < v10 )
            v16 = v47;
        }
      }
      v55 = 0LL;
      if ( v14 >= 0xFFFF800000000000uLL )
      {
        v23 = v14 + v16;
      }
      else
      {
        v19 = v14 & 0xFFFFFFFFFFFFF000uLL;
        if ( ((v14 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || v19 == qword_140E2DA78 && qword_140E2DA78)
          && (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
        {
          v44 = 0;
          v15 |= 0x20u;
          v23 = v19 + 4096;
        }
        else
        {
          v22 = MiObtainReferencedVadEx(v14, 2LL, (int *)&v44);
          v12 = v22;
          v55 = v22;
          if ( !v22 )
            goto LABEL_100;
          v19 = *(unsigned int *)(v22 + 28);
          v23 = (((v19 | ((unsigned __int64)*(unsigned __int8 *)(v22 + 33) << 32)) << 12) | 0xFFF) + 1;
        }
      }
      v24 = v23 - v14;
      if ( v16 > v24 )
        IsIoSpace = v24;
      v25 = 0;
      if ( v12 && (*(_DWORD *)(v12 + 48) & 0xC200000) == 0x8200000 )
      {
        v42 = *(_DWORD *)(v12 + 64);
        if ( (v42 & 4) != 0 )
          v25 = 2 - ((v42 & 1) != 0);
      }
      else if ( (v15 & 0x10) != 0 )
      {
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 48) & 0x70) == 0x10 )
          {
            IsIoSpace = MiVadRangeIsIoSpace(v19, (unsigned __int64)Src, IsIoSpace);
            if ( !IsIoSpace )
              v44 = -1073741819;
          }
        }
      }
      v15 &= ~2u;
      v46 = v15;
      if ( !IsIoSpace )
        goto LABEL_49;
      if ( (v15 & 4) == 0 && !v25 && !PROCESS[1].IdealProcessorAssignmentBlock && (v15 & 1) != 0 )
      {
        v15 |= 2u;
        v46 = v15;
      }
      if ( IsIoSpace >= 0x200 && (v15 & 2) != 0 )
      {
        if ( IsIoSpace > 0xE000 )
          IsIoSpace = 57344LL;
        MemoryDescriptorList.Next = 0LL;
        v27 = Src;
        MemoryDescriptorList.Size = 8 * (((IsIoSpace + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
        MemoryDescriptorList.ByteCount = IsIoSpace;
      }
      else
      {
        v15 &= ~2u;
        v46 = v15;
        if ( v57 )
        {
          v26 = v57;
        }
        else if ( IsIoSpace > 0x200 )
        {
          v26 = v59;
          if ( v59 > 0x10000 )
            v26 = 0x10000LL;
          do
          {
            P = (PVOID)MiAllocatePool(0x100uLL, v26, 2001890637);
            if ( P )
            {
              v57 = v26;
              goto LABEL_35;
            }
            v26 >>= 1;
          }
          while ( v26 > 0x200 );
          P = v71;
          v26 = 512LL;
        }
        else
        {
          P = v71;
          v26 = IsIoSpace;
        }
LABEL_35:
        if ( IsIoSpace > v26 )
          IsIoSpace = v26;
        v27 = Src;
      }
      v61 = IsIoSpace;
      SameThreadTransientFlags = CurrentThread->SameThreadTransientFlags;
      v45 = SameThreadTransientFlags;
      CurrentThread->SameThreadTransientFlags = SameThreadTransientFlags | 4;
      if ( (v15 & 2) != 0 )
      {
        MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      }
      else
      {
        if ( (v15 & 4) != 0 || v25 == 2 )
        {
          v29 = VslDebugReadWriteSecureProcess((_DWORD)PROCESS, (_DWORD)v27, (_DWORD)P, IsIoSpace, 1, (__int64)&v50);
        }
        else
        {
          if ( v25 != 1 )
          {
            memmove(P, v27, IsIoSpace);
            goto LABEL_47;
          }
          v29 = MiDbgReadWriteEnclave((_DWORD)v27, (_DWORD)P, IsIoSpace, 1, (__int64)&v50);
        }
        v44 = v29;
      }
LABEL_47:
      if ( (SameThreadTransientFlags & 4) == 0 )
        CurrentThread->SameThreadTransientFlags &= ~4u;
LABEL_49:
      if ( v12 )
        MiUnlockAndDereferenceVadShared(v12, v18, v20, v21);
      if ( (v44 & 0x80000000) != 0 )
      {
        if ( (v15 & 2) == 0 )
          goto LABEL_100;
        v15 &= ~1u;
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        v12 = 0LL;
        v14 = (unsigned __int64)Src;
        v10 = v54;
      }
      else
      {
        KiUnstackDetachProcess((__int64)&ApcState, 0);
        v12 = 0LL;
        if ( (v15 & 2) != 0 )
        {
          v30 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
          if ( v30 )
            goto LABEL_54;
          MmUnlockPages(&MemoryDescriptorList);
          v15 &= ~1u;
          v14 = (unsigned __int64)Src;
          v10 = v54;
        }
        else
        {
          v30 = P;
LABEL_54:
          KeStackAttachProcess(v58, &ApcState);
          if ( Src == v54 )
          {
            if ( a6 )
            {
              v31 = 0x7FFFFFFF0000LL;
              if ( v63 + a5 > 0x7FFFFFFF0000LL || v63 + a5 < v63 )
                v16 = v47;
            }
          }
          v34 = 0LL;
          v55 = 0LL;
          v35 = v52;
          if ( (unsigned __int64)v52 >= 0xFFFF800000000000uLL )
          {
            v38 = (char *)v52 + IsIoSpace;
          }
          else
          {
            v36 = (unsigned __int64)v52 & 0xFFFFFFFFFFFFF000uLL;
            if ( (((unsigned __int64)v52 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
               || v36 == qword_140E2DA78 && qword_140E2DA78)
              && (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
            {
              v44 = 0;
              v15 |= 0x20u;
              v46 = v15;
              v38 = (char *)(v36 + 4096);
            }
            else
            {
              v37 = MiObtainReferencedVadEx((unsigned __int64)v52, 2LL, (int *)&v44);
              v34 = v37;
              v55 = v37;
              if ( !v37 )
              {
                if ( (v15 & 2) != 0 )
                  MmUnlockPages(p_MemoryDescriptorList);
LABEL_100:
                v44 = -2147483635;
LABEL_101:
                KiUnstackDetachProcess((__int64)&ApcState, 0);
                if ( v57 )
                  ExFreePoolWithTag(P, 0);
                *v60 = a5 - v16;
                return v44;
              }
              v38 = (char *)((((*(unsigned int *)(v37 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v37 + 33) << 32)) << 12) | 0xFFF)
                           + 1);
              v35 = v52;
            }
          }
          v39 = v38 - v35;
          if ( IsIoSpace > v39 )
            IsIoSpace = v39;
          if ( v34 && (*(_DWORD *)(v34 + 48) & 0xC200000) == 0x8200000 )
          {
            v43 = *(_DWORD *)(v34 + 64);
            if ( (v43 & 4) != 0 )
              LODWORD(v12) = 2 - ((v43 & 1) != 0);
          }
          else if ( (v15 & 0x10) != 0 && v34 && (*(_DWORD *)(v34 + 48) & 0x70) == 0x10 )
          {
            IsIoSpace = MiVadRangeIsIoSpace(v39, (unsigned __int64)v35, IsIoSpace);
            v35 = v52;
          }
          if ( IsIoSpace )
          {
            if ( (v15 & 8) != 0 || (_DWORD)v12 == 2 )
            {
              v40 = VslDebugReadWriteSecureProcess((_DWORD)v58, (_DWORD)v35, (_DWORD)v30, IsIoSpace, 0, (__int64)&v50);
            }
            else
            {
              if ( (_DWORD)v12 != 1 )
              {
                memmove(v35, v30, IsIoSpace);
                v12 = 0LL;
                v44 = 0;
                v50 = IsIoSpace;
                v40 = 0;
                goto LABEL_77;
              }
              v40 = MiDbgReadWriteEnclave((_DWORD)v35, (_DWORD)v30, IsIoSpace, 0, (__int64)&v50);
            }
            v12 = 0LL;
            v44 = v40;
          }
          else
          {
            v12 = 0LL;
            v50 = 0LL;
            v44 = -2147483635;
            v40 = -2147483635;
          }
LABEL_77:
          if ( v40 < 0 )
          {
            if ( v40 == -1073741819 )
            {
              v16 -= v50;
              v47 = v16;
              v44 = -2147483635;
            }
            if ( (v15 & 2) != 0 )
              MmUnlockPages(p_MemoryDescriptorList);
            if ( v34 )
              MiUnlockAndDereferenceVadShared(v34, v31, v32, v33);
            goto LABEL_101;
          }
          if ( (v15 & 2) != 0 )
            MmUnlockPages(&MemoryDescriptorList);
          if ( v34 )
            MiUnlockAndDereferenceVadShared(v34, v31, v32, v33);
          KiUnstackDetachProcess((__int64)&ApcState, 0);
          v16 -= IsIoSpace;
          v47 = v16;
          v59 -= IsIoSpace;
          v14 = (unsigned __int64)Src + IsIoSpace;
          Src = (char *)Src + IsIoSpace;
          v52 = (char *)v52 + IsIoSpace;
          v10 = v54;
        }
      }
    }
  }
  return 0LL;
}
