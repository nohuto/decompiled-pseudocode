/*
 * XREFs of ?greenloop@INVCMAP@@QEAAHH@Z @ 0x14010E7A8
 * Callers:
 *     ?redloop@INVCMAP@@QEAAHXZ @ 0x14010E664 (-redloop@INVCMAP@@QEAAHXZ.c)
 * Callees:
 *     ?blueloop@INVCMAP@@QEAAHH@Z @ 0x14010E9C0 (-blueloop@INVCMAP@@QEAAHH@Z.c)
 */

__int64 __fastcall INVCMAP::greenloop(INVCMAP *this, int a2)
{
  int v3; // r13d
  int v4; // r12d
  int v5; // esi
  int v6; // ebp
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // r15d
  int v10; // r14d
  int v11; // edx
  __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // rdx
  int v15; // ebp
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v23; // rcx

  v3 = *((_DWORD *)this + 31);
  v4 = 2 * *((_DWORD *)this + 27);
  v5 = *((_DWORD *)this + 32);
  if ( a2 )
  {
    v3 = 0;
    *((_DWORD *)this + 30) = *((_DWORD *)this + 3);
    v5 = *((_DWORD *)this + 28) - 1;
    *((_DWORD *)this + 35) = *((_DWORD *)this + 9);
    *((_DWORD *)this + 34) = 0;
  }
  v6 = *((_DWORD *)this + 30);
  v7 = 0;
  v8 = *((_QWORD *)this + 7);
  v9 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 5) = v9;
  v10 = *((_DWORD *)this + 35);
  v11 = 1;
  *((_QWORD *)this + 6) = v8;
  *((_QWORD *)this + 19) = v8;
  v12 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 9) = v12;
  *((_QWORD *)this + 20) = v12;
  while ( v6 <= v5 )
  {
    if ( (unsigned int)INVCMAP::blueloop(this, v11) )
    {
      if ( !v7 )
      {
        if ( v6 > *((_DWORD *)this + 30) )
        {
          *((_DWORD *)this + 30) = v6;
          *((_QWORD *)this + 7) = *((_QWORD *)this + 19);
          *((_QWORD *)this + 10) = *((_QWORD *)this + 20);
          *((_DWORD *)this + 6) = v9;
          *((_DWORD *)this + 35) = v10;
        }
        v7 = 1;
      }
    }
    else if ( v7 )
    {
      v5 = v6 - 1;
      break;
    }
    v23 = *((int *)this + 24);
    v9 += v10;
    ++v6;
    *((_QWORD *)this + 6) += 4 * v23;
    *((_QWORD *)this + 19) += 4 * v23;
    *((_QWORD *)this + 9) += v23;
    *((_QWORD *)this + 20) += v23;
    *((_DWORD *)this + 5) += v10;
    v10 += v4;
    v11 = 0;
  }
  v13 = *((_DWORD *)this + 35) - v4;
  v14 = *((int *)this + 24);
  v15 = *((_DWORD *)this + 30) - 1;
  v16 = *((_QWORD *)this + 7);
  v17 = *((_DWORD *)this + 6) - v13;
  *((_DWORD *)this + 5) = v17;
  v18 = v16 - 4 * v14;
  *((_QWORD *)this + 6) = v18;
  *((_QWORD *)this + 19) = v18;
  v19 = *((_QWORD *)this + 10) - v14;
  v20 = 1;
  *((_QWORD *)this + 9) = v19;
  *((_QWORD *)this + 20) = v19;
  while ( v15 >= v3 )
  {
    if ( (unsigned int)INVCMAP::blueloop(this, v20) )
    {
      if ( !v7 )
      {
        *((_DWORD *)this + 30) = v15;
        v5 = v15;
        v7 = 1;
        *((_QWORD *)this + 7) = *((_QWORD *)this + 19);
        *((_QWORD *)this + 10) = *((_QWORD *)this + 20);
        *((_DWORD *)this + 6) = v17;
        *((_DWORD *)this + 35) = v13;
      }
    }
    else if ( v7 )
    {
      goto LABEL_14;
    }
    v21 = *((int *)this + 24);
    v13 -= v4;
    --v15;
    v17 -= v13;
    *((_QWORD *)this + 6) -= 4 * v21;
    *((_QWORD *)this + 19) -= 4 * v21;
    *((_QWORD *)this + 9) -= v21;
    *((_QWORD *)this + 20) -= v21;
    *((_DWORD *)this + 5) -= v13;
    v20 = 0;
  }
  if ( !v7 )
    return v7;
LABEL_14:
  *((_DWORD *)this + 34) = v5;
  return v7;
}
