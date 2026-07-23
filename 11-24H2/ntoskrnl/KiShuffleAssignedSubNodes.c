/*
 * XREFs of KiShuffleAssignedSubNodes @ 0x140C2D018
 * Callers:
 *     KiPerformAutomaticGroupConfiguration @ 0x140C2AAAC (KiPerformAutomaticGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiShuffleAssignedSubNodes(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r9
  __int64 result; // rax
  __int64 v7; // rbp
  _QWORD *v8; // r12
  unsigned __int16 v9; // cx
  char v10; // r11
  unsigned __int16 v11; // si
  _QWORD *v12; // rax
  __int64 v13; // r15
  _QWORD *v14; // rax
  unsigned __int16 v15; // r11
  __int64 v16; // r13
  unsigned __int16 v17; // bx
  __int64 v18; // r14
  int v19; // r8d
  int v20; // edx
  unsigned int v21; // ecx
  unsigned __int16 v22; // ax
  __int64 *v23; // r10
  unsigned int v24; // ebp
  __int64 v25; // rdx
  __int64 *v26; // r10
  unsigned __int16 v27; // r9
  __int64 v28; // rdx
  __int64 *v29; // r10
  unsigned int v30; // ebx
  unsigned __int16 i; // r9
  __int64 v32; // rdx
  __int64 *v33; // r10
  unsigned __int16 v34; // r9
  __int64 v35; // rdx
  unsigned int v36; // ebp
  __int64 v37; // rax
  __int64 v38; // r10
  __int64 v39; // rax
  __int64 v40; // r9
  int v41; // edx
  int v42; // edx
  __int16 v43; // [rsp+0h] [rbp-78h]
  unsigned __int16 v44; // [rsp+2h] [rbp-76h]
  unsigned __int16 v45; // [rsp+4h] [rbp-74h]
  unsigned int v46; // [rsp+8h] [rbp-70h]
  int v47; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v48; // [rsp+10h] [rbp-68h]
  _QWORD *v49; // [rsp+18h] [rbp-60h]
  __int64 v50; // [rsp+20h] [rbp-58h]
  __int64 v51; // [rsp+28h] [rbp-50h]
  char v53; // [rsp+88h] [rbp+10h]

  v4 = KiSubNodeCount;
  v5 = 0;
  LODWORD(result) = 0;
  v7 = a3;
  v8 = a1;
  v47 = 0;
  v9 = -1;
  do
  {
    v53 = 0;
    v10 = 0;
    v45 = 0;
    v11 = 0;
    if ( v4 )
    {
      v12 = v8;
      v49 = v8;
      while ( 1 )
      {
        v13 = *v12;
        v50 = *v12;
        if ( (*(_BYTE *)(*v12 + 5LL) & 1) == 0 )
          goto LABEL_48;
        v14 = v8;
        v43 = -1;
        v48 = v8;
        v15 = 0;
        v46 = 0;
        do
        {
          v16 = *v14;
          if ( (*(_BYTE *)(*v14 + 5LL) & 1) != 0 && v11 != v15 )
          {
            v17 = *(_WORD *)(v16 + 6);
            v18 = *(unsigned __int16 *)(v13 + 6);
            v44 = v17;
            if ( (_WORD)v18 != v17 )
            {
              v19 = *(unsigned __int8 *)(v16 + 4);
              v20 = *(unsigned __int8 *)(v13 + 4);
              v21 = v20 - v19;
              if ( (unsigned __int8)v19 >= (unsigned __int8)v20 )
                v21 = *(unsigned __int8 *)(v16 + 4) - v20;
              v22 = *(_WORD *)(v16 + 6);
              if ( (unsigned __int8)v19 >= (unsigned __int8)v20 )
                v22 = *(_WORD *)(v13 + 6);
              if ( *(_DWORD *)(v7 + 4LL * v22) >= v21 )
              {
                v23 = v8;
                v24 = 0;
                do
                {
                  v25 = *v23;
                  if ( v5 != v11 && (*(_BYTE *)(v25 + 5) & 1) != 0 && *(_WORD *)(v25 + 6) == (_WORD)v18 )
                    v24 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v25 + 2)
                           + *(unsigned __int16 *)(v13 + 2) * (unsigned __int16)KeNumberNodes)
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v18) - 1);
                  ++v5;
                  ++v23;
                }
                while ( v5 < v4 );
                v26 = a1;
                v27 = 0;
                v51 = v17;
                do
                {
                  v28 = *v26;
                  if ( v27 != v15 && (*(_BYTE *)(v28 + 5) & 1) != 0 && *(_WORD *)(v28 + 6) == v17 )
                    v24 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v28 + 2)
                           + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v16 + 2))
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2LL * v17) - 1);
                  ++v27;
                  ++v26;
                }
                while ( v27 < v4 );
                v29 = a1;
                v11 = v45;
                v30 = 0;
                for ( i = 0; i < v4; ++i )
                {
                  v32 = *v29;
                  if ( i != v45 && (*(_BYTE *)(v32 + 5) & 1) != 0 && *(_WORD *)(v32 + 6) == (_WORD)v18 )
                    v30 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v32 + 2)
                           + *(unsigned __int16 *)(v16 + 2) * (unsigned __int16)KeNumberNodes)
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v18) - 1);
                  ++v29;
                }
                v33 = a1;
                v34 = 0;
                v13 = v50;
                do
                {
                  v35 = *v33;
                  if ( v34 != v15 && (*(_BYTE *)(v35 + 5) & 1) != 0 && *(_WORD *)(v35 + 6) == v44 )
                    v30 += *((_DWORD *)KeNodeDistance
                           + *(unsigned __int16 *)(v35 + 2)
                           + (unsigned __int16)KeNumberNodes * *(unsigned __int16 *)(v50 + 2))
                         / ((unsigned int)*(unsigned __int16 *)(a4 + 2 * v51) - 1);
                  ++v34;
                  ++v33;
                }
                while ( v34 < v4 );
                v8 = a1;
                if ( v30 >= v24 )
                {
                  v5 = 0;
                }
                else
                {
                  v36 = v24 - v30;
                  v5 = 0;
                  if ( v46 < v36 )
                  {
                    v9 = v15;
                    v46 = v36;
                    v7 = a3;
                    v43 = v15;
                    goto LABEL_44;
                  }
                }
                v7 = a3;
              }
              v9 = v43;
            }
          }
LABEL_44:
          ++v15;
          v14 = ++v48;
        }
        while ( v15 < v4 );
        if ( v9 == 0xFFFF )
        {
          v10 = v53;
          v9 = -1;
        }
        else
        {
          v37 = v9;
          v10 = 1;
          v53 = 1;
          v9 = -1;
          v38 = v8[v37];
          v39 = *(unsigned __int16 *)(v13 + 6);
          v40 = *(unsigned __int16 *)(v38 + 6);
          *(_WORD *)(v13 + 6) = v40;
          *(_WORD *)(v38 + 6) = v39;
          v41 = *(_DWORD *)(v7 + 4 * v39) + *(unsigned __int8 *)(v13 + 4);
          *(_DWORD *)(v7 + 4 * v39) = v41;
          *(_DWORD *)(v7 + 4 * v39) = v41 - *(unsigned __int8 *)(v38 + 4);
          v42 = *(_DWORD *)(v7 + 4 * v40) + *(unsigned __int8 *)(v38 + 4);
          *(_DWORD *)(v7 + 4 * v40) = v42;
          *(_DWORD *)(v7 + 4 * v40) = v42 - *(unsigned __int8 *)(v13 + 4);
        }
LABEL_48:
        ++v11;
        v12 = v49 + 1;
        v45 = v11;
        ++v49;
        v5 = 0;
        if ( v11 >= v4 )
        {
          LODWORD(result) = v47;
          break;
        }
      }
    }
    result = (unsigned int)(result + 1);
    v47 = result;
  }
  while ( v10 && (unsigned int)result < 0xA );
  return result;
}
