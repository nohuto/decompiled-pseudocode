/*
 * XREFs of MiUnlockDriverPages @ 0x140A33EDC
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x14067DB08 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x14067EDF0 (MmWriteSystemImageTracepoint.c)
 *     MiUnlockEntireDriver @ 0x1407F10C0 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     MiCompleteSecureDriverLoad @ 0x140A33D90 (MiCompleteSecureDriverLoad.c)
 *     MmReapplyBootPatchImports @ 0x140C58C98 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x1403FECD0 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1404AEBCC (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(_RTL_BITMAP_EX *a1)
{
  unsigned __int64 *Buffer; // rcx
  unsigned __int64 *v3; // rcx
  unsigned __int64 *v4; // rcx
  unsigned __int64 SizeOfBitMap; // rdi
  __int64 PteAddress; // r14
  ULONG64 v7; // r8
  ULONG64 SetBits; // rax
  unsigned __int64 v9; // rsi

  Buffer = a1[3].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    a1[3].Buffer = 0LL;
  }
  v3 = a1[4].Buffer;
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    a1[4].Buffer = 0LL;
  }
  v4 = a1[5].Buffer;
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    a1[5].Buffer = 0LL;
  }
  if ( a1[2].Buffer )
  {
    SizeOfBitMap = a1->SizeOfBitMap;
    if ( (a1[6].SizeOfBitMap & 1) != 0 )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(SizeOfBitMap + 48));
    v7 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(a1 + 2, 1uLL, v7);
      v9 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (LODWORD(a1[6].SizeOfBitMap) >> 1) & 1);
      v7 = v9;
      _bittestandreset64((signed __int64 *)a1[2].Buffer, v9);
    }
    ExFreePoolWithTag(a1[2].Buffer, 0);
    a1[2].Buffer = 0LL;
  }
}
