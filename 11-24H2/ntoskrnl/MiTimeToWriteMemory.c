/*
 * XREFs of MiTimeToWriteMemory @ 0x140271984
 * Callers:
 *     MiComputeSoloZeroingTime @ 0x1402718B0 (MiComputeSoloZeroingTime.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiTimeToWriteMemory(unsigned int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // r10
  int v6; // eax
  unsigned int *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v12; // r8

  v5 = *(_QWORD *)(384LL * a1 + qword_140E2DC38 + 376);
  v6 = 1;
  if ( a3 != 3 )
    v6 = a3;
  if ( a2 == 3 )
  {
    v12 = 0LL;
    v7 = (unsigned int *)(v5 + 56LL * v6 + 72);
    while ( 1 )
    {
      v8 = *((_QWORD *)v7 + 6);
      if ( v8 )
        break;
      ++v12;
      v7 += 42;
      if ( v12 >= 3 )
        goto LABEL_7;
    }
  }
  else
  {
    v7 = (unsigned int *)(v5 + 56 * (v6 + 2LL * a2 + a2) + 72);
    v8 = *((_QWORD *)v7 + 6);
    if ( !v8 )
    {
LABEL_7:
      v10 = 1216LL;
      v9 = 0x200000LL;
      return a5 * v10 / v9;
    }
  }
  v9 = *((_QWORD *)v7 + 1) * *v7;
  v10 = *(_QWORD *)(v8 + 8LL * a4);
  if ( !v9 )
    goto LABEL_7;
  return a5 * v10 / v9;
}
