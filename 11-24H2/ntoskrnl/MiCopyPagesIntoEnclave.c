/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x140A29D18
 * Callers:
 *     NtLoadEnclaveData @ 0x140A29800 (NtLoadEnclaveData.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MiGetPteFromCopyList @ 0x140252D60 (MiGetPteFromCopyList.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14029F5F0 (MmMapLockedPagesSpecifyCache.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiGetVmPartition @ 0x140407A50 (MiGetVmPartition.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiInitializeEnclavePfn @ 0x14046DD14 (MiInitializeEnclavePfn.c)
 *     MiGetPageForEnclave @ 0x14046DE64 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x14046DEB8 (KeAddEnclavePage.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     MiCreatePteCopyList @ 0x14047968C (MiCreatePteCopyList.c)
 *     MiCountCommittedPages @ 0x14048CFA4 (MiCountCommittedPages.c)
 *     MiReleasePteCopyList @ 0x1404A18B4 (MiReleasePteCopyList.c)
 *     MiReturnEnclavePage @ 0x1404CE13C (MiReturnEnclavePage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  char *Pool; // r14
  unsigned int ProtectionMask; // eax
  char v14; // r8
  unsigned int v15; // r13d
  char v16; // cl
  char v17; // cl
  char v18; // r8
  __int64 v19; // rbx
  unsigned int v20; // edi
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v25; // r15
  __int64 v26; // r9
  unsigned int v27; // r12d
  char v28; // al
  __int64 v29; // rbx
  size_t v30; // rbx
  char *v31; // r15
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v37; // r12
  unsigned __int64 PteFromCopyList; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 ValidPte; // rax
  __int64 v44; // [rsp+38h] [rbp-1D0h]
  unsigned int v45; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 v46; // [rsp+48h] [rbp-1C0h]
  char v47; // [rsp+58h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-1A0h]
  __int64 v51; // [rsp+A0h] [rbp-168h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-160h]
  __int128 v53; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-148h]
  ULONG_PTR v55; // [rsp+C8h] [rbp-140h]
  _OWORD v56[3]; // [rsp+D0h] [rbp-138h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+100h] [rbp-108h] BYREF

  v46 = a4;
  v44 = a5;
  memset(v56, 0, sizeof(v56));
  v53 = 0LL;
  v54 = 0LL;
  memset_0(&MemoryDescriptorList, 0, 0xB8uLL);
  Pool = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  v15 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( ((__int64)KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v16 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v16 = v14;
  v17 = v16 | 1;
  v18 = v17 | 0x40;
  if ( (*(_BYTE *)(a2 + 64) & 2) == 0 )
    v18 = v17;
  v47 = v18;
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    v15 = ProtectionMask & 2 | 4;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v56);
  v19 = MiCountCommittedPages(a4, a4 + a6 - 1, a2, (__int64)&BugCheckParameter1[2].ReadyListHead.Blink);
  v20 = v19 != 0 ? 0xC0000018 : 0;
  KiUnstackDetachProcess((__int64)v56, 0, v21, v22);
  if ( v19 )
    return v20;
  PteAddress = MiGetPteAddress(v46);
  BugCheckParameter2 = PteAddress;
  v25 = PteAddress + 8 * (v23 - 1);
  v52 = v25;
  if ( v23 > 0x14 )
    LODWORD(v23) = 20;
  MiCreatePteCopyList(v23 + 1, (__int64)&v53);
  if ( DWORD1(v53) )
  {
    if ( (a5 & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(0x100uLL, 0x10000uLL, 1145400653)) != 0LL )
    {
      MiGetVmPartition((__int64)&BugCheckParameter1[2].ReadyListHead.Blink);
      v20 = 0;
      *a8 = 0LL;
      v51 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
      while ( 1 )
      {
        if ( PteAddress > v25 )
          goto LABEL_27;
        v27 = 16;
        if ( (unsigned __int64)((__int64)(v25 - PteAddress + 8) >> 3) < 0x10 )
          v27 = (__int64)(v25 - PteAddress + 8) >> 3;
        v45 = v27;
        v28 = a3;
        if ( a3 == 1 )
        {
          v29 = v27;
          if ( v27 )
            v28 = 1;
        }
        else
        {
          v29 = v27;
        }
        if ( Pool )
        {
          v30 = v29 << 12;
          memmove(Pool, (const void *)v26, v30);
          v31 = Pool;
        }
        else
        {
          v30 = v29 << 12;
          if ( v28 != 1 )
          {
            v31 = (char *)v26;
            goto LABEL_36;
          }
          MemoryDescriptorList.Next = 0LL;
          MemoryDescriptorList.Size = 8 * (((v30 + (v26 & 0xFFF) + 4095) >> 12) + 6);
          MemoryDescriptorList.MdlFlags = 0;
          MemoryDescriptorList.StartVa = (PVOID)(v26 & 0xFFFFFFFFFFFFF000uLL);
          MemoryDescriptorList.ByteOffset = v26 & 0xFFF;
          MemoryDescriptorList.ByteCount = v30;
          MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
          v31 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
          if ( !v31 )
            break;
        }
        v26 = v44;
LABEL_36:
        v44 = v30 + v26;
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v56);
        v35 = &v31[-v46];
        while ( v27 )
        {
          PageForEnclave = MiGetPageForEnclave(a2);
          v37 = PageForEnclave;
          if ( PageForEnclave == -1 )
          {
            v20 = -1073741801;
            break;
          }
          PteFromCopyList = MiGetPteFromCopyList((unsigned int *)&v53, PageForEnclave, -1LL);
          v20 = KeAddEnclavePage(v51, (__int64)&v35[v46], (__int64)(PteFromCopyList << 25) >> 16, v46, v47, a9);
          v55 = CLFS_LSN_NULL_EXT;
          *(_QWORD *)PteFromCopyList = CLFS_LSN_NULL_EXT;
          if ( (v20 & 0x80000000) != 0 )
          {
            MiReturnEnclavePage(v37, v39, v40, v41);
            break;
          }
          MiInitializeEnclavePfn(v37, BugCheckParameter2, v15, 0LL);
          ValidPte = MiMakeValidPte(BugCheckParameter2, v37, v15 | 0x80000000);
          MiWriteEnclavePte(BugCheckParameter2, ValidPte, a2, 0LL, 1);
          v46 += 4096LL;
          BugCheckParameter2 += 8LL;
          v27 = --v45;
          *a8 += 4096LL;
        }
        if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
          MmUnlockPages(&MemoryDescriptorList);
        KiUnstackDetachProcess((__int64)v56, 0, v33, v34);
        v26 = v44;
        PteAddress = BugCheckParameter2;
        v25 = v52;
      }
    }
    v20 = -1073741670;
LABEL_27:
    if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
      MmUnlockPages(&MemoryDescriptorList);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    MiReleasePteCopyList((__int64)&v53);
    return v20;
  }
  return 3221225626LL;
}
