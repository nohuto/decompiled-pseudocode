/*
 * XREFs of MiMapPageFileHash @ 0x140486688
 * Callers:
 *     MiGatherPagefilePages @ 0x14039C8C8 (MiGatherPagefilePages.c)
 *     MiStoreUpdatePagefileHash @ 0x140486554 (MiStoreUpdatePagefileHash.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14020C57C (MiReleaseNonPagedResources.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140368F40 (MiUpdatePageFileHighInPte.c)
 *     MiInitializePfnForOtherProcess @ 0x140396C84 (MiInitializePfnForOtherProcess.c)
 *     MiWritePageFileHash @ 0x14039E350 (MiWritePageFileHash.c)
 *     MiGetFileHashPage @ 0x140486B9C (MiGetFileHashPage.c)
 *     MiFreePageFileHashPfn @ 0x1404A8FE0 (MiFreePageFileHashPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 updated; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  unsigned __int32 v25; // eax
  __int64 FileHashPage; // rax
  __int64 v27; // r13
  __int64 v28; // rsi
  unsigned __int8 v29; // r15
  volatile LONG *v30; // rcx
  KIRQL v31; // bl
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // r8d
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned int v41; // ebx
  signed __int32 v42[8]; // [rsp+0h] [rbp-98h] BYREF
  int v43; // [rsp+20h] [rbp-78h]
  _QWORD *v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h]
  __int128 v46; // [rsp+50h] [rbp-48h] BYREF
  int v47; // [rsp+B8h] [rbp+20h]

  v47 = a4;
  v5 = *(_QWORD *)(a1 + 184) == 0LL;
  v46 = 0LL;
  v6 = a4;
  if ( !v5 )
  {
    MiInitializePageColorBase((__int64)&unk_140E38100, 3, 0, (__int64)&v46);
    v10 = a2 + 8 * a3 + 48;
    v44 = (_QWORD *)v10;
    CurrentIrql = KeGetCurrentIrql();
    v12 = CurrentIrql;
    if ( CurrentIrql == 2 )
      v12 = 17;
    v43 = v12;
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
      v45 = *(_QWORD *)(a1 + 184);
      v15 = a5;
      v16 = (((v45 + (unsigned __int64)(unsigned int)(dword_140E3728C * v6)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v17 = (4096 - (((_DWORD)v45 + dword_140E3728C * v6) & 0xFFFu)) / dword_140E3728C;
      if ( v17 <= a5 )
        v15 = v17;
      if ( (*(_QWORD *)v16 & 1) != 0 )
      {
        v18 = *(_QWORD *)(48 * ((*(_QWORD *)v16 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
        v19 = v18;
        if ( qword_140E2DB80 )
        {
          if ( (v18 & 0x10) == 0 )
            v19 = v18 & ~qword_140E2DB80;
        }
        updated = MiUpdatePageFileHighInPte(v18, (unsigned int)v15 + HIDWORD(v19));
        *(_QWORD *)(v22 + 8 * v21) = updated;
        MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v14);
        v23 = (_QWORD *)v10;
      }
      else
      {
        MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v14);
        v25 = _InterlockedExchangeAdd((volatile signed __int32 *)v46, 1u);
        FileHashPage = MiGetFileHashPage(
                         a1,
                         DWORD2(v46) ^ (unsigned int)(unsigned __int8)(BYTE8(v46) ^ (v25
                                                                                   % *(&MiState
                                                                                     + ((*((_QWORD *)&v46 + 1) >> 16) & 3LL)
                                                                                     + 1120))));
        v27 = FileHashPage;
        if ( FileHashPage == -1 )
        {
          v28 = 0LL;
          v29 = 17;
          v30 = (volatile LONG *)(a1 + 200);
          if ( (_BYTE)v43 == 17 )
          {
            v31 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(v30);
          }
          else
          {
            v31 = ExAcquireSpinLockExclusive(v30);
          }
        }
        else
        {
          v28 = 48 * FileHashPage - 0x220000000000LL;
          _InterlockedOr(v42, 0);
          MiSetPfnTbFlushStamp(v28, (unsigned int)KiTbFlushTimeStamp, 0);
          MiInitializePfnForOtherProcess(
            v27,
            v16,
            (*(_QWORD *)(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL,
            2560);
          if ( (_BYTE)v43 == 17 )
          {
            v29 = 17;
          }
          else
          {
            v29 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v39) = 2;
              LOBYTE(v40) = v29;
              KiRaiseIrqlProcessIrqlFlags(v40, v39);
            }
          }
          v41 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v41 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v41);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v28 + 24) < 0 );
          }
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
          v31 = 17;
        }
        if ( v45 != *(_QWORD *)(a1 + 184) )
        {
          MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v31);
          if ( v27 != -1 )
          {
            MiFreePageFileHashPfn(v27);
            MiUnlockPage(v28, v29);
            MiReleaseNonPagedResources(*(_QWORD *)(a1 + 216), 1uLL);
            _InterlockedDecrement64(&qword_140E387E8);
          }
          v24 = a5;
          v6 = v47;
          goto LABEL_16;
        }
        v32 = *(_QWORD *)v16;
        v33 = *(_QWORD *)v16;
        if ( qword_140E2DB80 && (v32 & 0x10) == 0 )
          v33 = v32 & ~qword_140E2DB80;
        v34 = (unsigned int)(v15 + HIDWORD(v33));
        if ( v27 == -1 )
        {
          *(_QWORD *)v16 = MiUpdatePageFileHighInPte(v32, v34);
          MiReleaseSpinLockExclusive((_DWORD *)(a1 + 200), v31);
          v6 = v47;
          goto LABEL_15;
        }
        *(_QWORD *)(v28 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v28 + 16), v34);
        if ( v35 )
          MiSetPfnModified(v28, 0);
        ValidPte = MiMakeValidPte(v16, v27, -1610612732);
        v37 = ValidPte;
        if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && v16 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v16, ValidPte, 128);
        *(_QWORD *)v16 = v37;
        v38 = *(_DWORD *)(a1 + 176) + 1;
        *(_DWORD *)(a1 + 176) = v38;
        if ( v38 > *(_DWORD *)(a1 + 180) )
          *(_DWORD *)(a1 + 180) = v38;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 200));
        MiUnlockPage(v28, v29);
        v23 = v44;
        v6 = v47;
      }
      MiWritePageFileHash(a1, v23, v6, v15);
LABEL_15:
      v6 += v15;
      v24 = a5 - v15;
      v47 = v6;
      a5 -= v15;
      v44 += v15;
LABEL_16:
      LOBYTE(v12) = v43;
      v10 = (__int64)v44;
    }
    while ( v24 );
  }
}
