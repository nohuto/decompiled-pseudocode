/*
 * XREFs of MiUnlockDriverPages @ 0x140A3E5CC
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x14067C928 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x14067DBF0 (MmWriteSystemImageTracepoint.c)
 *     MiUnlockEntireDriver @ 0x1407F0AF0 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     MiCompleteSecureDriverLoad @ 0x140A3E480 (MiCompleteSecureDriverLoad.c)
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiUnlockCodePage @ 0x1402C7618 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x140403930 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1404B4380 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(unsigned __int64 *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  unsigned __int64 v7; // r8
  unsigned __int64 SetBits; // rax
  unsigned __int64 v9; // rsi

  v2 = (void *)a1[7];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    a1[7] = 0LL;
  }
  v3 = (void *)a1[9];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[9] = 0LL;
  }
  v4 = (void *)a1[11];
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[11] = 0LL;
  }
  if ( a1[5] )
  {
    v5 = *a1;
    if ( (a1[12] & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v5 + 48));
    v7 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 4, 1uLL, v7);
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage((_QWORD *)(PteAddress + 8 * SetBits), PteAddress + 8 * SetBits, (*((_DWORD *)a1 + 24) >> 1) & 1);
      v7 = v9;
      _bittestandreset64((signed __int64 *)a1[5], v9);
    }
    ExFreePoolWithTag((PVOID)a1[5], 0);
    a1[5] = 0LL;
  }
}
