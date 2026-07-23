/*
 * XREFs of RtlpReadExtendedContextLayout @ 0x140921CC0
 * Callers:
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpReadExtendedContextLayout(__int64 a1, int a2, __int64 a3, int a4, int *a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rbx
  int v8; // r11d
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // r11d
  __int128 v16; // [rsp+20h] [rbp-28h]
  __int128 v17; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  if ( (a2 & 0x10000) != 0 )
  {
    v5 = a3 + 716;
    a5[2] = -716;
    a5[3] = 204;
    if ( (a2 & 0x10020) == 0x10020 )
      a5[3] = 716;
  }
  else
  {
    if ( (a2 & 0x100000) != 0 )
    {
      v5 = a3 + 1232;
      a5[3] = 1232;
LABEL_4:
      a5[2] = a3 - v5;
      goto LABEL_5;
    }
    if ( (a2 & 0x200000) != 0 )
    {
      v5 = a3 + 416;
      a5[3] = 416;
      goto LABEL_4;
    }
    if ( (a2 & 0x400000) != 0 )
    {
      v5 = a3 + 912;
      a5[3] = 912;
      goto LABEL_4;
    }
  }
LABEL_5:
  *a5 = a5[2];
  a5[1] = v5 - a3 + 32;
  if ( (a4 & 0xFFFFFFFE) == 0 )
    return 0LL;
  if ( (v5 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = *(_OWORD *)v5;
  v17 = *(_OWORD *)(v5 + 16);
  v6 = (int)*(_QWORD *)(v5 + 8) + v5;
  if ( SDWORD2(v16) <= HIDWORD(v16) + DWORD2(v16) )
  {
    if ( (SDWORD2(v16) & 0x80000000) == 0 )
    {
      if ( v6 < v5 )
        return 3221225485LL;
    }
    else if ( v6 >= v5 )
    {
      return 3221225485LL;
    }
    if ( v5 + SDWORD2(v16) + HIDWORD(*((_QWORD *)&v16 + 1)) < v6
      || a5[2] != DWORD2(v16)
      || a5[3] > (unsigned int)HIDWORD(*(_QWORD *)(v5 + 8)) )
    {
      return 3221225485LL;
    }
    if ( (a4 & 2) != 0 )
    {
      v7 = (int)v17 + v5;
      if ( (int)v17 > (int)v17 + DWORD1(v17) )
        return 3221225485LL;
      if ( (int)v17 >= 0 )
      {
        if ( v7 < v5 )
          return 3221225485LL;
      }
      else if ( v7 >= v5 )
      {
        return 3221225485LL;
      }
      if ( v5 + (int)v17 + DWORD1(v17) < v7 )
        return 3221225485LL;
      *((_QWORD *)a5 + 2) = v17;
      v8 = a5[1];
      v9 = *a5;
      v10 = v17 + DWORD1(v17);
      if ( *a5 + v8 > (int)v17 )
      {
        if ( v10 > v9 )
          return 3221225485LL;
        a5[1] = v8 + v9 - v17;
        *a5 = v17;
      }
      else
      {
        a5[1] = v10 - v9;
      }
    }
    v11 = *a5;
    v12 = v11 + v5;
    v13 = (unsigned int)a5[1];
    v14 = v13 + v11;
    if ( (int)v11 <= (int)v13 + (int)v11 )
    {
      if ( (int)v11 >= 0 )
      {
        if ( v12 < v5 )
          return 3221225485LL;
      }
      else if ( v12 >= v5 )
      {
        return 3221225485LL;
      }
      if ( v5 + v11 + v13 >= v12 && (int)v11 >= (int)v16 && (int)v16 + DWORD1(v16) >= v14 && v12 <= v5 && v5 + v14 >= v5 )
        return 0LL;
    }
  }
  return 3221225485LL;
}
