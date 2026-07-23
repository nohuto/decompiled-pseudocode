/*
 * XREFs of RtlMarkExceptionHandlingPages @ 0x140A152BC
 * Callers:
 *     MiCaptureImageExceptionValues @ 0x140A8FDB8 (MiCaptureImageExceptionValues.c)
 * Callees:
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     RtlpSearchFunctionTable @ 0x1403D6E20 (RtlpSearchFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x140406840 (RtlpConvertFunctionEntry.c)
 */

__int64 __fastcall RtlMarkExceptionHandlingPages(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // r12
  unsigned int *v11; // rbx
  int v12; // ebp
  unsigned __int64 v13; // rdx
  _BYTE *v14; // rbx
  int v15; // eax
  bool v16; // zf
  unsigned int v17; // ecx
  __int64 v18; // rax
  char v19; // cl
  unsigned int *v20; // rax
  unsigned __int64 v22; // rax

  v6 = a1 + a2;
  if ( a3 >= a1 )
  {
    v8 = a4 + a3;
    if ( v8 <= v6 )
    {
      v9 = a4 / 0xC;
      if ( a4 == 12 * (a4 / 0xCuLL) )
      {
        RtlSetBits(BitMapHeader, (a3 - a1) >> 12, ((a3 - a1 + a4 + 4095LL) >> 12) - ((a3 - a1) >> 12));
        v10 = 0LL;
LABEL_5:
        if ( (unsigned int)v10 >= v9 )
          return 0LL;
        v11 = (unsigned int *)(a3 + 12 * v10);
        while ( (v11[2] & 1) != 0 )
        {
          v22 = RtlpConvertFunctionEntry((unsigned __int64)v11, a1);
          v11 = (unsigned int *)v22;
          if ( v22 >= a3 && v22 + 12 <= v8 )
            break;
          if ( v22 < a1 || v22 > v6 - 12 )
            return 3221225727LL;
          RtlSetBits(
            BitMapHeader,
            (v22 - a1) >> 12,
            ((unsigned __int64)(((_WORD)v22 - (_WORD)a1) & 0xFFF) + 12 > 0x1000) + 1);
        }
        v12 = 0;
        while ( 1 )
        {
          v13 = v11[2];
          v14 = (_BYTE *)(v13 + a1);
          if ( v13 + a1 < a1 || (unsigned __int64)(v14 + 6) > v6 )
            break;
          v15 = (unsigned __int8)v14[2];
          v16 = (v15 & 1) == 0;
          v17 = 2 * v15 + 6;
          v18 = (unsigned int)(2 * v15 + 8);
          if ( v16 )
            v18 = v17;
          v19 = *v14 >> 3;
          if ( (v19 & 4) != 0 )
          {
            v18 = (unsigned int)(v18 + 12);
          }
          else if ( (v19 & 3) != 0 )
          {
            v18 = (unsigned int)(v18 + 8);
          }
          if ( (unsigned __int64)&v14[v18] > v6 )
            break;
          RtlSetBits(BitMapHeader, v13 >> 12, ((v13 + (unsigned int)v18 + 4095LL) >> 12) - (v13 >> 12));
          if ( (*v14 & 0x20) != 0 )
          {
            if ( (unsigned int)++v12 > 0x20 )
              return 3221225727LL;
            v11 = (unsigned int *)&v14[2 * (((unsigned __int8)v14[2] + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) + 4];
            v20 = RtlpSearchFunctionTable(a3, v9, a1 + *v11, a1);
            if ( !v20 || v20[2] != v11[2] )
              continue;
          }
          v10 = (unsigned int)(v10 + 1);
          goto LABEL_5;
        }
      }
    }
  }
  return 3221225727LL;
}
