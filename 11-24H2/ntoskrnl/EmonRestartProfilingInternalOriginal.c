/*
 * XREFs of EmonRestartProfilingInternalOriginal @ 0x14055BE2C
 * Callers:
 *     EmonRestartProfilingOriginal @ 0x140B516B0 (EmonRestartProfilingOriginal.c)
 * Callees:
 *     EmonConfigureCounter @ 0x140558B40 (EmonConfigureCounter.c)
 *     EmonWriteCounter @ 0x14055C654 (EmonWriteCounter.c)
 */

void __fastcall EmonRestartProfilingInternalOriginal(int a1, int a2)
{
  unsigned int *v2; // rbx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // rcx
  char v7; // si
  char v8; // r11
  int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // r8d

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
  v5 = 0LL;
  if ( v2[1] )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)v2 + 2);
      v7 = 0;
      v8 = 1;
      v9 = *(_DWORD *)(v6 + 48 * v5 + 24);
      v10 = *(_QWORD *)(v6 + 48 * v5);
      v11 = **(unsigned int **)(v6 + 48 * v5 + 16);
      if ( !v9 )
        break;
      v12 = v9 - 1;
      if ( !v12 )
        goto LABEL_16;
      if ( v12 != 1 )
      {
        v8 = 0;
        v10 = 0LL;
        LODWORD(v11) = 0;
LABEL_16:
        EmonConfigureCounter(v5, *v2, v8, v10, v11, v7);
        goto LABEL_17;
      }
      EmonWriteCounter((unsigned int)v5, *v2, *(_QWORD *)(v6 + 48 * v5), v11);
LABEL_17:
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v2[1] )
        return;
    }
    v7 = 1;
    goto LABEL_16;
  }
}
