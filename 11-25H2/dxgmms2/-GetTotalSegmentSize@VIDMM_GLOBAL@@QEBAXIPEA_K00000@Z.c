/*
 * XREFs of ?GetTotalSegmentSize@VIDMM_GLOBAL@@QEBAXIPEA_K00000@Z @ 0x1400EBD60
 * Callers:
 *     VidMmGetTotalSegmentSize @ 0x140040200 (VidMmGetTotalSegmentSize.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400EC0DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_GLOBAL::GetTotalSegmentSize(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 *v9; // r12
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r14
  __int64 v15; // r13
  unsigned int v16; // eax
  __int64 v17; // r10
  __int64 v18; // r12
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  int v21; // r9d
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r9
  struct VIDMM_PARTITION *v26; // r9
  unsigned __int64 v27; // rax
  int v28; // ecx
  const struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  struct VIDMM_PARTITION *v30; // r9

  v8 = 0LL;
  v9 = a3;
  v11 = a2;
  v12 = 0LL;
  *a6 = 0LL;
  v13 = 0LL;
  *a7 = 0LL;
  v14 = 0LL;
  *a8 = 0LL;
  v15 = *(_QWORD *)(*((_QWORD *)this + 5029) + 8 * v11);
  v16 = *(_DWORD *)(v15 + 64);
  if ( v16 )
  {
    v17 = 0LL;
    v18 = v16;
    do
    {
      v19 = *(_QWORD *)(v17 + *(_QWORD *)(v15 + 1648));
      v20 = *(_QWORD *)(v19 + 248);
      v21 = *(_DWORD *)(v19 + 104);
      if ( v20 >= *(_QWORD *)(v19 + 72) )
        v20 = *(_QWORD *)(v19 + 72);
      if ( (v21 & 0x1001) != 0 )
      {
        v22 = v20 + v12;
        if ( (v21 & 1) == 0 )
          v22 = v12;
        v12 = v22;
        if ( (v21 & 1) == 0 )
          v13 += v20;
      }
      else if ( (v21 & 0x40) != 0 )
      {
        *a7 += v20;
      }
      else
      {
        *a6 += v20;
      }
      if ( *(_DWORD *)(v19 + 516) == 2 )
        v14 += v20;
      v17 += 8LL;
      --v18;
    }
    while ( v18 );
    v9 = a3;
  }
  if ( v12 <= v13 )
    v12 = v13;
  *a8 = v12;
  v23 = qword_140081600;
  if ( DXGPROCESS::GetCurrent()
    && ((v24 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) == 0 ? (v25 = 0LL) : (v25 = *(_QWORD *)(v24 + 8)), v25) )
  {
    v26 = *(struct VIDMM_PARTITION **)(v25 + 296);
    if ( v26 )
      v23 = *(_QWORD *)(384LL * *(unsigned int *)(*((_QWORD *)this + 3) + 240LL) + *((_QWORD *)v26 + 5) + 16);
  }
  else
  {
    v26 = 0LL;
  }
  v27 = *a8;
  if ( *a8 > v23 )
  {
    *a8 = v23;
    v27 = v23;
  }
  v28 = *((_DWORD *)this + 10232);
  if ( v27 > 1LL << v28 && (*((_BYTE *)this + 40936) & 0x10) != 0 )
    *a8 = 1LL << v28;
  if ( v26 )
  {
    SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(this, a2, D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL, v26);
    *v9 = *((_QWORD *)VIDMM_GLOBAL::GetSegmentGroupState(this, a2, D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL, v30) + 1);
    v8 = *((_QWORD *)SegmentGroupState + 1);
  }
  else
  {
    *v9 = 0LL;
    v14 = 0LL;
  }
  *a4 = v8;
  *a5 = v14;
}
