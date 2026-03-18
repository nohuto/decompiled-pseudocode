/*
 * XREFs of ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F31A0
 * Callers:
 *     ?vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2F60 (-vSrcTranCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1400F34FC (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z.c)
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z @ 0x1400F38B0 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z.c)
 */

void __fastcall vSrcTranCopyS8D32Unsafe(
        const unsigned __int8 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rcx
  int v13; // r14d
  const unsigned __int8 *v14; // r13
  unsigned int *v15; // r12
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // r15d
  char v19; // si
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  const unsigned __int8 *v23; // rdi
  unsigned int *v24; // rbx
  unsigned int *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // r14d
  __int64 v28; // r15
  __int64 v29; // r9
  int v30; // edx
  unsigned int v31; // r8d
  int v32; // edx
  unsigned int v33; // r8d
  int v34; // ecx
  __int128 v35; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+40h] [rbp-98h]
  __int128 v37; // [rsp+50h] [rbp-88h]
  __int128 v38; // [rsp+60h] [rbp-78h]
  __int64 v39; // [rsp+70h] [rbp-68h]
  unsigned int v40; // [rsp+78h] [rbp-60h]
  unsigned int *v41; // [rsp+80h] [rbp-58h]
  const unsigned __int8 *v42; // [rsp+88h] [rbp-50h]
  __int64 v43; // [rsp+90h] [rbp-48h]
  int v44; // [rsp+F0h] [rbp+18h]
  int v45; // [rsp+100h] [rbp+28h]
  int v46; // [rsp+108h] [rbp+30h]

  v44 = a3;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v12 = a5;
  v13 = a6 - a5;
  v46 = a6 - a5;
  v14 = &a1[(int)a2];
  v15 = (unsigned int *)&a4[4 * a5];
  v16 = *v15;
  v45 = *v15;
  v40 = *v15;
  v17 = *(_QWORD *)(W32GetSessionState(v12, a2, a3) + 96);
  v39 = v17 + 4872;
  if ( *(_QWORD *)a11 != *(_QWORD *)(v17 + 5336) || v16 != *(_DWORD *)(v17 + 5348) )
  {
    v18 = a9;
LABEL_3:
    v19 = 0;
    goto LABEL_4;
  }
  v18 = a9;
  if ( a9 != *(_DWORD *)(v17 + 5344) || *(_DWORD *)(v17 + 13456) != *(_DWORD *)(v17 + 5356) )
    goto LABEL_3;
  v19 = 1;
LABEL_4:
  vGetBlendInfo(4u, a11, v18, (struct BLENDINFO *)&v35);
  if ( !v19 )
    vClearTypeLookupTableLoop(4u, a11, (struct BLENDINFO *)&v35, v18, v16);
  v21 = v39;
  v43 = v39;
  v22 = a8;
  while ( (_DWORD)v22 )
  {
    v23 = v14;
    v42 = v14;
    v24 = v15;
    v25 = &v15[v13];
    while ( 1 )
    {
      v41 = v24;
      if ( v24 >= v25 )
        break;
      v26 = *v23;
      if ( (_BYTE)v26 )
      {
        if ( (_BYTE)v26 == 114 )
        {
          *v24 = v18;
        }
        else
        {
          v27 = *v24;
          v28 = 4 * v26;
          if ( *v24 == v45 )
          {
            *v24 = *(_DWORD *)(v28 + v21);
          }
          else
          {
            v29 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v21, v22, v20) + 96) + 13464LL);
            v30 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v27 & DWORD2(v36)) << v35) >> SBYTE4(v35))
                                     + (_QWORD)v38);
            v31 = DWORD2(v36) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v30
                                                                                  + ((dword_14034F860[*(unsigned __int8 *)(v29 + v28)]
                                                                                    * (DWORD1(v37) - v30)
                                                                                    + 0x80000) >> 20))
                                                                   + *((_QWORD *)&v38 + 1)) << SBYTE4(v35)) >> v35);
            v32 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v27 & HIDWORD(v36)) << SBYTE8(v35)) >> SBYTE12(v35))
                                     + (_QWORD)v38);
            v33 = HIDWORD(v36) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v32
                                                                                   + ((dword_14034F860[*(unsigned __int8 *)(v29 + v28 + 1)]
                                                                                     * (DWORD2(v37) - v32)
                                                                                     + 0x80000) >> 20))
                                                                    + *((_QWORD *)&v38 + 1)) << SBYTE12(v35)) >> SBYTE8(v35)) | v31;
            v34 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v27 & (unsigned int)v37) << v36) >> SBYTE4(v36))
                                     + (_QWORD)v38);
            v22 = (unsigned int)v37 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v34
                                                                                        + ((dword_14034F860[*(unsigned __int8 *)(v29 + v28 + 2)]
                                                                                          * (HIDWORD(v37) - v34)
                                                                                          + 0x80000) >> 20))
                                                                         + *((_QWORD *)&v38 + 1)) << SBYTE4(v36)) >> v36);
            v20 = (unsigned int)v22 | v33;
            *v24 = v20;
            v21 = v39;
          }
          v18 = a9;
        }
      }
      ++v24;
      v42 = ++v23;
    }
    v22 = --a8;
    v14 += v44;
    v15 = (unsigned int *)((char *)v15 + a7);
    v13 = v46;
  }
}
