/*
 * XREFs of sub_180097BD0 @ 0x180097BD0
 * Callers:
 *     sub_180095EF4 @ 0x180095EF4 (sub_180095EF4.c)
 *     sub_180096188 @ 0x180096188 (sub_180096188.c)
 *     sub_180096260 @ 0x180096260 (sub_180096260.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_1800291FC @ 0x1800291FC (sub_1800291FC.c)
 *     sub_180029814 @ 0x180029814 (sub_180029814.c)
 *     sub_1800373E4 @ 0x1800373E4 (sub_1800373E4.c)
 *     sub_18006D2D8 @ 0x18006D2D8 (sub_18006D2D8.c)
 *     sub_18006D4C8 @ 0x18006D4C8 (sub_18006D4C8.c)
 *     sub_18009567C @ 0x18009567C (sub_18009567C.c)
 *     sub_180096798 @ 0x180096798 (sub_180096798.c)
 *     sub_180096820 @ 0x180096820 (sub_180096820.c)
 *     sub_18009687C @ 0x18009687C (sub_18009687C.c)
 *     sub_1800969CC @ 0x1800969CC (sub_1800969CC.c)
 *     sub_180096B2C @ 0x180096B2C (sub_180096B2C.c)
 *     sub_180096BC4 @ 0x180096BC4 (sub_180096BC4.c)
 *     sub_180096FA8 @ 0x180096FA8 (sub_180096FA8.c)
 *     sub_1800974B4 @ 0x1800974B4 (sub_1800974B4.c)
 *     sub_180098374 @ 0x180098374 (sub_180098374.c)
 *     sub_180098454 @ 0x180098454 (sub_180098454.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180097BD0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 *v6; // rax
  __m128i v7; // xmm9
  char v8; // di
  __int64 *v9; // rbx
  __int64 **v10; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 *v13; // rax
  __m128i v14; // xmm7
  __int64 v15; // rbx
  __int64 *v16; // rax
  __m128i v17; // xmm6
  __int64 v18; // rsi
  __int64 *v19; // rax
  __m128i v20; // xmm8
  _OWORD *v21; // rax
  __m128d v22; // xmm10
  bool v23; // cl
  bool v24; // dl
  bool v25; // r8
  bool v26; // al
  __int64 v27; // r8
  __int64 v28; // xmm7_8
  __int64 v29; // rcx
  __int64 v30; // xmm9_8
  double v31; // xmm6_8
  double v32; // xmm0_8
  double v33; // xmm0_8
  __int64 v34; // xmm8_8
  double v35; // xmm0_8
  double v36; // xmm0_8
  __int64 *v37; // rbx
  __int64 v38; // rdi
  __int64 **v39; // rax
  __int64 *k; // rax
  __int64 *m; // rcx
  __int64 v42; // rbx
  __int64 v44; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+30h] [rbp-D8h]
  char v46; // [rsp+38h] [rbp-D0h]
  int v47; // [rsp+39h] [rbp-CFh]
  __int16 v48; // [rsp+3Dh] [rbp-CBh]
  char v49; // [rsp+3Fh] [rbp-C9h]
  __int64 v50; // [rsp+40h] [rbp-C8h]
  _BYTE v51[40]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h]
  __int64 v53; // [rsp+78h] [rbp-90h]
  __int64 v54; // [rsp+80h] [rbp-88h]
  __int64 v55; // [rsp+88h] [rbp-80h]
  __int64 v56; // [rsp+90h] [rbp-78h]
  __int64 v57; // [rsp+98h] [rbp-70h]
  __int64 v58; // [rsp+A0h] [rbp-68h]
  __int64 v59; // [rsp+A8h] [rbp-60h]
  __int64 v60; // [rsp+B0h] [rbp-58h]
  __int64 v61; // [rsp+B8h] [rbp-50h]
  __int64 v62; // [rsp+C0h] [rbp-48h]
  char v63; // [rsp+C8h] [rbp-40h]
  int v64; // [rsp+C9h] [rbp-3Fh]
  __int16 v65; // [rsp+CDh] [rbp-3Bh]
  char v66; // [rsp+CFh] [rbp-39h]
  __int64 v67; // [rsp+D0h] [rbp-38h]
  void *v68[5]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v69[16]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v70; // [rsp+110h] [rbp+8h]
  _BYTE v71[96]; // [rsp+118h] [rbp+10h]
  _BYTE v72[16]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v73; // [rsp+188h] [rbp+80h]
  _QWORD v74[4]; // [rsp+190h] [rbp+88h] BYREF
  __int128 v75; // [rsp+1B0h] [rbp+A8h]
  __int64 v76; // [rsp+1C0h] [rbp+B8h]
  __int64 v77; // [rsp+1C8h] [rbp+C0h]
  __int64 v78; // [rsp+1D0h] [rbp+C8h]
  __int64 v79; // [rsp+1D8h] [rbp+D0h]
  __int64 v80; // [rsp+1E0h] [rbp+D8h]
  __int64 v81; // [rsp+1E8h] [rbp+E0h]

  v4 = a2;
  v50 = a2;
  memset(&v51[8], 0, 32);
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0LL;
  sub_180029814((__int64 *)v68);
  sub_1800974B4(v4, (__int64)&v51[8]);
  sub_1800291FC(v68, (__int64)v68);
  if ( *(_DWORD *)(a1 + 920) == 2 )
  {
    if ( a3 )
      sub_1800373E4(*(_QWORD ***)(a1 + 896));
    if ( sub_1800969CC(a1) )
    {
      v6 = (__int64 *)sub_180096B2C(a1, (__int64)v69);
    }
    else
    {
      v44 = 4LL;
      v45 = 0LL;
      v46 = 1;
      v47 = 0;
      v48 = 0;
      v49 = 0;
      v6 = &v44;
    }
    v7 = *(__m128i *)v6;
    v70 = v6[2];
    if ( _mm_cvtsi128_si32(v7) == 2 )
    {
      v8 = 1;
      v9 = **(__int64 ***)(a1 + 880);
      while ( !*((_BYTE *)v9 + 25) )
      {
        v8 = (unsigned __int8)sub_180098454(v9 + 8) != 0 ? v8 : 0;
        v10 = (__int64 **)v9[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v9 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v9 = i;
          v9 = i;
        }
        else
        {
          v9 = (__int64 *)v9[2];
          for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v9 = j;
        }
      }
      if ( sub_1800969CC(a1 + 176) )
      {
        v13 = (__int64 *)sub_180096B2C(a1 + 176, (__int64)v72);
      }
      else
      {
        v44 = 4LL;
        v45 = 0LL;
        v46 = 1;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        v13 = &v44;
      }
      v14 = *(__m128i *)v13;
      v73 = v13[2];
      v15 = a1 + 352;
      if ( sub_1800969CC(a1 + 352) )
      {
        v16 = (__int64 *)sub_180096B2C(a1 + 352, (__int64)v72);
      }
      else
      {
        v44 = 4LL;
        v45 = 0LL;
        v46 = 1;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        v16 = &v44;
      }
      v17 = *(__m128i *)v16;
      v73 = v16[2];
      v18 = a1 + 528;
      if ( sub_1800969CC(a1 + 528) )
      {
        v19 = (__int64 *)sub_180096B2C(a1 + 528, (__int64)v72);
      }
      else
      {
        v44 = 4LL;
        v45 = 0LL;
        v46 = 1;
        v47 = 0;
        v48 = 0;
        v49 = 0;
        v19 = &v44;
      }
      v20 = *(__m128i *)v19;
      v73 = v19[2];
      if ( sub_1800969CC(a1 + 704) )
      {
        v21 = (_OWORD *)sub_180096BC4(a1 + 704, (__int64)&v51[8]);
      }
      else
      {
        v74[0] = 4LL;
        memset(&v74[1], 0, 24);
        v75 = 0uLL;
        v76 = 0LL;
        v77 = 0LL;
        v78 = 0LL;
        v79 = 0LL;
        v80 = 0LL;
        v81 = 0LL;
        v21 = v74;
      }
      *(_OWORD *)v71 = *v21;
      *(_OWORD *)&v71[16] = v21[1];
      *(_OWORD *)&v71[32] = v21[2];
      *(_OWORD *)&v71[48] = v21[3];
      *(_OWORD *)&v71[64] = v21[4];
      v22 = (__m128d)v21[5];
      *(__m128d *)&v71[80] = v22;
      v23 = _mm_cvtsi128_si32(v14) == 2;
      v24 = _mm_cvtsi128_si32(v17) == 2;
      v25 = _mm_cvtsi128_si32(v20) == 2;
      v26 = _mm_cvtsi128_si32(*(__m128i *)v71) == 2;
      if ( v8 && v23 && v24 && v25 && v26 )
      {
        sub_18006D4C8((_QWORD *)(a1 + 1064));
        if ( (_BYTE)v70 )
        {
          *(_QWORD *)(a1 + 936) = 0LL;
          *(_QWORD *)(a1 + 952) = 0LL;
          *(_QWORD *)(a1 + 928) = 0LL;
          *(_QWORD *)(a1 + 944) = 0LL;
        }
        else
        {
          v27 = _mm_srli_si128(v17, 8).m128i_u64[0];
          v28 = _mm_srli_si128(v14, 8).m128i_u64[0];
          v29 = v27 - v28;
          v30 = _mm_srli_si128(v7, 8).m128i_u64[0];
          if ( v30 < 0 )
            v31 = (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1))
                + (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1));
          else
            v31 = (double)(int)v30;
          if ( v28 < 0 )
            v32 = (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1))
                + (double)(int)(v28 & 1 | ((unsigned __int64)v28 >> 1));
          else
            v32 = (double)(int)v28;
          *(double *)(a1 + 936) = v32 / v31 * 1000.0;
          if ( v27 < 0 )
            v33 = (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1))
                + (double)(int)(v27 & 1 | ((unsigned __int64)v27 >> 1));
          else
            v33 = (double)(int)v27;
          *(double *)(a1 + 944) = v33 / v31 * 1000.0;
          v34 = _mm_srli_si128(v20, 8).m128i_u64[0];
          if ( v34 < 0 )
            v35 = (double)(int)(v34 & 1 | ((unsigned __int64)v34 >> 1))
                + (double)(int)(v34 & 1 | ((unsigned __int64)v34 >> 1));
          else
            v35 = (double)(int)v34;
          *(double *)(a1 + 952) = v35 / v31 * 1000.0;
          if ( v29 < 0 )
            v36 = (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1))
                + (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1));
          else
            v36 = (double)(int)v29;
          *(double *)(a1 + 928) = v36 / v31 * 1000.0;
          *(_OWORD *)(a1 + 960) = *(_OWORD *)&v71[8];
          *(_OWORD *)(a1 + 976) = *(_OWORD *)&v71[24];
          *(_OWORD *)(a1 + 992) = *(_OWORD *)&v71[40];
          *(_OWORD *)(a1 + 1008) = *(_OWORD *)&v71[56];
          *(_OWORD *)(a1 + 1024) = *(_OWORD *)&v71[72];
          *(_QWORD *)(a1 + 1040) = *(_OWORD *)&_mm_unpackhi_pd(v22, v22);
          *(_BYTE *)(a1 + 1048) = 1;
          v37 = **(__int64 ***)(a1 + 880);
          while ( !*((_BYTE *)v37 + 25) )
          {
            v38 = sub_180098374(v37 + 8, v72);
            sub_180017054((__int64)v74, (__int64)(v37 + 4));
            v75 = *(_OWORD *)v38;
            v76 = *(_QWORD *)(v38 + 16);
            sub_180096FA8((_QWORD *)(a1 + 1064), (__int64)&v44, (__int64)v74);
            sub_180011B5C((__int64)v74);
            v39 = (__int64 **)v37[2];
            if ( *((_BYTE *)v39 + 25) )
            {
              for ( k = (__int64 *)v37[1]; !*((_BYTE *)k + 25) && v37 == (__int64 *)k[2]; k = (__int64 *)k[1] )
                v37 = k;
              v37 = k;
            }
            else
            {
              v37 = (__int64 *)v37[2];
              for ( m = *v39; !*((_BYTE *)m + 25); m = (__int64 *)*m )
                v37 = m;
            }
          }
          v18 = a1 + 528;
          v15 = a1 + 352;
        }
        sub_180096798((__int64)&v51[8]);
        sub_18009687C(a1, (__int64 *)&v51[8]);
        sub_180096820(&v51[8]);
        sub_180096798((__int64)&v51[8]);
        sub_18009687C(a1 + 176, (__int64 *)&v51[8]);
        sub_180096820(&v51[8]);
        sub_180096798((__int64)&v51[8]);
        sub_18009687C(v15, (__int64 *)&v51[8]);
        sub_180096820(&v51[8]);
        sub_180096798((__int64)&v51[8]);
        sub_18009687C(v18, (__int64 *)&v51[8]);
        sub_180096820(&v51[8]);
        sub_180096798((__int64)&v51[8]);
        sub_18009687C(a1 + 704, (__int64 *)&v51[8]);
        sub_180096820(&v51[8]);
        v42 = *(_QWORD *)(a1 + 880);
        sub_18009567C(a1 + 880, a1 + 880, *(char **)(v42 + 8));
        *(_QWORD *)(v42 + 8) = v42;
        *(_QWORD *)v42 = v42;
        *(_QWORD *)(v42 + 16) = v42;
        *(_QWORD *)(a1 + 888) = 0LL;
        *(_DWORD *)(a1 + 920) = 3;
      }
      v4 = v50;
    }
  }
  if ( *(_DWORD *)(a1 + 920) == 3 )
    sub_18006D2D8(v4, a1 + 928);
  return *(unsigned int *)(a1 + 920);
}
