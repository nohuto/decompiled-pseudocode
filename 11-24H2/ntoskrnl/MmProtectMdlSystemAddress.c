/*
 * XREFs of MmProtectMdlSystemAddress @ 0x1404063A0
 * Callers:
 *     IopLiveDumpBufferDumpData @ 0x1405967F8 (IopLiveDumpBufferDumpData.c)
 *     DifMmProtectMdlSystemAddressWrapper @ 0x140632CC0 (DifMmProtectMdlSystemAddressWrapper.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiMappingHasIoReferences @ 0x140292CEC (MiMappingHasIoReferences.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiLookupIoPageNode @ 0x14038F750 (MiLookupIoPageNode.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiMappingHasIoTracker @ 0x1404066B0 (MiMappingHasIoTracker.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v17; // r8
  unsigned __int64 v18; // r11
  __int64 TransitionPte; // rax
  ULONG_PTR v20; // rbx
  int v21; // eax
  unsigned __int64 v22; // [rsp+30h] [rbp-128h]
  int v23; // [rsp+38h] [rbp-120h]
  _BYTE v24[208]; // [rsp+40h] [rbp-118h] BYREF

  memset_0(v24, 0, 0xC8uLL);
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
  v22 = ((MappedSystemVa & 0xFFF) + MemoryDescriptorList->ByteCount + 4095LL) >> 12;
  v7 = (ULONG_PTR *)(((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  MiInitializeTbFlushList((__int64)v24, (__int64)&unk_140E38240, 20, 0, 1);
  HasIoTracker = 0;
  v11 = v8;
  while ( v9 )
  {
    v13 = *v7;
    if ( (*v7 & 1) != 0 )
    {
      v23 = 1;
      v14 = (v13 >> 12) & 0xFFFFFFFFFFLL;
      MiInsertTbFlushEntry((__int64)v24, v11, 1LL, 0);
      if ( v11 == v8 )
        HasIoTracker = MiMappingHasIoTracker(v8);
    }
    else
    {
      if ( (v13 & 0x800) == 0 || ((v13 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v7, *v7);
      v20 = *v7;
      if ( qword_140E2DCC0 )
      {
        if ( (v13 & 0x10) != 0 )
          v20 = v13 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v20 = v13 & ~qword_140E2DCC0;
      }
      v23 = 0;
      v14 = (v20 >> 12) & 0xFFFFFFFFFFLL;
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
      if ( v14 <= qword_140E2DD20 && ((*(_QWORD *)(48 * v14 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v6, 48 * v14 - 0x220000000000LL);
      }
      else
      {
        ProtectionPfnCompatible = v6 & 7;
        v21 = MiLookupIoPageNode(v14, 1LL);
        if ( v21 )
        {
          if ( v21 == 2 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 0x10u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v7, v14, ProtectionPfnCompatible | 0xA0000000);
      if ( v23 )
        MiWriteValidPteNewProtection((ULONG_PTR)v7, ValidPte, v17);
      else
        *v7 = ValidPte;
      if ( HasIoTracker )
      {
        if ( v11 == v8 )
          MiMappingHasIoReferences(v8);
      }
      v18 = v22;
    }
    v11 += 4096LL;
    ++v7;
    v9 = v18 - 1;
    v22 = v9;
  }
  MiFlushTbList((__int64)v24);
  return 0;
}
