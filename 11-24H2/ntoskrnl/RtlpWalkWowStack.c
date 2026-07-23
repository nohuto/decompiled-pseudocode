/*
 * XREFs of RtlpWalkWowStack @ 0x1403FD020
 * Callers:
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpWalkWowStack(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v11; // r8d
  unsigned int v12; // edx
  char v14; // cl
  unsigned int j; // r10d
  bool v16; // zf
  int v17; // ecx
  unsigned int v18; // r11d
  unsigned __int64 v19; // r9
  _KPROCESS *Process; // rcx
  unsigned int v21; // r9d
  unsigned int i; // r10d
  unsigned __int8 v24; // [rsp+20h] [rbp-28h]
  unsigned int v25; // [rsp+60h] [rbp+18h]

  v24 = 1;
  v11 = *(_DWORD *)(a3 + 8196);
  v25 = v11;
  if ( v11 <= a8 )
    return 0;
  if ( v11 != a8 && (a8 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = *a4;
  if ( a2 )
  {
    if ( a5 > v12 )
    {
      if ( v12 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v12 - a6)) = *a2;
      ++*a4;
    }
  }
  else
  {
    v21 = a8;
    for ( i = 0; i < 2 && v12 < a5 && v21 < v11 && v21 >= a8 && v11 - v21 >= 4; ++i )
    {
      if ( v12 >= a6 )
        *(_QWORD *)(a1 + 8LL * (v12 - a6)) = *(unsigned int *)v21;
      v21 += 4;
      ++v12;
    }
    *a4 = v12;
    if ( v12 >= a5 )
      return v24;
  }
  v14 = 1;
  for ( j = *a4; j < a5 && a7 < v11; ++j )
  {
    v16 = v14 == 0;
    v17 = 0;
    LOBYTE(v17) = v16 ? a7 <= a8 : a7 < a8;
    if ( v17 )
      break;
    if ( v11 - a7 < 8 )
      break;
    v18 = *(_DWORD *)a7;
    v19 = *(unsigned int *)(a7 + 4LL);
    if ( a8 <= (unsigned int)v19 && (unsigned int)v19 < v11 )
      break;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (unsigned int)v19 < 0x10000 || v19 >= *(_QWORD *)&Process[1].PrimaryGroup )
      break;
    if ( j >= a6 )
      *(_QWORD *)(a1 + 8LL * (j - a6)) = v19;
    if ( a7 >= v18 || (v11 = v25, v18 >= v25) )
    {
      ++j;
      break;
    }
    a7 = v18;
    v14 = 0;
  }
  *a4 = j;
  return v24;
}
