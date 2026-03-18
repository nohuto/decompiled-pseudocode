/*
 * XREFs of MmProtectMdlSystemAddress @ 0x14040E150
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x140599878 (IopLiveDumpBufferDumpData.c)
 *     DifMmProtectMdlSystemAddressWrapper @ 0x140634700 (DifMmProtectMdlSystemAddressWrapper.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiMappingHasIoReferences @ 0x14026347C (MiMappingHasIoReferences.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiMakeTransitionPte @ 0x1402E67B0 (MiMakeTransitionPte.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiLookupIoPageNode @ 0x1403D0238 (MiLookupIoPageNode.c)
 *     MiMappingHasIoTracker @ 0x14040E460 (MiMappingHasIoTracker.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // rbp
  unsigned int ProtectionMask; // eax
  unsigned int v6; // r14d
  ULONG_PTR *v7; // rsi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  int HasIoTracker; // r12d
  unsigned __int64 v11; // r15
  ULONG_PTR v13; // rax
  unsigned __int64 v14; // rbx
  int ProtectionPfnCompatible; // edi
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v17; // r11
  __int64 TransitionPte; // rax
  ULONG_PTR v19; // rbx
  int v20; // eax
  unsigned __int64 v21; // [rsp+30h] [rbp-128h]
  int v22; // [rsp+38h] [rbp-120h]
  _BYTE v23[208]; // [rsp+40h] [rbp-118h] BYREF

  memset_0(v23, 0, 0xC8uLL);
  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v6 = ProtectionMask;
  if ( ProtectionMask == -1
    || (ProtectionMask >> 3) - 1 <= 1
    || ProtectionMask >> 3 == 3 && (ProtectionMask & 7) != 0
    || (ProtectionMask & 5) == 5 )
  {
    return -1073741755;
  }
  v21 = ((MappedSystemVa & 0xFFF) + MemoryDescriptorList->ByteCount + 4095LL) >> 12;
  v7 = (ULONG_PTR *)(((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  MiInitializeTbFlushList((__int64)v23, (__int64)&unk_140E38100, 20, 0, 1);
  HasIoTracker = 0;
  v11 = v8;
  while ( v9 )
  {
    v13 = *v7;
    if ( (*v7 & 1) != 0 )
    {
      v22 = 1;
      v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
      MiInsertTbFlushEntry((__int64)v23, v11, 1LL, 0);
      if ( v11 == v8 )
        HasIoTracker = MiMappingHasIoTracker(v8);
    }
    else
    {
      if ( (v13 & 0x800) == 0 || ((v13 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v7, *v7);
      v19 = *v7;
      if ( qword_140E2DB80 )
      {
        if ( (v13 & 0x10) != 0 )
          v19 = v13 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v19 = v13 & ~qword_140E2DB80;
      }
      v22 = 0;
      v14 = (v19 >> 12) & 0xFFFFFFFFFFLL;
      if ( v11 == v8 && (v13 & 8) != 0 )
        HasIoTracker = 1;
    }
    if ( v6 == 24 )
    {
      TransitionPte = MiMakeTransitionPte(v14, 24);
      if ( HasIoTracker && v11 == v8 )
        TransitionPte |= 8uLL;
      *v7 = TransitionPte;
    }
    else
    {
      if ( v14 <= qword_140E2DBE0 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v6, 48 * v14 - 0x220000000000LL);
      }
      else
      {
        ProtectionPfnCompatible = v6 & 7;
        v20 = MiLookupIoPageNode(v14, 1LL);
        if ( v20 )
        {
          if ( v20 == 2 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 0x10u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v7, v14, ProtectionPfnCompatible | 0xA0000000);
      if ( v22 )
        MiWriteValidPteNewProtection((ULONG_PTR)v7, ValidPte);
      else
        *v7 = ValidPte;
      if ( HasIoTracker )
      {
        if ( v11 == v8 )
          MiMappingHasIoReferences(v8);
      }
      v17 = v21;
    }
    v11 += 4096LL;
    ++v7;
    v9 = v17 - 1;
    v21 = v9;
  }
  MiFlushTbList((__int64)v23);
  return 0;
}
