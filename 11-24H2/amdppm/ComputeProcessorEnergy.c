/*
 * XREFs of ComputeProcessorEnergy @ 0x140002400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ComputeProcessorEnergy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  unsigned int *v6; // r8
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  __int64 i; // rax
  __int64 v11; // r10
  unsigned int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  unsigned int v19; // eax

  v6 = (unsigned int *)((char *)&unk_140015CC0 + 256 * (unsigned __int64)a1);
  v8 = v6[1];
  if ( (v8 & 1) != 0 )
  {
    v9 = (unsigned __int8)v8 >> 1;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v11 = i + 2;
      if ( (unsigned int)i >= v9 )
        break;
      v12 = v6[v11];
      if ( a4 == (unsigned __int8)v12 )
      {
        v13 = v12 >> 8;
        goto LABEL_6;
      }
      if ( a4 < (unsigned __int8)v12 )
        break;
    }
    if ( (_DWORD)i )
    {
      v16 = v6[(unsigned int)(i - 1) + 2];
      if ( (_DWORD)i == v9 )
        LODWORD(i) = i - 1;
    }
    else
    {
      v16 = v6[v11];
      LODWORD(i) = 1;
    }
    v17 = v16 >> 8;
    v18 = v6[(unsigned int)(i - 1) + 2];
    v19 = v6[(unsigned int)i + 2];
    if ( (unsigned __int8)v18 < (unsigned int)(unsigned __int8)v19 )
      v13 = v17
          + (int)((a4 - (unsigned __int8)v18) * ((v19 >> 8) - (v18 >> 8)))
          / ((unsigned __int8)v19 - (unsigned __int8)v18);
    else
      v13 = 0;
LABEL_6:
    v14 = 100LL;
  }
  else
  {
    v13 = *v6;
    v14 = a4;
  }
  result = 10 * a2 * v14 * (unsigned __int64)v13 / qword_140015ED0;
  *a5 = result;
  return result;
}
