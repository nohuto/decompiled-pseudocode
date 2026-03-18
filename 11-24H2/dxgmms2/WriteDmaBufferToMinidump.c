/*
 * XREFs of WriteDmaBufferToMinidump @ 0x140097874
 * Callers:
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x140110E70 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 * Callees:
 *     memmove @ 0x140056040 (memmove.c)
 *     VidMmBeginDmaBufferCPUAccess_0 @ 0x1400F3ED0 (VidMmBeginDmaBufferCPUAccess_0.c)
 */

__int64 __fastcall WriteDmaBufferToMinidump(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned int a11,
        unsigned int a12,
        int a13,
        int a14,
        unsigned int a15)
{
  __int64 v15; // rbx
  __int64 v16; // r13
  unsigned int v18; // ecx
  char *v19; // r12
  unsigned __int64 v20; // rdi
  unsigned int v21; // esi
  int v22; // r9d
  unsigned int v23; // ebp
  unsigned int v24; // r11d
  size_t v25; // r14
  size_t v26; // r15
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r8
  unsigned int v29; // r12d
  unsigned int v30; // ebx
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  int v35; // r9d
  unsigned int v36; // edx
  unsigned int *v37; // r11
  int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // r9d
  unsigned __int64 v41; // rdx
  unsigned int v42; // ecx
  unsigned __int64 v43; // r8
  unsigned int v44; // esi
  unsigned int v45; // edx
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdx
  char *v50; // rdi
  __int64 v51; // rsi
  char *v52; // rbx
  char *v53; // rbp
  __int64 v54; // rcx
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  unsigned int v57; // [rsp+20h] [rbp-68h]
  unsigned int v58; // [rsp+24h] [rbp-64h]
  void *Src; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v62; // [rsp+A0h] [rbp+18h]
  unsigned int v63; // [rsp+A8h] [rbp+20h]
  unsigned int v64; // [rsp+B0h] [rbp+28h]
  unsigned int v65; // [rsp+B8h] [rbp+30h]

  v15 = a2;
  v16 = a1;
  if ( a3 < 0x48 )
    return 0LL;
  v18 = a15;
  v19 = (char *)(a3 - 72);
  v20 = *(unsigned int *)(v16 + 36);
  v21 = 0;
  v64 = 0;
  v22 = 0;
  v63 = 0;
  v23 = 0;
  v24 = -1;
  v65 = 0;
  v25 = 0LL;
  v57 = 0;
  v26 = 0LL;
  v62 = 0;
  v58 = -1;
  v27 = a15;
  Src = v19;
  v28 = a3 - 72;
  if ( v19 )
  {
    v29 = 0;
    v30 = a12;
    while ( 1 )
    {
      if ( v27 )
      {
        v31 = 64LL;
        if ( v28 < 0x40 )
          v31 = v28;
        if ( v31 >= v27 )
        {
          v32 = v27;
        }
        else
        {
          v32 = 64LL;
          if ( v28 < 0x40 )
            v32 = v28;
        }
        v26 += v32;
        v27 -= v32;
        v28 -= v32;
        if ( !v20 )
          goto LABEL_49;
      }
      else if ( !v20 )
      {
        goto LABEL_50;
      }
      v33 = 1024LL;
      if ( v28 < 0x400 )
        v33 = v28;
      if ( v33 >= v20 )
      {
        v34 = v20;
      }
      else
      {
        v34 = 1024LL;
        if ( v28 < 0x400 )
          v34 = v28;
      }
      v25 += v34;
      v20 -= v34;
      v28 -= v34;
      if ( v30 )
      {
        v35 = 0;
        v36 = a11;
        if ( a11 < v30 )
        {
          v37 = (unsigned int *)(*(_QWORD *)(v16 + 112) + 8 * (3LL * a11 + 2));
          do
          {
            v38 = v35;
            if ( *v37 < v25 )
            {
              v64 = v36;
              v39 = v36;
              if ( !v35 )
                v35 = 1;
              if ( v38 )
                v39 = v23;
              v23 = v39;
            }
            ++v36;
            v37 += 6;
          }
          while ( v36 < v30 );
          v24 = v58;
          v21 = v65;
          v62 = v23;
        }
        v40 = v23;
        v41 = v28 / 0x18;
        v42 = v64 - v23 - v21 + 1;
        if ( (unsigned int)(v28 / 0x18) >= v42 )
          v41 = v42;
        v21 += v41;
        v65 = v21;
        v43 = v28 - 24 * v41;
        if ( v23 <= v64 )
        {
          v44 = v63;
          do
          {
            v45 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 24LL * v40);
            v46 = v45;
            if ( v24 < v45 )
              v46 = v24;
            v24 = v46;
            if ( v44 > v45 )
              v45 = v44;
            ++v40;
            v44 = v45;
          }
          while ( v40 <= v64 );
          v16 = a1;
          v29 = v45;
          v21 = v65;
          v23 = v62;
          v30 = a12;
          v58 = v46;
        }
        v47 = *(_DWORD *)(v16 + 44) - 1;
        if ( v29 < v47 )
          v47 = v29;
        v63 = v47;
        v29 = v47;
        v48 = v47 - v24 - v57 + 1;
        v49 = v43 / 0x18;
        if ( (unsigned int)(v43 / 0x18) >= v48 )
          v49 = v48;
        v22 = v49 + v57;
        v57 += v49;
        v28 = v43 - 24 * v49;
      }
LABEL_49:
      if ( !v28 )
      {
LABEL_50:
        v15 = a2;
        v19 = (char *)Src;
        v18 = a15;
        break;
      }
    }
  }
  v50 = v19;
  *(_QWORD *)v15 = a7;
  *(_QWORD *)(v15 + 8) = a8;
  *(_DWORD *)(v15 + 16) = v18;
  *(_DWORD *)(v15 + 20) = a9;
  *(_DWORD *)(v15 + 24) = a10;
  *(_DWORD *)(v15 + 28) = a11;
  *(_DWORD *)(v15 + 32) = a12;
  *(_DWORD *)(v15 + 36) = a13;
  *(_DWORD *)(v15 + 40) = a14;
  *(_DWORD *)(v15 + 44) = v26;
  *(_DWORD *)(v15 + 48) = 0;
  *(_DWORD *)(v15 + 52) = v25;
  *(_DWORD *)(v15 + 56) = v23;
  *(_DWORD *)(v15 + 60) = v21;
  v51 = 72LL;
  *(_DWORD *)(v15 + 64) = v24;
  *(_DWORD *)(v15 + 68) = v22;
  v52 = (char *)(v15 + 72);
  v53 = v52;
  if ( v26 && v26 <= (unsigned __int64)v19 )
  {
    memmove(v52, *(const void **)(v16 + 120), v26);
    v53 = &v52[v26];
    v51 = v26 + 72;
    v50 = &v19[-v26];
  }
  if ( v25 && v25 <= (unsigned __int64)v50 )
  {
    v54 = *(_QWORD *)(v16 + 128);
    Src = 0LL;
    VidMmBeginDmaBufferCPUAccess_0(v54, v16, &Src);
    memmove(v53, Src, v25);
    v53 += v25;
    v51 += v25;
    v50 -= v25;
  }
  v55 = 24LL * v65;
  if ( v65 && v55 <= (unsigned __int64)v50 )
  {
    memmove(v53, (const void *)(*(_QWORD *)(v16 + 112) + 24LL * v62), 24LL * v65);
    v53 += v55;
    v51 += v55;
    v50 -= v55;
  }
  v56 = 24LL * v57;
  if ( v57 )
  {
    if ( v56 <= (unsigned __int64)v50 )
    {
      memmove(v53, (const void *)(*(_QWORD *)(v16 + 104) + 24LL * v58), 24LL * v57);
      v51 += v56;
    }
  }
  return v51;
}
