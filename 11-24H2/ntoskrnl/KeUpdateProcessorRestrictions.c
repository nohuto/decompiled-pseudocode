/*
 * XREFs of KeUpdateProcessorRestrictions @ 0x1405B245C
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x1404E5C48 (PpmParkEvaluateRestriction.c)
 * Callees:
 *     KiGetNumberOfActiveSubNodes @ 0x14042C3A8 (KiGetNumberOfActiveSubNodes.c)
 *     KiInstallSubNodeHeteroSets @ 0x1404A7D80 (KiInstallSubNodeHeteroSets.c)
 */

char __fastcall KeUpdateProcessorRestrictions(unsigned __int16 a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned int v6; // r15d
  char v7; // r10
  __int64 v8; // rbx
  _WORD *v9; // r9
  __int64 v10; // r12
  _WORD *v11; // r11
  unsigned __int8 v12; // si
  __int64 v13; // rdi
  __int64 v14; // r13
  unsigned __int64 v15; // r8
  __int64 v16; // rcx
  _WORD *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r14d
  int v23; // ebp
  unsigned int v24; // edi
  unsigned int *v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // al
  unsigned __int8 v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  char v35; // [rsp+90h] [rbp+8h]

  v4 = a4;
  v5 = a1;
  v6 = a2;
  KiGetNumberOfActiveSubNodes();
  v7 = 0;
  v34 = KiHeteroConfig;
  if ( (unsigned __int16)v5 >= (unsigned __int16)KiSubNodeCount )
    return v7;
  if ( (unsigned int)KiHgsPlusConfiguration > *(_DWORD *)(KiHeteroConfig + 28) )
    return v7;
  _mm_lfence();
  v35 = 0;
  v8 = *(_QWORD *)(KiSubNodes + 8 * v5);
  if ( !KiHgsPlusConfiguration )
    return v7;
  v9 = (_WORD *)(KiHeteroConfig + 560);
  v33 = (unsigned int)KiHgsPlusConfiguration;
  do
  {
    v10 = 0LL;
    v11 = v9 + 6072;
    do
    {
      v12 = *(_BYTE *)(v10 + v4);
      v13 = 0LL;
      v31 = v12;
      v32 = 0LL;
      do
      {
        v14 = 0LL;
        v15 = 0LL;
        if ( KeHeteroSystem )
        {
          if ( PpmHeteroMultiCoreClassesEnabled )
          {
            v16 = *(unsigned __int16 *)(v8 + 136);
            v17 = &v9[264 * v10 + 528 + 132 * v13];
            if ( (unsigned __int16)v16 >= *v17 )
              v15 = 0LL;
            else
              v15 = *(_QWORD *)&v17[4 * v16 + 4];
          }
          else
          {
            switch ( KiDynamicHeteroCpuPolicy[2 * v10 + v13] )
            {
              case 1:
                v21 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v21 < *(v9 - 264) )
                  v15 = *(_QWORD *)&v9[4 * v21 - 260];
                break;
              case 2:
                v20 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v20 < v9[396] )
                  v15 = *(_QWORD *)&v9[4 * v20 + 400];
                break;
              case 3:
                v19 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v19 < *v9 )
                  v15 = *(_QWORD *)&v9[4 * v19 + 4];
                break;
              case 4:
                v18 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v18 < v9[264] )
                  v15 = *(_QWORD *)&v9[4 * v18 + 268];
                break;
            }
          }
        }
        else
        {
          v15 = *(_QWORD *)(v8 + 128);
        }
        if ( v12 )
        {
          v22 = v12;
          if ( v12 < (unsigned int)__popcnt(v15) )
          {
            v23 = 0;
            v24 = 0;
            if ( v6 )
            {
              v25 = a3;
              do
              {
                v26 = *((_DWORD *)KiGlobalState + *v25) & 0x3F;
                if ( *(unsigned __int16 *)(v8 + 136) == *((_DWORD *)KiGlobalState + *v25) >> 6 )
                {
                  if ( _bittest64((const __int64 *)&v15, v26) )
                  {
                    ++v23;
                    v14 |= 1LL << v26;
                    if ( v23 == v22 )
                      break;
                  }
                }
                ++v24;
                ++v25;
              }
              while ( v24 < a2 );
              v12 = v31;
              v7 = 0;
              v6 = a2;
            }
            v13 = v32;
          }
        }
        v27 = *(unsigned __int16 *)(v8 + 136);
        if ( (unsigned __int16)v27 >= *v11 )
          v28 = 0LL;
        else
          v28 = *(_QWORD *)&v11[4 * v27 + 4];
        if ( v28 != v14 )
        {
          if ( *v11 > (unsigned __int16)v27 )
            goto LABEL_42;
          if ( v11[1] > (unsigned __int16)v27 )
          {
            *v11 = v27 + 1;
LABEL_42:
            *(_QWORD *)&v11[4 * v27 + 4] = v14;
          }
          v29 = 1;
          v35 = 1;
          goto LABEL_45;
        }
        v29 = v35;
LABEL_45:
        ++v13;
        v11 += 132;
        v32 = v13;
      }
      while ( v13 < 2 );
      v4 = a4;
      ++v10;
    }
    while ( v10 < 7 );
    v9 += 8184;
    --v33;
  }
  while ( v33 );
  if ( v29 )
  {
    KiInstallSubNodeHeteroSets(v8, KeHeteroSystem, v34 + 32, *(_DWORD *)(v34 + 28));
    return 1;
  }
  return v7;
}
