/*
 * XREFs of MiProtectEnclavePages @ 0x1404C420C
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x1404291C0 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405B7C40 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405B7D00 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x1405B7EF4 (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x140681A4C (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x140681D64 (MiUpdateEnclavePfnProtection.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140ABAFB0 (VslDebugProtectSecureProcessMemory.c)
 */

__int64 __fastcall MiProtectEnclavePages(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        int a8,
        _DWORD *a9,
        unsigned __int64 *a10,
        __int64 *a11)
{
  int v11; // eax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 result; // rax
  unsigned int v16; // esi
  unsigned int v17; // ebp
  unsigned int v18; // r12d
  int v19; // ecx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r14
  __int64 *ProcessorFlushList; // r13
  char *p_Blink; // rbx
  unsigned __int64 ValidPte; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int8 v28; // al
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  int v37; // eax
  __int64 v38; // rdx
  int v39; // ebx
  unsigned __int64 v40; // rcx
  unsigned __int8 v41; // [rsp+30h] [rbp-88h]
  __int64 v42; // [rsp+38h] [rbp-80h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h]
  int v44; // [rsp+48h] [rbp-70h]
  int v45; // [rsp+4Ch] [rbp-6Ch]
  unsigned __int64 v46; // [rsp+50h] [rbp-68h]
  unsigned int v47; // [rsp+58h] [rbp-60h]
  __int64 v48; // [rsp+60h] [rbp-58h]
  int v49; // [rsp+68h] [rbp-50h]
  unsigned __int64 v50; // [rsp+70h] [rbp-48h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int64 v53; // [rsp+D8h] [rbp+20h] BYREF

  v53 = a4;
  v52 = a3;
  v11 = *(_DWORD *)(a3 + 64);
  v12 = a4;
  if ( (v11 & 1) == 0 )
  {
    v13 = *(_QWORD *)(a3 + 72);
    v14 = a5 - a4 + 1;
    v52 = v14;
    if ( *(_BYTE *)(v13 + 76) && (a8 & 0x20000000) != 0 )
    {
      *a9 = 4;
      result = 0LL;
    }
    else
    {
      result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v53, (unsigned int)&v52, a6, (__int64)a9);
      if ( (int)result < 0 )
        return result;
      v12 = v53;
      v14 = v52;
    }
    *a10 = v12;
    *a11 = v14;
    return result;
  }
  v16 = a8;
  v17 = 0;
  v18 = a7;
  v19 = a8 & 0x20000000;
  if ( (a8 & 0x20000000) != 0 )
  {
    if ( (a8 & 0x90000000) != 0 )
      return 3221225541LL;
  }
  else
  {
    if ( (v11 & 2) == 0 || (*(_DWORD *)(a3 + 72) & 1) == 0 )
      return 3221225496LL;
    if ( a8 < 0 )
    {
      if ( a8 == 0x80000000 && !a6 )
      {
        v17 = 8;
        goto LABEL_29;
      }
      return 3221225541LL;
    }
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( a8 != 0x10000000 || a6 )
        return 3221225541LL;
      v17 = 128;
      goto LABEL_29;
    }
  }
  if ( a7 <= 7 )
  {
    if ( (a7 & 5) == 5 )
      return 3221225541LL;
    v17 = (a7 & 4 | 2) >> 1;
    if ( (a7 & 2) != 0 )
      v17 |= 4u;
  }
  else if ( a7 != 24 || v19 )
  {
    return 3221225541LL;
  }
LABEL_29:
  v20 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = -1;
  v21 = 0LL;
  v42 = -1LL;
  v45 = 0;
  ProcessorFlushList = 0LL;
  p_Blink = (char *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v48 = (__int64)p_Blink;
  if ( !v19 )
    v18 = a7 & 2 | 4;
  v47 = v19 != 0 ? 2 : 4;
  ValidPte = MiMakeValidPte(v20, -1LL, v18 | 0x80000000);
  v28 = MiLockWorkingSetShared((__int64)p_Blink, v25, v26, v27);
  v44 = 0;
  v29 = -1LL;
  v41 = v28;
  v30 = v53 & 0xFFFFFFFFFFFFF000uLL;
  v50 = v53 & 0xFFFFFFFFFFFFF000uLL;
  while ( 2 )
  {
    v46 = v30;
    v31 = v20;
    while ( 1 )
    {
      BugCheckParameter1 = v31;
      if ( v31 > v51 )
        break;
      if ( (v31 & 0x78) != 0 || v31 == v20 )
      {
        if ( v21 )
          goto LABEL_46;
      }
      else
      {
        if ( (unsigned int)MiWorkingSetIsContended((__int64)p_Blink, 0) || KeShouldYieldProcessor() )
          goto LABEL_40;
        if ( v21 )
        {
          if ( !(unsigned int)MiPageTableLockIsContended((__int64)p_Blink, v21) )
          {
            v31 = BugCheckParameter1;
LABEL_46:
            if ( (v31 & 0xFFF) != 0 )
              goto LABEL_50;
            goto LABEL_47;
          }
LABEL_40:
          MiFlushEnclaveTb(ProcessorFlushList, v42, v16);
          v42 = -1LL;
          ProcessorFlushList = 0LL;
          if ( v21 )
          {
            MiUnlockPageTableInternal((__int64)p_Blink, v21);
            v21 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)p_Blink, v41);
          MiLockWorkingSetShared((__int64)p_Blink, v32, v33, v34);
        }
      }
LABEL_47:
      MiFlushEnclaveTb(ProcessorFlushList, v42, v16);
      v42 = -1LL;
      ProcessorFlushList = 0LL;
      if ( v21 )
        MiUnlockPageTableInternal((__int64)p_Blink, v21);
      v21 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(BugCheckParameter1, (*(_DWORD *)(v52 + 48) >> 12) & 0x7F, v41, 0);
      v31 = BugCheckParameter1;
LABEL_50:
      if ( !v44 )
      {
        v35 = MI_READ_PTE_LOCK_FREE(v31);
        if ( (v35 & 1) == 0 )
          goto LABEL_64;
        if ( BugCheckParameter1 == v20 )
          v49 = (*(_DWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
LABEL_71:
        v29 = v42;
        goto LABEL_72;
      }
      if ( v44 != v47 - 1 )
      {
        if ( v44 == 1 )
        {
          v45 = KeCanChangeEnclavePageProtection(v46, v17);
          if ( v45 < 0 )
          {
LABEL_64:
            v38 = v42;
            v39 = -1073741800;
            goto LABEL_65;
          }
        }
        else
        {
          KeChangeEnclavePageProtection(v46, v17);
          KeTrackEnclaveTbFlush((__int64)(*(_QWORD *)(v52 + 80) << 25) >> 16);
        }
        goto LABEL_71;
      }
      v36 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
      MiUpdateEnclavePfnProtection(48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v18);
      ValidPte = (v36 >> 12 << 12) ^ ((v36 >> 12 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      MiWriteEnclavePte(BugCheckParameter1, ValidPte, v52, 1LL, 0);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
        || (LOBYTE(v37) = MI_TIGHTER_PERMISSIONS(v36, ValidPte), v37) )
      {
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, v48, *((_DWORD *)ProcessorFlushList + 3), 8, 32);
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v46, 1LL, 0);
      }
      v29 = v46;
      v16 = a8;
      p_Blink = (char *)v48;
      v42 = v46;
LABEL_72:
      v31 = BugCheckParameter1 + 8;
      v46 += 4096LL;
    }
    v38 = v29;
    v39 = v45;
    if ( ++v44 < v47 )
    {
      p_Blink = (char *)v48;
      v30 = v50;
      v42 = v29;
      continue;
    }
    break;
  }
LABEL_65:
  MiFlushEnclaveTb(ProcessorFlushList, v38, v16);
  if ( v21 )
    MiUnlockPageTableInternal(v48, v21);
  MiUnlockWorkingSetShared(v48, v41);
  if ( v39 >= 0 )
  {
    *a9 = MmProtectToValue[v49];
    v40 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v50;
    *a10 = v50;
    v39 = 0;
    *a11 = v40 + 4096;
  }
  return (unsigned int)v39;
}
