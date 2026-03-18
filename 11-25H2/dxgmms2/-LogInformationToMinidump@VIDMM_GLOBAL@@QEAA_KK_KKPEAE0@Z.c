/*
 * XREFs of ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x140095AF8
 * Callers:
 *     VidMmLogInformationToMinidump @ 0x14004C740 (VidMmLogInformationToMinidump.c)
 * Callees:
 *     memset @ 0x140056780 (memset.c)
 *     ?WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x140090E00 (-WritePagingHistoryToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x140096B7C (-WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z.c)
 *     ?VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z @ 0x1401120F8 (-VidMmWriteDmaHistoryToMinidump@@YA_KPEAUVIDMM_DMA_POOL@@PEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK3K@Z.c)
 */

unsigned __int64 __fastcall VIDMM_GLOBAL::LogInformationToMinidump(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct _VIDMM_MINIDUMP_HEADER *a5,
        unsigned __int64 a6)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  _OWORD *v14; // rax
  __int128 v15; // xmm1
  _OWORD *v16; // rdx
  __int128 v17; // xmm0
  char *v18; // rcx
  __int64 v19; // rax
  __int128 v20; // xmm1
  unsigned __int64 v21; // rax
  unsigned __int8 *v22; // rbx
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r9
  __int64 v25; // rax

  if ( a6 < 0x5A0 )
    return 0LL;
  v11 = (unsigned __int8 *)a5 + 1440;
  memset((char *)a5 + 4, 0, 0x59CuLL);
  v12 = 7LL;
  *(_DWORD *)a5 = 1;
  v13 = &VIDMM_GLOBAL::_Config;
  *((_DWORD *)a5 + 1) = *((_DWORD *)this + 926);
  v14 = (_OWORD *)((char *)a5 + 8);
  do
  {
    *v14 = *v13;
    v14[1] = v13[1];
    v14[2] = v13[2];
    v14[3] = v13[3];
    v14[4] = v13[4];
    v14[5] = v13[5];
    v14[6] = v13[6];
    v14 += 8;
    v15 = v13[7];
    v13 += 8;
    *(v14 - 1) = v15;
    --v12;
  }
  while ( v12 );
  v16 = &gVidMmLowResourceAccumulated;
  *v14 = *v13;
  v14[1] = v13[1];
  v17 = v13[2];
  v18 = (char *)a5 + 952;
  v14[2] = v17;
  v19 = 3LL;
  do
  {
    *(_OWORD *)v18 = *v16;
    *((_OWORD *)v18 + 1) = v16[1];
    *((_OWORD *)v18 + 2) = v16[2];
    *((_OWORD *)v18 + 3) = v16[3];
    *((_OWORD *)v18 + 4) = v16[4];
    *((_OWORD *)v18 + 5) = v16[5];
    *((_OWORD *)v18 + 6) = v16[6];
    v18 += 128;
    v20 = v16[7];
    v16 += 8;
    *((_OWORD *)v18 - 1) = v20;
    --v19;
  }
  while ( v19 );
  *(_OWORD *)v18 = *v16;
  *((_OWORD *)v18 + 1) = v16[1];
  *((_OWORD *)v18 + 2) = v16[2];
  *((_OWORD *)v18 + 3) = v16[3];
  *((_OWORD *)v18 + 4) = v16[4];
  *((_QWORD *)v18 + 10) = *((_QWORD *)v16 + 10);
  *((_DWORD *)v18 + 22) = *((_DWORD *)v16 + 22);
  v21 = VIDMM_GLOBAL::WriteSegmentInformationToMinidump(this, a5, v11, a6 - 1440);
  v22 = &v11[v21];
  v23 = a6 - 1440 - v21;
  v24 = 10240LL;
  if ( v23 < 0x2800 )
    v24 = a6 - 1440 - v21;
  v25 = VIDMM_GLOBAL::WritePagingHistoryToMinidump(this, a5, v22, v24);
  return a6
       - (v23
        - v25)
       + VidMmWriteDmaHistoryToMinidump(*((struct VIDMM_DMA_POOL **)this + 79), a5, &v22[v25], v23 - v25, a2, a3, a4);
}
