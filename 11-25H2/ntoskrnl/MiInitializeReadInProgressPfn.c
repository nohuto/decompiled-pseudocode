/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x14023B62C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiPrivateFixup @ 0x140439BB4 (MiPrivateFixup.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     MiProtectionToCacheAttribute @ 0x14023B5F0 (MiProtectionToCacheAttribute.c)
 *     MiInPageSkipPage @ 0x14023C4E0 (MiInPageSkipPage.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiSetPfnTbFlushStamp @ 0x1402C7C70 (MiSetPfnTbFlushStamp.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiInitializeReadInProgressPfn(
        unsigned __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        char a6)
{
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned __int64 v10; // r13
  unsigned __int64 result; // rax
  unsigned __int8 v12; // si
  __int64 v13; // r14
  unsigned __int64 *v14; // r10
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // rbp
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v19; // rbx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rcx
  __int64 v22; // r10
  unsigned int v23; // r13d
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned int v26; // ebx
  signed __int64 v27; // rcx
  signed __int64 v28; // rdx
  signed __int64 i; // rax
  unsigned __int64 v30; // rcx
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  bool v36; // zf
  __int64 v37; // rax
  __int64 Address; // rax
  __int64 v39; // rdx
  unsigned int v40; // ecx
  __int64 v41; // [rsp+20h] [rbp-78h]
  __int64 ContainingPageTable; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+30h] [rbp-68h]
  unsigned __int64 v44; // [rsp+38h] [rbp-60h]
  int v46; // [rsp+A8h] [rbp+10h]
  int v47; // [rsp+A8h] [rbp+10h]
  int v48; // [rsp+A8h] [rbp+10h]
  unsigned int v49; // [rsp+A8h] [rbp+10h]
  char v50; // [rsp+B0h] [rbp+18h]

  ContainingPageTable = 0x3FFFFFFFFFLL;
  v7 = 0LL;
  v41 = 0LL;
  v8 = 0x3FFFFFFFFFLL;
  v9 = 0LL;
  v10 = a1;
  result = (unsigned __int64)&a2[(unsigned int)a3];
  v44 = result;
  if ( (unsigned __int64)a2 < result )
  {
    v12 = a6;
    do
    {
      v13 = 48LL * *a2 - 0x220000000000LL;
      result = MiInPageSkipPage(v13, v7, a3, v8);
      if ( !(_DWORD)result )
      {
        v16 = *v14;
        LODWORD(v17) = 0;
        LOBYTE(a3) = v15 & (v12 >> 6);
        DemandZeroPte = *v14;
        v50 = a3;
        if ( (_BYTE)a3 )
        {
          v36 = (unsigned int)MiIsPrototypePteVadLookup(v16, v7, a3) == 0;
          v37 = v16;
          if ( v36 )
          {
            if ( qword_140E2D940 )
            {
              if ( (v16 & 0x10) != 0 )
                v37 = v16 & 0xFFFFFFFFFFFFFFEFuLL;
              else
                v37 = v16 & ~qword_140E2D940;
            }
            v37 = *(_QWORD *)(48 * ((*(_QWORD *)(v37 >> 16) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
          }
          LODWORD(v17) = MmMakeProtectNotWriteCopy[((unsigned __int64)v37 >> 5) & 0x1F];
          DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v17);
        }
        else if ( (*v14 & 0xC00) == 0x800 )
        {
          v35 = *v14;
          if ( qword_140E2D940 )
          {
            if ( (v16 & 0x10) != 0 )
              v35 = v16 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v35 = v16 & ~qword_140E2D940;
          }
          DemandZeroPte = *(_QWORD *)(48 * ((v35 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
        }
        *(_QWORD *)(v13 + 16) = DemandZeroPte;
        if ( (_BYTE)a3 )
        {
          v20 = v17;
        }
        else
        {
          v19 = (DemandZeroPte >> 5) & 0x1F;
          if ( (v12 & 0x10) != 0 )
            *(_QWORD *)(v13 + 40) |= 0x8000000000000000uLL;
          v20 = v19;
          LOBYTE(v17) = v19;
          if ( (_DWORD)v19 == 24 && v10 <= 0x7FFFFFFEFFFFLL )
          {
            MiLockVadTree((unsigned int)v15);
            Address = MiLocateAddress(v10);
            LOBYTE(v39) = 17;
            v17 = Address;
            MiUnlockVadTree(1LL, v39);
            v40 = *(_DWORD *)(v17 + 48);
            LOBYTE(v17) = 24;
            v20 = (v40 >> 7) & 0x1F;
          }
        }
        v23 = MiProtectionToCacheAttribute(v20);
        if ( v24 == 0x3FFFFFFFFFLL )
        {
          ContainingPageTable = MiGetContainingPageTable(v22);
          v21 = 0xFFFFDE0000000000uLL;
          v9 = 48 * ContainingPageTable - 0x220000000000LL;
        }
        v25 = v22 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (v12 & 0x20) == 0 )
          v25 = v22;
        v26 = 0;
        v43 = v25;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v26 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
            {
              HvlNotifyLongSpinWait(v26);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        v12 = a6;
        v46 = *(_DWORD *)(v13 + 32);
        BYTE2(v46) |= 0x20u;
        *(_DWORD *)(v13 + 32) = v46;
        *(_QWORD *)v13 = (a5 + 32) & -(__int64)(a5 != 0);
        if ( (unsigned __int8)BYTE2(*(_DWORD *)(v13 + 32)) >> 6 != v23 )
          MiChangePageAttribute(v13, v23, 1LL);
        MiSetPfnTbFlushStamp(v13, 0LL, 1LL);
        v15 = 1LL;
        *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        HIWORD(v47) = HIWORD(*(_DWORD *)(v13 + 32));
        LOWORD(v47) = 1;
        *(_DWORD *)(v13 + 32) = v47;
        if ( (a6 & 8) != 0 )
        {
          v48 = *(_DWORD *)(v13 + 32);
          HIBYTE(v48) = a6 & 7 | HIBYTE(v48) & 0xF8;
          *(_DWORD *)(v13 + 32) = v48;
        }
        v27 = *(_QWORD *)(v13 + 40);
        v8 = ContainingPageTable;
        v28 = v27;
        for ( i = v27; ; v28 = i )
        {
          i = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v13 + 40),
                ContainingPageTable ^ (ContainingPageTable ^ v28) & 0xFFFFFF0000000000uLL,
                i);
          if ( v27 == i )
            break;
          v27 = i;
        }
        *(_QWORD *)(v13 + 8) = v43;
        v49 = *(_DWORD *)(v13 + 32);
        BYTE2(v49) = BYTE2(v49) & 0xF8 | 2;
        result = v49;
        *(_DWORD *)(v13 + 32) = v49;
        if ( a6 < 0 )
          *(_BYTE *)(v13 + 35) |= 0x20u;
        a3 = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v16 & 0xC00) == 0x800 )
        {
          v14 = a4;
        }
        else
        {
          result = MiSwizzleInvalidPte(32 * (v17 & 0x1F | ((*a2 & 0xFFFFFFFFFFLL) << 7) | 0x40));
          v14 = a4;
          *a4 = result;
        }
        v7 = v41;
        v10 = a1;
        if ( !v50 )
        {
          v7 = v15 + v41;
          v41 += v15;
        }
      }
      v30 = 0xFFFFDE0000000000uLL;
      ++a2;
      a4 = v14 + 1;
    }
    while ( (unsigned __int64)a2 < v44 );
    if ( v7 )
    {
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          v31 += v15;
          if ( (v31 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v30) )
          {
            HvlNotifyLongSpinWait(v31);
          }
          else
          {
            _mm_pause();
          }
          LODWORD(v15) = 1;
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      v32 = *(_QWORD *)(v9 + 24);
      v33 = v32 + v41;
      v34 = v32 ^ (v32 + v41);
      result = 0xC000000000000000uLL;
      *(_QWORD *)(v9 + 24) = v33 ^ v34 & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
