/*
 * XREFs of MiMapPageFileHash @ 0x1402D1A18
 * Callers:
 *     MiStoreUpdatePagefileHash @ 0x1402D18E4 (MiStoreUpdatePagefileHash.c)
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiWritePageFileHash @ 0x140226C80 (MiWritePageFileHash.c)
 *     MiInitializePageColorBase @ 0x14023A610 (MiInitializePageColorBase.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiGetFileHashPage @ 0x1402D1F24 (MiGetFileHashPage.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSetPfnModified @ 0x1403871E0 (MiSetPfnModified.c)
 *     MiFreePageFileHashPfn @ 0x1404A8010 (MiFreePageFileHashPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiMapPageFileHash(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  bool v5; // zf
  int v6; // r15d
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // al
  int v12; // ecx
  volatile LONG *v13; // rcx
  KIRQL v14; // bl
  __int64 v15; // r12
  unsigned __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 updated; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rdx
  unsigned int v26; // eax
  unsigned __int32 v27; // eax
  __int64 FileHashPage; // rax
  __int64 v29; // r13
  __int64 v30; // rsi
  unsigned __int8 v31; // r15
  volatile LONG *v32; // rcx
  KIRQL v33; // bl
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  int v38; // r8d
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v40; // rbx
  unsigned int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // ebx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rdx
  signed __int32 v48[8]; // [rsp+0h] [rbp-98h] BYREF
  int v49; // [rsp+20h] [rbp-78h]
  __int64 *v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+30h] [rbp-68h]
  __int128 v52; // [rsp+50h] [rbp-48h] BYREF
  int v53; // [rsp+B8h] [rbp+20h]

  v53 = a4;
  v5 = *(_QWORD *)(a1 + 184) == 0LL;
  v52 = 0LL;
  v6 = a4;
  if ( !v5 )
  {
    MiInitializePageColorBase((__int64)&unk_140E37EC0, 3, 0, (__int64)&v52);
    v10 = a2 + 8 * a3 + 48;
    v50 = (__int64 *)v10;
    CurrentIrql = KeGetCurrentIrql();
    v12 = CurrentIrql;
    if ( CurrentIrql == 2 )
      v12 = 17;
    v49 = v12;
    do
    {
      v5 = (_BYTE)v12 == 17;
      v13 = (volatile LONG *)(a1 + 200);
      if ( v5 )
      {
        v14 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v13);
      }
      else
      {
        v14 = ExAcquireSpinLockExclusive(v13);
      }
      v51 = *(_QWORD *)(a1 + 184);
      v15 = a5;
      v16 = (((v51 + (unsigned __int64)(unsigned int)(dword_140E3704C * v6)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v18 = (4096 - (((_DWORD)v51 + dword_140E3704C * v6) & 0xFFFu)) % dword_140E3704C;
      v17 = (4096 - (((_DWORD)v51 + dword_140E3704C * v6) & 0xFFFu)) / dword_140E3704C;
      if ( v17 <= a5 )
        v15 = v17;
      if ( (*(_QWORD *)v16 & 1) != 0 )
      {
        v19 = *(_QWORD *)(48 * ((*(_QWORD *)v16 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
        v20 = v19;
        if ( qword_140E2D940 )
        {
          if ( (v19 & 0x10) == 0 )
            v20 = v19 & ~qword_140E2D940;
        }
        updated = MiUpdatePageFileHighInPte(v19, (unsigned int)v15 + HIDWORD(v20));
        LOBYTE(v22) = v14;
        *(_QWORD *)(v24 + 8 * v23) = updated;
        MiReleaseSpinLockExclusive(a1 + 200, v22);
        v25 = (__int64 *)v10;
      }
      else
      {
        LOBYTE(v18) = v14;
        MiReleaseSpinLockExclusive(a1 + 200, v18);
        v27 = _InterlockedExchangeAdd((volatile signed __int32 *)v52, 1u);
        FileHashPage = MiGetFileHashPage(
                         a1,
                         DWORD2(v52) ^ (unsigned int)(unsigned __int8)(BYTE8(v52) ^ (v27
                                                                                   % *(&MiState
                                                                                     + ((*((_QWORD *)&v52 + 1) >> 16) & 3LL)
                                                                                     + 1120))));
        v29 = FileHashPage;
        if ( FileHashPage == -1 )
        {
          v30 = 0LL;
          v31 = 17;
          v32 = (volatile LONG *)(a1 + 200);
          if ( (_BYTE)v49 == 17 )
          {
            v33 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(v32);
          }
          else
          {
            v33 = ExAcquireSpinLockExclusive(v32);
          }
        }
        else
        {
          v30 = 48 * FileHashPage - 0x220000000000LL;
          _InterlockedOr(v48, 0);
          MiSetPfnTbFlushStamp(v30, (unsigned int)KiTbFlushTimeStamp, 0);
          MiInitializePfnForOtherProcess(
            v29,
            v16,
            (*(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL,
            2560);
          if ( (_BYTE)v49 == 17 )
          {
            v31 = 17;
          }
          else
          {
            v31 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v43) = v31;
              KiRaiseIrqlProcessIrqlFlags(v43);
            }
          }
          v44 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v44 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v43) )
              {
                HvlNotifyLongSpinWait(v44);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v30 + 24) < 0 );
          }
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
          v33 = 17;
        }
        if ( v51 != *(_QWORD *)(a1 + 184) )
        {
          LOBYTE(v34) = v33;
          MiReleaseSpinLockExclusive(a1 + 200, v34);
          if ( v29 != -1 )
          {
            MiFreePageFileHashPfn(v29);
            LOBYTE(v47) = v31;
            MiUnlockPage(v30, v47);
            MiReleaseNonPagedResources(*(_QWORD *)(a1 + 216), 1uLL);
            _InterlockedDecrement64(&qword_140E385A8);
          }
          v26 = a5;
          v6 = v53;
          goto LABEL_16;
        }
        v35 = *(_QWORD *)v16;
        v36 = *(_QWORD *)v16;
        if ( qword_140E2D940 && (v35 & 0x10) == 0 )
          v36 = v35 & ~qword_140E2D940;
        v37 = (unsigned int)(v15 + HIDWORD(v36));
        if ( v29 == -1 )
        {
          v45 = MiUpdatePageFileHighInPte(v35, v37);
          LOBYTE(v46) = v33;
          *(_QWORD *)v16 = v45;
          MiReleaseSpinLockExclusive(a1 + 200, v46);
          v6 = v53;
          goto LABEL_15;
        }
        *(_QWORD *)(v30 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v30 + 16), v37);
        if ( v38 )
          MiSetPfnModified(v30, 0LL);
        ValidPte = MiMakeValidPte(v16, v29, -1610612732);
        v40 = ValidPte;
        if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v16 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v16, ValidPte);
        *(_QWORD *)v16 = v40;
        v41 = *(_DWORD *)(a1 + 176) + 1;
        *(_DWORD *)(a1 + 176) = v41;
        if ( v41 > *(_DWORD *)(a1 + 180) )
          *(_DWORD *)(a1 + 180) = v41;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
        LOBYTE(v42) = v31;
        MiUnlockPage(v30, v42);
        v25 = v50;
        v6 = v53;
      }
      MiWritePageFileHash(a1, v25, v6, v15);
LABEL_15:
      v6 += v15;
      v26 = a5 - v15;
      v53 = v6;
      a5 -= v15;
      v50 += v15;
LABEL_16:
      LOBYTE(v12) = v49;
      v10 = (__int64)v50;
    }
    while ( v26 );
  }
}
