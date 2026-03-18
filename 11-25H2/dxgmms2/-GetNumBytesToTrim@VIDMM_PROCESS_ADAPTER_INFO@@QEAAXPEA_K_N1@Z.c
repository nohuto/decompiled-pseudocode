/*
 * XREFs of ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1400EBF58
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x140093434 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1400B1014 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z @ 0x1400F58C4 (-Evict@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAPEAUVIDMM_MULTI_ALLOC@@IKPEA_K@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1400EC0DC (-GetSegmentGroupState@VIDMM_GLOBAL@@QEBAPEBUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(
        VIDMM_GLOBAL **this,
        unsigned __int64 *a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int v4; // ebp
  VIDMM_GLOBAL *v5; // r14
  VIDMM_PROCESS_ADAPTER_INFO *v6; // r13
  __int64 v7; // rdi
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v10; // r12d
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  const struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  __int64 v22; // [rsp+40h] [rbp-48h]
  char v25; // [rsp+A0h] [rbp+18h]

  v25 = a3;
  *a2 = 0LL;
  v4 = 0;
  v5 = *this;
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)this;
  if ( *((_DWORD *)*this + 1736) )
  {
    v7 = 32 * (a4 ^ 1LL);
    v20 = v7;
    do
    {
      v8 = (unsigned __int64 *)&v21;
      v9 = 0LL;
      v10 = D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL;
      v19 = 304LL * (unsigned __int16)v4 + 8 + *((_QWORD *)v6 + 2);
      v11 = v7 + 72 + v19 - (_QWORD)&v21;
      do
      {
        v12 = v9;
        if ( a3 )
        {
          SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(
                                v5,
                                v4,
                                v10,
                                *(struct VIDMM_PARTITION **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 40LL) + 296LL));
          a3 = v25;
          v12 = v9;
          v14 = *((_QWORD *)SegmentGroupState + 3);
          v13 = (unsigned __int64 *)((char *)v8 + v11);
        }
        else
        {
          v13 = (unsigned __int64 *)((char *)v8 + v11);
          v14 = *(unsigned __int64 *)((char *)v8 + v19 - (_QWORD)&v21 + 24);
        }
        v15 = *v13;
        *v8 = v14;
        if ( v15 > v14 )
        {
          v9 = v15 - v14;
          if ( v12 > v15 - v14 )
            v9 = v12;
        }
        else
        {
          *v8 = v14 - v15;
        }
        ++v10;
        ++v8;
      }
      while ( v10 < 2 );
      v7 = v20;
      v6 = (VIDMM_PROCESS_ADAPTER_INFO *)this;
      if ( !v9 )
      {
        v16 = *(_QWORD *)(v20 + v19 + 88);
        if ( v16 > v22 + v21 )
          v9 = v16 - (v22 + v21);
      }
      v17 = *a2;
      if ( *a2 <= v9 )
        v17 = v9;
      ++v4;
      *a2 = v17;
      v5 = *this;
    }
    while ( v4 < *((_DWORD *)*this + 1736) );
  }
}
