/*
 * XREFs of MiUnlockDriverPages @ 0x140A3A2AC
 * Callers:
 *     MiUnlockAndFreeDvPatchImage @ 0x140671168 (MiUnlockAndFreeDvPatchImage.c)
 *     MmWriteSystemImageTracepoint @ 0x1406723E0 (MmWriteSystemImageTracepoint.c)
 *     MiUnlockEntireDriver @ 0x1407E0C50 (MiUnlockEntireDriver.c)
 *     MiApplyDriverHotPatch @ 0x1407E0DBC (MiApplyDriverHotPatch.c)
 *     MiCompleteSecureDriverLoad @ 0x140A3A160 (MiCompleteSecureDriverLoad.c)
 *     MmReapplyBootPatchImports @ 0x140C45828 (MmReapplyBootPatchImports.c)
 * Callees:
 *     MiUnlockCodePage @ 0x14036E5B8 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x140400DC0 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     KeReservePrivilegedPages @ 0x1404B4A34 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
