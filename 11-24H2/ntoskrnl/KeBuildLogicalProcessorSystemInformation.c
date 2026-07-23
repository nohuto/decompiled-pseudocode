/*
 * XREFs of KeBuildLogicalProcessorSystemInformation @ 0x140A0FDA4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiGetSubNodeForGroup @ 0x1404431CC (KiGetSubNodeForGroup.c)
 */

__int64 __fastcall KeBuildLogicalProcessorSystemInformation(
        unsigned __int16 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v4; // r14
  unsigned int v7; // edi
  unsigned int v8; // r10d
  int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // r11
  int v13; // ebx
  unsigned __int64 v14; // rcx
  int v15; // eax
  int v16; // r9d
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r9d
  _QWORD *v21; // rbx
  __int64 v22; // r11
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 *v27; // r11
  __int64 SubNodeForGroup; // rax
  _QWORD *v29; // r8
  int v30; // r9d
  __int64 v31; // r11
  __int64 v32; // rax
  __int64 result; // rax
  bool v34; // al

  v4 = a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v10 = KiProcessorBlock[v9];
      v11 = *(unsigned __int8 *)(v10 + 208);
      if ( (_WORD)v11 == (_WORD)v4 )
      {
        v12 = *(_QWORD *)(v10 + 8 * v11 + 35864);
        v13 = *(unsigned __int8 *)(v10 + 208);
        if ( v12 )
        {
          _BitScanReverse64(&v14, v12);
          v15 = *((_DWORD *)qword_140F22998 + (unsigned int)((v13 << 6) + v14));
        }
        else
        {
          v15 = -1;
        }
        v16 = *(_DWORD *)(v10 + 36);
        if ( v16 == v15 )
        {
          v8 += 32;
          if ( v8 <= a3 )
          {
            *(_QWORD *)a2 = v12;
            *(_DWORD *)(a2 + 8) = 3;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            a2 += 32LL;
            v16 = *(_DWORD *)(v10 + 36);
          }
          else
          {
            v7 = -1073741820;
          }
        }
        v17 = *(_QWORD *)(v10 + 36448);
        if ( v17 )
        {
          _BitScanReverse64(&v18, v17);
          v19 = *((_DWORD *)qword_140F22998 + (unsigned int)(v18 + (v13 << 6)));
        }
        else
        {
          v19 = -1;
        }
        if ( v16 == v19 )
        {
          v34 = *(_QWORD *)(v10 + 200) != v17;
          v8 += 32;
          if ( v8 > a3 )
          {
            v7 = -1073741820;
          }
          else
          {
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_BYTE *)(a2 + 16) = v34;
            *(_QWORD *)a2 = v17;
            *(_DWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0LL;
            a2 += 32LL;
          }
        }
        v20 = 0;
        if ( *(_DWORD *)(v10 + 35732) )
          break;
      }
LABEL_16:
      if ( ++v9 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_17;
    }
    v21 = (_QWORD *)(a2 + 16);
    while ( 1 )
    {
      v22 = v10 + 264LL * v20;
      if ( (unsigned __int16)v4 >= *(_WORD *)(v22 + 44800) )
        break;
      v23 = *(_QWORD *)(v22 + 8 * v4 + 44808);
      if ( !v23 )
        goto LABEL_36;
      _BitScanReverse64(&v24, v23);
      v25 = *((_DWORD *)qword_140F22998 + (unsigned int)(((_DWORD)v4 << 6) + v24));
LABEL_14:
      if ( *(_DWORD *)(v10 + 36) == v25 )
      {
        v8 += 32;
        if ( v8 > a3 )
        {
          v7 = -1073741820;
        }
        else
        {
          v21[1] = 0LL;
          *v21 = 0LL;
          *(_QWORD *)a2 = v23;
          a2 += 32LL;
          *((_DWORD *)v21 - 2) = 2;
          *v21 = *(_QWORD *)(v10 + 12LL * v20 + 35672);
          *((_DWORD *)v21 + 2) = *(_DWORD *)(v10 + 12LL * v20 + 35680);
          v21 += 4;
        }
      }
      if ( ++v20 >= *(_DWORD *)(v10 + 35732) )
        goto LABEL_16;
    }
    v23 = 0LL;
LABEL_36:
    v25 = -1;
    goto LABEL_14;
  }
LABEL_17:
  v26 = (unsigned __int16)KeNumberNodes;
  if ( KeNumberNodes )
  {
    v27 = KeNodeBlock;
    do
    {
      SubNodeForGroup = KiGetSubNodeForGroup(*v27, v4);
      if ( SubNodeForGroup )
      {
        v32 = *(_QWORD *)(SubNodeForGroup + 128);
        if ( v32 )
        {
          v8 += 32;
          if ( v8 <= a3 )
          {
            *v29 = 0LL;
            *(_DWORD *)v29 = v30;
            *(v29 - 2) = v32;
            *((_DWORD *)v29 - 2) = 1;
            v29[1] = 0LL;
          }
          else
          {
            v7 = -1073741820;
          }
        }
      }
      v27 = (__int64 *)(v31 + 8);
    }
    while ( v30 + 1 < v26 );
  }
  result = v7;
  *a4 = v8;
  return result;
}
