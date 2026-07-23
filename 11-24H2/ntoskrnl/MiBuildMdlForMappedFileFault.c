/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x140347688
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     MiReduceMappedFileReadAhead @ 0x1402EA53C (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x1402EA9D4 (MiReduceMappedFileReadBehind.c)
 *     MiGetHardFaultPages @ 0x1402F4630 (MiGetHardFaultPages.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     RtlSetAllBits @ 0x140347620 (RtlSetAllBits.c)
 *     MiInitializeHardFaultPfn @ 0x140347C54 (MiInitializeHardFaultPfn.c)
 *     MiMakeTransitionPte @ 0x140347DF0 (MiMakeTransitionPte.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        struct _EX_RUNDOWN_REF *a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        __int64 a9,
        __int64 a10)
{
  unsigned __int64 v14; // rbx
  unsigned int v15; // edi
  _QWORD *i; // r8
  _BYTE *v17; // rcx
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  unsigned int v26; // r15d
  int v27; // eax
  __int64 v28; // r12
  unsigned int v29; // r9d
  unsigned int SizeOfBitMap; // edi
  unsigned __int64 *v31; // rsi
  __int64 result; // rax
  unsigned __int64 v33; // r11
  __int64 v34; // r13
  unsigned int *v35; // r10
  unsigned int *v36; // r8
  int v37; // edx
  unsigned int *j; // rax
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // r15
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // r13d
  __int64 *v45; // rdi
  _QWORD *v46; // r15
  __int16 v47; // r12
  int v48; // ebx
  int v49; // r12d
  __int64 v50; // r11
  unsigned __int64 v51; // r14
  __int64 v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 v56; // rcx
  ULONG v57; // esi
  int v58; // edi
  int v59; // [rsp+48h] [rbp-B8h]
  __int128 v60; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  unsigned __int64 v64; // [rsp+78h] [rbp-88h]
  int v65; // [rsp+80h] [rbp-80h]
  unsigned int v66; // [rsp+84h] [rbp-7Ch]
  _QWORD *v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+90h] [rbp-70h]
  __int64 *v69; // [rsp+98h] [rbp-68h]
  unsigned __int64 v70; // [rsp+A0h] [rbp-60h]
  _RTL_BITMAP BitMapHeader; // [rsp+C0h] [rbp-40h] BYREF
  char v72; // [rsp+D0h] [rbp-30h] BYREF

  v67 = a8;
  v64 = (unsigned __int64)a2;
  v63 = a1;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  memset_0(&BitMapHeader, 0, 0x4CuLL);
  v14 = *(_QWORD *)(a1 + 168);
  v69 = *(__int64 **)(a1 + 232);
  BitMapHeader.Buffer = (unsigned int *)&v72;
  v70 = v14;
  BitMapHeader.SizeOfBitMap = 512;
  RtlSetAllBits(&BitMapHeader);
  v68 = 0LL;
  v15 = 0;
  for ( i = a2; (unsigned __int64)i <= a3; ++i )
  {
    if ( *i == v14 )
    {
      v17 = (char *)BitMapHeader.Buffer + ((unsigned __int64)(((unsigned int)i >> 3) & 0x1FF) >> 3);
      v18 = (char)*v17;
      _bittestandreset(&v18, ((unsigned int)i >> 3) & 7);
      *v17 = v18;
      ++v15;
    }
  }
  v19 = v15;
  v60 = 0LL;
  if ( v15 > a5 )
    v19 = a5;
  v20 = 0LL;
  v21 = 0LL;
  v61 = 0LL;
  if ( a6 != -1 )
  {
    v22 = v60;
    *(_QWORD *)&v60 = 48 * a6 - 0x220000000000LL;
    *(_QWORD *)v60 = v22;
    v23 = *((_QWORD *)&v60 + 1);
    if ( !*((_QWORD *)&v60 + 1) )
      v23 = 48 * a6 - 0x220000000000LL;
    v20 = 1LL;
    *((_QWORD *)&v60 + 1) = v23;
    v21 = 1LL;
    v61 = 1LL;
  }
  if ( v21 == v19 )
  {
    v25 = (__int64)v67;
  }
  else
  {
    v24 = v14;
    if ( (v14 & 0x400) == 0 )
    {
      if ( qword_140E2DCC0 && (v14 & 0x10) == 0 )
        v24 = v14 & ~qword_140E2DCC0;
      v68 = 48 * ((v24 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v24 = *(_QWORD *)(v68 + 16);
    }
    v25 = (__int64)v67;
    MiGetHardFaultPages((__int64)&v60, v19, a4, (__int64)v67, a9, v63, v24, a10);
    v20 = v61;
  }
  v66 = v20;
  v26 = v20;
  if ( (_DWORD)v20 != v15 )
  {
    if ( !(_DWORD)v20 )
    {
      if ( v25 && !*(_QWORD *)(a9 + 128) )
        *(_BYTE *)(v25 + 1) = 2;
      return 0LL;
    }
    v57 = ((unsigned int)v69 >> 3) & 0x1FF;
    v58 = v15 - MiReduceMappedFileReadBehind(&BitMapHeader, v57, v15 - (unsigned int)v20);
    if ( (_DWORD)v20 != v58 )
      MiReduceMappedFileReadAhead(&BitMapHeader, v57, v58 - v20);
  }
  v27 = MiProtectionToCacheAttribute(a7);
  v28 = v63;
  v29 = 0;
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v65 = v27;
  v31 = (unsigned __int64 *)(v63 + 320);
  if ( BitMapHeader.SizeOfBitMap )
  {
    v33 = v64 & 0xFFFFFFFFFFFFF000uLL;
    v64 &= 0xFFFFFFFFFFFFF000uLL;
    do
    {
      v34 = 0LL;
      v59 = 0;
      if ( SizeOfBitMap <= v29 )
      {
        LODWORD(v41) = v29;
        v62 = v29;
      }
      else
      {
        v35 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
        v36 = &BitMapHeader.Buffer[(unsigned __int64)v29 >> 5];
        v37 = ((1 << (v29 & 0x1F)) - 1) | *v36;
        for ( j = v36 + 1; ; ++j )
        {
          v39 = ~v37;
          if ( v39 )
            break;
          if ( j > v35 )
            goto LABEL_61;
          v37 = *++v36;
        }
        _BitScanForward64((unsigned __int64 *)&v40, v39);
        v41 = (unsigned int)v40 + 32 * (unsigned int)(v36 - BitMapHeader.Buffer);
        v62 = v41;
        if ( (unsigned int)v41 > SizeOfBitMap )
        {
LABEL_61:
          LODWORD(v41) = SizeOfBitMap;
          v62 = SizeOfBitMap;
          goto LABEL_32;
        }
        v42 = ~(((1 << v40) - 1) | v39);
        while ( 1 )
        {
          if ( v42 )
          {
            _BitScanForward64((unsigned __int64 *)&v43, v42);
            goto LABEL_29;
          }
          if ( v36 + 1 > v35 )
            break;
          v42 = v36[1];
          ++v36;
        }
        LODWORD(v43) = 32;
LABEL_29:
        v44 = v43 + 32 * (v36 - BitMapHeader.Buffer);
        if ( v44 > SizeOfBitMap )
          v44 = SizeOfBitMap;
        v34 = v44 - (unsigned int)v41;
        v59 = v34;
LABEL_32:
        v33 = v64;
      }
      if ( v29 )
      {
        v53 = 0;
        v54 = v41 - v29;
        if ( (_DWORD)v41 != v29 )
        {
          if ( v54 < 2
            || v31 <= (unsigned __int64 *)&qword_140E37478 && &v31[v54 - 1] >= (unsigned __int64 *)&qword_140E37478 )
          {
            goto LABEL_58;
          }
          v55 = v54 & 0xFFFFFFFE;
          do
            v53 += 2;
          while ( v53 < (unsigned int)v55 );
          memset64(v31, qword_140E37478, v54 & 0xFFFFFFFE);
          v31 += v55;
          if ( v53 < v54 )
          {
LABEL_58:
            v56 = v54 - v53;
            do
            {
              *v31++ = qword_140E37478;
              --v56;
            }
            while ( v56 );
          }
        }
        v20 = v61;
        *(_DWORD *)(v28 + 192) |= 0x40000u;
      }
      v45 = (__int64 *)(v33 + 8LL * (unsigned int)v41);
      RtlSetBits(&BitMapHeader, v41, v34);
      if ( (_DWORD)v34 )
      {
        v46 = v67;
        v47 = v14;
        v48 = v63;
        v49 = v47 & 0x400;
        do
        {
          v50 = v60;
          if ( (_QWORD)v60 )
          {
            *(_QWORD *)&v60 = *(_QWORD *)v60;
            *((_QWORD *)&v60 + 1) &= -(__int64)(--v61 != 0);
          }
          v51 = 0xAAAAAAAAAAAAAAABuLL * ((v50 + 0x220000000000LL) >> 4);
          *v31++ = v51;
          v52 = *v45;
          if ( !v49 )
            v52 = *(_QWORD *)(v68 + 16);
          *(_QWORD *)(v50 + 16) = v52;
          if ( v46 )
            MiAdvanceFaultList(v46);
          MiInitializeHardFaultPfn(v50, v48, (_DWORD)v45, v45 == v69, v65);
          if ( v49 )
            *v45 = MiMakeTransitionPte(v51, a7);
          ++v45;
          --v34;
        }
        while ( v34 );
        LOWORD(v14) = v70;
        LODWORD(v41) = v62;
        v20 = v61;
        LODWORD(v34) = v59;
        v28 = v63;
      }
      if ( !v20 )
        break;
      SizeOfBitMap = BitMapHeader.SizeOfBitMap;
      v29 = v41 + v34;
      v33 = v64;
    }
    while ( (_DWORD)v41 + (_DWORD)v34 != BitMapHeader.SizeOfBitMap );
    v26 = v66;
  }
  result = v26;
  *(_DWORD *)(v28 + 184) = (unsigned int)(((__int64)v31 - v28 - 320) >> 3) << 12;
  return result;
}
