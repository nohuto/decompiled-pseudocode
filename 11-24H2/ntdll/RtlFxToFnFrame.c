/*
 * XREFs of RtlFxToFnFrame @ 0x1800D88C0
 * Callers:
 *     RtlpWow64CtxFromAmd64 @ 0x1800D85C0 (RtlpWow64CtxFromAmd64.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall RtlFxToFnFrame(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  char v5; // dl
  unsigned int v6; // r8d
  __int16 v7; // ax
  unsigned int v8; // r8d
  __int16 v9; // ax
  bool v10; // sf
  char v11; // dl
  __int16 v12; // ax
  unsigned int v13; // r8d
  __int16 v14; // ax
  char v15; // dl
  __int16 v16; // ax
  unsigned int v17; // r8d
  __int16 v18; // ax
  char v19; // dl
  __int16 v20; // ax
  unsigned int v21; // r8d
  __int16 v22; // ax
  char v23; // dl
  __int16 v24; // ax
  unsigned int v25; // r8d
  __int16 v26; // ax
  char v27; // dl
  __int16 v28; // ax
  unsigned int v29; // r8d
  __int16 v30; // ax
  char v31; // dl
  __int16 v32; // ax
  unsigned int v33; // r8d
  __int16 v34; // ax
  unsigned __int16 result; // ax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx

  *(_DWORD *)a1 = *a2;
  *(_DWORD *)(a1 + 4) = a2[1];
  *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(a1 + 16) = a2[6] | (a2[3] << 16);
  *(_DWORD *)(a1 + 20) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(a1 + 24) = a2[10];
  v4 = a2[1];
  v5 = *((_BYTE *)a2 + 4);
  *(_QWORD *)(a1 + 28) = *((_QWORD *)a2 + 4);
  v6 = 7 - ((v4 >> 11) & 7);
  *(_WORD *)(a1 + 36) = a2[20];
  if ( v5 < 0 )
  {
    v7 = 2;
    v36 = 8 * (v6 + 2LL);
    if ( (a2[v36 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v36 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v36] < 0 )
        v7 = 0;
    }
    else if ( !*(_QWORD *)&a2[v36] )
    {
      v7 = 1;
    }
  }
  else
  {
    v7 = 3;
  }
  *(_QWORD *)(a1 + 38) = *((_QWORD *)a2 + 6);
  v8 = ((_BYTE)v6 - 1) & 7;
  v9 = 4 * v7;
  v10 = (v5 & 0x40) != 0;
  v11 = 2 * v5;
  *(_WORD *)(a1 + 46) = a2[28];
  if ( v10 )
  {
    v12 = v9 | 2;
    v37 = 8 * (v8 + 2LL);
    if ( (a2[v37 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v37 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v37] < 0 )
        v12 &= 0xFFFCu;
    }
    else if ( !*(_QWORD *)&a2[v37] )
    {
      v12 = v12 & 0xFFFC | 1;
    }
  }
  else
  {
    v12 = v9 | 3;
  }
  *(_QWORD *)(a1 + 48) = *((_QWORD *)a2 + 8);
  v13 = ((_BYTE)v8 - 1) & 7;
  v14 = 4 * v12;
  v10 = (v11 & 0x40) != 0;
  v15 = 2 * v11;
  *(_WORD *)(a1 + 56) = a2[36];
  if ( v10 )
  {
    v16 = v14 | 2;
    v38 = 8 * (v13 + 2LL);
    if ( (a2[v38 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v38 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v38] < 0 )
        v16 &= 0xFFFCu;
    }
    else if ( !*(_QWORD *)&a2[v38] )
    {
      v16 = v16 & 0xFFFC | 1;
    }
  }
  else
  {
    v16 = v14 | 3;
  }
  *(_QWORD *)(a1 + 58) = *((_QWORD *)a2 + 10);
  v17 = ((_BYTE)v13 - 1) & 7;
  v18 = 4 * v16;
  v10 = (v15 & 0x40) != 0;
  v19 = 2 * v15;
  *(_WORD *)(a1 + 66) = a2[44];
  if ( v10 )
  {
    v20 = v18 | 2;
    v39 = 8 * (v17 + 2LL);
    if ( (a2[v39 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v39 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v39] < 0 )
        v20 &= 0xFFFCu;
    }
    else if ( !*(_QWORD *)&a2[v39] )
    {
      v20 = v20 & 0xFFFC | 1;
    }
  }
  else
  {
    v20 = v18 | 3;
  }
  *(_QWORD *)(a1 + 68) = *((_QWORD *)a2 + 12);
  v21 = ((_BYTE)v17 - 1) & 7;
  v22 = 4 * v20;
  v10 = (v19 & 0x40) != 0;
  v23 = 2 * v19;
  *(_WORD *)(a1 + 76) = a2[52];
  if ( v10 )
  {
    v24 = v22 | 2;
    v40 = 8 * (v21 + 2LL);
    if ( (a2[v40 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v40 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v40] < 0 )
        v24 &= 0xFFFCu;
    }
    else if ( !*(_QWORD *)&a2[v40] )
    {
      v24 = v24 & 0xFFFC | 1;
    }
  }
  else
  {
    v24 = v22 | 3;
  }
  *(_QWORD *)(a1 + 78) = *((_QWORD *)a2 + 14);
  v25 = ((_BYTE)v21 - 1) & 7;
  v26 = 4 * v24;
  v10 = (v23 & 0x40) != 0;
  v27 = 2 * v23;
  *(_WORD *)(a1 + 86) = a2[60];
  if ( v10 )
  {
    v28 = v26 | 2;
    v41 = 8 * (v25 + 2LL);
    if ( (a2[v41 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v41 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v41] < 0 )
        v28 &= 0xFFFCu;
    }
    else if ( !*(_QWORD *)&a2[v41] )
    {
      v28 = v28 & 0xFFFC | 1;
    }
  }
  else
  {
    v28 = v26 | 3;
  }
  *(_QWORD *)(a1 + 88) = *((_QWORD *)a2 + 16);
  v29 = ((_BYTE)v25 - 1) & 7;
  v30 = 4 * v28;
  v10 = (v27 & 0x40) != 0;
  v31 = 2 * v27;
  *(_WORD *)(a1 + 96) = a2[68];
  if ( v10 )
  {
    v32 = v30 | 2;
    v42 = 8 * (v29 + 2LL);
    if ( (a2[v42 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v42 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v42] < 0 )
        v32 &= 0xFFFCu;
    }
    else if ( !*(_QWORD *)&a2[v42] )
    {
      v32 = v32 & 0xFFFC | 1;
    }
  }
  else
  {
    v32 = v30 | 3;
  }
  *(_QWORD *)(a1 + 98) = *((_QWORD *)a2 + 18);
  v33 = ((_BYTE)v29 - 1) & 7;
  v34 = 4 * v32;
  *(_WORD *)(a1 + 106) = a2[76];
  if ( (v31 & 0x40) != 0 )
  {
    result = v34 | 2;
    v43 = 8 * (v33 + 2LL);
    if ( (a2[v43 + 4] & 0x7FFF) != 0 )
    {
      if ( (a2[v43 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v43] < 0 )
        result &= 0xFFFCu;
    }
    else if ( !*(_QWORD *)&a2[v43] )
    {
      result = result & 0xFFFC | 1;
    }
  }
  else
  {
    result = v34 | 3;
  }
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
