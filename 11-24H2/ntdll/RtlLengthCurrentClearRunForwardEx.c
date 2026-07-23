/*
 * XREFs of RtlLengthCurrentClearRunForwardEx @ 0x18011B750
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x18009DEEC (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlLengthCurrentClearRunForwardEx(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  _DWORD *v5; // r10
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  char v15; // r8
  bool v16; // zf
  __int64 v17; // rcx
  char v18; // r8
  unsigned __int64 v19; // rdx

  v3 = a1[1];
  v5 = (_DWORD *)(v3 + 4 * (a2 >> 5));
  v6 = *a1 & 0x1FLL;
  v7 = (unsigned __int64)(*a1 - 1LL) >> 5;
  v8 = v3 + 4 * v7 - 4;
  if ( !v6 )
    v8 = v3 + 4 * v7;
  v9 = a2 & 0x1F;
  v10 = (unsigned int)v9;
  v11 = dword_18017F850[v9];
  v12 = 0LL;
  LODWORD(v13) = *v5 & ~v11;
  if ( (unsigned __int64)v5 > v8 )
  {
LABEL_9:
    if ( !v6 )
      goto LABEL_19;
    if ( v12 )
      LODWORD(v13) = v5[1];
    v14 = dword_18017F850[v6];
    v15 = -1;
    v16 = !_BitScanForward64((unsigned __int64 *)&v13, (unsigned int)v13 | ~v14);
    if ( !v16 )
      v15 = v13;
    v17 = (unsigned int)v15;
  }
  else
  {
    while ( !(_DWORD)v13 )
    {
      v12 += 32LL;
      if ( v12 >= a3 && v12 - v10 >= a3 )
        goto LABEL_19;
      if ( v5 == (_DWORD *)v8 )
        goto LABEL_9;
      LODWORD(v13) = *++v5;
    }
    v18 = -1;
    v16 = !_BitScanForward64((unsigned __int64 *)&v13, (unsigned int)v13);
    if ( !v16 )
      v18 = v13;
    v17 = (unsigned int)v18;
  }
  v12 += v17;
LABEL_19:
  v19 = v12 - v10;
  if ( v19 > a3 )
    return a3;
  return v19;
}
