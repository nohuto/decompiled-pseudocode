/*
 * XREFs of RtlLengthCurrentClearRunForwardEx @ 0x1404A44CC
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x14035DA98 (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForwardEx(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int *v3; // r9
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rdx
  char v12; // r9
  __int64 v13; // rcx
  char v15; // r9

  v2 = a1[1];
  v3 = (unsigned int *)(v2 + 4 * (a2 >> 5));
  v4 = *a1 & 0x1FLL;
  v5 = (unsigned __int64)(*a1 - 1LL) >> 5;
  v6 = v2 + 4 * v5 - 4;
  if ( !v4 )
    v6 = v2 + 4 * v5;
  v7 = a2 & 0x1F;
  v8 = 0LL;
  v9 = *v3 & ~*((_DWORD *)qword_140011DF0 + v7);
  if ( (unsigned __int64)v3 > v6 )
  {
LABEL_15:
    if ( !v4 )
      return v8 - v7;
    if ( v8 )
      LODWORD(v9) = v3[1];
    v15 = -1;
    v10 = !_BitScanForward64(&v9, (unsigned int)v9 | ~*((_DWORD *)qword_140011DF0 + v4));
    if ( !v10 )
      v15 = v9;
    v13 = (unsigned int)v15;
  }
  else
  {
    while ( !(_DWORD)v9 )
    {
      v8 += 32LL;
      if ( v8 == -1 && v7 == 0 )
        return v8 - v7;
      if ( v3 == (unsigned int *)v6 )
        goto LABEL_15;
      v9 = *++v3;
    }
    v10 = !_BitScanForward64((unsigned __int64 *)&v11, v9);
    v12 = -1;
    if ( !v10 )
      v12 = v11;
    v13 = (unsigned int)v12;
  }
  v8 += v13;
  return v8 - v7;
}
