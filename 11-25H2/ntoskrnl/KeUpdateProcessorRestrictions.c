/*
 * XREFs of KeUpdateProcessorRestrictions @ 0x1405B16F8
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x14047F6CC (PpmParkEvaluateRestriction.c)
 * Callees:
 *     KiGetNumberOfActiveSubNodes @ 0x140428784 (KiGetNumberOfActiveSubNodes.c)
 *     KiInstallSubNodeHeteroSets @ 0x1404A5850 (KiInstallSubNodeHeteroSets.c)
 */

char __fastcall KeUpdateProcessorRestrictions(unsigned __int16 a1, unsigned int a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // r15d
  __int64 v7; // r10
  __int64 v8; // rbx
  _WORD *v9; // r9
  __int64 v10; // r12
  _WORD *v11; // r11
  __int64 i; // r13
  __int64 v13; // rsi
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  _WORD *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int8 v21; // al
  int v22; // ebp
  unsigned int v23; // edi
  unsigned int *v24; // rsi
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  __int64 v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  char v34; // [rsp+90h] [rbp+8h]

  v4 = a4;
  v5 = a1;
  v6 = a2;
  KiGetNumberOfActiveSubNodes();
  v7 = 0LL;
  v33 = KiHeteroConfig;
  if ( (unsigned __int16)v5 >= (unsigned __int16)KiSubNodeCount )
    return v7;
  if ( (unsigned int)KiHgsPlusConfiguration > *(_DWORD *)(KiHeteroConfig + 28) )
    return v7;
  _mm_lfence();
  v34 = 0;
  v8 = *(_QWORD *)(KiSubNodes + 8 * v5);
  v32 = v8;
  if ( !KiHgsPlusConfiguration )
    return v7;
  v9 = (_WORD *)(KiHeteroConfig + 560);
  v31 = (unsigned int)KiHgsPlusConfiguration;
  do
  {
    v10 = 0LL;
    v11 = v9 + 6072;
    do
    {
      for ( i = 0LL; i < 2; ++i )
      {
        v13 = 0LL;
        v14 = 0LL;
        if ( KeHeteroSystem )
        {
          if ( PpmHeteroMultiCoreClassesEnabled )
          {
            v15 = *(unsigned __int16 *)(v8 + 136);
            v16 = &v9[264 * v10 + 528 + 132 * i];
            if ( (unsigned __int16)v15 >= *v16 )
              v14 = 0LL;
            else
              v14 = *(_QWORD *)&v16[4 * v15 + 4];
          }
          else
          {
            switch ( KiDynamicHeteroCpuPolicy[2 * v10 + i] )
            {
              case 1:
                v20 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v20 < *(v9 - 264) )
                  v14 = *(_QWORD *)&v9[4 * v20 - 260];
                break;
              case 2:
                v19 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v19 < v9[396] )
                  v14 = *(_QWORD *)&v9[4 * v19 + 400];
                break;
              case 3:
                v18 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v18 < *v9 )
                  v14 = *(_QWORD *)&v9[4 * v18 + 4];
                break;
              case 4:
                v17 = *(unsigned __int16 *)(v8 + 136);
                if ( (unsigned __int16)v17 < v9[264] )
                  v14 = *(_QWORD *)&v9[4 * v17 + 268];
                break;
            }
          }
        }
        else
        {
          v14 = *(_QWORD *)(v8 + 128);
        }
        v21 = *(_BYTE *)(v4 + v10);
        if ( v21 && v21 < (unsigned int)__popcnt(v14) )
        {
          v22 = 0;
          v23 = 0;
          if ( v6 )
          {
            v24 = a3;
            do
            {
              v25 = *((_DWORD *)KiGlobalState + *v24) & 0x3F;
              if ( *(unsigned __int16 *)(v8 + 136) == *((_DWORD *)KiGlobalState + *v24) >> 6 )
              {
                if ( _bittest64((const __int64 *)&v14, v25) )
                {
                  ++v22;
                  v7 |= 1LL << v25;
                  if ( v22 == v21 )
                    break;
                }
              }
              ++v23;
              ++v24;
            }
            while ( v23 < a2 );
            v8 = v32;
            v6 = a2;
            v30 = v7;
            v7 = 0LL;
            v13 = v30;
          }
          v4 = a4;
        }
        v26 = *(unsigned __int16 *)(v8 + 136);
        if ( (unsigned __int16)v26 >= *v11 )
          v27 = 0LL;
        else
          v27 = *(_QWORD *)&v11[4 * v26 + 4];
        if ( v27 != v13 )
        {
          if ( *v11 > (unsigned __int16)v26 )
            goto LABEL_42;
          if ( v11[1] > (unsigned __int16)v26 )
          {
            *v11 = v26 + 1;
LABEL_42:
            *(_QWORD *)&v11[4 * v26 + 4] = v13;
          }
          v28 = 1;
          v34 = 1;
          goto LABEL_45;
        }
        v28 = v34;
LABEL_45:
        v11 += 132;
      }
      ++v10;
    }
    while ( v10 < 7 );
    v9 += 8184;
    --v31;
  }
  while ( v31 );
  if ( v28 )
  {
    KiInstallSubNodeHeteroSets(v8, KeHeteroSystem, v33 + 32, *(_DWORD *)(v33 + 28));
    LOBYTE(v7) = 1;
  }
  return v7;
}
