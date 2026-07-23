/*
 * XREFs of MiFindRebuildCandidate @ 0x14030F7A0
 * Callers:
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 * Callees:
 *     MiPfnsWorthTrying @ 0x14030F9E0 (MiPfnsWorthTrying.c)
 */

__int64 __fastcall MiFindRebuildCandidate(
        int a1,
        int a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int *a6,
        int a7)
{
  unsigned __int64 v7; // r15
  unsigned int *v10; // r9
  char v11; // r10
  int v13; // eax
  __int64 v14; // r8
  unsigned int *v15; // rcx
  int v16; // r12d
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  bool v23; // zf
  unsigned int *v25; // [rsp+30h] [rbp-48h]
  int v27; // [rsp+98h] [rbp+20h] BYREF

  v7 = a5;
  v27 = 0;
  v10 = a6;
  v11 = a3;
  v13 = 0x800000;
  v14 = *a6;
  v15 = &a6[4 * v14 + 4];
  v25 = v15;
  if ( a4 == 512 )
  {
    v13 = 41943040;
  }
  else if ( a4 == 16 )
  {
    v13 = 25165824;
  }
  v16 = v13 | 0x8000000;
  if ( !a7 )
    v16 = v13;
LABEL_6:
  while ( (_DWORD)v14 )
  {
    v14 = (unsigned int)(v14 - 1);
    a5 = v14;
    if ( v15[2 * v14] == a2 && LOBYTE(v15[2 * v14 + 1]) == v11 )
    {
      v17 = *(_QWORD *)&v10[4 * (unsigned int)v14 + 4];
      v18 = v17 + *(_QWORD *)&v10[4 * (unsigned int)v14 + 6];
LABEL_10:
      if ( v18 - 1 > v7 )
        v18 = v7 + 1;
      while ( 1 )
      {
        v15 = v25;
        v19 = v18;
        LODWORD(v14) = a5;
        v10 = a6;
        v11 = a3;
        if ( v17 >= v18 || a4 > v18 - v17 )
          break;
        if ( !a4 || (v14 = ~(a4 - 1), (((v18 - 1) ^ (v18 - a4)) & v14) == 0) )
        {
          v20 = MiPfnsWorthTrying(a1, 48 * ((int)v18 - (int)a4), a4, v16, (__int64)&v27);
          v21 = v20;
          if ( !v20 )
            return v18 - a4;
          if ( v20 > v18 - a4 - v17 )
          {
            LODWORD(v14) = a5;
            v10 = a6;
            v15 = v25;
            v7 = v18 - v20 - 1;
            v11 = a3;
            goto LABEL_6;
          }
          v22 = a4;
          if ( v21 > a4 )
            v22 = v21;
          v18 -= v22;
          goto LABEL_10;
        }
        v23 = (v18 & v14) == v18;
        v18 &= v14;
        if ( v23 )
          v18 = v19;
        if ( (v17 & v14) != v17 )
        {
          v15 = v25;
          v11 = a3;
          v17 = v14 & (a4 + v17 - 1);
          LODWORD(v14) = a5;
          if ( !v17 )
            goto LABEL_6;
        }
      }
    }
  }
  return -1LL;
}
