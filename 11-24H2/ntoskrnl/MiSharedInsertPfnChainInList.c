/*
 * XREFs of MiSharedInsertPfnChainInList @ 0x140225270
 * Callers:
 *     MiInsertPagesInList @ 0x140226A90 (MiInsertPagesInList.c)
 * Callees:
 *     MiPageToChannel @ 0x140258D54 (MiPageToChannel.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiIsDecayPfn @ 0x1403028E0 (MiIsDecayPfn.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

signed __int64 __fastcall MiSharedInsertPfnChainInList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 i; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  signed __int64 v17; // rdx
  signed __int64 result; // rax
  signed __int64 v19; // r8
  signed __int64 v20; // rcx
  ULONG_PTR v21; // r8
  __int64 v22; // r11
  unsigned __int64 v23; // r9
  __int64 v24; // rdx
  char *v25; // rax
  int j; // r10d
  int v27; // ecx
  unsigned int v28; // esi
  unsigned __int64 v29; // r8
  unsigned int v30; // esi
  unsigned __int8 v31; // al
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r11
  __int64 v35; // r8
  int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // r11
  signed __int64 v39; // rdx
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  unsigned __int64 v42; // r11
  __int64 v43; // rsi
  signed __int64 v44; // rdx
  signed __int64 v45; // r8
  int v46; // eax
  unsigned __int64 v47; // rcx
  __int64 v48; // r9
  signed __int64 v49; // rdx
  signed __int64 v50; // rax
  signed __int64 v51; // rdx
  signed __int64 v52; // rdx
  signed __int64 v53; // r8
  signed __int64 v54; // rcx
  signed __int64 v55; // rcx
  __int64 v56; // r9
  __int64 v57; // r10
  __int64 v58; // r11
  unsigned int PfnPriority; // eax
  __int64 v60; // r11
  __int64 v61; // [rsp+30h] [rbp-D0h]
  __int64 v62; // [rsp+40h] [rbp-C0h]
  unsigned int v63; // [rsp+48h] [rbp-B8h]
  int v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+170h] [rbp+70h]

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    for ( i = *(_QWORD *)(a1 + 16); i != 0x3FFFFFFFFFLL; *(_DWORD *)(v6 + 32) = v64 )
    {
      v6 = 48 * i - 0x220000000000LL;
      v64 = *(_DWORD *)(v6 + 32);
      i = *(_QWORD *)v6 & 0xFFFFFFFFFFLL;
      HIBYTE(v64) |= 8u;
    }
  }
  v7 = 48LL * *(_QWORD *)(a1 + 16) - 0x220000000000LL;
  v8 = a2[1];
  v9 = 48LL * *(_QWORD *)(a1 + 24) - 0x220000000000LL;
  v10 = a2[4];
  v65 = v10;
  if ( v2 )
  {
    v11 = *(_QWORD *)(v2 + 16);
    v12 = 0xAAAAAAAAAAAAAAABuLL * ((v2 + 0x220000000000LL) >> 4);
    if ( qword_140E2DCC0 && (v11 & 0x10) == 0 )
      v11 &= ~qword_140E2DCC0;
    v13 = *(_QWORD *)(v2 + 40);
    *(_QWORD *)v9 = v12 ^ (v12 ^ *(_QWORD *)v9) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v7 + 24) = v13 ^ (v13 ^ *(_QWORD *)(v7 + 24)) & 0xFFFFFF0000000000uLL;
    if ( ((v11 >> 12) & 0xFFFFFFFFFFLL) == v12 )
    {
      v14 = ((*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFLL) << 12) | 0x880;
      if ( qword_140E2DCC0 )
      {
        v15 = ((*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFLL) << 12) | 0x890;
        if ( (qword_140E2DCC0 & v14) == 0 )
          v15 = qword_140E2DCC0 | ((*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFLL) << 12) | 0x880;
        v14 = v15;
      }
      *(_QWORD *)(v2 + 16) = v14;
    }
    else
    {
      *(_QWORD *)(48 * (v13 & 0xFFFFFFFFFFLL) - 0x220000000000LL) = *(_QWORD *)(a1 + 16) ^ (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(48 * (v13 & 0xFFFFFFFFFFLL) - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
    }
    v16 = *(_QWORD *)(a1 + 24);
    v17 = *(_QWORD *)(v2 + 40);
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(v2 + 40),
               v16 ^ (v16 ^ v17) & 0xFFFFFF0000000000uLL,
               v17);
    v19 = result;
    if ( v17 != result )
    {
      do
      {
        v20 = v19;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v2 + 40),
                   v16 ^ (v16 ^ v19) & 0xFFFFFF0000000000uLL,
                   v19);
        v19 = result;
      }
      while ( v20 != result );
    }
  }
  else
  {
    if ( v8 == 0x3FFFFFFFFFLL )
    {
      PfnPriority = MiGetPfnPriority(v7);
      v10 = v65;
      *(_QWORD *)(88LL * PfnPriority + v60 + 3280) = *(_QWORD *)(a1 + 16);
    }
    else
    {
      *(_QWORD *)(48 * v8 - 0x220000000000LL) = *(_QWORD *)(a1 + 16) ^ (*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(48 * v8 - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
    }
    if ( v10 == 0x3FFFFFFFFFLL )
    {
      v57 = (unsigned int)MiGetPfnPriority(v7);
      result = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(88 * v57 + v58 + 3288) = result;
    }
    else
    {
      result = *(_QWORD *)(a1 + 24) ^ (*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(48 * v10 - 0x21FFFFFFFFE8LL)) & 0xFFFFFF0000000000uLL;
      *(_QWORD *)(48 * v10 - 0x21FFFFFFFFE8LL) = result;
    }
  }
  if ( *(_DWORD *)(a1 + 12) == 2 )
  {
    v21 = *(_QWORD *)(a1 + 16);
    v22 = 48 * v21;
    v23 = 48 * v21 - 0x220000000000LL;
    v61 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(v23 + 40) >> 43) & 0x3FFLL));
    v24 = (unsigned int)dword_140E2DC04;
    if ( dword_140E2DC00 > (unsigned int)dword_140E2DC04
      || (v25 = (char *)qword_140E2DC60 + 16 * dword_140E2DC00, v21 < *(_QWORD *)v25)
      || dword_140E2DC00 != dword_140E2DC04 && v21 >= *((_QWORD *)v25 + 2) )
    {
      for ( j = 0; ; j = v27 + 1 )
      {
        while ( 1 )
        {
          if ( (int)v24 < j )
            KeBugCheckEx(0x1Au, 0x5180uLL, v21, 0LL, 0LL);
          v27 = (j + (int)v24) >> 1;
          v25 = (char *)qword_140E2DC60 + 16 * v27;
          if ( v21 >= *(_QWORD *)v25 )
            break;
          if ( !v27 )
            KeBugCheckEx(0x1Au, 0x5180uLL, v21, (ULONG_PTR)qword_140E2DC60, 0LL);
          v24 = (unsigned int)(v27 - 1);
        }
        if ( v27 == dword_140E2DC04 || v21 < *((_QWORD *)v25 + 2) )
          break;
      }
      dword_140E2DC00 = (j + (int)v24) >> 1;
    }
    v63 = *((_DWORD *)v25 + 2);
    if ( v2 )
    {
      v30 = 5;
      v29 = 0xAAAAAAAAAAAAAAABuLL;
      goto LABEL_35;
    }
    v28 = *(_DWORD *)(v23 + 32);
    if ( (v28 & 0x8000000) == 0 )
    {
      v29 = 0xAAAAAAAAAAAAAAABuLL;
LABEL_34:
      v30 = HIBYTE(v28) & 7;
LABEL_35:
      if ( qword_140E2DC68 )
        v31 = MiPageToChannel(v29 * (v22 >> 4), v24);
      else
        v31 = 0;
      v32 = a2[7];
      v33 = a2[10];
      v62 = *(_QWORD *)(v61 + 16) + 57216LL * v63 + 88 * (v30 + 8LL * v31 + 59);
      if ( v32 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)(v62 + 16) = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v34 = *(_QWORD *)(a1 + 16);
        v35 = 48 * v32 - 0x220000000000LL;
        v36 = *(_DWORD *)(v35 + 36);
        *(_QWORD *)v35 = *(_QWORD *)v35 & 0xFFFFFFFFFFLL | (v34 << 40);
        v37 = v34;
        v38 = v34 << 20;
        *(_DWORD *)(v35 + 36) = v36 & 0x1FFFFF | ((unsigned int)(v37 >> 24) << 21);
        v39 = *(_QWORD *)(v35 + 40);
        v40 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v35 + 40),
                v38 ^ (v38 ^ v39) & 0xF07FFFFFFFFFFFFFuLL,
                v39);
        if ( v39 != v40 )
        {
          do
          {
            v41 = v40;
            v40 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v35 + 40),
                    v38 ^ (v38 ^ v40) & 0xF07FFFFFFFFFFFFFuLL,
                    v40);
          }
          while ( v41 != v40 );
        }
      }
      if ( v33 == 0x3FFFFFFFFFLL )
      {
        *(_QWORD *)(v62 + 24) = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v42 = *(_QWORD *)(a1 + 24);
        v43 = 48 * v33 - 0x220000000000LL;
        v44 = *(_QWORD *)(v43 + 24);
        v45 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v43 + 24),
                (v42 << 40) ^ (v44 ^ (v42 << 40)) & 0xF80000FFFFFFFFFFuLL,
                v44);
        if ( v44 != v45 )
        {
          do
          {
            v55 = v45;
            v45 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v43 + 24),
                    (v42 << 40) ^ ((v42 << 40) ^ v45) & 0xF80000FFFFFFFFFFuLL,
                    v45);
          }
          while ( v55 != v45 );
        }
        *(_DWORD *)(v43 + 36) ^= (*(_DWORD *)(v43 + 36) ^ (v42 >> 19)) & 0x1FFFFF;
      }
      v46 = *(_DWORD *)(v9 + 36);
      *(_QWORD *)v9 = (v33 << 40) | *(_QWORD *)v9 & 0xFFFFFFFFFFLL;
      v47 = v33;
      v48 = v33 << 20;
      *(_DWORD *)(v9 + 36) = v46 & 0x1FFFFF | ((unsigned int)(v47 >> 24) << 21);
      v49 = *(_QWORD *)(v9 + 40);
      v50 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v9 + 40),
              v48 ^ (v48 ^ v49) & 0xF07FFFFFFFFFFFFFuLL,
              v49);
      if ( v49 != v50 )
      {
        do
        {
          v51 = v50;
          v50 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v9 + 40),
                  v48 ^ (v48 ^ v50) & 0xF07FFFFFFFFFFFFFuLL,
                  v50);
        }
        while ( v51 != v50 );
      }
      v52 = *(_QWORD *)(v7 + 24);
      v53 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v7 + 24),
              (v32 << 40) ^ (v52 ^ (v32 << 40)) & 0xF80000FFFFFFFFFFuLL,
              v52);
      if ( v52 != v53 )
      {
        do
        {
          v54 = v53;
          v53 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v7 + 24),
                  (v32 << 40) ^ ((v32 << 40) ^ v53) & 0xF80000FFFFFFFFFFuLL,
                  v53);
        }
        while ( v54 != v53 );
      }
      *(_DWORD *)(v7 + 36) ^= (*(_DWORD *)(v7 + 36) ^ (v32 >> 19)) & 0x1FFFFF;
      result = *(_QWORD *)a1;
      _InterlockedAdd64((volatile signed __int64 *)v62, *(_QWORD *)a1);
      goto LABEL_47;
    }
    if ( v23 >= 0xFFFFDE0000000000uLL )
    {
      v29 = 0xAAAAAAAAAAAAAAABuLL;
      if ( v23 < 48 * qword_140E2DD20 - 0x21FFFFFFFFD0LL
        && !(unsigned int)MiIsDecayPfn(0xAAAAAAAAAAAAAAABuLL * (v22 >> 4), v24, 0xAAAAAAAAAAAAAAABuLL, v23) )
      {
        if ( (BYTE2(v28) & 7) != 6 && (unsigned int)MiGetPfnSlabType(v56) == 9 )
        {
          v30 = 5;
          goto LABEL_35;
        }
        goto LABEL_34;
      }
    }
    else
    {
      v29 = 0xAAAAAAAAAAAAAAABuLL;
    }
    v30 = 5;
    goto LABEL_35;
  }
LABEL_47:
  if ( !v2 )
  {
    *(_QWORD *)v9 = v65 ^ (v65 ^ *(_QWORD *)v9) & 0xFFFFFF0000000000uLL;
    result = v8 ^ (v8 ^ *(_QWORD *)(v7 + 24)) & 0xFFFFFF0000000000uLL;
    *(_QWORD *)(v7 + 24) = result;
  }
  return result;
}
