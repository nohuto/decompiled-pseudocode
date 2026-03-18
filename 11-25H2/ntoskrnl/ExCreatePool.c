/*
 * XREFs of ExCreatePool @ 0x140647F80
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolCreate @ 0x14064C6C0 (ExpSecurePoolCreate.c)
 *     ExpPrivatePoolCreate @ 0x1407B6770 (ExpPrivatePoolCreate.c)
 */

__int64 __fastcall ExCreatePool(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  int v5; // r10d
  __int64 v6; // r9
  unsigned int v9; // esi
  __int64 v10; // r11
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // r10d
  int v16; // r10d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v5 = a1 & 0xD;
  v6 = 0LL;
  if ( a3 )
  {
    v9 = *(_DWORD *)(a3 + 4);
    v10 = 0LL;
    while ( (unsigned int)v10 < v9 )
    {
      v11 = *(_QWORD *)(a3 + 8);
      v12 = 3 * v10;
      if ( *(_DWORD *)(v11 + 24 * v10) != 1 || v6 )
        return 3221225713LL;
      v10 = (unsigned int)(v10 + 1);
      v6 = v11 + 8 + 8 * v12;
    }
  }
  v14 = a1 & (unsigned int)~v5;
  v15 = v5 - 1;
  if ( v15 )
  {
    v16 = v15 - 3;
    if ( v16 )
    {
      if ( v16 != 4 )
        return 3221225711LL;
      v19 = 0LL;
      if ( v6 )
      {
        v17 = (unsigned int)v14;
        v18 = 1LL;
LABEL_14:
        result = ExpPrivatePoolCreate(v18, v17, a2);
        goto LABEL_19;
      }
    }
    else
    {
      v19 = 0LL;
      if ( v6 )
      {
        v17 = (unsigned int)v14;
        v18 = 0LL;
        goto LABEL_14;
      }
    }
    return 3221225713LL;
  }
  v19 = 0LL;
  if ( v6 )
    return 3221225713LL;
  result = ExpSecurePoolCreate(v14, a2, &v19);
LABEL_19:
  if ( (int)result >= 0 )
    *a4 = qword_140E6B948 ^ v19;
  return result;
}
