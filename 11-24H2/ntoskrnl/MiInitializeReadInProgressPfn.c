/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1402EF9B8
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x1402EE4F0 (MiPrivateFixup.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiInPageSkipPage @ 0x1402F0980 (MiInPageSkipPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1402FBDB0 (MiSetPfnTbFlushStamp.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
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
  unsigned __int64 v13; // r14
  unsigned __int64 *v14; // r10
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 Address; // rbp
  unsigned __int64 DemandZeroPte; // rbx
  __int64 v19; // rbx
  unsigned int v20; // ecx
  unsigned __int64 v21; // r10
  unsigned int v22; // r13d
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // ebx
  signed __int64 v26; // rcx
  signed __int64 v27; // rdx
  signed __int64 i; // rax
  unsigned int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  bool v33; // zf
  __int64 v34; // rax
  unsigned int v35; // ecx
  unsigned __int64 v36; // rax
  __int64 v37; // [rsp+20h] [rbp-78h]
  __int64 ContainingPageTable; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+30h] [rbp-68h]
  unsigned __int64 v40; // [rsp+38h] [rbp-60h]
  int v42; // [rsp+A8h] [rbp+10h]
  int v43; // [rsp+A8h] [rbp+10h]
  int v44; // [rsp+A8h] [rbp+10h]
  unsigned int v45; // [rsp+A8h] [rbp+10h]
  char v46; // [rsp+B0h] [rbp+18h]

  ContainingPageTable = 0x3FFFFFFFFFLL;
  v7 = 0LL;
  v37 = 0LL;
  v8 = 0x3FFFFFFFFFLL;
  v9 = 0LL;
  v10 = a1;
  result = (unsigned __int64)&a2[(unsigned int)a3];
  v40 = result;
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
        LODWORD(Address) = 0;
        LOBYTE(a3) = v15 & (v12 >> 6);
        DemandZeroPte = *v14;
        v46 = a3;
        if ( (_BYTE)a3 )
        {
          v33 = (unsigned int)MiIsPrototypePteVadLookup(v16) == 0;
          v34 = v16;
          if ( v33 )
          {
            if ( qword_140E2DB80 )
            {
              if ( (v16 & 0x10) != 0 )
                v34 = v16 & 0xFFFFFFFFFFFFFFEFuLL;
              else
                v34 = v16 & ~qword_140E2DB80;
            }
            v34 = *(_QWORD *)(48 * ((*(_QWORD *)(v34 >> 16) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
          }
          LODWORD(Address) = MmMakeProtectNotWriteCopy[((unsigned __int64)v34 >> 5) & 0x1F];
          DemandZeroPte = MiMakeDemandZeroPte(Address);
        }
        else if ( (*v14 & 0xC00) == 0x800 )
        {
          v36 = *v14;
          if ( qword_140E2DB80 )
          {
            if ( (v16 & 0x10) != 0 )
              v36 = v16 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v36 = v16 & ~qword_140E2DB80;
          }
          DemandZeroPte = *(_QWORD *)(48 * ((v36 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
        }
        *(_QWORD *)(v13 + 16) = DemandZeroPte;
        if ( (_BYTE)a3 )
        {
          v20 = Address;
        }
        else
        {
          v19 = (DemandZeroPte >> 5) & 0x1F;
          if ( (v12 & 0x10) != 0 )
            *(_QWORD *)(v13 + 40) |= 0x8000000000000000uLL;
          v20 = v19;
          LOBYTE(Address) = v19;
          if ( (_DWORD)v19 == 24 && v10 <= 0x7FFFFFFEFFFFLL )
          {
            MiLockVadTree(v15, v7, a3);
            Address = MiLocateAddress(v10);
            MiUnlockVadTree(1, 0x11u);
            v35 = *(_DWORD *)(Address + 48);
            LOBYTE(Address) = 24;
            v20 = (v35 >> 7) & 0x1F;
          }
        }
        v22 = MiProtectionToCacheAttribute(v20);
        if ( v23 == 0x3FFFFFFFFFLL )
        {
          ContainingPageTable = MiGetContainingPageTable(v21);
          v9 = 48 * ContainingPageTable - 0x220000000000LL;
        }
        v24 = v21 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (v12 & 0x20) == 0 )
          v24 = v21;
        v25 = 0;
        v39 = v24;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v25 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v25);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        v12 = a6;
        v42 = *(_DWORD *)(v13 + 32);
        BYTE2(v42) |= 0x20u;
        *(_DWORD *)(v13 + 32) = v42;
        *(_QWORD *)v13 = (a5 + 32) & -(__int64)(a5 != 0);
        if ( (unsigned __int8)BYTE2(*(_DWORD *)(v13 + 32)) >> 6 != v22 )
          MiChangePageAttribute(v13, v22);
        MiSetPfnTbFlushStamp(v13, 0LL, 1LL);
        v15 = 1LL;
        *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        HIWORD(v43) = HIWORD(*(_DWORD *)(v13 + 32));
        LOWORD(v43) = 1;
        *(_DWORD *)(v13 + 32) = v43;
        if ( (a6 & 8) != 0 )
        {
          v44 = *(_DWORD *)(v13 + 32);
          HIBYTE(v44) = a6 & 7 | HIBYTE(v44) & 0xF8;
          *(_DWORD *)(v13 + 32) = v44;
        }
        v26 = *(_QWORD *)(v13 + 40);
        v8 = ContainingPageTable;
        v27 = v26;
        for ( i = v26; ; v27 = i )
        {
          i = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v13 + 40),
                ContainingPageTable ^ (ContainingPageTable ^ v27) & 0xFFFFFF0000000000uLL,
                i);
          if ( v26 == i )
            break;
          v26 = i;
        }
        *(_QWORD *)(v13 + 8) = v39;
        v45 = *(_DWORD *)(v13 + 32);
        BYTE2(v45) = BYTE2(v45) & 0xF8 | 2;
        result = v45;
        *(_DWORD *)(v13 + 32) = v45;
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
          result = MiSwizzleInvalidPte(32 * (Address & 0x1F | ((*a2 & 0xFFFFFFFFFFLL) << 7) | 0x40));
          v14 = a4;
          *a4 = result;
        }
        v7 = v37;
        v10 = a1;
        if ( !v46 )
        {
          v7 = v15 + v37;
          v37 += v15;
        }
      }
      ++a2;
      a4 = v14 + 1;
    }
    while ( (unsigned __int64)a2 < v40 );
    if ( v7 )
    {
      v29 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          v29 += v15;
          if ( (v29 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v29);
          }
          else
          {
            _mm_pause();
          }
          LODWORD(v15) = 1;
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      v30 = *(_QWORD *)(v9 + 24);
      v31 = v30 + v37;
      v32 = v30 ^ (v30 + v37);
      result = 0xC000000000000000uLL;
      *(_QWORD *)(v9 + 24) = v31 ^ v32 & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
