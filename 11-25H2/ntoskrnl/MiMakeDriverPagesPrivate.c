/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1403F4388
 * Callers:
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x14065FC80 (MmProtectDriverSection.c)
 *     MiBackSingleImageWithPagefile @ 0x1407D7C78 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407D8198 (MiSplitDriverPage.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiCheckSlabPage @ 0x1403234E8 (MiCheckSlabPage.c)
 *     MiReleaseFreshPage @ 0x1403432C0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140343330 (MiReleaseFreshPageAtDpc.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiUseProtectedSlabAllocatorForDriverPage @ 0x1403F4864 (MiUseProtectedSlabAllocatorForDriverPage.c)
 *     MiMakeDriverPageStayResident @ 0x1403F48C4 (MiMakeDriverPageStayResident.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiAllocateDriverPage @ 0x140A69E40 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, volatile signed __int64 *a2, unsigned __int64 a3, char a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v6; // rbx
  int v7; // r10d
  int v8; // ecx
  volatile signed __int64 *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 DriverPage; // r15
  __int64 v12; // r9
  unsigned __int8 v13; // r14
  __int64 v14; // r8
  ULONG_PTR v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r14d
  __int64 v19; // r8
  unsigned int v20; // ebp
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  int v25; // edx
  __int64 v26; // rcx
  int v27; // [rsp+30h] [rbp-68h] BYREF
  int v28; // [rsp+34h] [rbp-64h]
  int v29; // [rsp+38h] [rbp-60h]
  volatile signed __int64 *v30; // [rsp+40h] [rbp-58h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  unsigned __int8 v35; // [rsp+B8h] [rbp+20h]

  v27 = 0;
  v4 = 0;
  v6 = a3;
  v7 = 0;
  v31 = *((_QWORD *)qword_140E2FD48 + (unsigned __int16)word_140E37BAE);
  if ( (a4 & 3) == 0 && (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 )
    v7 = 2;
  v8 = v7 | 1;
  v28 = a4 & 4;
  v9 = a2;
  if ( (a4 & 4) == 0 )
    v8 = v7;
  v10 = 0LL;
  v30 = 0LL;
  DriverPage = -1LL;
  v29 = v8;
  v13 = MiLockWorkingSetShared((__int64)&unk_140E37B00);
  v35 = v13;
  v14 = 0xFFFFDE0000000000uLL;
  while ( (unsigned __int64)v9 <= v6 )
  {
    if ( !v10 )
      goto LABEL_40;
    if ( ((unsigned __int16)v9 & 0xFFF) == 0 )
    {
      MiUnlockPageTable((__int64)&unk_140E37B00, v10);
LABEL_40:
      v10 = (((unsigned __int64)v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37B00, v10, v14, v12);
      v14 = 0xFFFFDE0000000000uLL;
    }
    v15 = *v9;
    if ( !*v9 )
      goto LABEL_14;
    if ( (v15 & 1) == 0 )
    {
      if ( (v15 & 0x400) == 0 )
        goto LABEL_14;
      MiUnlockPageTable((__int64)&unk_140E37B00, v10);
      MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v13);
      v17 = MmAccessFault(0LL, (__int64)((_QWORD)v9 << 25) >> 16, 0, 0LL);
      v18 = v17;
      if ( v17 < 0 && (v9 == a2 || (a4 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x101BuLL, (__int64)((_QWORD)v9 << 25) >> 16, v15, v17);
      MiLockWorkingSetShared((__int64)&unk_140E37B00);
      if ( v18 < 0 )
      {
        v10 = 0LL;
        ++v9;
      }
      else
      {
        MiLockNestedPageTable((__int64)&unk_140E37B00, v10, v19, v12);
      }
      v13 = v35;
      goto LABEL_32;
    }
    v16 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    if ( *(__int64 *)(v16 + 40) >= 0
      || (*(_QWORD *)(v16 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v16 + 8) >= 0 && *(_QWORD *)(v16 + 8)
      || (a4 & 1) != 0 && ((v15 & 0x800) != 0 || (v15 & 0x200) == 0) )
    {
      goto LABEL_14;
    }
    v20 = (*(_DWORD *)(v16 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x8000) != 0 && (a4 & 2) != 0 && ((*(_DWORD *)(v16 + 16) >> 5) & 2) != 0 )
    {
      v4 = -1073741755;
      break;
    }
    if ( v28 && (*(_DWORD *)(a1 + 184) & 4) == 0 && (*(_DWORD *)(v16 + 32) & 0x8000000) != 0 )
    {
      ++v9;
LABEL_33:
      v6 = a3;
    }
    else
    {
      if ( DriverPage == -1LL )
        goto LABEL_31;
      v21 = 48 * DriverPage - 0x220000000000LL;
      if ( !(unsigned int)MiUseProtectedSlabAllocatorForDriverPage(v31, v20, &v27) )
      {
        if ( (unsigned int)MiGetPfnSlabType(v21) == 9 )
          goto LABEL_45;
        v25 = 5;
        goto LABEL_44;
      }
      if ( (unsigned int)MiGetPfnSlabType(v21) != 9 )
      {
        v25 = v27;
LABEL_44:
        if ( (unsigned int)MiCheckSlabPage(v21, v25, 4) )
          goto LABEL_45;
      }
      if ( v30 != v9 )
      {
        MiReleaseFreshPageAtDpc(v21);
        v30 = v9;
LABEL_31:
        MiUnlockPageTable((__int64)&unk_140E37B00, v10);
        MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v13);
        DriverPage = MiAllocateDriverPage(v31, v20, 0LL);
        MiLockWorkingSetShared((__int64)&unk_140E37B00);
        MiLockNestedPageTable((__int64)&unk_140E37B00, v10, v22, v23);
        if ( DriverPage == -1LL )
        {
          v4 = -1073741801;
          break;
        }
LABEL_32:
        v14 = 0xFFFFDE0000000000uLL;
        goto LABEL_33;
      }
LABEL_45:
      MiCopyOnWrite((__int64)((_QWORD)v9 << 25) >> 16, v9, DriverPage, v29, 0LL);
      v14 = 0xFFFFDE0000000000uLL;
      v26 = 6 * DriverPage;
      DriverPage = -1LL;
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(8 * v26 - 0x220000000000LL + 40) >> 60) & 7) == 3 )
      {
        MiMakeDriverPageStayResident(a1, &unk_140E37B00, (__int64)((_QWORD)v9 << 25) >> 16);
        v14 = 0xFFFFDE0000000000uLL;
      }
LABEL_14:
      v6 = a3;
      ++v9;
    }
  }
  if ( v10 )
    MiUnlockPageTable((__int64)&unk_140E37B00, v10);
  MiUnlockWorkingSetShared((__int64)&unk_140E37B00, v13);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL);
  return v4;
}
