/*
 * XREFs of MiInitializeReadInProgressPfn @ 0x1402558FC
 * Callers:
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14034FB30 (MiPrivateFixup.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x140253C90 (MiSetPfnTbFlushStamp.c)
 *     MiInPageSkipPage @ 0x140256790 (MiInPageSkipPage.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
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
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r10
  unsigned int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // ebx
  signed __int64 v29; // rcx
  signed __int64 v30; // rdx
  signed __int64 i; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 Address; // rax
  __int64 v44; // rdx
  unsigned int v45; // ecx
  unsigned __int64 v46; // rax
  __int64 v47; // [rsp+20h] [rbp-78h]
  __int64 ContainingPageTable; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+30h] [rbp-68h]
  unsigned __int64 v50; // [rsp+38h] [rbp-60h]
  int v52; // [rsp+A8h] [rbp+10h]
  int v53; // [rsp+A8h] [rbp+10h]
  int v54; // [rsp+A8h] [rbp+10h]
  unsigned int v55; // [rsp+A8h] [rbp+10h]
  char v56; // [rsp+B0h] [rbp+18h]

  ContainingPageTable = 0x3FFFFFFFFFLL;
  v7 = 0LL;
  v47 = 0LL;
  v8 = 0x3FFFFFFFFFLL;
  v9 = 0LL;
  v10 = a1;
  result = (unsigned __int64)&a2[(unsigned int)a3];
  v50 = result;
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
        v56 = a3;
        if ( (_BYTE)a3 )
        {
          v38 = (unsigned int)MiIsPrototypePteVadLookup(v16, v7) == 0;
          v42 = v16;
          if ( v38 )
          {
            if ( qword_140E2DCC0 )
            {
              if ( (v16 & 0x10) != 0 )
                v42 = v16 & 0xFFFFFFFFFFFFFFEFuLL;
              else
                v42 = v16 & ~qword_140E2DCC0;
            }
            v42 = *(_QWORD *)(48 * ((*(_QWORD *)(v42 >> 16) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
          }
          LODWORD(v17) = MmMakeProtectNotWriteCopy[((unsigned __int64)v42 >> 5) & 0x1F];
          DemandZeroPte = MiMakeDemandZeroPte((unsigned int)v17, v39, v40, v41);
        }
        else if ( (*v14 & 0xC00) == 0x800 )
        {
          v46 = *v14;
          if ( qword_140E2DCC0 )
          {
            if ( (v16 & 0x10) != 0 )
              v46 = v16 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v46 = v16 & ~qword_140E2DCC0;
          }
          DemandZeroPte = *(_QWORD *)(48 * ((v46 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFF0LL);
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
            MiLockVadTree(v15, v7, a3, v8);
            Address = MiLocateAddress(v10);
            LOBYTE(v44) = 17;
            v17 = Address;
            MiUnlockVadTree(1LL, v44);
            v45 = *(_DWORD *)(v17 + 48);
            LOBYTE(v17) = 24;
            v20 = (v45 >> 7) & 0x1F;
          }
        }
        v25 = MiProtectionToCacheAttribute(v20);
        if ( v23 == 0x3FFFFFFFFFLL )
        {
          ContainingPageTable = MiGetContainingPageTable(v24);
          v21 = 0xFFFFDE0000000000uLL;
          v9 = 48 * ContainingPageTable - 0x220000000000LL;
        }
        v26 = 0x7FFFFFFFFFFFFFFFLL;
        v27 = v24 & 0x7FFFFFFFFFFFFFFFLL;
        if ( (v12 & 0x20) == 0 )
          v27 = v24;
        v28 = 0;
        v49 = v27;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v28 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v26, v22, v23) )
            {
              HvlNotifyLongSpinWait(v28);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(__int64 *)(v13 + 24) < 0 );
        }
        v12 = a6;
        v52 = *(_DWORD *)(v13 + 32);
        BYTE2(v52) |= 0x20u;
        *(_DWORD *)(v13 + 32) = v52;
        *(_QWORD *)v13 = (a5 + 32) & -(__int64)(a5 != 0);
        if ( (unsigned __int8)BYTE2(*(_DWORD *)(v13 + 32)) >> 6 != v25 )
          MiChangePageAttribute(v13, v25);
        MiSetPfnTbFlushStamp(v13, 0LL, 1);
        v15 = 1LL;
        *(_QWORD *)(v13 + 24) &= 0xC000000000000000uLL;
        HIWORD(v53) = HIWORD(*(_DWORD *)(v13 + 32));
        LOWORD(v53) = 1;
        *(_DWORD *)(v13 + 32) = v53;
        if ( (a6 & 8) != 0 )
        {
          v54 = *(_DWORD *)(v13 + 32);
          HIBYTE(v54) = a6 & 7 | HIBYTE(v54) & 0xF8;
          *(_DWORD *)(v13 + 32) = v54;
        }
        v29 = *(_QWORD *)(v13 + 40);
        v8 = ContainingPageTable;
        v30 = v29;
        for ( i = v29; ; v30 = i )
        {
          v32 = ContainingPageTable ^ (ContainingPageTable ^ v30) & 0xFFFFFF0000000000uLL;
          i = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 40), v32, i);
          if ( v29 == i )
            break;
          v29 = i;
        }
        *(_QWORD *)(v13 + 8) = v49;
        v55 = *(_DWORD *)(v13 + 32);
        BYTE2(v55) = BYTE2(v55) & 0xF8 | 2;
        result = v55;
        *(_DWORD *)(v13 + 32) = v55;
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
          result = MiSwizzleInvalidPte(32 * (v17 & 0x1F | ((*a2 & 0xFFFFFFFFFFLL) << 7) | 0x40), v32);
          v14 = a4;
          *a4 = result;
        }
        v7 = v47;
        v10 = a1;
        if ( !v56 )
        {
          v7 = v15 + v47;
          v47 += v15;
        }
      }
      v33 = 0xFFFFDE0000000000uLL;
      ++a2;
      a4 = v14 + 1;
    }
    while ( (unsigned __int64)a2 < v50 );
    if ( v7 )
    {
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          v34 += v15;
          if ( (v34 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v33, v7, a3, v8) )
          {
            HvlNotifyLongSpinWait(v34);
          }
          else
          {
            _mm_pause();
          }
          LODWORD(v15) = 1;
        }
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      v35 = *(_QWORD *)(v9 + 24);
      v36 = v35 + v47;
      v37 = v35 ^ (v35 + v47);
      result = 0xC000000000000000uLL;
      *(_QWORD *)(v9 + 24) = v36 ^ v37 & 0xC000000000000000uLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  return result;
}
