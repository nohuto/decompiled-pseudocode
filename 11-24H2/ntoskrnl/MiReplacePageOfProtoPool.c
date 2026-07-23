/*
 * XREFs of MiReplacePageOfProtoPool @ 0x140348A30
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     MiLockLeafPage @ 0x140349740 (MiLockLeafPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     MiGetPrototypePteRanges @ 0x14041FB48 (MiGetPrototypePteRanges.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // ecx
  char *v22; // rbx
  __int64 i; // rdx
  unsigned __int64 v24; // rax
  unsigned int v25; // ebx
  unsigned int v26; // edi
  int v27; // r9d
  unsigned __int64 j; // rax
  __int64 v29; // rcx
  unsigned int v30; // edx
  unsigned __int64 k; // rax
  unsigned int *v32; // rax
  unsigned int v33; // edi
  unsigned int v34; // esi
  __int64 v35; // r12
  __int64 *v36; // r15
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // edx
  unsigned int v40; // ebx
  __int64 v41; // rbx
  __int64 v42; // r15
  unsigned int v43; // edi
  unsigned int v44; // edi
  unsigned int v45; // r10d
  __int64 v46; // r12
  int v47; // r14d
  _BYTE *v48; // r15
  int v49; // r8d
  int v50; // eax
  unsigned int v51; // r11d
  unsigned int v52; // ecx
  char *v53; // rbx
  __int64 m; // rdx
  unsigned __int64 v55; // rax
  __int64 v56; // rbx
  unsigned __int64 v57; // rax
  __int64 v58; // rsi
  unsigned int v59; // eax
  int v61; // eax
  int v62; // [rsp+20h] [rbp-99h]
  unsigned int v63; // [rsp+28h] [rbp-91h]
  unsigned __int64 UltraMapping; // [rsp+40h] [rbp-79h]
  _QWORD v66[2]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v67; // [rsp+58h] [rbp-61h]
  _BYTE *v68; // [rsp+60h] [rbp-59h]
  ULONG_PTR *v69; // [rsp+68h] [rbp-51h]
  __int64 v70; // [rsp+70h] [rbp-49h]
  _BYTE v71[57]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v72[3]; // [rsp+B9h] [rbp+0h] BYREF
  _BYTE v73[4]; // [rsp+BCh] [rbp+3h] BYREF

  v70 = a3;
  v66[0] = 512LL;
  v66[1] = v71;
  memset_0(v71, 0, 0x40uLL);
  if ( (unsigned int)MiGetPrototypePteRanges(a1, v66) )
  {
    v63 = 2;
    v62 = 0;
    v8 = 48 * a2 - 0x220000000000LL;
    v67 = 48 * a3 - 0x220000000000LL;
    UltraMapping = MiGetUltraMapping(a4 + 96, 3uLL, 1LL, 4);
    v9 = UltraMapping;
    v10 = (ULONG_PTR *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v69 = v10;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, 48 * a3 - 0x220000000000LL);
    ValidPte = MiMakeValidPte((unsigned __int64)v10, a3, ProtectionPfnCompatible | 0xA0000000);
    v13 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v10 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v10, ValidPte, 128LL);
    *v10 = v13;
    v14 = 0LL;
    v15 = (((unsigned __int8)v72 - 57) & 4) != 0LL ? 0x20 : 0;
    v16 = &v71[-((((unsigned __int8)v72 - 57) & 4) != 0LL ? 4 : 0)];
    v68 = v16;
    while ( 1 )
    {
      v17 = LODWORD(v66[0]);
      v18 = (unsigned int)v14 < LODWORD(v66[0]) ? (unsigned int)v14 : 0;
      v19 = LODWORD(v66[0]) - 1;
      while ( 1 )
      {
        v20 = v19 + v15;
        v21 = v18 + v15;
        if ( v19 - (_DWORD)v18 != -1 )
        {
          v22 = &v16[8 * ((unsigned __int64)v21 >> 6)];
          for ( i = ~*(_QWORD *)v22 | ((1LL << (v21 & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v22 )
          {
            v22 += 8;
            if ( v22 > &v16[8 * ((unsigned __int64)v20 >> 6)] )
              goto LABEL_99;
          }
          _BitScanForward64(&v24, ~i);
          v25 = v24 + ((unsigned int)((v22 - v16) >> 3) << 6);
          if ( v25 <= v20 )
            break;
        }
LABEL_99:
        v25 = -1;
LABEL_100:
        if ( !(_DWORD)v18 )
          goto LABEL_13;
        v61 = v14 + 1;
        if ( (unsigned int)(v14 + 1) > LODWORD(v66[0]) )
          v61 = v66[0];
        v19 = v61 - 1;
        v18 = 0LL;
      }
      if ( v25 == -1 )
        goto LABEL_100;
      v25 -= v15;
LABEL_13:
      if ( v25 < (unsigned int)v14 || v25 == -1 )
        v25 = 512;
      if ( v25 != (_DWORD)v14 )
      {
        memmove((void *)(v9 + 8 * v14), (const void *)(a1 + 8 * v14), 8LL * (v25 - (unsigned int)v14));
        if ( v25 == 512 )
          goto LABEL_42;
      }
      v26 = 0;
      if ( v25 >= 0x200 )
        goto LABEL_78;
      v18 = (__int64)&v71[4 * ((unsigned __int64)v25 >> 5)];
      v27 = ((1 << (v25 & 0x1F)) - 1) | *(_DWORD *)v18;
      for ( j = v18 + 4; ; j += 4LL )
      {
        v17 = (unsigned int)~v27;
        if ( (_DWORD)v17 )
          break;
        if ( j > (unsigned __int64)v73 )
          goto LABEL_104;
        v18 += 4LL;
        v27 = *(_DWORD *)v18;
      }
      _BitScanForward64((unsigned __int64 *)&v29, (unsigned int)v17);
      v30 = v29 + 32 * ((v18 - (__int64)v71) >> 2);
      if ( v30 > 0x200 )
      {
LABEL_104:
        v30 = 512;
      }
      else
      {
        for ( k = ~((unsigned int)v17 | ((1 << v29) - 1)); ; k = *v32 )
        {
          if ( (_DWORD)k )
          {
            _BitScanForward64(&k, k);
            goto LABEL_27;
          }
          v32 = (unsigned int *)(v18 + 4);
          if ( v18 + 4 > (unsigned __int64)v73 )
            break;
          v18 += 4LL;
        }
        LODWORD(k) = 32;
LABEL_27:
        v18 -= (__int64)v71;
        v33 = k + 32 * (v18 >> 2);
        if ( v33 > 0x200 )
          v33 = 512;
        v26 = v33 - v30;
      }
      if ( v26 )
      {
        v34 = v30 - v25;
        memmove((void *)(v9 + 8LL * v30), (const void *)(a1 + 8LL * v30), 8LL * v26);
      }
      else
      {
LABEL_78:
        v34 = 512 - v25;
      }
      v14 = v25 + v34 + v26;
      v35 = v9 - a1;
      v36 = (__int64 *)(a1 + 8LL * v25);
      while ( v34 )
      {
        v37 = MiLockLeafPage(v36, v63, v18, v17);
        if ( v37 )
        {
          v63 |= 1u;
          v39 = ++v62;
          if ( (*(_BYTE *)(v37 + 34) & 8) != 0 )
          {
            ++dword_140EF5024;
LABEL_52:
            v44 = 0;
LABEL_53:
            v45 = 0;
            v46 = v70;
            *v69 = CLFS_LSN_NULL_EXT;
            v47 = (((unsigned __int8)v72 - 57) & 4) != 0LL ? 0x20 : 0;
            v48 = &v71[-((((unsigned __int8)v72 - 57) & 4) != 0LL ? 4 : 0)];
LABEL_54:
            if ( !v39 )
              return v44;
            v49 = v45 < LODWORD(v66[0]) ? v45 : 0;
            v50 = LODWORD(v66[0]) - 1;
            while ( 1 )
            {
              v51 = v50 + v47;
              v52 = v49 + v47;
              if ( v50 - v49 == -1 )
                goto LABEL_72;
              v53 = &v48[8 * ((unsigned __int64)v52 >> 6)];
              for ( m = ~*(_QWORD *)v53 | ((1LL << (v52 & 0x3F)) - 1); m == -1; m = ~*(_QWORD *)v53 )
              {
                v53 += 8;
                if ( v53 > &v48[8 * ((unsigned __int64)v51 >> 6)] )
                  goto LABEL_72;
              }
              _BitScanForward64(&v55, ~m);
              v56 = (unsigned int)v55 + ((unsigned int)((v53 - v48) >> 3) << 6);
              if ( (unsigned int)v56 > v51 )
              {
LABEL_72:
                v56 = 0xFFFFFFFFLL;
              }
              else if ( (_DWORD)v56 != -1 )
              {
                v56 = (unsigned int)(v56 - v47);
LABEL_64:
                v57 = *(_QWORD *)(a1 + 8 * v56);
                if ( (v57 & 1) == 0 && qword_140E2DCC0 )
                {
                  if ( (v57 & 0x10) != 0 )
                    v57 &= ~0x10uLL;
                  else
                    v57 &= ~qword_140E2DCC0;
                }
                v58 = 48 * ((v57 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
                if ( v44 )
                  MiSetPfnContainingFrame(v58, v46);
                v39 = --v62;
                _InterlockedAnd64((volatile signed __int64 *)(v58 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v45 = v56 + 1;
                goto LABEL_54;
              }
              if ( !v49 )
                goto LABEL_64;
              v59 = v45 + 1;
              if ( v45 + 1 > LODWORD(v66[0]) )
                v59 = v66[0];
              v50 = v59 - 1;
              v49 = 0;
            }
          }
          v38 = *v36;
          if ( (*v36 & 1) == 0 && (*(_BYTE *)(v37 + 34) & 0x20) != 0 )
          {
            ++dword_140EF5020;
            goto LABEL_52;
          }
        }
        else
        {
          v71[(unsigned __int64)v25 >> 3] &= ~(1 << (v25 & 7));
          v38 = *v36;
        }
        *(__int64 *)((char *)v36 + v35) = v38;
        ++v25;
        ++v36;
        --v34;
      }
      if ( (unsigned int)v14 >= 0x200 )
      {
LABEL_42:
        v40 = 0;
        if ( v62 )
        {
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v40 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v40);
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
              if ( (++v40 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v40);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(__int64 *)(v8 + 24) < 0 );
          }
        }
        v39 = v62;
        if ( (unsigned __int16)*(_DWORD *)(v8 + 32) == 2 )
        {
          v41 = *(_QWORD *)(v8 + 24);
          if ( (unsigned __int16)v41 == (unsigned __int64)(unsigned int)(v62 + 1)
            && (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < 0x10000 )
          {
            v42 = v67;
            v43 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v43 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v43);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(__int64 *)(v42 + 24) < 0 );
            }
            *(_QWORD *)(v42 + 24) = v41 ^ (v41 ^ *(_QWORD *)(v42 + 24)) & 0xC000000000000000uLL;
            _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v39 = v62;
            v44 = 1;
            goto LABEL_53;
          }
          ++dword_140EF5028;
        }
        else
        {
          ++dword_140EF502C;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_52;
      }
      v16 = v68;
      v9 = UltraMapping;
    }
  }
  return 0LL;
}
