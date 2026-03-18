/*
 * XREFs of SetPrpFromSrb @ 0x140004B50
 * Callers:
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1400062C0 (ProtocolCommandToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x14002C8E8 (ProcessCommandNvmePacket.c)
 * Callees:
 *     GetSrbExtension @ 0x140005060 (GetSrbExtension.c)
 *     SglToPrp @ 0x140005090 (SglToPrp.c)
 *     GetLbaFromCdb @ 0x1400052C0 (GetLbaFromCdb.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int *v6; // r8
  char v7; // al
  _DWORD *v8; // r15
  _DWORD *v9; // rdi
  __int64 v10; // r12
  unsigned int v11; // r9d
  unsigned int v12; // edx
  unsigned int v13; // r10d
  __int64 SrbExtension; // r13
  unsigned int v15; // r15d
  unsigned int v16; // edi
  unsigned int v17; // r15d
  unsigned int v18; // r10d
  char v19; // r11
  unsigned int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int8 *v24; // rcx
  __int64 LbaFromCdb; // rax
  unsigned __int8 v26; // cl
  int v27; // r9d
  unsigned __int8 *v28; // r8
  bool v29; // zf
  unsigned __int8 v30; // cl
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rax
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // r8
  unsigned int v38; // edi
  __int64 v39; // rax
  int v40; // ecx
  unsigned int v41; // eax
  __int64 v42; // r10
  __m128i *v43; // r9
  unsigned int v44; // r8d
  __int64 v45; // r10
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rax
  unsigned __int8 v49; // [rsp+40h] [rbp-39h]
  unsigned __int8 *v50; // [rsp+48h] [rbp-31h]
  unsigned int v51; // [rsp+50h] [rbp-29h]
  unsigned int v52; // [rsp+58h] [rbp-21h] BYREF
  unsigned int v53; // [rsp+5Ch] [rbp-1Dh]
  __int64 v54; // [rsp+60h] [rbp-19h] BYREF
  __int64 v55; // [rsp+68h] [rbp-11h]
  _OWORD v56[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v57; // [rsp+90h] [rbp+17h]

  if ( (*(_DWORD *)(a1 + 56) & 8) == 0 )
  {
    result = SglToPrp();
    goto LABEL_16;
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v55 = 0LL;
  v54 = 0LL;
  v53 = 0;
  if ( (*(_BYTE *)(v4 + 4225) & 6) == 2 )
  {
    result = StorPortExtendedFunction(6LL, a1, a2, &v54);
    if ( (_DWORD)result || (result = StorPortExtendedFunction(76LL, a1, a2, v54), (_DWORD)result) )
    {
LABEL_17:
      ++*(_DWORD *)(a1 + 3800);
      return result;
    }
    v7 = *(_BYTE *)(a2 + 2);
    if ( v7 == 40 )
      v8 = (_DWORD *)(a2 + 60);
    else
      v8 = (_DWORD *)(a2 + 16);
    v9 = (_DWORD *)(a2 + 16);
    if ( !*(_DWORD *)(a1 + 120) )
      goto LABEL_12;
    v18 = 0;
    v19 = 0;
    v50 = 0LL;
    if ( v7 != 40 )
    {
      v24 = 0LL;
      v50 = 0LL;
      if ( v7 )
        goto LABEL_35;
      v18 = *(unsigned __int8 *)(a2 + 10);
      v51 = v18;
      v50 = 0LL;
      if ( (_BYTE)v18 )
      {
        v24 = (unsigned __int8 *)(a2 + 72);
        v50 = (unsigned __int8 *)(a2 + 72);
      }
LABEL_36:
      LbaFromCdb = GetLbaFromCdb(v24, v18, v6);
      v26 = *v50;
      if ( LbaFromCdb && (v26 == 0x8A || v26 == 40 || v26 == 42 || v26 == 0x88) )
      {
        v27 = *(_DWORD *)(a1 + 120);
        v28 = (unsigned __int8 *)(a2 + 7);
        v29 = *(_BYTE *)(a2 + 2) == 40;
        v52 = 0;
        if ( v29 )
          v30 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
        else
          v30 = *v28;
        v31 = v30;
        v32 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v30 + 1672) + 52LL);
        *v8 -= -v32 & (v32 + v27 - 1);
        if ( (unsigned int)v31 < *(_DWORD *)(a1 + 224) )
        {
          v33 = *(_QWORD *)(a1 + 8 * v31 + 1672);
          if ( v33 )
            v52 = *(_DWORD *)(v33 + 16);
        }
        if ( *(_BYTE *)(a2 + 2) == 40 )
        {
          v9 = (_DWORD *)(a2 + 60);
          v28 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 52) + 10LL);
        }
        v34 = *v50;
        v49 = *v28;
        if ( v34 == 136 || (v35 = v34 - 40) == 0 )
        {
          *(_BYTE *)(v4 + 4096) = 2;
        }
        else
        {
          v36 = v35 - 2;
          if ( !v36 || v36 == 96 )
          {
            *(_BYTE *)(v4 + 4096) = 1;
            if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 && *(_BYTE *)(a1 + 3729) == v49 )
            {
              if ( *(_WORD *)(a1 + 3732) )
              {
                v57 = 0LL;
                memset(v56, 0, sizeof(v56));
                LOWORD(v56[0]) = 1;
                if ( !(unsigned int)StorPortExtendedFunction(28LL, a1, a2, v56)
                  && (WORD4(v56[0]) & 0x100) != 0
                  && (unsigned int)(HIDWORD(v56[0]) - 1) <= 0xFFFE
                  && HIDWORD(v56[0]) <= *(unsigned __int16 *)(a1 + 3732)
                  && WORD6(v56[0]) )
                {
                  v41 = *(_DWORD *)(v4 + 4144) & 0xFF1FFFFF;
                  *(_WORD *)(v4 + 4150) = WORD6(v56[0]);
                  *(_DWORD *)(v4 + 4144) = v41 | 0x100000;
                }
              }
            }
          }
        }
        *(_DWORD *)(v4 + 4096) &= 0xFFFFFCFF;
        *(_DWORD *)(v4 + 4100) = v52;
        *(_QWORD *)(v4 + 4112) = 0LL;
        v37 = *(unsigned int *)(*(_QWORD *)(a1 + 8LL * v49 + 1672) + 52LL);
        v38 = ((int)v37 + *v9 - 1) / (unsigned int)v37 - 1;
        v39 = GetLbaFromCdb(v50, v51, v37);
        *(_DWORD *)(v4 + 4136) = v39;
        *(_WORD *)(v4 + 4144) = v38;
        *(_DWORD *)(v4 + 4144) &= 0xC3FFFFFF;
        *(_DWORD *)(v4 + 4140) = HIDWORD(v39);
        v40 = *(_DWORD *)(v4 + 4144) & 0x3FFFFFFF | ((v50[1] & 0xF8) << 27);
        *(_BYTE *)(v4 + 4148) = 0;
        *(_DWORD *)(v4 + 4144) = v40 & 0x7FFFFFFF;
        *(_QWORD *)(v4 + 4152) = 0LL;
      }
LABEL_12:
      v10 = v55;
      SrbExtension = GetSrbExtension(a2);
      v15 = v13;
      v16 = (v11 >> 12) + (((v11 & 0xFFF) + (v12 & 0xFFF) + 4095) >> 12);
      if ( v12 >= 0x1000 )
      {
        v17 = v12;
        v12 &= 0xFFFu;
        v15 = v17 >> 12;
      }
      if ( v16 )
      {
        if ( v15 + v16 <= v53 )
        {
          *(_QWORD *)(v4 + 4120) = v12 + (*(_QWORD *)(v10 + 8LL * v15) << 12);
          if ( v16 != 1 )
          {
            if ( v16 == 2 )
            {
              *(_QWORD *)(v4 + 4128) = *(_QWORD *)(v10 + 8LL * (v15 + 1)) << 12;
              memset((void *)v4, 0, 0x1000uLL);
              *(_QWORD *)v4 = *(_QWORD *)(v4 + 4128);
            }
            else
            {
              v52 = v13;
              memset((void *)v4, 0, 0x1000uLL);
              v42 = v16 - 1;
              v43 = (__m128i *)v4;
              v44 = 1;
              if ( (unsigned int)v42 < 8
                || v4 + 8 <= v10 + 8 * (unsigned __int64)((unsigned int)v42 + v15)
                && v4 + 8 * v42 >= v10 + 8 * (unsigned __int64)(v15 + 1) )
              {
                goto LABEL_94;
              }
              v45 = v15 + 5;
              do
              {
                v44 += 8;
                *v43 = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v10 + 8LL * (unsigned int)(v45 - 4))), 0xCu);
                v46 = (unsigned int)(v45 + 2);
                v43[1] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v10 + 8LL * (unsigned int)(v45 - 2))), 0xCu);
                v47 = _mm_loadu_si128((const __m128i *)(v10 + 8 * v45));
                v45 = (unsigned int)(v45 + 8);
                v43[2] = _mm_slli_epi64(v47, 0xCu);
                v43[3] = _mm_slli_epi64(_mm_loadu_si128((const __m128i *)(v10 + 8 * v46)), 0xCu);
                v43 += 4;
              }
              while ( v44 < v16 - (((_BYTE)v16 - 1) & 7) );
              if ( v44 < v16 )
              {
LABEL_94:
                do
                {
                  v48 = v44 + v15;
                  ++v44;
                  v43 = (__m128i *)((char *)v43 + 8);
                  v43[-1].m128i_i64[1] = *(_QWORD *)(v10 + 8 * v48) << 12;
                }
                while ( v44 < v16 );
              }
              *(_QWORD *)(v4 + 4128) = StorPortGetPhysicalAddress(a1, a2, v4, &v52);
            }
            v13 = 0;
          }
          if ( SrbExtension )
            *(_DWORD *)(SrbExtension + 4220) = v16;
          result = v13;
        }
        else
        {
          result = 3238002689LL;
        }
      }
      else
      {
        result = 3238002689LL;
      }
LABEL_16:
      if ( !(_DWORD)result )
        return result;
      goto LABEL_17;
    }
    if ( *(_DWORD *)(a2 + 20) || (v20 = *(_DWORD *)(a2 + 56)) == 0 )
    {
      v24 = 0LL;
      goto LABEL_35;
    }
    v6 = (unsigned int *)(a2 + 120);
    v21 = v20;
    while ( 1 )
    {
      v22 = *v6;
      if ( (unsigned int)v22 >= 0x80 && (unsigned int)v22 <= *v9 )
      {
        v23 = a2 + v22;
        if ( *(_DWORD *)(a2 + v22) == 64 || *(_DWORD *)(a2 + v22) == 65 )
        {
          v18 = *(unsigned __int8 *)(v23 + 10);
          v19 = 1;
          if ( (_BYTE)v18 )
          {
            v24 = (unsigned __int8 *)(v23 + 24);
            v50 = (unsigned __int8 *)(v23 + 24);
            goto LABEL_31;
          }
        }
        else if ( *(_DWORD *)(a2 + v22) == 66 )
        {
          v18 = *(_DWORD *)(v23 + 12);
          v19 = 1;
          if ( v18 )
          {
            v24 = (unsigned __int8 *)(v23 + 32);
            v50 = (unsigned __int8 *)(v23 + 32);
            goto LABEL_31;
          }
        }
      }
      v24 = v50;
LABEL_31:
      ++v6;
      if ( !--v21 )
      {
        v51 = v18;
        if ( v19 )
          goto LABEL_36;
LABEL_35:
        v18 = 0;
        v51 = 0;
        goto LABEL_36;
      }
    }
  }
  return 0LL;
}
