/*
 * XREFs of ExCreatePool @ 0x1406525E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolCreate @ 0x140656D00 (ExpSecurePoolCreate.c)
 *     ExpPrivatePoolCreate @ 0x1407C63A0 (ExpPrivatePoolCreate.c)
 */

__int64 __fastcall ExCreatePool(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r10d
  __int64 v8; // r9
  unsigned int v9; // ebp
  unsigned int i; // r11d
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rcx

  v4 = a1 & 0xD;
  v8 = 0LL;
  if ( a3 )
  {
    v9 = *(_DWORD *)(a3 + 4);
    for ( i = 0; i < v9; ++i )
    {
      v11 = *(_QWORD *)(a3 + 8);
      v12 = 3LL * i;
      if ( *(_DWORD *)(v11 + 24LL * i) != 1 || v8 )
        return 3221225713LL;
      v8 = v11 + 8 + 8 * v12;
    }
  }
  v14 = a1 & (unsigned int)~v4;
  v15 = v4 - 1;
  if ( !v15 )
  {
    if ( !v8 )
    {
      result = ExpSecurePoolCreate(v14, a2);
      if ( (int)result < 0 )
        return result;
      goto LABEL_20;
    }
    return 3221225713LL;
  }
  v16 = v15 - 3;
  if ( v16 )
  {
    if ( v16 != 4 )
      return 3221225711LL;
    if ( v8 )
    {
      v17 = (unsigned int)v14;
      v18 = 1LL;
      goto LABEL_16;
    }
    return 3221225713LL;
  }
  if ( !v8 )
    return 3221225713LL;
  v17 = (unsigned int)v14;
  v18 = 0LL;
LABEL_16:
  result = ExpPrivatePoolCreate(v18, v17, a2);
  if ( (int)result < 0 )
    return result;
LABEL_20:
  *a4 = qword_140E6BE08;
  return result;
}
