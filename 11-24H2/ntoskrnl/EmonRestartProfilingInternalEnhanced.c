/*
 * XREFs of EmonRestartProfilingInternalEnhanced @ 0x14055BD10
 * Callers:
 *     EmonRestartProfilingEnhanced @ 0x140B51650 (EmonRestartProfilingEnhanced.c)
 * Callees:
 *     EmonConfigureCounter @ 0x140558B40 (EmonConfigureCounter.c)
 *     EmonWriteCounter @ 0x14055C654 (EmonWriteCounter.c)
 */

__int64 __fastcall EmonRestartProfilingInternalEnhanced(int a1, int a2)
{
  unsigned int *v2; // rbx
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbp
  int v8; // edx
  __int64 i; // r10
  char v10; // si
  char v11; // r11
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx

  v2 = *(unsigned int **)(KiProcessorBlock[a2] + 88);
  if ( a1 )
  {
    v3 = a1 - 1;
    if ( v3 )
    {
      v4 = v3 - 99;
      if ( v4 )
      {
        if ( v4 == 1 )
          v2 += 18;
        else
          v2 = 0LL;
      }
      else
      {
        v2 += 12;
      }
    }
    else
    {
      v2 += 6;
    }
  }
  result = v2[1];
  v6 = 0;
  v7 = *((_QWORD *)v2 + 2);
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      v8 = 0;
      for ( i = 0LL; (unsigned int)i <= v2[2]; i = (unsigned int)(i + 1) )
      {
        if ( *(_DWORD *)(*((_QWORD *)v2 + 2) + 48 * i + 28) != 3 && ++v8 > v6 )
          goto LABEL_16;
      }
      i = 0xFFFFFFFFLL;
LABEL_16:
      v10 = 0;
      v11 = 1;
      v12 = *(_DWORD *)(v7 + 48 * i + 24);
      v13 = *(_QWORD *)(v7 + 48 * i);
      v14 = **(unsigned int **)(v7 + 48 * i + 16);
      if ( !v12 )
        break;
      v15 = v12 - 1;
      if ( !v15 )
        goto LABEL_22;
      if ( v15 != 1 )
      {
        v11 = 0;
        v13 = 0LL;
        LODWORD(v14) = 0;
LABEL_22:
        EmonConfigureCounter(i, *v2, v11, v13, v14, v10);
        goto LABEL_23;
      }
      EmonWriteCounter((unsigned int)i, *v2, v13, v14);
LABEL_23:
      result = v2[1];
      if ( ++v6 >= (unsigned int)result )
        return result;
    }
    v10 = 1;
    goto LABEL_22;
  }
  return result;
}
