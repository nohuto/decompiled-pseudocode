/*
 * XREFs of MiScrubLargePage @ 0x14068EB34
 * Callers:
 *     MiScrubLargePageRegions @ 0x1406F60D4 (MiScrubLargePageRegions.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14024EF60 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140310FA0 (MiGetPfnPageSizeIndex.c)
 *     MiWriteLargePte @ 0x140312F80 (MiWriteLargePte.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiScrubPage @ 0x1403EBDB0 (MiScrubPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiZeroPageWorkMapping @ 0x140421920 (MiZeroPageWorkMapping.c)
 *     MiPreparePageAccessor @ 0x140424F00 (MiPreparePageAccessor.c)
 *     MiBeginPageAccessor @ 0x140425C90 (MiBeginPageAccessor.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x14042CA30 (MiUpdatePageMoveInProgressInternal.c)
 *     MiScrubInterrupted @ 0x1404845F4 (MiScrubInterrupted.c)
 *     MiRemoveFaultNode @ 0x1404F8174 (MiRemoveFaultNode.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiScrubLargePage(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // r14d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  char v9; // r12
  __int64 v10; // rbx
  unsigned __int64 UltraMapping; // r15
  int v12; // r8d
  unsigned __int64 v13; // rsi
  __int64 *v14; // rsi
  ULONG_PTR ValidPte; // rbx
  __int64 v16; // rax
  __int64 *v17; // rbx
  unsigned __int64 v18; // r12
  char v19; // al
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // r12
  int v25; // eax
  __int64 v26; // r9
  char v27; // r15
  signed __int32 v29[8]; // [rsp+0h] [rbp-258h] BYREF
  char v30; // [rsp+30h] [rbp-228h]
  int v31; // [rsp+34h] [rbp-224h]
  unsigned int v32; // [rsp+38h] [rbp-220h]
  __int64 v33; // [rsp+40h] [rbp-218h]
  unsigned __int64 v34; // [rsp+48h] [rbp-210h] BYREF
  __int64 v35; // [rsp+50h] [rbp-208h]
  __int64 *v36; // [rsp+58h] [rbp-200h]
  __int64 v37; // [rsp+60h] [rbp-1F8h]
  ULONG_PTR v38; // [rsp+68h] [rbp-1F0h]
  __int64 v39; // [rsp+70h] [rbp-1E8h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-1E0h]
  unsigned __int64 v41; // [rsp+80h] [rbp-1D8h]
  _BYTE *v42; // [rsp+88h] [rbp-1D0h]
  __int64 *v43; // [rsp+90h] [rbp-1C8h]
  __int64 v44; // [rsp+98h] [rbp-1C0h]
  ULONG_PTR v45; // [rsp+A0h] [rbp-1B8h]
  _DWORD *v46; // [rsp+A8h] [rbp-1B0h]
  ULONG_PTR v47; // [rsp+B0h] [rbp-1A8h]
  _BYTE v48[24]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v49; // [rsp+D8h] [rbp-180h] BYREF
  __int64 *v50; // [rsp+1E0h] [rbp-78h]
  unsigned __int64 v51; // [rsp+1E8h] [rbp-70h]
  unsigned __int64 v52; // [rsp+1F0h] [rbp-68h]
  char v53; // [rsp+206h] [rbp-52h]

  v3 = a3;
  v32 = a3;
  v38 = a2;
  v37 = a1;
  v44 = a1;
  v45 = a2;
  v40 = a3;
  v5 = 0;
  v39 = 0LL;
  v34 = 0LL;
  v31 = 0;
  v33 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  v36 = &MiPageSizes[a3];
  v35 = *v36;
  v42 = v48;
  memset_0(v48, 0, 0x148uLL);
  MiPreparePageAccessor((__int64)v48);
  v53 = 1;
  v46 = (_DWORD *)&CurrentThread[1].SwapListEntry + 3;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v8 = 48 * a2 - 0x220000000000LL;
  v41 = v8;
  v9 = MiSafeLockPage(a2);
  if ( v9 != 17 )
  {
    if ( (*(_BYTE *)(v8 + 34) & 7u) > 1
      || (unsigned int)MiGetPfnPageSizeIndex(48 * a2 - 0x220000000000LL) != v3
      || *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != v33 )
    {
      goto LABEL_42;
    }
    if ( (unsigned __int16)*(_DWORD *)(v8 + 32) )
      KeBugCheckEx(0x4Eu, 0x8DuLL, a2, *(unsigned int *)(v8 + 32), *(_QWORD *)(v8 + 8));
    if ( ((*(_BYTE *)(v8 + 34) & 7) != 0
       || (v10 = *(_QWORD *)(v33 + 16) + 57216LL * (unsigned int)MI_NODE_FROM_PFN(48 * a2 - 0x220000000000LL),
           MiUpdatePageMoveInProgressInternal(v10, v3, 1, 0),
           MiUnlinkFreeOrZeroedPage(a2, 0LL, 0),
           MiInsertPageInFreeOrZeroedList(a2, 66LL),
           MiUpdatePageMoveInProgressInternal(v10, v3, 0, 0),
           _InterlockedOr(v29, 0),
           (*(_BYTE *)(v8 + 34) & 7) == 1))
      && (unsigned int)MiBeginPageAccessor((unsigned __int64)v48, v3, 48 * a2 - 0x220000000000LL, 0) )
    {
      v43 = &v49;
      UltraMapping = MiGetUltraMapping(32 * v7 + v37 + 48, v3, *v36, 4);
      v51 = UltraMapping;
      v52 = UltraMapping + (v35 << 12) - 1;
      v12 = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x220000000000LL) | 0xA0000000;
      if ( v3 > 1 )
      {
        v14 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v50 = v14;
        ValidPte = MiMakeValidPte((unsigned __int64)v14, v38, v12);
        v16 = 8 * v35;
        v33 = 8 * v35;
        v36 = &v14[v35];
        if ( v14 < v36 )
        {
          do
          {
            v47 = ValidPte;
            if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v14 >= 0xFFFFF6C000000000uLL )
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v14, ValidPte, 128LL);
            *v14 = ValidPte;
            ValidPte = ((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096) ^ (((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096) ^ ValidPte) & 0xFFF0000000000FFFuLL;
            ++v14;
          }
          while ( v14 < v36 );
          v3 = v32;
          v16 = v33;
        }
        v13 = (unsigned __int64)v14 - v16;
      }
      else
      {
        v13 = MiWriteLargePte(UltraMapping, a2, v3, v12 | 0x4000000u);
        v50 = (__int64 *)v13;
      }
      v33 = v13;
      MiUnlockPage(v8, v9);
      v32 = 0;
      v31 = 0;
      v17 = (__int64 *)v8;
      v36 = (__int64 *)v8;
      v18 = v8 + 48 * v35;
      v39 = v18;
      while ( 1 )
      {
        v35 = UltraMapping;
        if ( v8 >= v18 )
        {
          v25 = v32;
          v24 = (__int64)v42;
          goto LABEL_34;
        }
        v31 = MiScrubPage(v37, v8, UltraMapping, 0);
        LODWORD(v34) = MiScrubInterrupted(v37);
        v19 = MiSafeLockPage(v38);
        v30 = v19;
        v21 = *v43;
        v22 = v31;
        if ( (*v43 & 2) != 0 )
          v22 = 0;
        v31 = v22;
        v23 = v21 & 1;
        if ( v23 || (_DWORD)v34 || v22 < 0 )
          break;
        MiUnlockPage((__int64)v17, v19);
        v8 += 48LL;
        v41 = v8;
        UltraMapping += 4096LL;
      }
      if ( !v23 )
      {
        MiStopPageAccessor(v17, 0LL, 0LL, v20);
        MiZeroPageWorkMapping(v3, v13, 0);
        v19 = v30;
      }
      if ( v19 != 17 )
        MiUnlockPage((__int64)v17, v19);
      v24 = (__int64)v42;
      MiRemoveFaultNode((__int64)v42, 0);
      v25 = 1;
LABEL_34:
      if ( !v25 )
      {
        v27 = MiSafeLockPage(v38);
        if ( (*v43 & 1) == 0 )
        {
          MiStopPageAccessor(v17, 0LL, 0LL, v26);
          MiZeroPageWorkMapping(v3, v13, 0);
        }
        if ( v27 != 17 )
          MiUnlockPage((__int64)v17, v27);
        MiRemoveFaultNode(v24, 0);
      }
      if ( v31 < 0 )
      {
        v39 = 4096LL;
        v34 = (0xAAAAAAAAAAAAB000uLL * ((__int64)(v8 + 0x220000000000LL) >> 4)) | 1;
        MmMarkPhysicalMemoryAsBad((int *)&v34, &v39);
      }
    }
    else
    {
LABEL_42:
      MiUnlockPage(48 * a2 - 0x220000000000LL, v9);
    }
  }
  *v46 &= ~0x100u;
  LOBYTE(v5) = v31 >= 0;
  return v5;
}
