/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x140429928
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MiBackSingleImageWithPagefile @ 0x1407E8100 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1407E8628 (MiSplitDriverPage.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiCheckSlabPage @ 0x14020CE98 (MiCheckSlabPage.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiReleaseFreshPage @ 0x14024ED10 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiUseProtectedSlabAllocatorForDriverPage @ 0x140429E0C (MiUseProtectedSlabAllocatorForDriverPage.c)
 *     MiMakeDriverPageStayResident @ 0x140429E6C (MiMakeDriverPageStayResident.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiAllocateDriverPage @ 0x140A62088 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r12d
  char v5; // r13
  unsigned __int64 v6; // rbx
  int v7; // r10d
  int v8; // ecx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 DriverPage; // r15
  unsigned __int8 v12; // r14
  ULONG_PTR v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  unsigned int v20; // ebp
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v29; // edx
  __int64 v30; // rcx
  int v31; // [rsp+30h] [rbp-68h] BYREF
  int v32; // [rsp+34h] [rbp-64h]
  int v33; // [rsp+38h] [rbp-60h]
  volatile signed __int64 *v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h]
  unsigned __int8 v39; // [rsp+B8h] [rbp+20h]

  v31 = 0;
  v4 = 0;
  v5 = a4;
  v6 = a3;
  v7 = 0;
  v35 = *((_QWORD *)qword_140E300C8 + (unsigned __int16)word_140E37F2E);
  if ( (a4 & 3) == 0 && (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 )
    v7 = 2;
  v8 = v7 | 1;
  v32 = a4 & 4;
  v9 = a2;
  if ( (a4 & 4) == 0 )
    v8 = v7;
  v10 = 0LL;
  v34 = 0LL;
  DriverPage = -1LL;
  v33 = v8;
  v12 = MiLockWorkingSetShared((__int64)&unk_140E37E80, a2, a3, a4);
  v39 = v12;
  while ( v9 <= v6 )
  {
    if ( !v10 )
      goto LABEL_37;
    if ( (v9 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal((__int64)&unk_140E37E80, v10);
LABEL_37:
      v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockNestedPageTable((__int64)&unk_140E37E80, v10);
    }
    v13 = *(_QWORD *)v9;
    if ( !*(_QWORD *)v9 )
      goto LABEL_12;
    if ( (v13 & 1) != 0 )
    {
      v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v14 + 40) >= 0
        || (*(_QWORD *)(v14 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v14 + 8) >= 0 && *(_QWORD *)(v14 + 8)
        || (v5 & 1) != 0 && ((v13 & 0x800) != 0 || (v13 & 0x200) == 0) )
      {
        goto LABEL_12;
      }
      v20 = (*(_DWORD *)(v14 + 16) >> 5) & 0x1F;
      if ( (MiFlags & 0x8000) != 0 && (v5 & 2) != 0 && ((*(_DWORD *)(v14 + 16) >> 5) & 2) != 0 )
      {
        v4 = -1073741755;
        break;
      }
      if ( v32 && (*(_DWORD *)(a1 + 184) & 4) == 0 && (*(_DWORD *)(v14 + 32) & 0x8000000) != 0 )
      {
        v9 += 8LL;
        goto LABEL_30;
      }
      if ( DriverPage == -1LL )
        goto LABEL_29;
      v21 = 48 * DriverPage - 0x220000000000LL;
      if ( !(unsigned int)MiUseProtectedSlabAllocatorForDriverPage(v35, v20, &v31) )
      {
        if ( (unsigned int)MiGetPfnSlabType(v21) == 9 )
          goto LABEL_45;
        v29 = 5;
        goto LABEL_44;
      }
      if ( (unsigned int)MiGetPfnSlabType(v21) != 9 )
      {
        v29 = v31;
LABEL_44:
        if ( (unsigned int)MiCheckSlabPage(v21, v29, 4) )
          goto LABEL_45;
      }
      if ( v34 != (volatile signed __int64 *)v9 )
      {
        MiReleaseFreshPageAtDpc(v21, v22, v23, v24);
        v34 = (volatile signed __int64 *)v9;
LABEL_29:
        MiUnlockPageTableInternal((__int64)&unk_140E37E80, v10);
        MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v12);
        DriverPage = MiAllocateDriverPage(v35, v20, 0LL);
        MiLockWorkingSetShared((__int64)&unk_140E37E80, v25, v26, v27);
        MiLockNestedPageTable((__int64)&unk_140E37E80, v10);
        if ( DriverPage == -1LL )
        {
          v4 = -1073741801;
          break;
        }
        goto LABEL_30;
      }
LABEL_45:
      MiCopyOnWrite((__int64)(v9 << 25) >> 16, (volatile signed __int64 *)v9, DriverPage, v33, 0LL);
      v30 = 6 * DriverPage;
      DriverPage = -1LL;
      if ( (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(8 * v30 - 0x220000000000LL + 40) >> 60) & 7) == 3 )
        MiMakeDriverPageStayResident(a1, &unk_140E37E80, (__int64)(v9 << 25) >> 16);
LABEL_12:
      v6 = a3;
      v9 += 8LL;
    }
    else
    {
      if ( (v13 & 0x400) == 0 )
        goto LABEL_12;
      MiUnlockPageTableInternal((__int64)&unk_140E37E80, v10);
      MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v12);
      v15 = MmAccessFault(0LL, (__int64)(v9 << 25) >> 16, 0, 0LL);
      v19 = v15;
      if ( v15 < 0 && (v9 == a2 || (v5 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x101BuLL, (__int64)(v9 << 25) >> 16, v13, v15);
      MiLockWorkingSetShared((__int64)&unk_140E37E80, v16, v17, v18);
      if ( v19 < 0 )
      {
        v10 = 0LL;
        v9 += 8LL;
      }
      else
      {
        MiLockNestedPageTable((__int64)&unk_140E37E80, v10);
      }
      v12 = v39;
LABEL_30:
      v6 = a3;
    }
  }
  if ( v10 )
    MiUnlockPageTableInternal((__int64)&unk_140E37E80, v10);
  MiUnlockWorkingSetShared((__int64)&unk_140E37E80, v12);
  if ( DriverPage != -1LL )
    MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL);
  return v4;
}
