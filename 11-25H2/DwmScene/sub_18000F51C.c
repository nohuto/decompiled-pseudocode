/*
 * XREFs of sub_18000F51C @ 0x18000F51C
 * Callers:
 *     sub_18000DDD0 @ 0x18000DDD0 (sub_18000DDD0.c)
 * Callees:
 *     sub_18000EE08 @ 0x18000EE08 (sub_18000EE08.c)
 *     sub_18000F154 @ 0x18000F154 (sub_18000F154.c)
 */

int __fastcall sub_18000F51C(__int64 a1, __int64 a2)
{
  _WORD *v2; // rax
  int v3; // edi
  _WORD *v6; // rcx
  __int64 v7; // r8
  _DWORD *i; // rcx
  unsigned __int16 v9; // dx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    if ( v3 )
    {
      v2 = sub_18000EE08(8u, 0x190uLL);
      *(_QWORD *)(a1 + 24) = v2;
      if ( v2 )
      {
        *(_DWORD *)(a1 + 32) = 5;
        v6 = v2 + 200;
        while ( v2 != v6 )
        {
          *v2 = 80;
          v2 += 40;
        }
      }
    }
  }
  v7 = *(_QWORD *)(a1 + 24);
  if ( v7 )
  {
    if ( v3 )
    {
      for ( i = (_DWORD *)(v7 + 8); i - 2 != (_DWORD *)(v7 + 80LL * *(unsigned __int16 *)(a1 + 32)); i += 20 )
      {
        if ( *(i - 1) > *(_DWORD *)(a1 + 16) )
        {
          LODWORD(v2) = *(_DWORD *)(a2 + 8);
          if ( *i == (_DWORD)v2 )
            return (int)v2;
        }
      }
    }
    v9 = ((unsigned int)*(unsigned __int16 *)(a1 + 34) + 1) % *(unsigned __int16 *)(a1 + 32);
    *(_WORD *)(a1 + 34) = v9;
    LODWORD(v2) = sub_18000F154(v7 + 80LL * v9, a2, _InterlockedIncrement(*(volatile signed __int32 **)(a1 + 8)));
  }
  return (int)v2;
}
