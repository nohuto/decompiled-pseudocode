/*
 * XREFs of MiCopyVirtualMemory @ 0x1409C5370
 * Callers:
 *     NtQueryInformationThread @ 0x1409C32F0 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x1409C4CE0 (MiReadWriteVirtualMemory.c)
 *     MmCopyVirtualMemory @ 0x1409C5330 (MmCopyVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiVadRangeIsIoSpace @ 0x1404CB75C (MiVadRangeIsIoSpace.c)
 *     MiGetExceptionInfo @ 0x140666ED8 (MiGetExceptionInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiDbgReadWriteEnclave @ 0x1409C5DC0 (MiDbgReadWriteEnclave.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409C5EB0 (VslDebugReadWriteSecureProcess.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  _DWORD *v12; // rsi
  int v13; // edx
  unsigned __int64 v14; // r14
  int v15; // ebx
  unsigned __int64 v16; // r13
  unsigned __int64 IsIoSpace; // r15
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // r14d
  ULONG_PTR v23; // rdi
  void *v24; // r10
  char SameThreadTransientFlags; // di
  unsigned int v26; // eax
  PVOID v27; // r14
  _DWORD *v28; // rdi
  _BYTE *v29; // r10
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  char *v32; // rcx
  unsigned __int64 v33; // rcx
  int v34; // eax
  int v36; // eax
  int v37; // eax
  unsigned int v38; // [rsp+30h] [rbp-3E8h] BYREF
  char v39; // [rsp+34h] [rbp-3E4h]
  int v40; // [rsp+38h] [rbp-3E0h]
  __int64 v41; // [rsp+40h] [rbp-3D8h]
  PVOID P; // [rsp+48h] [rbp-3D0h]
  void *Src; // [rsp+50h] [rbp-3C8h]
  unsigned __int64 v44; // [rsp+58h] [rbp-3C0h] BYREF
  PRKPROCESS PROCESS; // [rsp+60h] [rbp-3B8h]
  void *v46; // [rsp+68h] [rbp-3B0h]
  int v47; // [rsp+70h] [rbp-3A8h]
  char *v48; // [rsp+78h] [rbp-3A0h]
  PVOID v49; // [rsp+80h] [rbp-398h]
  PMDL p_MemoryDescriptorList; // [rsp+88h] [rbp-390h]
  ULONG_PTR v51; // [rsp+90h] [rbp-388h]
  PRKPROCESS v52; // [rsp+98h] [rbp-380h]
  unsigned __int64 v53; // [rsp+A0h] [rbp-378h]
  unsigned __int64 *v54; // [rsp+A8h] [rbp-370h]
  unsigned __int64 v55; // [rsp+B0h] [rbp-368h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-360h]
  unsigned __int64 v57; // [rsp+C0h] [rbp-358h]
  __int64 v58; // [rsp+C8h] [rbp-350h]
  __int64 v59; // [rsp+D0h] [rbp-348h]
  char *v60; // [rsp+D8h] [rbp-340h]
  __int64 v61; // [rsp+E0h] [rbp-338h]
  void *v62; // [rsp+E8h] [rbp-330h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+120h] [rbp-2F8h] BYREF
  _BYTE v65[512]; // [rsp+1D0h] [rbp-248h] BYREF

  v57 = (unsigned __int64)a4;
  v52 = (PRKPROCESS)a3;
  v10 = a2;
  v48 = a2;
  PROCESS = (PRKPROCESS)a1;
  v59 = a1;
  v60 = a2;
  v61 = a3;
  v62 = a4;
  v54 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(&MemoryDescriptorList, 0, 0xA8uLL);
  v12 = 0LL;
  v44 = 0LL;
  if ( a5 )
  {
    *v54 = 0LL;
    v13 = (16 * (a8 & 1) + 1) | 4;
    if ( (*(_BYTE *)(a1 + 368) & 1) == 0 )
      v13 = 16 * (a8 & 1) + 1;
    v51 = 0LL;
    v14 = (unsigned __int64)v10;
    Src = v10;
    v46 = a4;
    v53 = a5;
    v41 = a5;
    p_MemoryDescriptorList = &MemoryDescriptorList;
    CurrentThread = KeGetCurrentThread();
    v38 = 0;
    P = 0LL;
    v58 = 0LL;
    v47 = 0;
    v15 = v13 | 8;
    if ( (*(_BYTE *)(a3 + 368) & 1) == 0 )
      v15 = v13;
    v16 = v41;
    while ( 1 )
    {
      if ( !v16 )
      {
        if ( v51 )
          ExFreePoolWithTag(P, 0);
        *v54 = a5;
        return 0LL;
      }
      IsIoSpace = v16;
      v38 = 0;
      KeStackAttachProcess(PROCESS, &ApcState);
      if ( (char *)v14 == v10 )
      {
        if ( a6 )
        {
          v18 = 0x7FFFFFFF0000LL;
          if ( &v10[a5] < v10 || (unsigned __int64)&v10[a5] > 0x7FFFFFFF0000LL )
            v16 = v41;
        }
      }
      v49 = 0LL;
      if ( v14 >= 0xFFFF800000000000uLL )
      {
        v20 = v14 + v16;
      }
      else
      {
        v18 = v14 & 0xFFFFFFFFFFFFF000uLL;
        if ( ((v14 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || v18 == qword_140E2D838 && qword_140E2D838)
          && (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
        {
          v38 = 0;
          v15 |= 0x20u;
          v20 = v18 + 4096;
        }
        else
        {
          v19 = MiObtainReferencedVadEx(v14, 2, (int *)&v38);
          v12 = (_DWORD *)v19;
          v49 = (PVOID)v19;
          if ( !v19 )
            goto LABEL_100;
          v18 = *(unsigned int *)(v19 + 28);
          v20 = (((v18 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF) + 1;
        }
      }
      v21 = v20 - v14;
      if ( v16 > v21 )
        IsIoSpace = v21;
      v22 = 0;
      if ( v12 && (v12[12] & 0xC200000) == 0x8200000 )
      {
        v36 = v12[16];
        if ( (v36 & 4) != 0 )
          v22 = 2 - ((v36 & 1) != 0);
      }
      else if ( (v15 & 0x10) != 0 )
      {
        if ( v12 )
        {
          if ( (v12[12] & 0x70) == 0x10 )
          {
            IsIoSpace = MiVadRangeIsIoSpace(v18, (unsigned __int64)Src, IsIoSpace);
            if ( !IsIoSpace )
              v38 = -1073741819;
          }
        }
      }
      v15 &= ~2u;
      v40 = v15;
      if ( !IsIoSpace )
        goto LABEL_49;
      if ( (v15 & 4) == 0 && !v22 && !PROCESS[1].IdealProcessorAssignmentBlock && (v15 & 1) != 0 )
      {
        v15 |= 2u;
        v40 = v15;
      }
      if ( IsIoSpace >= 0x200 && (v15 & 2) != 0 )
      {
        if ( IsIoSpace > 0xE000 )
          IsIoSpace = 57344LL;
        MemoryDescriptorList.Next = 0LL;
        v24 = Src;
        MemoryDescriptorList.Size = 8 * (((IsIoSpace + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
        MemoryDescriptorList.ByteCount = IsIoSpace;
      }
      else
      {
        v15 &= ~2u;
        v40 = v15;
        if ( v51 )
        {
          v23 = v51;
        }
        else if ( IsIoSpace > 0x200 )
        {
          v23 = v53;
          if ( v53 > 0x10000 )
            v23 = 0x10000LL;
          do
          {
            P = (PVOID)MiAllocatePool(0x100uLL, v23, 2001890637);
            if ( P )
            {
              v51 = v23;
              goto LABEL_35;
            }
            v23 >>= 1;
          }
          while ( v23 > 0x200 );
          P = v65;
          v23 = 512LL;
        }
        else
        {
          P = v65;
          v23 = IsIoSpace;
        }
LABEL_35:
        if ( IsIoSpace > v23 )
          IsIoSpace = v23;
        v24 = Src;
      }
      v55 = IsIoSpace;
      SameThreadTransientFlags = CurrentThread->SameThreadTransientFlags;
      v39 = SameThreadTransientFlags;
      CurrentThread->SameThreadTransientFlags = SameThreadTransientFlags | 4;
      if ( (v15 & 2) != 0 )
      {
        MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      }
      else
      {
        if ( (v15 & 4) != 0 || v22 == 2 )
        {
          v26 = VslDebugReadWriteSecureProcess((_DWORD)PROCESS, (_DWORD)v24, (_DWORD)P, IsIoSpace, 1, (__int64)&v44);
        }
        else
        {
          if ( v22 != 1 )
          {
            memmove(P, v24, IsIoSpace);
            goto LABEL_47;
          }
          v26 = MiDbgReadWriteEnclave((_DWORD)v24, (_DWORD)P, IsIoSpace, 1, (__int64)&v44);
        }
        v38 = v26;
      }
LABEL_47:
      if ( (SameThreadTransientFlags & 4) == 0 )
        CurrentThread->SameThreadTransientFlags &= ~4u;
LABEL_49:
      if ( v12 )
        MiUnlockAndDereferenceVadShared(v12);
      if ( (v38 & 0x80000000) != 0 )
      {
        if ( (v15 & 2) == 0 )
          goto LABEL_100;
        v15 &= ~1u;
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
        v12 = 0LL;
        v14 = (unsigned __int64)Src;
        v10 = v48;
      }
      else
      {
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
        v12 = 0LL;
        if ( (v15 & 2) != 0 )
        {
          v27 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
          if ( v27 )
            goto LABEL_54;
          MmUnlockPages(&MemoryDescriptorList);
          v15 &= ~1u;
          v14 = (unsigned __int64)Src;
          v10 = v48;
        }
        else
        {
          v27 = P;
LABEL_54:
          KeStackAttachProcess(v52, &ApcState);
          if ( Src == v48 && a6 && (v57 + a5 < v57 || v57 + a5 > 0x7FFFFFFF0000LL) )
            v16 = v41;
          v28 = 0LL;
          v49 = 0LL;
          v29 = v46;
          if ( (unsigned __int64)v46 >= 0xFFFF800000000000uLL )
          {
            v32 = (char *)v46 + IsIoSpace;
          }
          else
          {
            v30 = (unsigned __int64)v46 & 0xFFFFFFFFFFFFF000uLL;
            if ( (((unsigned __int64)v46 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
               || v30 == qword_140E2D838 && qword_140E2D838)
              && (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
            {
              v38 = 0;
              v15 |= 0x20u;
              v40 = v15;
              v32 = (char *)(v30 + 4096);
            }
            else
            {
              v31 = MiObtainReferencedVadEx((unsigned __int64)v46, 2, (int *)&v38);
              v28 = (_DWORD *)v31;
              v49 = (PVOID)v31;
              if ( !v31 )
              {
                if ( (v15 & 2) != 0 )
                  MmUnlockPages(p_MemoryDescriptorList);
LABEL_100:
                v38 = -2147483635;
LABEL_101:
                KiUnstackDetachProcess((__int64)&ApcState, 0LL);
                if ( v51 )
                  ExFreePoolWithTag(P, 0);
                *v54 = a5 - v16;
                return v38;
              }
              v32 = (char *)((((*(unsigned int *)(v31 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v31 + 33) << 32)) << 12) | 0xFFF)
                           + 1);
              v29 = v46;
            }
          }
          v33 = v32 - v29;
          if ( IsIoSpace > v33 )
            IsIoSpace = v33;
          if ( v28 && (v28[12] & 0xC200000) == 0x8200000 )
          {
            v37 = v28[16];
            if ( (v37 & 4) != 0 )
              LODWORD(v12) = 2 - ((v37 & 1) != 0);
          }
          else if ( (v15 & 0x10) != 0 && v28 && (v28[12] & 0x70) == 0x10 )
          {
            IsIoSpace = MiVadRangeIsIoSpace(v33, (unsigned __int64)v29, IsIoSpace);
            v29 = v46;
          }
          if ( IsIoSpace )
          {
            if ( (v15 & 8) != 0 || (_DWORD)v12 == 2 )
            {
              v34 = VslDebugReadWriteSecureProcess((_DWORD)v52, (_DWORD)v29, (_DWORD)v27, IsIoSpace, 0, (__int64)&v44);
            }
            else
            {
              if ( (_DWORD)v12 != 1 )
              {
                memmove(v29, v27, IsIoSpace);
                v12 = 0LL;
                v38 = 0;
                v44 = IsIoSpace;
                v34 = 0;
                goto LABEL_77;
              }
              v34 = MiDbgReadWriteEnclave((_DWORD)v29, (_DWORD)v27, IsIoSpace, 0, (__int64)&v44);
            }
            v12 = 0LL;
            v38 = v34;
          }
          else
          {
            v12 = 0LL;
            v44 = 0LL;
            v38 = -2147483635;
            v34 = -2147483635;
          }
LABEL_77:
          if ( v34 < 0 )
          {
            if ( v34 == -1073741819 )
            {
              v16 -= v44;
              v41 = v16;
              v38 = -2147483635;
            }
            if ( (v15 & 2) != 0 )
              MmUnlockPages(p_MemoryDescriptorList);
            if ( v28 )
              MiUnlockAndDereferenceVadShared(v28);
            goto LABEL_101;
          }
          if ( (v15 & 2) != 0 )
            MmUnlockPages(&MemoryDescriptorList);
          if ( v28 )
            MiUnlockAndDereferenceVadShared(v28);
          KiUnstackDetachProcess((__int64)&ApcState, 0LL);
          v16 -= IsIoSpace;
          v41 = v16;
          v53 -= IsIoSpace;
          v14 = (unsigned __int64)Src + IsIoSpace;
          Src = (char *)Src + IsIoSpace;
          v46 = (char *)v46 + IsIoSpace;
          v10 = v48;
        }
      }
    }
  }
  return 0LL;
}
