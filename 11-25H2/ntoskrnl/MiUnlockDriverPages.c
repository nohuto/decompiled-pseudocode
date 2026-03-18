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
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits, (*((_DWORD *)a1 + 24) >> 1) & 1);
      v7 = v9;
      _bittestandreset64((signed __int64 *)a1[5], v9);
    }
    ExFreePoolWithTag((PVOID)a1[5], 0);
    a1[5] = 0LL;
  }
}
