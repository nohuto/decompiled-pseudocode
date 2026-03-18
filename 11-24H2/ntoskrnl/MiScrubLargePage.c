/*
 * XREFs of MiScrubLargePage @ 0x14068DA04
 * Callers:
 *     MiScrubLargePageRegions @ 0x1406F80D4 (MiScrubLargePageRegions.c)
 * Callees:
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140222210 (MiInsertPageInFreeOrZeroedList.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiGetPfnPageSizeIndex @ 0x1403070C0 (MiGetPfnPageSizeIndex.c)
 *     MiWriteLargePte @ 0x1403090A0 (MiWriteLargePte.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 *     MiScrubPage @ 0x1403F5970 (MiScrubPage.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 *     MiPreparePageAccessor @ 0x140432670 (MiPreparePageAccessor.c)
 *     MiBeginPageAccessor @ 0x1404342F0 (MiBeginPageAccessor.c)
 *     MiUpdatePageMoveInProgressInternal @ 0x14043A010 (MiUpdatePageMoveInProgressInternal.c)
 *     MiScrubInterrupted @ 0x1404898E0 (MiScrubInterrupted.c)
 *     MiRemoveFaultNode @ 0x1404FA894 (MiRemoveFaultNode.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiScrubLargePage(__int64 a1, ULONG_PTR a2, unsigned int a3)
{
  unsigned int v3; // r13d
  unsigned int v5; // r14d
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  char v11; // r12
  __int64 v12; // rbx
  unsigned __int64 UltraMapping; // r15
  int v14; // r8d
  unsigned __int64 v15; // rsi
  __int64 *v16; // rsi
  ULONG_PTR ValidPte; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 *v21; // rbx
  unsigned __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // r8
  char v25; // al
  __int64 v26; // rcx
  int v27; // edx
  int v28; // ecx
  __int64 v29; // r12
  int v30; // eax
  char v31; // r15
  signed __int32 v33[8]; // [rsp+0h] [rbp-258h] BYREF
  char v34; // [rsp+30h] [rbp-228h]
  int v35; // [rsp+34h] [rbp-224h]
  unsigned int v36; // [rsp+38h] [rbp-220h]
  __int64 v37; // [rsp+40h] [rbp-218h]
  unsigned __int64 v38; // [rsp+48h] [rbp-210h] BYREF
  __int64 v39; // [rsp+50h] [rbp-208h]
  __int64 *v40; // [rsp+58h] [rbp-200h]
  __int64 v41; // [rsp+60h] [rbp-1F8h]
  ULONG_PTR v42; // [rsp+68h] [rbp-1F0h]
  __int64 v43; // [rsp+70h] [rbp-1E8h] BYREF
  unsigned int v44; // [rsp+78h] [rbp-1E0h]
  unsigned __int64 v45; // [rsp+80h] [rbp-1D8h]
  _BYTE *v46; // [rsp+88h] [rbp-1D0h]
  __int64 *v47; // [rsp+90h] [rbp-1C8h]
  __int64 v48; // [rsp+98h] [rbp-1C0h]
  ULONG_PTR v49; // [rsp+A0h] [rbp-1B8h]
  _DWORD *v50; // [rsp+A8h] [rbp-1B0h]
  ULONG_PTR v51; // [rsp+B0h] [rbp-1A8h]
  _BYTE v52[24]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-180h] BYREF
  __int64 *v54; // [rsp+1E0h] [rbp-78h]
  unsigned __int64 v55; // [rsp+1E8h] [rbp-70h]
  unsigned __int64 v56; // [rsp+1F0h] [rbp-68h]
  char v57; // [rsp+206h] [rbp-52h]

  v3 = a3;
  v36 = a3;
  v42 = a2;
  v41 = a1;
  v48 = a1;
  v49 = a2;
  v44 = a3;
  v5 = 0;
  v43 = 0LL;
  v38 = 0LL;
  v35 = 0;
  v37 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  v40 = &MiPageSizes[a3];
  v39 = *v40;
  v46 = v52;
  memset_0(v52, 0, 0x148uLL);
  MiPreparePageAccessor((__int64)v52);
  v57 = 1;
  v50 = (_DWORD *)&CurrentThread[1].SwapListEntry + 3;
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x100u;
  v8 = 48 * a2 - 0x220000000000LL;
  v45 = v8;
  v11 = MiSafeLockPage(a2, v9, v10);
  if ( v11 != 17 )
  {
    if ( (*(_BYTE *)(v8 + 34) & 7u) > 1
      || (unsigned int)MiGetPfnPageSizeIndex(48 * a2 - 0x220000000000LL) != v3
      || *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) != v37 )
    {
      goto LABEL_42;
    }
    if ( (unsigned __int16)*(_DWORD *)(v8 + 32) )
      KeBugCheckEx(0x4Eu, 0x8DuLL, a2, *(unsigned int *)(v8 + 32), *(_QWORD *)(v8 + 8));
    if ( ((*(_BYTE *)(v8 + 34) & 7) != 0
       || (v12 = *(_QWORD *)(v37 + 16) + 57216LL * (unsigned int)MI_NODE_FROM_PFN(48 * a2 - 0x220000000000LL),
           MiUpdatePageMoveInProgressInternal(v12, v3, 1, 0),
           MiUnlinkFreeOrZeroedPage(a2, 0LL, 0LL),
           MiInsertPageInFreeOrZeroedList(a2, 66LL),
           MiUpdatePageMoveInProgressInternal(v12, v3, 0, 0),
           _InterlockedOr(v33, 0),
           (*(_BYTE *)(v8 + 34) & 7) == 1))
      && (unsigned int)MiBeginPageAccessor((unsigned __int64)v52, v3, 48 * a2 - 0x220000000000LL, 0) )
    {
      v47 = &v53;
      UltraMapping = MiGetUltraMapping(32 * v7 + v41 + 48, v3, *v40, 4);
      v55 = UltraMapping;
      v56 = UltraMapping + (v39 << 12) - 1;
      v14 = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x220000000000LL) | 0xA0000000;
      if ( v3 > 1 )
      {
        v16 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v54 = v16;
        ValidPte = MiMakeValidPte((unsigned __int64)v16, v42, v14);
        v18 = 8 * v39;
        v37 = 8 * v39;
        v40 = &v16[v39];
        if ( v16 < v40 )
        {
          do
          {
            v51 = ValidPte;
            if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v16 >= 0xFFFFF6C000000000uLL )
              MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v16, ValidPte, 128);
            *v16 = ValidPte;
            ValidPte = ((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096) ^ (((ValidPte & 0xFFFFFFFFFFFFF000uLL) + 4096) ^ ValidPte) & 0xFFF0000000000FFFuLL;
            ++v16;
          }
          while ( v16 < v40 );
          v3 = v36;
          v18 = v37;
        }
        v15 = (unsigned __int64)v16 - v18;
      }
      else
      {
        v15 = MiWriteLargePte(UltraMapping, a2, v3, v14 | 0x4000000u);
        v54 = (__int64 *)v15;
      }
      v37 = v15;
      MiUnlockPage(v8, v11);
      v36 = 0;
      v35 = 0;
      v21 = (__int64 *)v8;
      v40 = (__int64 *)v8;
      v22 = v8 + 48 * v39;
      v43 = v22;
      while ( 1 )
      {
        v39 = UltraMapping;
        if ( v8 >= v22 )
        {
          v30 = v36;
          v29 = (__int64)v46;
          goto LABEL_34;
        }
        v35 = MiScrubPage(v41, v8, UltraMapping, 0);
        LODWORD(v38) = MiScrubInterrupted(v41);
        v25 = MiSafeLockPage(v42, v23, v24);
        v34 = v25;
        v26 = *v47;
        v27 = v35;
        if ( (*v47 & 2) != 0 )
          v27 = 0;
        v35 = v27;
        v28 = v26 & 1;
        if ( v28 || (_DWORD)v38 || v27 < 0 )
          break;
        MiUnlockPage((__int64)v21, v25);
        v8 += 48LL;
        v45 = v8;
        UltraMapping += 4096LL;
      }
      if ( !v28 )
      {
        MiStopPageAccessor(v21, 0LL, 0LL);
        MiZeroPageWorkMapping(v3, v15, 0);
        v25 = v34;
      }
      if ( v25 != 17 )
        MiUnlockPage((__int64)v21, v25);
      v29 = (__int64)v46;
      MiRemoveFaultNode((__int64)v46, 0);
      v30 = 1;
LABEL_34:
      if ( !v30 )
      {
        v31 = MiSafeLockPage(v42, v19, v20);
        if ( (*v47 & 1) == 0 )
        {
          MiStopPageAccessor(v21, 0LL, 0LL);
          MiZeroPageWorkMapping(v3, v15, 0);
        }
        if ( v31 != 17 )
          MiUnlockPage((__int64)v21, v31);
        MiRemoveFaultNode(v29, 0);
      }
      if ( v35 < 0 )
      {
        v43 = 4096LL;
        v38 = (0xAAAAAAAAAAAAB000uLL * ((__int64)(v8 + 0x220000000000LL) >> 4)) | 1;
        MmMarkPhysicalMemoryAsBad((int *)&v38, &v43);
      }
    }
    else
    {
LABEL_42:
      MiUnlockPage(48 * a2 - 0x220000000000LL, v11);
    }
  }
  *v50 &= ~0x100u;
  LOBYTE(v5) = v35 >= 0;
  return v5;
}
