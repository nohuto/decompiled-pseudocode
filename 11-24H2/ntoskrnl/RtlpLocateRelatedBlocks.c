/*
 * XREFs of RtlpLocateRelatedBlocks @ 0x1405F0624
 * Callers:
 *     RtlpHpHeapHandleError @ 0x1405F05B4 (RtlpHpHeapHandleError.c)
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
  _QWORD *v9; // r11
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r9
  int v14; // edx
  int v15; // eax
  unsigned __int16 v16; // ax
  unsigned __int64 v17; // rcx
  unsigned __int16 v18; // dx
  int v19; // ecx
  unsigned __int16 v20; // r10
  int *v21; // r11
  int v22; // ecx
  _DWORD *v23; // rdx
  int v24; // eax
  unsigned __int16 v25; // ax
  __int64 v26; // r10
  int v27; // eax
  unsigned __int16 v28; // ax
  int v29; // eax
  unsigned __int64 *v30; // r8
  unsigned __int64 i; // rdx
  int v32; // [rsp+8h] [rbp-50h]
  int v33; // [rsp+18h] [rbp-40h]
  int v34; // [rsp+28h] [rbp-30h]
  int v35; // [rsp+38h] [rbp-20h]
  int v36; // [rsp+48h] [rbp-10h]

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
            LOWORD(v32) = v15;
            if ( (v14 & v15) != 0 )
              v32 = *(_DWORD *)(a1 + 136) ^ v15;
            v16 = v32;
          }
          else
          {
            v16 = *((_WORD *)v6 + 4);
          }
          if ( !v16 )
            break;
          v6 += 2 * v16;
        }
        while ( (unsigned __int64)v6 < a2 );
      }
      v17 = (unsigned __int64)(v9 - 2);
      if ( (unsigned __int64)(v9 - 2) > a2 )
      {
        v18 = *(_WORD *)(a1 + 140);
        do
        {
          v12 = v17;
          if ( *(_WORD *)(v17 + 12) == v18 )
            break;
          v17 += -16LL * (unsigned __int16)(*(_WORD *)(v17 + 12) ^ v18);
        }
        while ( v17 > a2 );
      }
      qword_140E0C668 = v13;
      qword_140E0C670 = v12;
      if ( !v13 || !v12 )
        goto LABEL_40;
      if ( *(_DWORD *)(a1 + 124) )
      {
        v19 = *(_DWORD *)(v13 + 8);
        LOWORD(v33) = v19;
        if ( (v19 & *(_DWORD *)(a1 + 124)) != 0 )
          v33 = *(_DWORD *)(a1 + 136) ^ v19;
        v20 = v33;
      }
      else
      {
        v20 = *(_WORD *)(v13 + 8);
      }
      result = v13 + 16LL * v20;
      if ( result != v12 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 12)) )
      {
        dword_140E0C638 = 4;
      }
      else
      {
LABEL_40:
        v21 = (int *)(a1 + 124);
        v22 = *(_DWORD *)(a1 + 124);
        v23 = (_DWORD *)(a1 + 124);
        if ( v22 )
        {
          v24 = *(_DWORD *)(v13 + 8);
          v22 = *v21;
          LOWORD(v34) = v24;
          if ( (*v21 & v24) != 0 )
          {
            v23 = (_DWORD *)(a1 + 124);
            v34 = *(_DWORD *)(a1 + 136) ^ v24;
          }
          v25 = v34;
        }
        else
        {
          v25 = *(_WORD *)(v13 + 8);
        }
        v26 = 2LL * v25;
        if ( v12 )
        {
          qword_140E0C678 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v12 + 12);
          v22 = *v21;
        }
        if ( v13 )
        {
          if ( v22 )
          {
            v27 = *(_DWORD *)(v13 + 8);
            LOWORD(v35) = v27;
            if ( (v27 & *v23) != 0 )
              v35 = *(_DWORD *)(a1 + 136) ^ v27;
            v28 = v35;
            v23 = (_DWORD *)(a1 + 124);
          }
          else
          {
            v28 = *(_WORD *)(v13 + 8);
          }
          qword_140E0C680 = v28;
        }
        if ( *v23 )
        {
          v29 = *(_DWORD *)(v13 + 8 * v26 + 8);
          LOWORD(v36) = v29;
          if ( (v29 & *v23) != 0 )
            v36 = *(_DWORD *)(a1 + 136) ^ v29;
          LOWORD(result) = v36;
        }
        else
        {
          LOWORD(result) = *(_WORD *)(v13 + 8 * v26 + 8);
        }
        result = (unsigned __int16)result;
        if ( qword_140E0C678 == (unsigned __int16)result )
        {
          result = *(unsigned __int16 *)(a1 + 140);
          if ( qword_140E0C680 != (result ^ *(unsigned __int16 *)(v13 + 8 * v26 + 12)) )
            dword_140E0C638 = 7;
        }
        else
        {
          dword_140E0C638 = 6;
        }
      }
      return result;
    }
  }
  v30 = (unsigned __int64 *)(a1 + 272);
  for ( i = *v30; (unsigned __int64 *)i != v30; i = *(_QWORD *)i )
  {
    if ( (i & 0xFFFFFFFFFFFF0000uLL) <= a2 && *(_QWORD *)(i + 40) + (i & 0xFFFFFFFFFFFF0000uLL) > a2 )
      dword_140E0C638 = 5;
  }
  return result;
}
