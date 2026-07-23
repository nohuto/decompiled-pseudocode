/*
 * XREFs of MiHandleDriverNonPagedSections @ 0x140A33318
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x1407F19B8 (MiApplyHotPatchToLoadedDriver.c)
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140203B44 (MiUnlockCodePage.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlFindNextForwardRunClear @ 0x1403C3BB0 (RtlFindNextForwardRunClear.c)
 *     RtlFindSetBits @ 0x1403E6CF0 (RtlFindSetBits.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiGetExtendedLoaderBitmap @ 0x1404F89DC (MiGetExtendedLoaderBitmap.c)
 *     MiDisablePagingOfDriver @ 0x140A334E4 (MiDisablePagingOfDriver.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiHandleDriverNonPagedSections(__int64 a1, char a2)
{
  unsigned __int64 v3; // rcx
  unsigned int v5; // esi
  ULONG v6; // ebp
  ULONG_PTR v7; // r15
  _RTL_BITMAP *ExtendedLoaderBitmap; // r14
  __int64 v9; // r13
  ULONG SetBits; // eax
  ULONG v11; // ebx
  ULONG NextForwardRunClear; // eax
  unsigned int SizeOfBitMap; // edx
  ULONG v14; // r12d
  ULONG_PTR PteAddress; // rbx
  int v16; // edx
  __int64 v17; // rax
  int v18; // eax
  int v19; // ecx
  int v20; // ebp
  unsigned __int64 v21; // r14
  int v22; // eax
  unsigned __int64 v23; // rbx
  unsigned __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 StartingRunIndex; // [rsp+80h] [rbp+18h] BYREF

  StartingRunIndex = 0LL;
  v3 = *(_QWORD *)(a1 + 48);
  v25 = 0LL;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) )
    return 0LL;
  v5 = 0;
  if ( (dword_140FC51F4 & 1) != 0 || (a2 & 2) != 0 )
  {
    v20 = 0;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = MiSnapDriverRange(a1, v20, 8, 0, (__int64)&StartingRunIndex, (__int64)&v25);
      v23 = StartingRunIndex;
      v20 = v22;
      if ( !StartingRunIndex )
        goto LABEL_20;
      if ( v21 )
      {
        if ( StartingRunIndex == v21 )
          return v5;
        MiUnlockCodePage(StartingRunIndex, v25, 0);
LABEL_20:
        if ( !v20 )
          return v5;
      }
      else
      {
        v5 = MiLockCode(a1, StartingRunIndex, v25, 2);
        if ( (v5 & 0x80000000) == 0 )
          goto LABEL_20;
        v20 = 0;
        v21 = v23;
      }
    }
  }
  MiDisablePagingOfDriver(a1);
  LODWORD(v25) = 1;
  v6 = 0;
  v7 = 0LL;
  ExtendedLoaderBitmap = (_RTL_BITMAP *)MiGetExtendedLoaderBitmap(a1);
  while ( 1 )
  {
    LODWORD(StartingRunIndex) = 0;
    v9 = *(_QWORD *)(a1 + 48);
    if ( v6 == ExtendedLoaderBitmap->SizeOfBitMap )
      break;
    SetBits = RtlFindSetBits(ExtendedLoaderBitmap, 1u, v6);
    v11 = SetBits;
    if ( SetBits < v6 || SetBits == -1 )
      break;
    NextForwardRunClear = RtlFindNextForwardRunClear(ExtendedLoaderBitmap, SetBits, (PULONG)&StartingRunIndex);
    SizeOfBitMap = StartingRunIndex;
    if ( !NextForwardRunClear )
      SizeOfBitMap = ExtendedLoaderBitmap->SizeOfBitMap;
    v14 = SizeOfBitMap;
    PteAddress = MiGetPteAddress(v9 + (v11 << 12));
    v17 = (unsigned int)(v16 - 1);
    if ( (_DWORD)v25 == 1 )
    {
      v18 = MiLockCode(a1, PteAddress, PteAddress + 8 * v17, 2);
      v5 = v18;
      if ( v18 < 0 )
        v7 = PteAddress;
      v6 = 0;
      if ( v18 >= 0 )
        v6 = v14;
      v19 = 0;
      if ( v18 >= 0 )
        v19 = v25;
      LODWORD(v25) = v19;
    }
    else
    {
      if ( PteAddress == v7 )
        return v5;
      MiUnlockCodePage(PteAddress, PteAddress + 8 * v17, 0);
      v6 = v14;
    }
  }
  return v5;
}
