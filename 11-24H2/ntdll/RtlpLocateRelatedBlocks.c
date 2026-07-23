/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x18014A780
 * Callers:
 *     RtlpHpHeapHandleError @ 0x18011BAF0 (RtlpHpHeapHandleError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLocateRelatedBlocks(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 result; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  _QWORD *v8; // r9
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r9
  int v14; // edx
  int v15; // eax
  unsigned __int64 i; // rcx
  unsigned __int16 v17; // ax
  int v18; // r10d
  int *v19; // r11
  int v20; // ecx
  _DWORD *v21; // rdx
  int v22; // eax
  __int64 v23; // r10
  int v24; // eax
  unsigned __int64 *v25; // r8
  unsigned __int64 j; // rdx

  v4 = (_QWORD *)(a1 + 288);
  for ( result = *(_QWORD *)(a1 + 288); (_QWORD *)result != v4; result = *(_QWORD *)result )
  {
    v6 = (_QWORD *)(result - 24);
    if ( *(_QWORD *)(result - 24 + 48) <= a2 && v6[9] > a2 )
    {
      v7 = (_QWORD *)v6[12];
      v8 = 0LL;
      v9 = 0LL;
      while ( v7 != v6 + 12 )
      {
        v10 = v7[2];
        v11 = v10 + v7[3];
        if ( v11 < a2 && v11 > (unsigned __int64)v8 )
          v8 = (_QWORD *)(v10 + v7[3]);
        if ( v10 > a2 && (!v9 || v10 < v9[4]) )
          v9 = v7 - 2;
        v7 = (_QWORD *)*v7;
      }
      v12 = 0LL;
      if ( v8 )
        v6 = v8;
      v13 = 0LL;
      if ( (unsigned __int64)v6 < a2 )
      {
        v14 = *(_DWORD *)(a1 + 124);
        do
        {
          v13 = (__int64)v6;
          if ( v14 )
          {
            v15 = *((_DWORD *)v6 + 2);
            v14 = *(_DWORD *)(a1 + 124);
            if ( (v14 & v15) != 0 )
              v15 ^= *(_DWORD *)(a1 + 136);
          }
          else
          {
            LOWORD(v15) = *((_WORD *)v6 + 4);
          }
          if ( !(_WORD)v15 )
            break;
          v6 += 2 * (unsigned __int16)v15;
        }
        while ( (unsigned __int64)v6 < a2 );
      }
      for ( i = (unsigned __int64)(v9 - 2); i > a2; i += -16LL * v17 )
      {
        v12 = i;
        v17 = *(_WORD *)(i + 12) ^ *(_WORD *)(a1 + 140);
        if ( !v17 )
          break;
      }
      qword_1801CC118 = v13;
      qword_1801CC120 = v12;
      if ( !v13 || !v12 )
        goto LABEL_38;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v18 = *(_DWORD *)(v13 + 8);
        if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
          v18 ^= *(_DWORD *)(a1 + 136);
      }
      else
      {
        LOWORD(v18) = *(_WORD *)(v13 + 8);
      }
      result = v13 + 16LL * (unsigned __int16)v18;
      if ( result != v12 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 12)) )
      {
        dword_1801CC0E8 = 4;
      }
      else
      {
LABEL_38:
        v19 = (int *)(a1 + 124);
        v20 = *(_DWORD *)(a1 + 124);
        v21 = (_DWORD *)(a1 + 124);
        if ( v20 )
        {
          v22 = *(_DWORD *)(v13 + 8);
          v20 = *v19;
          if ( (*v19 & v22) != 0 )
          {
            v22 ^= *(_DWORD *)(a1 + 136);
            v21 = (_DWORD *)(a1 + 124);
          }
        }
        else
        {
          LOWORD(v22) = *(_WORD *)(v13 + 8);
        }
        v23 = 2LL * (unsigned __int16)v22;
        if ( v12 )
        {
          qword_1801CC128 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 12);
          v20 = *v19;
        }
        if ( v13 )
        {
          if ( v20 )
          {
            v24 = *(_DWORD *)(v13 + 8);
            if ( (v24 & *v21) != 0 )
              v24 ^= *(_DWORD *)(a1 + 136);
            v21 = (_DWORD *)(a1 + 124);
          }
          else
          {
            LOWORD(v24) = *(_WORD *)(v13 + 8);
          }
          qword_1801CC130 = (unsigned __int16)v24;
        }
        if ( *v21 )
        {
          LODWORD(result) = *(_DWORD *)(v13 + 8 * v23 + 8);
          if ( ((unsigned int)result & *v21) != 0 )
            LODWORD(result) = *(_DWORD *)(a1 + 136) ^ result;
        }
        else
        {
          LOWORD(result) = *(_WORD *)(v13 + 8 * v23 + 8);
        }
        result = (unsigned __int16)result;
        if ( qword_1801CC128 == (unsigned __int16)result )
        {
          result = *(unsigned __int16 *)(a1 + 140);
          if ( qword_1801CC130 != (result ^ *(unsigned __int16 *)(v13 + 8 * v23 + 12)) )
            dword_1801CC0E8 = 7;
        }
        else
        {
          dword_1801CC0E8 = 6;
        }
      }
      return result;
    }
  }
  v25 = (unsigned __int64 *)(a1 + 272);
  for ( j = *v25; (unsigned __int64 *)j != v25; j = *(_QWORD *)j )
  {
    if ( (j & 0xFFFFFFFFFFFF0000uLL) <= a2 && *(_QWORD *)(j + 40) + (j & 0xFFFFFFFFFFFF0000uLL) > a2 )
      dword_1801CC0E8 = 5;
  }
  return result;
}
