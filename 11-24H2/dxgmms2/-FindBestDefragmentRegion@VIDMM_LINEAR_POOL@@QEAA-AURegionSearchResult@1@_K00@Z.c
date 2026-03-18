/*
 * XREFs of ?FindBestDefragmentRegion@VIDMM_LINEAR_POOL@@QEAA?AURegionSearchResult@1@_K00@Z @ 0x14010EE68
 * Callers:
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@33W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14010EC38 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@PEAVVIDMM_S.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall VIDMM_LINEAR_POOL::FindBestDefragmentRegion(
        __int64 a1,
        _OWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 *v5; // r15
  __int64 *v6; // r8
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r11
  char v10; // bp
  __int64 *v11; // rdi
  __int64 *v12; // r9
  unsigned __int64 v13; // r12
  __int64 *v14; // r13
  __int64 *v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  char v19; // cl
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v23; // [rsp+0h] [rbp-58h]
  __int64 *v24; // [rsp+60h] [rbp+8h]
  _OWORD *v25; // [rsp+68h] [rbp+10h]

  v25 = a2;
  v24 = 0LL;
  v5 = (__int64 *)(a1 + 80);
  v6 = *(__int64 **)(a1 + 80);
  v7 = -1LL;
  v8 = 0LL;
  v9 = 0LL;
  v23 = -1LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v6;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v6 != (__int64 *)(a1 + 80) )
  {
    v15 = 0LL;
    do
    {
      v16 = *(v6 - 4);
      v17 = *(v6 - 5);
      if ( v17 + v16 > a3 )
      {
        if ( v17 >= a4 )
          break;
        if ( *((_BYTE *)v6 + 16) == 2 )
        {
          if ( !v10 )
          {
            v14 = (__int64 *)*v6;
            v10 = 1;
          }
          if ( v14 == v5 )
          {
            if ( v8 < a5 )
              break;
          }
          else
          {
            while ( 1 )
            {
              v18 = v8;
              if ( v8 >= a5 )
                break;
              v19 = *((_BYTE *)v14 + 16);
              v24 = v14 - 5;
              v20 = *(v14 - 4);
              v8 += v20;
              if ( v19 != 2 )
                v8 = v18;
              v21 = v9 + v20;
              if ( v19 != 2 )
                v9 = v21;
            }
            v7 = v23;
            v15 = v24;
          }
          if ( v9 < v7 )
          {
            v11 = v6 - 5;
            v23 = v9;
            v12 = v15;
            v13 = v8;
            v7 = v9;
          }
          v8 -= v16;
        }
        else if ( v10 )
        {
          v9 -= v16;
        }
        v6 = (__int64 *)*v6;
      }
    }
    while ( v6 != v5 );
    a2 = v25;
    if ( v11 && v12 )
    {
      *(_QWORD *)v25 = *v11;
      *((_QWORD *)v25 + 1) = *v12 + v12[1];
      *((_QWORD *)v25 + 2) = v13;
      *((_BYTE *)v25 + 24) = 1;
    }
  }
  return a2;
}
