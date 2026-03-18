/*
 * XREFs of ?AddActivationObjectToHashTable@CActivationObjectManager@@AEAAJPEAVCActivationObject@@@Z @ 0x1400E123C
 * Callers:
 *     ?CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_KPEAU_LUID@@@Z @ 0x1400E0E88 (-CreateActivationObject@CActivationObjectManager@@QEAAJDPEAU_OBJECT_ATTRIBUTES@@KDPEAUHWND__@@_K.c)
 * Callees:
 *     ?HashTableAllocator@@YAPEAX_KPEAX@Z @ 0x1400E1628 (-HashTableAllocator@@YAPEAX_KPEAX@Z.c)
 *     UserRtlFreeMem @ 0x140157380 (UserRtlFreeMem.c)
 */

__int64 __fastcall CActivationObjectManager::AddActivationObjectToHashTable(
        unsigned __int64 this,
        struct CActivationObject *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // edi
  unsigned int v6; // edi
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  char *v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r14
  _QWORD *v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  char v20; // cl
  __int64 v21; // [rsp+50h] [rbp+8h]
  __int64 v22; // [rsp+50h] [rbp+8h]
  __int64 v23; // [rsp+50h] [rbp+8h]

  v2 = (unsigned int)(2 * (*(_DWORD *)(this + 4) >> 5));
  v5 = -1073741801;
  if ( *(_DWORD *)this >= (unsigned int)v2 )
  {
    if ( (unsigned int)v2 < 4 )
      v2 = 4LL;
    v11 = (char *)HashTableAllocator(8LL * (unsigned int)v2, 0LL);
    if ( v11 )
    {
      if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
      {
        v20 = -1;
        do
        {
          ++v20;
          LODWORD(v2) = (unsigned int)v2 >> 1;
        }
        while ( (_DWORD)v2 );
        v2 = (unsigned int)(1 << v20);
      }
      if ( (unsigned int)v2 > 0x4000000 )
        v2 = 0x4000000LL;
      v12 = (unsigned int)v2;
      if ( v11 > &v11[8 * v2] )
        v12 = 0LL;
      if ( v12 )
        memset64(v11, this | 1, v12);
      v13 = 0;
      v14 = -1LL << (*(_BYTE *)(this + 4) & 0x1F);
      if ( (*(_DWORD *)(this + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v15 = *(_QWORD *)(this + 8);
          while ( 1 )
          {
            v16 = *(_QWORD **)(v15 + 8LL * v13);
            if ( ((unsigned __int8)v16 & 1) != 0 )
              break;
            *(_QWORD *)(v15 + 8LL * v13) = *v16;
            v23 = v14 & v16[1];
            v17 = (37
                 * (BYTE6(v23)
                  + 37
                  * (BYTE5(v23)
                   + 37
                   * (BYTE4(v23)
                    + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                 + HIBYTE(v23)) & (unsigned int)(v2 - 1);
            *v16 = *(_QWORD *)&v11[8 * v17];
            *(_QWORD *)&v11[8 * v17] = v16;
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(this + 4) >> 5 );
      }
      v18 = *(_QWORD *)(this + 8);
      v19 = (32 * v2) | *(_DWORD *)(this + 4) & 0x1F;
      *(_QWORD *)(this + 8) = v11;
      *(_DWORD *)(this + 4) = v19;
      if ( v18 )
        UserRtlFreeMem(v18, 0LL);
    }
    else if ( *(_DWORD *)(this + 4) < 0x20u )
    {
      return v5;
    }
  }
  v21 = *((_QWORD *)a2 + 5);
  *((_QWORD *)a2 + 2) = HIBYTE(v21)
                      + 37
                      * (BYTE6(v21)
                       + 37
                       * (BYTE5(v21)
                        + 37
                        * (BYTE4(v21)
                         + 37
                         * (BYTE3(v21) + 37
                                       * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883LL)))))));
  v6 = *(_DWORD *)(this + 4);
  v22 = *((_QWORD *)a2 + 2) & (-1LL << (v6 & 0x1F));
  v7 = (v6 >> 5) - 1;
  v5 = 0;
  v8 = *(_QWORD *)(this + 8);
  v9 = (37
      * (BYTE6(v22)
       + 37
       * (BYTE5(v22)
        + 37
        * (BYTE4(v22)
         + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
      + HIBYTE(v22)) & (unsigned int)v7;
  *((_QWORD *)a2 + 1) = *(_QWORD *)(v8 + 8 * v9);
  *(_QWORD *)(v8 + 8 * v9) = (char *)a2 + 8;
  ++*(_DWORD *)this;
  return v5;
}
