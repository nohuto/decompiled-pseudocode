/*
 * XREFs of ?WriteSegmentInformationToMinidump@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_K@Z @ 0x140096B7C
 * Callers:
 *     ?LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z @ 0x140095AF8 (-LogInformationToMinidump@VIDMM_GLOBAL@@QEAA_KK_KKPEAE0@Z.c)
 * Callees:
 *     ?CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z @ 0x14004DF48 (-CheckForApertureGuardPageCorruption@VIDMM_SEGMENT@@QEAAJPEAPEAKE@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memmove @ 0x140056480 (memmove.c)
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WriteSegmentInformationToMinidump(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MINIDUMP_HEADER *a2,
        unsigned __int8 *a3,
        unsigned __int64 a4)
{
  struct _VIDMM_MINIDUMP_HEADER *v5; // rax
  VIDMM_GLOBAL *v6; // r14
  int v7; // r15d
  __int64 v8; // r12
  unsigned __int16 v9; // si
  __int64 v10; // rax
  unsigned int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // eax
  __int128 v17; // xmm1
  unsigned __int64 v18; // r9
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  void *Src; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-81h]
  VIDMM_GLOBAL *v28; // [rsp+30h] [rbp-79h]
  struct _VIDMM_MINIDUMP_HEADER *v29; // [rsp+38h] [rbp-71h]
  _OWORD v30[8]; // [rsp+40h] [rbp-69h] BYREF

  v27 = a4;
  v29 = a2;
  v5 = a2;
  v6 = this;
  v7 = 0;
  v28 = this;
  v8 = 0LL;
  v9 = 0;
  if ( *((_DWORD *)this + 1736) )
  {
    do
    {
      v10 = *((_QWORD *)v6 + 5029);
      v11 = 0;
      if ( *(_DWORD *)(*(_QWORD *)(v10 + 8LL * v9) + 64LL) )
      {
        v12 = *(_QWORD *)(v10 + 8LL * v9);
        do
        {
          Src = 0LL;
          if ( a4 < 0x80 )
            break;
          v13 = *(_QWORD *)(*(_QWORD *)(v12 + 1648) + 8LL * v11);
          memset(v30, 0, sizeof(v30));
          v14 = *(_QWORD *)(v13 + 48);
          DWORD2(v30[1]) = 0;
          *(_QWORD *)&v30[2] = 0LL;
          *(_QWORD *)&v30[0] = v14;
          *((_QWORD *)&v30[0] + 1) = *(_QWORD *)(v13 + 56);
          *(_QWORD *)&v30[1] = *(_QWORD *)(v13 + 72);
          *((_QWORD *)&v30[2] + 1) = *(_QWORD *)(v13 + 248);
          LODWORD(v30[3]) = *(_DWORD *)(v13 + 104);
          if ( (int)VIDMM_SEGMENT::CheckForApertureGuardPageCorruption((VIDMM_SEGMENT *)v13, (unsigned int **)&Src, 0) < 0 )
          {
            DWORD2(v30[3]) = 1;
            if ( Src )
            {
              v15 = (unsigned __int16)Src & 0xFFF;
              HIDWORD(v30[3]) = v15;
              v16 = (unsigned int)(4096 - v15) <= 0x40 ? 4096 - v15 : 64;
              memmove(&v30[4], Src, v16);
            }
            else
            {
              HIDWORD(v30[3]) = -1;
            }
          }
          else
          {
            *((_QWORD *)&v30[3] + 1) = 0LL;
          }
          v17 = v30[1];
          v8 += 128LL;
          v18 = v27;
          ++v7;
          *(_OWORD *)a3 = v30[0];
          a4 = v18 - 128;
          ++v11;
          v19 = v30[2];
          *((_OWORD *)a3 + 1) = v17;
          v27 = a4;
          v20 = v30[3];
          *((_OWORD *)a3 + 2) = v19;
          v21 = v30[4];
          *((_OWORD *)a3 + 3) = v20;
          v22 = v30[5];
          *((_OWORD *)a3 + 4) = v21;
          v23 = v30[6];
          *((_OWORD *)a3 + 5) = v22;
          v24 = v30[7];
          *((_OWORD *)a3 + 6) = v23;
          *((_OWORD *)a3 + 7) = v24;
          a3 += 128;
        }
        while ( v11 < *(_DWORD *)(v12 + 64) );
        v6 = v28;
      }
      ++v9;
    }
    while ( (unsigned int)v9 < *((_DWORD *)v6 + 1736) );
    v5 = v29;
  }
  *((_DWORD *)v5 + 357) = v7;
  return v8;
}
