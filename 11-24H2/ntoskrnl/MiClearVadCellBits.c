/*
 * XREFs of MiClearVadCellBits @ 0x140291EE4
 * Callers:
 *     MiClearVadBits @ 0x140291DCC (MiClearVadBits.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiVadBitToUserVa @ 0x1409AF070 (MiVadBitToUserVa.c)
 */

unsigned __int64 __fastcall MiClearVadCellBits(
        unsigned __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  int v10; // edx
  _QWORD *v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdi
  __int64 v15; // r11
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r14
  int v19; // r15d
  __int64 v20; // r8
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rsi
  int v24; // edx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // [rsp+50h] [rbp+8h]

  result = MiVadBitToUserVa(a1, 0LL);
  v29 = result;
  v14 = result >> 16;
  v15 = (unsigned int)(v10 + 1);
  v16 = result;
  if ( !v13 && !v14 )
    v13 = (unsigned int)(v10 + 1);
  if ( v13 <= v12 && v12 >= v14 )
  {
    v17 = v14 + *v11;
    if ( v13 < v17 )
    {
      v18 = v13;
      if ( v13 < v14 )
        v18 = result >> 16;
      v19 = v13 < v14;
      if ( v12 >= v17 )
      {
        a3 = v17 - 1;
        v19 = v10 + 1;
      }
      v20 = v15 + a3 - v18;
      v21 = v18 - v14;
      v22 = a3 - v14;
      v23 = a1[8] - v14;
      if ( *a6 == v10 )
      {
        RtlClearBitsEx(a1, v21, v20);
        v16 = v29;
        v15 = 1LL;
        if ( !v19 )
          *a6 = 1;
      }
      result = a1[2];
      v24 = v15;
      if ( result < v23 || a1[4] < v23 )
        v24 = 0;
      if ( result > v21 )
      {
        if ( v21 < v23 && v24 )
        {
          if ( v22 >= v23 )
            a1[2] = v23;
        }
        else
        {
          a1[2] = v21;
        }
      }
      v25 = 0LL;
      if ( a4 )
      {
        result = *(unsigned int *)(a4 + 28);
        v26 = ((((result | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF) + 0xFFFF) >> 16;
        if ( v26 <= v14 )
        {
          v25 = 0LL;
        }
        else
        {
          v25 = v26 - v14;
          if ( v25 )
          {
LABEL_18:
            if ( v24 && v25 < v23 )
              v25 = v23;
            if ( v25 <= v22 )
            {
              result = a5;
              if ( a5 )
              {
                v27 = ((unsigned __int64)*(unsigned int *)(a5 + 24) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(a5 + 32) << 28);
                result = *a1 + v14;
                if ( v27 > result )
                  v28 = *a1;
                else
                  v28 = v27 - v14;
              }
              else
              {
                v28 = *a1;
              }
              if ( v25 < a1[4] && v28 - v25 >= a1[3] )
                a1[4] = v25;
            }
            return result;
          }
        }
      }
      if ( v16 < 0x10000 )
        v25 = v15;
      goto LABEL_18;
    }
  }
  return result;
}
