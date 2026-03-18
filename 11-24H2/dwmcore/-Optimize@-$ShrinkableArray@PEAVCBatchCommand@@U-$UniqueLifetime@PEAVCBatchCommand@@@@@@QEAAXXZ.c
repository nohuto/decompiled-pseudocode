/*
 * XREFs of ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x180057E6C
 * Callers:
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180056980 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801479F8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

void __fastcall ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // r14
  void *v7; // rbx
  int v8; // ecx
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 v11; // r15
  CBatchCommand *v12; // rcx
  void *v13[2]; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+54h] [rbp-Ch]

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v1 > 0x10 && *(_DWORD *)(a1 + 36) < v1 / 3 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v4 = v1 >> 1;
    *(_OWORD *)v13 = 0LL;
    if ( (int)DynArrayImpl<0>::Grow((__int64)v13, 8u, v4, 1, 0LL) >= 0 )
    {
      v6 = 0LL;
      if ( v3 > v4 )
      {
        v9 = v3;
        v3 = v4;
        v6 = v9 - v4;
        if ( (_DWORD)v6 )
        {
          v10 = 0LL;
          v11 = (unsigned int)v6;
          do
          {
            v12 = *(CBatchCommand **)(v10 + *(_QWORD *)a1);
            if ( v12 )
              CBatchCommand::`scalar deleting destructor'(v12, v5);
            v10 += 8LL;
            --v11;
          }
          while ( v11 );
        }
      }
      v7 = v13[0];
      memcpy_0(v13[0], (const void *)(*(_QWORD *)a1 + 8 * v6), 8LL * v3);
      v8 = v15;
      v13[0] = *(void **)a1;
      v15 = *(_DWORD *)(a1 + 20);
      v16 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = v7;
      *(_DWORD *)(a1 + 20) = v8;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(v13);
  }
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = v3;
}
