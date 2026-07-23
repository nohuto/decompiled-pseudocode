/*
 * XREFs of VmpCountNewPinnedRangesNeeded @ 0x140648BDC
 * Callers:
 *     VmpPinMemoryRange @ 0x140649280 (VmpPinMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpCountNewPinnedRangesNeeded(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 i; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  int v13; // edx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // r10
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  _QWORD **v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdx

  v3 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v8 = a2 & (v3 - 1);
  v9 = a1 + 40;
  i = *(_QWORD *)(a1 + 40);
  v11 = a2 - v8;
  v12 = a3 + v3 - ((v3 - 1) & (v3 + a3));
  if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && i )
    i ^= v9;
  v13 = *(_BYTE *)(v9 + 8) & 1;
  v14 = 0LL;
  while ( 1 )
  {
    if ( !i )
    {
      i = v14;
      if ( v14 )
        goto LABEL_32;
      goto LABEL_44;
    }
    if ( a2 < *(_QWORD *)(i + 24) )
    {
      v15 = *(_QWORD *)i;
      v14 = i;
      goto LABEL_10;
    }
    if ( a2 <= *(_QWORD *)(i + 32) )
      break;
    v15 = *(_QWORD *)(i + 8);
LABEL_10:
    if ( v13 && v15 )
      i ^= v15;
    else
      i = v15;
  }
  v16 = *(_QWORD *)i;
  if ( v13 && v16 )
    v16 ^= i;
  v17 = 0LL;
  if ( v16 )
  {
    while ( 1 )
    {
      if ( a2 >= *(_QWORD *)(v16 + 24) )
      {
        if ( a2 > *(_QWORD *)(v16 + 32) )
        {
          v18 = *(_QWORD *)(v16 + 8);
          goto LABEL_23;
        }
        v17 = (_QWORD *)v16;
      }
      v18 = *(_QWORD *)v16;
LABEL_23:
      if ( v13 && v18 )
        v16 ^= v18;
      else
        v16 = v18;
      if ( !v16 )
      {
        if ( v17 )
          i = (unsigned __int64)v17;
        goto LABEL_32;
      }
    }
  }
  do
  {
LABEL_32:
    v19 = *(_QWORD *)(i + 24);
    if ( v19 > v11 )
    {
      if ( v19 >= v12 )
        break;
      v6 += (v19 - v11) / v3;
    }
    v20 = *(_QWORD *)(i + 32);
    v11 = v20 + 1;
    if ( a3 <= v20 )
      break;
    v21 = *(_QWORD ***)(i + 8);
    v22 = i;
    if ( v21 )
    {
      v23 = *v21;
      for ( i = *(_QWORD *)(i + 8); v23; v23 = (_QWORD *)*v23 )
        i = (unsigned __int64)v23;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v22 )
          break;
        v22 = i;
      }
    }
  }
  while ( i );
LABEL_44:
  if ( a3 >= v11 )
    v6 += (v3 - ((v3 - 1) & (a3 - v11 + v3)) + a3 - v11) / v3;
  return v6;
}
