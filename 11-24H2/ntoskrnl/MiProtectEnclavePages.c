/*
 * XREFs of MiProtectEnclavePages @ 0x1404CACEC
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DCA30 (MmProtectVirtualMemory.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MI_TIGHTER_PERMISSIONS @ 0x140436740 (MI_TIGHTER_PERMISSIONS.c)
 *     MiWriteEnclavePte @ 0x1404743C4 (MiWriteEnclavePte.c)
 *     KeCanChangeEnclavePageProtection @ 0x1405BA610 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x1405BA6D0 (KeChangeEnclavePageProtection.c)
 *     KeTrackEnclaveTbFlush @ 0x1405BA8C4 (KeTrackEnclaveTbFlush.c)
 *     MiFlushEnclaveTb @ 0x14068084C (MiFlushEnclaveTb.c)
 *     MiUpdateEnclavePfnProtection @ 0x140680B64 (MiUpdateEnclavePfnProtection.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140ABFED0 (VslDebugProtectSecureProcessMemory.c)
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
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  int v33; // ebx
  unsigned __int64 v34; // rcx
  unsigned __int8 v35; // [rsp+30h] [rbp-88h]
  __int64 v36; // [rsp+38h] [rbp-80h]
  ULONG_PTR BugCheckParameter1; // [rsp+40h] [rbp-78h]
  int v38; // [rsp+48h] [rbp-70h]
  int v39; // [rsp+4Ch] [rbp-6Ch]
  unsigned __int64 v40; // [rsp+50h] [rbp-68h]
  unsigned int v41; // [rsp+58h] [rbp-60h]
  __int64 v42; // [rsp+60h] [rbp-58h]
  int v43; // [rsp+68h] [rbp-50h]
  unsigned __int64 v44; // [rsp+70h] [rbp-48h]
  unsigned __int64 v45; // [rsp+78h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp+18h] BYREF
  unsigned __int64 v47; // [rsp+D8h] [rbp+20h] BYREF

  v47 = a4;
  v46 = a3;
  v11 = *(_DWORD *)(a3 + 64);
  v12 = a4;
  if ( (v11 & 1) == 0 )
  {
    v13 = *(_QWORD *)(a3 + 72);
    v14 = a5 - a4 + 1;
    v46 = v14;
    if ( *(_BYTE *)(v13 + 76) && (a8 & 0x20000000) != 0 )
    {
      *a9 = 4;
      result = 0LL;
    }
    else
    {
      result = VslDebugProtectSecureProcessMemory(a1, a2, (unsigned int)&v47, (unsigned int)&v46, a6, (__int64)a9);
      if ( (int)result < 0 )
        return result;
      v12 = v47;
      v14 = v46;
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
  v45 = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = -1;
  v21 = 0LL;
  v36 = -1LL;
  v39 = 0;
  ProcessorFlushList = 0LL;
  p_Blink = (char *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v42 = (__int64)p_Blink;
  if ( !v19 )
    v18 = a7 & 2 | 4;
  v41 = v19 != 0 ? 2 : 4;
  ValidPte = MiMakeValidPte(v20, -1LL, v18 | 0x80000000);
  v25 = MiLockWorkingSetShared((__int64)p_Blink);
  v38 = 0;
  v26 = -1LL;
  v35 = v25;
  v27 = v47 & 0xFFFFFFFFFFFFF000uLL;
  v44 = v47 & 0xFFFFFFFFFFFFF000uLL;
  while ( 2 )
  {
    v40 = v27;
    v28 = v20;
    while ( 1 )
    {
      BugCheckParameter1 = v28;
      if ( v28 > v45 )
        break;
      if ( (v28 & 0x78) != 0 || v28 == v20 )
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
            v28 = BugCheckParameter1;
LABEL_46:
            if ( (v28 & 0xFFF) != 0 )
              goto LABEL_50;
            goto LABEL_47;
          }
LABEL_40:
          MiFlushEnclaveTb(ProcessorFlushList, v36, v16);
          v36 = -1LL;
          ProcessorFlushList = 0LL;
          if ( v21 )
          {
            MiUnlockPageTableInternal((__int64)p_Blink, v21);
            v21 = 0LL;
          }
          MiUnlockWorkingSetShared((__int64)p_Blink, v35);
          MiLockWorkingSetShared((__int64)p_Blink);
        }
      }
LABEL_47:
      MiFlushEnclaveTb(ProcessorFlushList, v36, v16);
      v36 = -1LL;
      ProcessorFlushList = 0LL;
      if ( v21 )
        MiUnlockPageTableInternal((__int64)p_Blink, v21);
      v21 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(BugCheckParameter1, (*(_DWORD *)(v46 + 48) >> 12) & 0x7F, v35, 0);
      v28 = BugCheckParameter1;
LABEL_50:
      if ( !v38 )
      {
        v29 = MI_READ_PTE_LOCK_FREE(v28);
        if ( (v29 & 1) == 0 )
          goto LABEL_64;
        if ( BugCheckParameter1 == v20 )
          v43 = (*(_DWORD *)(48 * ((v29 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL) >> 5) & 0x1F;
LABEL_71:
        v26 = v36;
        goto LABEL_72;
      }
      if ( v38 != v41 - 1 )
      {
        if ( v38 == 1 )
        {
          v39 = KeCanChangeEnclavePageProtection(v40, v17);
          if ( v39 < 0 )
          {
LABEL_64:
            v32 = v36;
            v33 = -1073741800;
            goto LABEL_65;
          }
        }
        else
        {
          KeChangeEnclavePageProtection(v40, v17);
          KeTrackEnclaveTbFlush((__int64)(*(_QWORD *)(v46 + 80) << 25) >> 16);
        }
        goto LABEL_71;
      }
      v30 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
      MiUpdateEnclavePfnProtection(48 * ((v30 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, v18);
      ValidPte = (v30 >> 12 << 12) ^ ((v30 >> 12 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
      MiWriteEnclavePte(BugCheckParameter1, ValidPte, v46, 1, 0);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0
        || (LOBYTE(v31) = MI_TIGHTER_PERMISSIONS(v30, ValidPte), v31) )
      {
        if ( !ProcessorFlushList )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, v42, *((_DWORD *)ProcessorFlushList + 3), 8, 32);
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, v40, 1LL, 0);
      }
      v26 = v40;
      v16 = a8;
      p_Blink = (char *)v42;
      v36 = v40;
LABEL_72:
      v28 = BugCheckParameter1 + 8;
      v40 += 4096LL;
    }
    v32 = v26;
    v33 = v39;
    if ( ++v38 < v41 )
    {
      p_Blink = (char *)v42;
      v27 = v44;
      v36 = v26;
      continue;
    }
    break;
  }
LABEL_65:
  MiFlushEnclaveTb(ProcessorFlushList, v32, v16);
  if ( v21 )
    MiUnlockPageTableInternal(v42, v21);
  MiUnlockWorkingSetShared(v42, v35);
  if ( v33 >= 0 )
  {
    *a9 = MmProtectToValue[v43];
    v34 = (a5 & 0xFFFFFFFFFFFFF000uLL) - v44;
    *a10 = v44;
    v33 = 0;
    *a11 = v34 + 4096;
  }
  return (unsigned int)v33;
}
