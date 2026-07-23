/*
 * XREFs of MiCopyVirtualMemory @ 0x140993190
 * Callers:
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x140992B20 (MiReadWriteVirtualMemory.c)
 *     MmCopyVirtualMemory @ 0x140993150 (MmCopyVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadRangeIsIoSpace @ 0x1404C49B8 (MiVadRangeIsIoSpace.c)
 *     MiGetExceptionInfo @ 0x140673B58 (MiGetExceptionInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiDbgReadWriteEnclave @ 0x140993BC8 (MiDbgReadWriteEnclave.c)
 *     VslDebugReadWriteSecureProcess @ 0x140993CB8 (VslDebugReadWriteSecureProcess.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v32; // rdi
  _BYTE *v33; // r10
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  char *v36; // rcx
  unsigned __int64 v37; // rcx
  int v38; // eax
  int v40; // eax
  int v41; // eax
  unsigned int v42; // [rsp+30h] [rbp-3E8h] BYREF
  char v43; // [rsp+34h] [rbp-3E4h]
  int v44; // [rsp+38h] [rbp-3E0h]
  __int64 v45; // [rsp+40h] [rbp-3D8h]
  PVOID P; // [rsp+48h] [rbp-3D0h]
  void *Src; // [rsp+50h] [rbp-3C8h]
  unsigned __int64 v48; // [rsp+58h] [rbp-3C0h] BYREF
  PRKPROCESS PROCESS; // [rsp+60h] [rbp-3B8h]
  void *v50; // [rsp+68h] [rbp-3B0h]
  int v51; // [rsp+70h] [rbp-3A8h]
  char *v52; // [rsp+78h] [rbp-3A0h]
  __int64 v53; // [rsp+80h] [rbp-398h]
  PMDL p_MemoryDescriptorList; // [rsp+88h] [rbp-390h]
  ULONG_PTR v55; // [rsp+90h] [rbp-388h]
  PRKPROCESS v56; // [rsp+98h] [rbp-380h]
  unsigned __int64 v57; // [rsp+A0h] [rbp-378h]
  unsigned __int64 *v58; // [rsp+A8h] [rbp-370h]
  unsigned __int64 v59; // [rsp+B0h] [rbp-368h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-360h]
  unsigned __int64 v61; // [rsp+C0h] [rbp-358h]
  __int64 v62; // [rsp+C8h] [rbp-350h]
  __int64 v63; // [rsp+D0h] [rbp-348h]
  char *v64; // [rsp+D8h] [rbp-340h]
  __int64 v65; // [rsp+E0h] [rbp-338h]
  void *v66; // [rsp+E8h] [rbp-330h]
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+120h] [rbp-2F8h] BYREF
  _BYTE v69[512]; // [rsp+1D0h] [rbp-248h] BYREF

  v61 = (unsigned __int64)a4;
  v56 = (PRKPROCESS)a3;
  v10 = a2;
  v52 = a2;
  PROCESS = (PRKPROCESS)a1;
  v63 = a1;
  v64 = a2;
  v65 = a3;
  v66 = a4;
  v58 = a7;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(&MemoryDescriptorList, 0, 0xA8uLL);
  v12 = 0LL;
  v48 = 0LL;
  if ( a5 )
  {
    *v58 = 0LL;
    v13 = (16 * (a8 & 1) + 1) | 4;
    if ( (*(_BYTE *)(a1 + 368) & 1) == 0 )
      v13 = 16 * (a8 & 1) + 1;
    v55 = 0LL;
    v14 = (unsigned __int64)v10;
    Src = v10;
    v50 = a4;
    v57 = a5;
    v45 = a5;
    p_MemoryDescriptorList = &MemoryDescriptorList;
    CurrentThread = KeGetCurrentThread();
    v42 = 0;
    P = 0LL;
    v62 = 0LL;
    v51 = 0;
    v15 = v13 | 8;
    if ( (*(_BYTE *)(a3 + 368) & 1) == 0 )
      v15 = v13;
    v16 = v45;
    while ( 1 )
    {
      if ( !v16 )
      {
        if ( v55 )
          ExFreePoolWithTag(P, 0);
        *v58 = a5;
        return 0LL;
      }
      IsIoSpace = v16;
      v42 = 0;
      KeStackAttachProcess(PROCESS, &ApcState);
      if ( (char *)v14 == v10 )
      {
        if ( a6 )
        {
          v19 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)&v10[a5] > 0x7FFFFFFF0000LL || &v10[a5] < v10 )
            v16 = v45;
        }
      }
      v53 = 0LL;
      if ( v14 >= 0xFFFF800000000000uLL )
      {
        v23 = v14 + v16;
      }
      else
      {
        v19 = v14 & 0xFFFFFFFFFFFFF000uLL;
        if ( ((v14 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 || v19 == qword_140E2DBB8 && qword_140E2DBB8)
          && (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
        {
          v42 = 0;
          v15 |= 0x20u;
          v23 = v19 + 4096;
        }
        else
        {
          v22 = MiObtainReferencedVadEx(v14, 2LL, (int *)&v42, v21);
          v12 = v22;
          v53 = v22;
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
        v40 = *(_DWORD *)(v12 + 64);
        if ( (v40 & 4) != 0 )
          v25 = 2 - ((v40 & 1) != 0);
      }
      else if ( (v15 & 0x10) != 0 )
      {
        if ( v12 )
        {
          if ( (*(_DWORD *)(v12 + 48) & 0x70) == 0x10 )
          {
            IsIoSpace = MiVadRangeIsIoSpace(v19, (unsigned __int64)Src, IsIoSpace, v21);
            if ( !IsIoSpace )
              v42 = -1073741819;
          }
        }
      }
      v15 &= ~2u;
      v44 = v15;
      if ( !IsIoSpace )
        goto LABEL_49;
      if ( (v15 & 4) == 0 && !v25 && !PROCESS[1].IdealProcessorAssignmentBlock && (v15 & 1) != 0 )
      {
        v15 |= 2u;
        v44 = v15;
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
        v44 = v15;
        if ( v55 )
        {
          v26 = v55;
        }
        else if ( IsIoSpace > 0x200 )
        {
          v26 = v57;
          if ( v57 > 0x10000 )
            v26 = 0x10000LL;
          do
          {
            P = (PVOID)MiAllocatePool(0x100uLL, v26, 2001890637);
            if ( P )
            {
              v55 = v26;
              goto LABEL_35;
            }
            v26 >>= 1;
          }
          while ( v26 > 0x200 );
          P = v69;
          v26 = 512LL;
        }
        else
        {
          P = v69;
          v26 = IsIoSpace;
        }
LABEL_35:
        if ( IsIoSpace > v26 )
          IsIoSpace = v26;
        v27 = Src;
      }
      v59 = IsIoSpace;
      SameThreadTransientFlags = CurrentThread->SameThreadTransientFlags;
      v43 = SameThreadTransientFlags;
      CurrentThread->SameThreadTransientFlags = SameThreadTransientFlags | 4;
      if ( (v15 & 2) != 0 )
      {
        MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      }
      else
      {
        if ( (v15 & 4) != 0 || v25 == 2 )
        {
          v29 = VslDebugReadWriteSecureProcess((_DWORD)PROCESS, (_DWORD)v27, (_DWORD)P, IsIoSpace, 1, (__int64)&v48);
        }
        else
        {
          if ( v25 != 1 )
          {
            memmove(P, v27, IsIoSpace);
            goto LABEL_47;
          }
          v29 = MiDbgReadWriteEnclave((_DWORD)v27, (_DWORD)P, IsIoSpace, 1, (__int64)&v48);
        }
        v42 = v29;
      }
LABEL_47:
      if ( (SameThreadTransientFlags & 4) == 0 )
        CurrentThread->SameThreadTransientFlags &= ~4u;
LABEL_49:
      if ( v12 )
        MiUnlockAndDereferenceVadShared(v12, v18, v20, v21);
      if ( (v42 & 0x80000000) != 0 )
      {
        if ( (v15 & 2) == 0 )
          goto LABEL_100;
        v15 &= ~1u;
        KiUnstackDetachProcess((__int64)&ApcState, 0, v20, v21);
        v12 = 0LL;
        v14 = (unsigned __int64)Src;
        v10 = v52;
      }
      else
      {
        KiUnstackDetachProcess((__int64)&ApcState, 0, v20, v21);
        v12 = 0LL;
        if ( (v15 & 2) != 0 )
        {
          v30 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
          if ( v30 )
            goto LABEL_54;
          MmUnlockPages(&MemoryDescriptorList);
          v15 &= ~1u;
          v14 = (unsigned __int64)Src;
          v10 = v52;
        }
        else
        {
          v30 = P;
LABEL_54:
          KeStackAttachProcess(v56, &ApcState);
          if ( Src == v52 )
          {
            if ( a6 )
            {
              v31 = 0x7FFFFFFF0000LL;
              if ( v61 + a5 > 0x7FFFFFFF0000LL || v61 + a5 < v61 )
                v16 = v45;
            }
          }
          v32 = 0LL;
          v53 = 0LL;
          v33 = v50;
          if ( (unsigned __int64)v50 >= 0xFFFF800000000000uLL )
          {
            v36 = (char *)v50 + IsIoSpace;
          }
          else
          {
            v34 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFF000uLL;
            if ( (((unsigned __int64)v50 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000
               || v34 == qword_140E2DBB8 && qword_140E2DBB8)
              && (PROCESS[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
            {
              v42 = 0;
              v15 |= 0x20u;
              v44 = v15;
              v36 = (char *)(v34 + 4096);
            }
            else
            {
              v35 = MiObtainReferencedVadEx((unsigned __int64)v50, 2LL, (int *)&v42, v21);
              v32 = v35;
              v53 = v35;
              if ( !v35 )
              {
                if ( (v15 & 2) != 0 )
                  MmUnlockPages(p_MemoryDescriptorList);
LABEL_100:
                v42 = -2147483635;
LABEL_101:
                KiUnstackDetachProcess((__int64)&ApcState, 0, v20, v21);
                if ( v55 )
                  ExFreePoolWithTag(P, 0);
                *v58 = a5 - v16;
                return v42;
              }
              v36 = (char *)((((*(unsigned int *)(v35 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v35 + 33) << 32)) << 12) | 0xFFF)
                           + 1);
              v33 = v50;
            }
          }
          v37 = v36 - v33;
          if ( IsIoSpace > v37 )
            IsIoSpace = v37;
          if ( v32 && (*(_DWORD *)(v32 + 48) & 0xC200000) == 0x8200000 )
          {
            v41 = *(_DWORD *)(v32 + 64);
            if ( (v41 & 4) != 0 )
              LODWORD(v12) = 2 - ((v41 & 1) != 0);
          }
          else if ( (v15 & 0x10) != 0 && v32 && (*(_DWORD *)(v32 + 48) & 0x70) == 0x10 )
          {
            IsIoSpace = MiVadRangeIsIoSpace(v37, (unsigned __int64)v33, IsIoSpace, v21);
            v33 = v50;
          }
          if ( IsIoSpace )
          {
            if ( (v15 & 8) != 0 || (_DWORD)v12 == 2 )
            {
              v38 = VslDebugReadWriteSecureProcess((_DWORD)v56, (_DWORD)v33, (_DWORD)v30, IsIoSpace, 0, (__int64)&v48);
            }
            else
            {
              if ( (_DWORD)v12 != 1 )
              {
                memmove(v33, v30, IsIoSpace);
                v12 = 0LL;
                v42 = 0;
                v48 = IsIoSpace;
                v38 = 0;
                goto LABEL_77;
              }
              v38 = MiDbgReadWriteEnclave((_DWORD)v33, (_DWORD)v30, IsIoSpace, 0, (__int64)&v48);
            }
            v12 = 0LL;
            v42 = v38;
          }
          else
          {
            v12 = 0LL;
            v48 = 0LL;
            v42 = -2147483635;
            v38 = -2147483635;
          }
LABEL_77:
          if ( v38 < 0 )
          {
            if ( v38 == -1073741819 )
            {
              v16 -= v48;
              v45 = v16;
              v42 = -2147483635;
            }
            if ( (v15 & 2) != 0 )
              MmUnlockPages(p_MemoryDescriptorList);
            if ( v32 )
              MiUnlockAndDereferenceVadShared(v32, v31, v20, v21);
            goto LABEL_101;
          }
          if ( (v15 & 2) != 0 )
            MmUnlockPages(&MemoryDescriptorList);
          if ( v32 )
            MiUnlockAndDereferenceVadShared(v32, v31, v20, v21);
          KiUnstackDetachProcess((__int64)&ApcState, 0, v20, v21);
          v16 -= IsIoSpace;
          v45 = v16;
          v57 -= IsIoSpace;
          v14 = (unsigned __int64)Src + IsIoSpace;
          Src = (char *)Src + IsIoSpace;
          v50 = (char *)v50 + IsIoSpace;
          v10 = v52;
        }
      }
    }
  }
  return 0LL;
}
