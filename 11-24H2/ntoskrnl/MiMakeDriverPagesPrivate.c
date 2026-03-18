/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x140436EA8
 * Callers:
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MiBackSingleImageWithPagefile @ 0x1407E7B30 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407E8058 (MiSplitDriverPage.c)
 * Callees:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiReleaseFreshPage @ 0x140221FC0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     MiGetPfnSlabType @ 0x14022D610 (MiGetPfnSlabType.c)
 *     MiCheckSlabPage @ 0x140244708 (MiCheckSlabPage.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiUseProtectedSlabAllocatorForDriverPage @ 0x14043738C (MiUseProtectedSlabAllocatorForDriverPage.c)
 *     MiMakeDriverPageStayResident @ 0x1404373EC (MiMakeDriverPageStayResident.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiAllocateDriverPage @ 0x140A68CD8 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, volatile signed __int64 *a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v6; // rbx
  int v7; // r10d
  int v8; // ecx
  volatile signed __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  ULONG_PTR DriverPage; // r15
  unsigned __int8 v12; // r14
  ULONG_PTR v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r14d
  unsigned int v17; // ebp
  __int64 v18; // rbx
  __int64 v19; // r8
  int v21; // edx
  __int64 v22; // rcx
  int v23; // [rsp+30h] [rbp-68h] BYREF
  int v24; // [rsp+34h] [rbp-64h]
  int v25; // [rsp+38h] [rbp-60h]
  volatile signed __int64 *v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  unsigned __int8 v31; // [rsp+B8h] [rbp+20h]

  v23 = 0;
  v4 = 0;
  v6 = a3;
  v7 = 0;
  v27 = *((_QWORD *)qword_140E2FF88 + (unsigned __int16)word_140E37DEE);
  if ( (a4 & 3) == 0 && (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 )
    v7 = 2;
  v8 = v7 | 1;
  v24 = a4 & 4;
  v9 = a2;
  if ( (a4 & 4) == 0 )
    v8 = v7;
  v10 = 0LL;
  v26 = 0LL;
  DriverPage = -1LL;
  v25 = v8;
  v12 = MiLockWorkingSetShared((__int64)&unk_140E37D40);
  v31 = v12;
  while ( (unsigned __int64)v9 <= v6 )
  {
    if ( !v10 )
      goto LABEL_37;
    if ( ((unsigned __int16)v9 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal((__int64)&unk_140E37D40, v10);
LABEL_37:
      v10 = (((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37D40, v10);
    }
    v13 = *v9;
    if ( !*v9 )
      goto LABEL_12;
    if ( (v13 & 1) != 0 )
    {
      v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v14 + 40) >= 0
        || (*(_QWORD *)(v14 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v14 + 8) >= 0 && *(_QWORD *)(v14 + 8)
        || (a4 & 1) != 0 && ((v13 & 0x800) != 0 || (v13 & 0x200) == 0) )
      {
        goto LABEL_12;
      }
      v17 = (*(_DWORD *)(v14 + 16) >> 5) & 0x1F;
      if ( (MiFlags & 0x8000) != 0 && (a4 & 2) != 0 && ((*(_DWORD *)(v14 + 16) >> 5) & 2) != 0 )
      {
        v4 = -1073741755;
        break;
      }
      if ( v24 && (*(_DWORD *)(a1 + 184) & 4) == 0 && (*(_DWORD *)(v14 + 32) & 0x8000000) != 0 )
      {
        ++v9;
        goto LABEL_30;
      }
      if ( DriverPage == -1LL )
        goto LABEL_29;
      v18 = 48 * DriverPage - 0x220000000000LL;
      if ( !(unsigned int)MiUseProtectedSlabAllocatorForDriverPage(v27, v17, &v23) )
      {
        if ( (unsigned int)MiGetPfnSlabType(v18) == 9 )
          goto LABEL_45;
        v21 = 5;
        goto LABEL_44;
      }
      if ( (unsigned int)MiGetPfnSlabType(v18) != 9 )
      {
        v21 = v23;
LABEL_44:
        if ( (unsigned int)MiCheckSlabPage(v18, v21, 4) )
          goto LABEL_45;
      }
      if ( v26 != v9 )
      {
        MiReleaseFreshPageAtDpc(v18);
        v26 = v9;
LABEL_29:
        MiUnlockPageTableInternal((__int64)&unk_140E37D40, v10);
        MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v12);
        DriverPage = MiAllocateDriverPage(v27, v17, 0LL);
        MiLockWorkingSetShared((__int64)&unk_140E37D40);
        MiLockNestedPageTable((__int64)&unk_140E37D40, v10);
        if ( DriverPage == -1LL )
        {
          v4 = -1073741801;
          break;
        }
        goto LABEL_30;
      }
LABEL_45:
      MiCopyOnWrite((__int64)((_QWORD)v9 << 25) >> 16, v9, DriverPage, v25, 0LL);
      v22 = 6 * DriverPage;
      DriverPage = -1LL;
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(8 * v22 - 0x220000000000LL + 40) >> 60) & 7) == 3 )
        MiMakeDriverPageStayResident(a1, &unk_140E37D40, (__int64)((_QWORD)v9 << 25) >> 16);
LABEL_12:
      v6 = a3;
      ++v9;
    }
    else
    {
      if ( (v13 & 0x400) == 0 )
        goto LABEL_12;
      MiUnlockPageTableInternal((__int64)&unk_140E37D40, v10);
      MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v12);
      v15 = MmAccessFault(0LL, (__int64)((_QWORD)v9 << 25) >> 16, 0, 0LL);
      v16 = v15;
      if ( v15 < 0 && (v9 == a2 || (a4 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x101BuLL, (__int64)((_QWORD)v9 << 25) >> 16, v13, v15);
      MiLockWorkingSetShared((__int64)&unk_140E37D40);
      if ( v16 < 0 )
      {
        v10 = 0LL;
        ++v9;
      }
      else
      {
        MiLockNestedPageTable((__int64)&unk_140E37D40, v10);
      }
      v12 = v31;
LABEL_30:
      v6 = a3;
    }
  }
  if ( v10 )
    MiUnlockPageTableInternal((__int64)&unk_140E37D40, v10);
  MiUnlockWorkingSetShared((__int64)&unk_140E37D40, v12);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL, 0xFFFFDE0000000000uLL, v19);
  return v4;
}
