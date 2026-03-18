/*
 * XREFs of ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x140009AE0
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1400080A0 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14002C51C (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     ?Compute_b0_b1@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x14000A10C (-Compute_b0_b1@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1400161A4 (McTemplateK0xx_EtwWriteTransfer.c)
 *     ?Reset@?$LinearFitT@$0BAA@@@QEAAXXZ @ 0x140018324 (-Reset@-$LinearFitT@$0BAA@@@QEAAXXZ.c)
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x140038E64 (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 *     ?InitWithPoint@?$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z @ 0x140040030 (-InitWithPoint@-$LinearFitT@$0BAA@@@QEAAXAEBUPoint@1@@Z.c)
 */

void __fastcall VidSchiRecordVSyncTiming(struct _VIDSCH_VSYNC_COOKIE *a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  unsigned __int64 v3; // r8
  __int64 v5; // rsi
  __int64 v6; // r13
  unsigned int v7; // r11d
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // r12
  double v13; // xmm0_8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  bool v16; // cf
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  bool v25; // r9
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rdx
  signed __int64 v31; // r15
  __int64 v32; // r12
  __int128 v33; // rax
  __int64 v34; // r8
  __int128 v35; // rax
  bool v36; // zf
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r10
  unsigned __int64 v46; // r10
  unsigned int v47; // [rsp+A8h] [rbp+50h]
  unsigned int v48; // [rsp+A8h] [rbp+50h]

  *((_QWORD *)&v2 + 1) = a2;
  v3 = 1LL;
  if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
    return;
  v5 = *((_QWORD *)a1 + 6);
  v6 = -1LL;
  v47 = *((_DWORD *)a1 + 27);
  v7 = v47;
  v8 = *(_QWORD *)(v5 + 8LL * v47 + 3432);
  v9 = *((_QWORD *)a1 + 11) - *(_QWORD *)(v8 + 44352);
  if ( *(_BYTE *)(v5 + 7058) )
  {
    v10 = *(unsigned int *)(*(_QWORD *)(v5 + 16) + 4416LL);
    if ( v9 > v10 )
    {
      if ( *(_DWORD *)(v8 + 3192) != -1 )
      {
        if ( *(_DWORD *)(v8 + 3192) && *(_DWORD *)(v8 + 3192) != *(_DWORD *)(v8 + 83096) )
        {
          v44 = *(unsigned int *)(v8 + 3192);
          goto LABEL_63;
        }
        if ( *(_DWORD *)(v8 + 83096) )
        {
          v44 = *(unsigned int *)(v8 + 83096);
LABEL_63:
          v45 = *(_QWORD *)(v5 + 2872);
          v10 = v44 * v45;
          if ( is_mul_ok(v44, v45) )
          {
            v2 = v44 * *(_QWORD *)(v5 + 2872) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
            v11 = v10 / 0x989680;
          }
          else
          {
            v3 = 0xD6BF94D5E57A42BDuLL;
            v10 = v45 * (v44 % 0x989680);
            *((_QWORD *)&v2 + 1) = v45 * (v44 / 0x989680);
            v11 = *((_QWORD *)&v2 + 1) + v10 / 0x989680;
          }
          goto LABEL_8;
        }
      }
      v11 = *(_QWORD *)(v8 + 83112);
LABEL_8:
      v12 = *(_QWORD *)(v8 + 44408);
      if ( (byte_140081244 & 4) != 0 )
        McTemplateK0xx_EtwWriteTransfer(v10, *((_QWORD *)&v2 + 1), v3, v11, v11);
      if ( (v11 & 0x8000000000000000uLL) != 0LL )
        v13 = (double)(int)(v11 & 1 | (v11 >> 1)) + (double)(int)(v11 & 1 | (v11 >> 1));
      else
        v13 = (double)(int)v11;
      *(double *)(v12 + 32) = v13;
      LinearFitT<256>::Reset(v12);
      v7 = v47;
    }
  }
  if ( *(_QWORD *)(v8 + 44424) )
  {
    v14 = *((_QWORD *)a1 + 7) - *(_QWORD *)(v8 + 44368);
    if ( v9 )
    {
      if ( *(_QWORD *)(v8 + 44424) <= 3uLL )
      {
        v38 = v14 + *(_QWORD *)(v8 + 44440);
        v39 = v9 + *(_QWORD *)(v8 + 44424);
        *(_QWORD *)(v8 + 44440) = v38;
        *(_QWORD *)(v8 + 44424) = v39;
        if ( v39 > 3 )
        {
          v40 = v38 / (v39 - 1);
          *(_QWORD *)(v8 + 44448) = v40 / 0xA;
          _m_prefetchw((const void *)(v8 + 44432));
          while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 44432), v40, *(_QWORD *)(v8 + 44432)) != v40 )
            ;
          v41 = *(_QWORD *)(v8 + 44440);
          v42 = *(_QWORD *)(v5 + 2872);
          if ( is_mul_ok(v41, 0x3E8uLL) )
          {
            *((_QWORD *)&v2 + 1) = v41 * (unsigned __int128)0x3E8uLL % v42;
            v43 = v41 * (unsigned __int128)0x3E8uLL / v42;
          }
          else
          {
            *((_QWORD *)&v2 + 1) = v41 % v42;
            v43 = 1000 * (v41 / v42) + 1000 * (v41 % v42) / v42;
          }
          *(_QWORD *)(v8 + 44472) += v43;
        }
      }
      else
      {
        v15 = 2LL * *(_QWORD *)(v8 + 44432);
        *(_QWORD *)(v8 + 44464) = v14 / v9;
        v16 = v14 / v9 < v15;
        v17 = *(_QWORD *)(v5 + 2872);
        v18 = v14 / v9;
        if ( v16 )
        {
          if ( is_mul_ok(v14, 0x3E8uLL) )
          {
            *((_QWORD *)&v2 + 1) = v14 * (unsigned __int128)0x3E8uLL % v17;
            v19 = v14 * (unsigned __int128)0x3E8uLL / v17;
          }
          else
          {
            *((_QWORD *)&v2 + 1) = v14 % v17;
            v19 = 1000 * (v14 / v17) + 1000 * (v14 % v17) / v17;
          }
          *(_QWORD *)(v8 + 44472) += v19;
        }
        else
        {
          if ( is_mul_ok(v14, 0x3E8uLL) )
          {
            *((_QWORD *)&v2 + 1) = v14 * (unsigned __int128)0x3E8uLL % v17;
            v46 = v14 * (unsigned __int128)0x3E8uLL / v17;
          }
          else
          {
            *((_QWORD *)&v2 + 1) = v14 % v17;
            v46 = 1000 * (v14 / v17) + 1000 * (v14 % v17) / v17;
          }
          *(_QWORD *)(v8 + 44480) += v46;
        }
        if ( v18 > *(_QWORD *)(v8 + 44432) + *(_QWORD *)(v8 + 44448)
          || v18 < *(_QWORD *)(v8 + 44432) - *(_QWORD *)(v8 + 44448) )
        {
          ++*(_QWORD *)(v8 + 44456);
          *(_QWORD *)(v8 + 44424) = 0LL;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(v8 + 44440) = 0LL;
    *(_QWORD *)(v8 + 44424) = 1LL;
  }
  if ( !*(_BYTE *)(v5 + 59) && *(_QWORD *)(v8 + 44424) <= 3uLL )
  {
    if ( *(_BYTE *)(v5 + 2468) )
      _InterlockedExchange((volatile __int32 *)(v5 + 4LL * v7 + 2528), 1);
    else
      _InterlockedExchange((volatile __int32 *)(v5 + 2528), 1);
  }
  v20 = *((_QWORD *)a1 + 11);
  *(_QWORD *)(v8 + 44352) = v20;
  v21 = *((_QWORD *)a1 + 7);
  *(_QWORD *)(v8 + 44368) = v21;
  *(_QWORD *)(v8 + 44360) = *((_QWORD *)a1 + 12);
  *(_QWORD *)(v8 + 44376) = *((_QWORD *)a1 + 8);
  *(_QWORD *)(v8 + 44384) = *((_QWORD *)a1 + 9);
  *(_QWORD *)(v8 + 44392) = *((_QWORD *)a1 + 10);
  if ( *(_BYTE *)(v5 + 7058) )
  {
    v22 = *(_QWORD *)(v8 + 44408);
    v48 = _mm_getcsr();
    v23 = *(_DWORD *)(v22 + 8);
    _mm_setcsr(v48 | 1);
    v24 = v22 + 16LL * (unsigned __int8)v23;
    if ( !v23 )
    {
      *(_QWORD *)(v24 + 104) = v20;
      *(_QWORD *)(v24 + 112) = v21;
LABEL_50:
      LinearFitT<256>::InitWithPoint(v22, v24 + 104);
LABEL_43:
      LinearFitT<256>::Compute_b0_b1(v22);
LABEL_44:
      _mm_setcsr(v48);
      return;
    }
    v25 = 0;
    v26 = 2LL * (unsigned __int8)(v23 - 1);
    v27 = v21 - *(_QWORD *)(v22 + 16LL * (unsigned __int8)(v23 - 1) + 112);
    v28 = *(_QWORD *)(v22 + 8 * v26 + 112) - v21;
    if ( v28 < 0 )
      v28 = v27;
    if ( v20 <= *(_QWORD *)(v22 + 8 * v26 + 104) + *(_QWORD *)(v22 + 88) && v28 <= *(_QWORD *)(v22 + 96) )
      goto LABEL_44;
    if ( *(_DWORD *)(v22 + 8) > 0x100u )
    {
      if ( (*(_DWORD *)(v22 + 8) & 0x1FF) == 0 )
        v25 = (unsigned __int8)LinearFitT<256>::RebaseSums(v22, *((_QWORD *)&v2 + 1), 1LL) == 0;
      v29 = *(_QWORD *)(v24 + 104) - *(_QWORD *)(v22 + 40);
      v30 = *(_QWORD *)(v24 + 112) - *(_QWORD *)(v22 + 48);
      *(_QWORD *)(v22 + 56) -= v29;
      *(_QWORD *)(v22 + 64) -= v30;
      *(_QWORD *)(v22 + 72) -= v29 * v30;
      *(_QWORD *)(v22 + 80) -= v29 * v29;
    }
    *(_QWORD *)(v24 + 104) = v20;
    *(_QWORD *)(v24 + 112) = v21;
    v31 = v20 - *(_QWORD *)(v22 + 40);
    v32 = v21 - *(_QWORD *)(v22 + 48);
    v33 = v31 * (__int128)v31;
    if ( (__int64)v33 < 0 )
    {
      if ( *((_QWORD *)&v33 + 1) == -1LL )
        goto LABEL_36;
    }
    else if ( is_mul_ok(v31, v31) )
    {
      goto LABEL_36;
    }
    *(_QWORD *)&v33 = -1LL;
LABEL_36:
    v34 = *(_QWORD *)(v22 + 80) + v33;
    v35 = v31 * (__int128)v32;
    if ( (__int64)v35 < 0 )
      v36 = *((_QWORD *)&v35 + 1) == -1LL;
    else
      v36 = *((_QWORD *)&v35 + 1) == 0LL;
    if ( v36 )
      v6 = v31 * v32;
    v37 = *(_QWORD *)(v22 + 72);
    *(_QWORD *)(v22 + 56) += v31;
    *(_QWORD *)(v22 + 64) += v32;
    ++*(_DWORD *)(v22 + 8);
    *(_QWORD *)(v22 + 80) = v34;
    *(_QWORD *)(v22 + 72) = v37 + v6;
    if ( !v25
      && *(_QWORD *)(v24 + 104) > *(_QWORD *)(v22 + 8 * v26 + 104)
      && (*(__int64 *)(v22 + 96) <= 0 || v28 <= *(_QWORD *)(v22 + 96)) )
    {
      goto LABEL_43;
    }
    goto LABEL_50;
  }
}
