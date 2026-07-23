/*
 * XREFs of MiReplacePageOfProtoPool @ 0x14033AFCC
 * Callers:
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140211990 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x140224530 (MiMakeProtectionPfnCompatible.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetPrototypePteRanges @ 0x1403379A8 (MiGetPrototypePteRanges.c)
 *     MiLockLeafPage @ 0x14033B770 (MiLockLeafPage.c)
 *     MiSetPfnContainingFrame @ 0x14033BD00 (MiSetPfnContainingFrame.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  ULONG_PTR *v10; // rdi
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // rdi
  int v15; // r13d
  _BYTE *v16; // rsi
  int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // r10d
  unsigned int v20; // ecx
  char *v21; // rbx
  __int64 i; // rdx
  unsigned __int64 v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // edi
  _DWORD *v26; // r8
  int v27; // r9d
  int *j; // rax
  unsigned int v29; // r9d
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned __int64 k; // rax
  unsigned int *v33; // rax
  unsigned int v34; // edi
  unsigned int v35; // esi
  unsigned __int64 v36; // r12
  __int64 *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  int v40; // edx
  int v41; // ebx
  __int64 v42; // rbx
  __int64 v43; // r15
  int v44; // edi
  unsigned int v45; // edi
  unsigned int v46; // r10d
  __int64 v47; // r12
  int v48; // r14d
  _BYTE *v49; // r15
  unsigned int v50; // r8d
  unsigned int v51; // eax
  unsigned int v52; // r11d
  unsigned int v53; // ecx
  char *v54; // rbx
  __int64 m; // rdx
  unsigned __int64 v56; // rax
  __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  unsigned int v60; // eax
  unsigned int SizeOfBitMap; // eax
  int v63; // [rsp+20h] [rbp-99h]
  unsigned int v64; // [rsp+28h] [rbp-91h]
  unsigned __int64 UltraMapping; // [rsp+40h] [rbp-79h]
  _RTL_BITMAP v67; // [rsp+48h] [rbp-71h] BYREF
  __int64 v68; // [rsp+58h] [rbp-61h]
  _BYTE *v69; // [rsp+60h] [rbp-59h]
  ULONG_PTR *v70; // [rsp+68h] [rbp-51h]
  __int64 v71; // [rsp+70h] [rbp-49h]
  _BYTE v72[57]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v73[3]; // [rsp+B9h] [rbp+0h] BYREF
  int v74; // [rsp+BCh] [rbp+3h] BYREF

  v71 = a3;
  *(_QWORD *)&v67.SizeOfBitMap = 512LL;
  v67.Buffer = (unsigned int *)v72;
  memset_0(v72, 0, 0x40uLL);
  if ( (unsigned int)MiGetPrototypePteRanges(a1, &v67) )
  {
    v64 = 2;
    v63 = 0;
    v8 = 48 * a2 - 0x220000000000LL;
    v68 = 48 * a3 - 0x220000000000LL;
    UltraMapping = MiGetUltraMapping(a4 + 96, 3uLL, 1LL, 4);
    v9 = UltraMapping;
    v10 = (ULONG_PTR *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v70 = v10;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a3 - 0x220000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v10, a3, ProtectionPfnCompatible | 0xA0000000);
    v13 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v10 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v10, ValidPte);
    *v10 = v13;
    v14 = 0LL;
    v15 = (((unsigned __int8)v73 - 57) & 4) != 0LL ? 0x20 : 0;
    v16 = &v72[-((((unsigned __int8)v73 - 57) & 4) != 0LL ? 4 : 0)];
    v69 = v16;
    while ( 1 )
    {
      v17 = (unsigned int)v14 < v67.SizeOfBitMap ? v14 : 0;
      v18 = v67.SizeOfBitMap - 1;
      while ( 1 )
      {
        v19 = v18 + v15;
        v20 = v17 + v15;
        if ( v18 - v17 != -1 )
        {
          v21 = &v16[8 * ((unsigned __int64)v20 >> 6)];
          for ( i = ~*(_QWORD *)v21 | ((1LL << (v20 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v21 )
          {
            v21 += 8;
            if ( v21 > &v16[8 * ((unsigned __int64)v19 >> 6)] )
              goto LABEL_95;
          }
          _BitScanForward64(&v23, ~i);
          v24 = v23 + ((unsigned int)((v21 - v16) >> 3) << 6);
          if ( v24 <= v19 )
            break;
        }
LABEL_95:
        v24 = -1;
LABEL_96:
        if ( !v17 )
          goto LABEL_13;
        SizeOfBitMap = v14 + 1;
        if ( (unsigned int)(v14 + 1) > v67.SizeOfBitMap )
          SizeOfBitMap = v67.SizeOfBitMap;
        v18 = SizeOfBitMap - 1;
        v17 = 0;
      }
      if ( v24 == -1 )
        goto LABEL_96;
      v24 -= v15;
LABEL_13:
      if ( v24 < (unsigned int)v14 || v24 == -1 )
        v24 = 512;
      if ( v24 != (_DWORD)v14 )
      {
        memmove((void *)(v9 + 8 * v14), (const void *)(a1 + 8 * v14), 8LL * (v24 - (unsigned int)v14));
        if ( v24 == 512 )
          goto LABEL_42;
      }
      v25 = 0;
      if ( v24 >= 0x200 )
        goto LABEL_78;
      v26 = &v72[4 * ((unsigned __int64)v24 >> 5)];
      v27 = ((1 << (v24 & 0x1F)) - 1) | *v26;
      for ( j = v26 + 1; ; ++j )
      {
        v29 = ~v27;
        if ( v29 )
          break;
        if ( j > &v74 )
          goto LABEL_104;
        v27 = *++v26;
      }
      _BitScanForward64((unsigned __int64 *)&v30, v29);
      v31 = v30 + 32 * (((char *)v26 - v72) >> 2);
      if ( v31 > 0x200 )
      {
LABEL_104:
        v31 = 512;
      }
      else
      {
        for ( k = ~(v29 | ((1 << v30) - 1)); ; k = *v33 )
        {
          if ( (_DWORD)k )
          {
            _BitScanForward64(&k, k);
            goto LABEL_27;
          }
          v33 = v26 + 1;
          if ( v26 + 1 > &v74 )
            break;
          ++v26;
        }
        LODWORD(k) = 32;
LABEL_27:
        v34 = k + 32 * (((char *)v26 - v72) >> 2);
        if ( v34 > 0x200 )
          v34 = 512;
        v25 = v34 - v31;
      }
      if ( v25 )
      {
        v35 = v31 - v24;
        memmove((void *)(v9 + 8LL * v31), (const void *)(a1 + 8LL * v31), 8LL * v25);
      }
      else
      {
LABEL_78:
        v35 = 512 - v24;
      }
      v14 = v24 + v35 + v25;
      v36 = v9 - a1;
      v37 = (__int64 *)(a1 + 8LL * v24);
      while ( v35 )
      {
        v38 = MiLockLeafPage(v37, v64);
        if ( v38 )
        {
          v64 |= 1u;
          v40 = ++v63;
          if ( (*(_BYTE *)(v38 + 34) & 8) != 0 )
          {
            ++dword_140EF4B24;
LABEL_52:
            v45 = 0;
LABEL_53:
            v46 = 0;
            v47 = v71;
            *v70 = CLFS_LSN_NULL_EXT;
            v48 = (((unsigned __int8)v73 - 57) & 4) != 0LL ? 0x20 : 0;
            v49 = &v72[-((((unsigned __int8)v73 - 57) & 4) != 0LL ? 4 : 0)];
LABEL_54:
            if ( !v40 )
              return v45;
            v50 = v46 < v67.SizeOfBitMap ? v46 : 0;
            v51 = v67.SizeOfBitMap - 1;
            while ( 1 )
            {
              v52 = v51 + v48;
              v53 = v50 + v48;
              if ( v51 - v50 == -1 )
                goto LABEL_72;
              v54 = &v49[8 * ((unsigned __int64)v53 >> 6)];
              for ( m = ~*(_QWORD *)v54 | ((1LL << (v53 & 0x3F)) - 1); m == -1; m = ~*(_QWORD *)v54 )
              {
                v54 += 8;
                if ( v54 > &v49[8 * ((unsigned __int64)v52 >> 6)] )
                  goto LABEL_72;
              }
              _BitScanForward64(&v56, ~m);
              v57 = (unsigned int)v56 + ((unsigned int)((v54 - v49) >> 3) << 6);
              if ( (unsigned int)v57 > v52 )
              {
LABEL_72:
                v57 = 0xFFFFFFFFLL;
              }
              else if ( (_DWORD)v57 != -1 )
              {
                v57 = (unsigned int)(v57 - v48);
LABEL_64:
                v58 = *(_QWORD *)(a1 + 8 * v57);
                if ( (v58 & 1) == 0 && qword_140E2D940 )
                {
                  if ( (v58 & 0x10) != 0 )
                    v58 &= ~0x10uLL;
                  else
                    v58 &= ~qword_140E2D940;
                }
                v59 = 48 * ((v58 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                if ( v45 )
                  MiSetPfnContainingFrame(v59, v47);
                v40 = --v63;
                _InterlockedAnd64((volatile signed __int64 *)(v59 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v46 = v57 + 1;
                goto LABEL_54;
              }
              if ( !v50 )
                goto LABEL_64;
              v60 = v46 + 1;
              if ( v46 + 1 > v67.SizeOfBitMap )
                v60 = v67.SizeOfBitMap;
              v51 = v60 - 1;
              v50 = 0;
            }
          }
          v39 = *v37;
          if ( (*v37 & 1) == 0 && (*(_BYTE *)(v38 + 34) & 0x20) != 0 )
          {
            ++dword_140EF4B20;
            goto LABEL_52;
          }
        }
        else
        {
          v72[(unsigned __int64)v24 >> 3] &= ~(1 << (v24 & 7));
          v39 = *v37;
        }
        *(__int64 *)((char *)v37 + v36) = v39;
        ++v24;
        ++v37;
        --v35;
      }
      if ( (unsigned int)v14 >= 0x200 )
      {
LABEL_42:
        v41 = 0;
        if ( v63 )
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v41 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
        }
        else
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v41 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait();
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
        }
        v40 = v63;
        if ( (unsigned __int16)*(_DWORD *)(v8 + 32) == 2 )
        {
          v42 = *(_QWORD *)(v8 + 24);
          if ( (unsigned __int16)v42 == (unsigned __int64)(unsigned int)(v63 + 1)
            && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
          {
            v43 = v68;
            v44 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v44 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait();
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v43 + 24) < 0 );
            }
            *(_QWORD *)(v43 + 24) = v42 ^ (v42 ^ *(_QWORD *)(v43 + 24)) & 0xC000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v40 = v63;
            v45 = 1;
            goto LABEL_53;
          }
          ++dword_140EF4B28;
        }
        else
        {
          ++dword_140EF4B2C;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_52;
      }
      v16 = v69;
      v9 = UltraMapping;
    }
  }
  return 0LL;
}
