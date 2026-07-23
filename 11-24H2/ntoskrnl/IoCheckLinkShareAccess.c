/*
 * XREFs of IoCheckLinkShareAccess @ 0x1408ADD00
 * Callers:
 *     FsRtlpCheckSharingAgainstOplockOwner @ 0x1404AA7AC (FsRtlpCheckSharingAgainstOplockOwner.c)
 *     IoCheckShareAccessEx @ 0x140711850 (IoCheckShareAccessEx.c)
 *     RawCreate @ 0x1408AD9DC (RawCreate.c)
 *     IoCheckShareAccess @ 0x1408ADCD0 (IoCheckShareAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoCheckLinkShareAccess(int a1, char a2, __int64 a3, _DWORD *a4, _DWORD *a5, int a6)
{
  bool v7; // di
  bool v8; // si
  int v9; // r10d
  bool v10; // r9
  bool v11; // r12
  bool v12; // r13
  unsigned __int8 v13; // bp
  _DWORD *v14; // rax
  bool v15; // al
  bool v16; // zf
  char v18; // al

  v7 = (a1 & 0x21) != 0;
  v8 = (a1 & 6) != 0;
  v9 = a1 & 0x10000;
  v10 = (a1 & 0x10000) != 0;
  if ( !a4 && ((a6 & 0xC) != 0xC || (a6 & 0x10) == 0 && (!a5 || (a6 & 0x40) != 0)) )
    return 3221225485LL;
  if ( (a6 & 2) == 0 )
  {
    *(_BYTE *)(a3 + 74) = v7;
    *(_BYTE *)(a3 + 75) = v8;
    *(_BYTE *)(a3 + 76) = v10;
  }
  if ( (a1 & 0x21) == 0 && (a1 & 6) == 0 && !v9 && (a6 & 0x20) == 0 )
    return 0LL;
  v11 = (a2 & 2) != 0;
  v12 = (a2 & 4) != 0;
  v13 = a2 & 1;
  if ( a6 < 0 )
  {
    v18 = a2 & 1;
    if ( !v13 )
      v18 = 1;
    v13 = v18;
  }
  if ( (a6 & 2) == 0 )
  {
    *(_BYTE *)(a3 + 77) = v13;
    *(_BYTE *)(a3 + 78) = v11;
    *(_BYTE *)(a3 + 79) = v12;
  }
  if ( a3 )
  {
    v14 = *(_DWORD **)(a3 + 208);
    if ( v14 )
    {
      if ( (*v14 & 1) != 0 )
        return 0LL;
    }
  }
  v15 = 0;
  if ( (a6 & 4) == 0 )
    v15 = (a1 & 0x21) != 0 && a4[4] < *a4 || a4[1] && !v13;
  if ( (a6 & 8) == 0 && !v15 )
    v15 = (a1 & 6) != 0 && a4[5] < *a4 || a4[2] && (a2 & 2) == 0;
  if ( (a6 & 0x10) == 0 )
  {
    if ( !v15 )
    {
      if ( !a5 || (a6 & 0x40) != 0 )
      {
        if ( v9 && a4[6] < *a4 )
          return 3221225539LL;
        v16 = a4[3] == 0;
      }
      else
      {
        if ( v9 && a5[2] < *a5 )
          return 3221225539LL;
        v16 = a5[1] == 0;
      }
      if ( !v16 && (a2 & 4) == 0 )
        return 3221225539LL;
      goto LABEL_28;
    }
    return 3221225539LL;
  }
  if ( v15 )
    return 3221225539LL;
LABEL_28:
  if ( (a6 & 1) != 0 )
  {
    ++*a4;
    a4[1] += v7;
    a4[2] += v8;
    a4[4] += v13;
    a4[5] += v11;
    a4[6] += v12;
    a4[3] += v10;
    if ( a5 )
    {
      ++*a5;
      if ( (a6 & 0x80u) == 0 )
        a5[1] += v10;
      a5[2] += v12;
    }
  }
  return 0LL;
}
