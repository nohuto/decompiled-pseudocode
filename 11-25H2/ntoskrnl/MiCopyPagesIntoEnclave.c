/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x1409CB268
 * Callers:
 *     NtLoadEnclaveData @ 0x1409CAD50 (NtLoadEnclaveData.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiGetPteFromCopyList @ 0x1402C7490 (MiGetPteFromCopyList.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     MiInitializeEnclavePfn @ 0x1403FD254 (MiInitializeEnclavePfn.c)
 *     MiGetPageForEnclave @ 0x1403FD3A4 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x1403FD3F8 (KeAddEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1403FD570 (MiWriteEnclavePte.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetVmPartition @ 0x14041A480 (MiGetVmPartition.c)
 *     MiCreatePteCopyList @ 0x14047DD90 (MiCreatePteCopyList.c)
 *     MiCountCommittedPages @ 0x140492B64 (MiCountCommittedPages.c)
 *     MiReleasePteCopyList @ 0x1404A6450 (MiReleasePteCopyList.c)
 *     MiReturnEnclavePage @ 0x1404D558C (MiReturnEnclavePage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  int v15; // r13d
  char v16; // cl
  char v17; // cl
  char v18; // r8
  __int64 v19; // rbx
  unsigned int v20; // edi
  unsigned __int64 v21; // rdx
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v23; // r15
  __int64 v24; // r9
  unsigned int v25; // r12d
  char v26; // al
  __int64 v27; // rbx
  size_t v28; // rbx
  char *v29; // r15
  char *v31; // r15
  __int64 PageForEnclave; // rax
  ULONG_PTR v33; // r12
  unsigned __int64 PteFromCopyList; // rbx
  ULONG_PTR ValidPte; // rax
  __int64 v37; // [rsp+38h] [rbp-1D0h]
  unsigned int v38; // [rsp+40h] [rbp-1C8h]
  unsigned __int64 v39; // [rsp+48h] [rbp-1C0h]
  char v40; // [rsp+58h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-1A0h]
  __int64 v44; // [rsp+A0h] [rbp-168h]
  unsigned __int64 v45; // [rsp+A8h] [rbp-160h]
  __int128 v46; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-148h]
  ULONG_PTR v48; // [rsp+C8h] [rbp-140h]
  _OWORD v49[3]; // [rsp+D0h] [rbp-138h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+100h] [rbp-108h] BYREF

  v39 = a4;
  v37 = a5;
  memset(v49, 0, sizeof(v49));
  v46 = 0LL;
  v47 = 0LL;
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
  v40 = v18;
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    v15 = ProtectionMask & 2 | 4;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v49);
  v19 = MiCountCommittedPages(a4, a4 + a6 - 1, a2, (__int64)&BugCheckParameter1[2].ReadyListHead.Blink);
  v20 = v19 != 0 ? 0xC0000018 : 0;
  KiUnstackDetachProcess((__int64)v49, 0LL);
  if ( v19 )
    return v20;
  PteAddress = MiGetPteAddress(v39);
  BugCheckParameter2 = PteAddress;
  v23 = PteAddress + 8 * (v21 - 1);
  v45 = v23;
  if ( v21 > 0x14 )
    LODWORD(v21) = 20;
  MiCreatePteCopyList(v21 + 1, (__int64)&v46);
  if ( DWORD1(v46) )
  {
    if ( (a5 & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(0x100uLL, 0x10000uLL, 1145400653)) != 0LL )
    {
      MiGetVmPartition((__int64)&BugCheckParameter1[2].ReadyListHead.Blink);
      v20 = 0;
      *a8 = 0LL;
      v44 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
      while ( 1 )
      {
        if ( PteAddress > v23 )
          goto LABEL_27;
        v25 = 16;
        if ( (unsigned __int64)((__int64)(v23 - PteAddress + 8) >> 3) < 0x10 )
          v25 = (__int64)(v23 - PteAddress + 8) >> 3;
        v38 = v25;
        v26 = a3;
        if ( a3 == 1 )
        {
          v27 = v25;
          if ( v25 )
            v26 = 1;
        }
        else
        {
          v27 = v25;
        }
        if ( Pool )
        {
          v28 = v27 << 12;
          memmove(Pool, (const void *)v24, v28);
          v29 = Pool;
        }
        else
        {
          v28 = v27 << 12;
          if ( v26 != 1 )
          {
            v29 = (char *)v24;
            goto LABEL_36;
          }
          MemoryDescriptorList.Next = 0LL;
          MemoryDescriptorList.Size = 8 * (((v28 + (v24 & 0xFFF) + 4095) >> 12) + 6);
          MemoryDescriptorList.MdlFlags = 0;
          MemoryDescriptorList.StartVa = (PVOID)(v24 & 0xFFFFFFFFFFFFF000uLL);
          MemoryDescriptorList.ByteOffset = v24 & 0xFFF;
          MemoryDescriptorList.ByteCount = v28;
          MmProbeAndLockPages(&MemoryDescriptorList, 0, IoReadAccess);
          v29 = (char *)MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
          if ( !v29 )
            break;
        }
        v24 = v37;
LABEL_36:
        v37 = v28 + v24;
        KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v49);
        v31 = &v29[-v39];
        while ( v25 )
        {
          PageForEnclave = MiGetPageForEnclave(a2);
          v33 = PageForEnclave;
          if ( PageForEnclave == -1 )
          {
            v20 = -1073741801;
            break;
          }
          PteFromCopyList = MiGetPteFromCopyList((unsigned int *)&v46, PageForEnclave, -1LL);
          v20 = KeAddEnclavePage(v44, (__int64)&v31[v39], (__int64)(PteFromCopyList << 25) >> 16, v39, v40, a9);
          v48 = CLFS_LSN_NULL_EXT;
          *(_QWORD *)PteFromCopyList = CLFS_LSN_NULL_EXT;
          if ( (v20 & 0x80000000) != 0 )
          {
            MiReturnEnclavePage(v33);
            break;
          }
          MiInitializeEnclavePfn(v33, BugCheckParameter2, v15, 0);
          ValidPte = MiMakeValidPte(BugCheckParameter2, v33, v15 | 0x80000000);
          MiWriteEnclavePte(BugCheckParameter2, ValidPte, a2, 0, 1);
          v39 += 4096LL;
          BugCheckParameter2 += 8LL;
          v25 = --v38;
          *a8 += 4096LL;
        }
        if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
          MmUnlockPages(&MemoryDescriptorList);
        KiUnstackDetachProcess((__int64)v49, 0LL);
        v24 = v37;
        PteAddress = BugCheckParameter2;
        v23 = v45;
      }
    }
    v20 = -1073741670;
LABEL_27:
    if ( (MemoryDescriptorList.MdlFlags & 2) != 0 )
      MmUnlockPages(&MemoryDescriptorList);
    if ( Pool )
      ExFreePoolWithTag(Pool, 0);
    MiReleasePteCopyList((__int64)&v46);
    return v20;
  }
  return 3221225626LL;
}
