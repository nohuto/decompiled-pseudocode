/*
 * XREFs of ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z @ 0x1400F38B0
 * Callers:
 *     ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F2DC0 (-vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z @ 0x1400F30D4 (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAUBLENDINFO@@H@Z.c)
 *     ?vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1400F31A0 (-vSrcTranCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vClearTypeLookupTableLoop(
        __int64 a1,
        struct SURFACE *a2,
        struct BLENDINFO *a3,
        int a4,
        unsigned int a5)
{
  int v8; // esi
  __int64 v9; // r8
  _WORD *v10; // r11
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // r12d
  int v15; // ebp
  int v16; // r13d
  int v17; // r14d
  int v18; // r15d
  unsigned __int8 *v19; // r9
  unsigned int *v20; // rax
  __int64 v21; // r8
  unsigned int v22; // r10d
  int v23; // [rsp+70h] [rbp+8h]
  int v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+80h] [rbp+18h]

  v23 = a1;
  v8 = a1;
  v9 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  v25 = v9 + 4872;
  *(_DWORD *)(v9 + 5356) = *(_DWORD *)(v9 + 13456);
  v10 = (_WORD *)(v9 + 4874);
  *(_DWORD *)(v9 + 5348) = a5;
  *(_DWORD *)(v9 + 5344) = a4;
  *(_DWORD *)(v9 + 5352) = v8;
  v11 = *(_QWORD *)a2;
  v12 = 113LL;
  *(_QWORD *)(v9 + 5336) = v11;
  v13 = *((_QWORD *)a3 + 6);
  v14 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 6)) << *(_DWORD *)a3) >> *((_DWORD *)a3 + 1))
                           + v13);
  v15 = *((_DWORD *)a3 + 9) - v14;
  v16 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 7)) << *((_DWORD *)a3 + 2)) >> *((_DWORD *)a3 + 3))
                           + v13);
  v17 = *((_DWORD *)a3 + 10) - v16;
  v18 = *((_DWORD *)a3 + 11)
      - *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_DWORD *)a3 + 5))
                           + v13);
  v24 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_DWORD *)a3 + 5))
                           + v13);
  v19 = (unsigned __int8 *)(*(_QWORD *)(v9 + 13464) + 4LL);
  v20 = (unsigned int *)(v9 + 4876);
  do
  {
    v21 = *((_QWORD *)a3 + 7);
    v22 = *((_DWORD *)a3 + 6) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v14
                                                                                  + ((dword_14034F860[*v19] * v15
                                                                                    + 0x80000) >> 20))
                                                                   + v21) << *((_DWORD *)a3 + 1)) >> *(_DWORD *)a3) | *((_DWORD *)a3 + 8) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v24 + ((dword_14034F860[v19[2]] * v18 + 0x80000) >> 20)) + v21) << *((_DWORD *)a3 + 5)) >> *((_DWORD *)a3 + 4)) | *((_DWORD *)a3 + 7) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v16 + ((dword_14034F860[v19[1]] * v17 + 0x80000) >> 20)) + v21) << *((_DWORD *)a3 + 3)) >> *((_DWORD *)a3 + 2));
    if ( v23 == 2 )
      *v10 = v22;
    else
      *v20 = v22;
    ++v10;
    ++v20;
    v19 += 4;
    --v12;
  }
  while ( v12 );
  if ( v23 == 2 )
  {
    *(_WORD *)v25 = a5;
    *(_WORD *)(v25 + 228) = a4;
  }
  else
  {
    *(_DWORD *)v25 = a5;
    *(_DWORD *)(v25 + 456) = a4;
  }
}
