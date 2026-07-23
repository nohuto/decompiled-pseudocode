/*
 * XREFs of MiFindProcessorsForMemoryOnlyNode @ 0x140C5A9A0
 * Callers:
 *     MiReassignProcessorsToMemoryOnlyNodes @ 0x140C5AD1C (MiReassignProcessorsToMemoryOnlyNodes.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x140371000 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall MiFindProcessorsForMemoryOnlyNode(unsigned int a1, unsigned int a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  unsigned int *v5; // r14
  int v6; // r9d
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _WORD *i; // rdi
  unsigned int j; // ebp
  __int64 v11; // rsi
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rdx
  bool v16; // zf
  __int16 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r11
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 result; // rax
  _QWORD *v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+30h] [rbp-78h]
  unsigned int *v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  _DWORD *v30; // [rsp+48h] [rbp-60h]
  unsigned __int64 v31; // [rsp+50h] [rbp-58h]
  __int128 v32[5]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v33; // [rsp+B0h] [rbp+8h]
  int v34; // [rsp+C0h] [rbp+18h]
  unsigned int v35; // [rsp+C8h] [rbp+20h]

  v30 = *(_DWORD **)(384LL * a1 + qword_140E2DC38 + 376);
  v3 = qword_140E2DC10 + 4LL * (unsigned __int16)KeNumberNodes * a1;
  v4 = v3 + 4LL * (unsigned __int16)KeNumberNodes;
  v5 = (unsigned int *)(v3 + 4);
  v31 = v4;
LABEL_2:
  v28 = v5;
  if ( (unsigned __int64)v5 >= v4 )
    return 0LL;
  v6 = 1;
  v35 = *v5;
  v34 = 1;
  v7 = *(_QWORD **)(384LL * *v5 + qword_140E2DC38 + 376);
  v8 = 1LL;
  v25 = v7;
  for ( i = (_WORD *)v7 + 13; ; ++i )
  {
    v27 = v8;
    if ( v8 >= 3 )
    {
      v4 = v31;
      ++v5;
      goto LABEL_2;
    }
    v33 = *(i - 3);
    if ( v33 )
      break;
LABEL_28:
    ++v6;
    ++v8;
    v34 = v6;
  }
  for ( j = *((unsigned __int16 *)v7 + 8) - 1; ; --j )
  {
    v32[0] = *(_OWORD *)(*v7 + 16LL * j);
    v11 = *(_QWORD *)&v32[0];
    if ( *(_QWORD *)&v32[0] )
    {
      do
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)v32);
        v6 = v34;
        v13 = FirstSetRightGroupAffinity;
        v14 = KiProcessorBlock[FirstSetRightGroupAffinity];
        v15 = *(_QWORD *)(v14 + 200);
        v11 &= ~v15;
        v16 = *(_BYTE *)(v14 + 35336) == 1;
        *(_QWORD *)&v32[0] = v11;
        if ( !v16 + 1 == v34 )
        {
          v17 = 0;
          v29 = *(_QWORD *)(v14 + 36448);
          v26 = v11;
          v18 = v15 | v11 & v29;
          v19 = 0LL;
          while ( v18 )
          {
            v20 = KiProcessorBlock[v13];
            if ( (*(_BYTE *)(v20 + 35336) != 1) + 1 != v34 )
              break;
            v21 = *(_QWORD *)(v20 + 200);
            v19 |= v21;
            ++v17;
            v22 = ~v21;
            v18 &= v22;
            v11 = v26 & v22;
            v26 = v11;
            v23 = v11;
            *(_QWORD *)&v32[0] = v11;
            if ( a2 == 1 )
            {
              v11 &= ~v29;
              *(_QWORD *)&v32[0] = v23 & ~v29;
              v18 = v18 == 0;
              break;
            }
            if ( a2 == 2 )
            {
              v18 = 0LL;
              break;
            }
            v13 = (unsigned int)(v13 + 1);
          }
          if ( (!v17 || a2 == 2 || v17 != v33) && !v18 )
            break;
        }
        v19 = 0LL;
        v17 = 0;
      }
      while ( v11 );
      v5 = v28;
      if ( v17 )
      {
        if ( a2 > 1 )
          goto LABEL_32;
        if ( *(i - 3) != v17 )
          break;
      }
    }
    v7 = v25;
    if ( !j )
    {
      v8 = v27;
      goto LABEL_28;
    }
  }
  *(_QWORD *)(*v25 + 16LL * j) &= ~v19;
  *(i - 3) -= v17;
  if ( !a2 )
    --*i;
LABEL_32:
  result = 1LL;
  **(_QWORD **)v30 = v19;
  *(_WORD *)(*(_QWORD *)v30 + 8LL) = *(_WORD *)(*(_QWORD *)v30 + 16LL * j + 8);
  *((_WORD *)v30 + v34 + 9) = v17;
  *((_WORD *)v30 + v34 + 12) = 1;
  v30[11] = v35;
  return result;
}
