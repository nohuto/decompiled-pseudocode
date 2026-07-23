/*
 * XREFs of KiOp_Div @ 0x140471560
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x140471674 (KiOpRetrieveRegMemAddress.c)
 */

__int64 __fastcall KiOp_Div(__int64 a1)
{
  _DWORD *v2; // rdi
  int v3; // r9d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int *v10; // [rsp+48h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+50h] [rbp+18h]

  v9 = 0;
  v10 = 0LL;
  v2 = *(_DWORD **)(a1 + 32);
  v11 = v2;
  if ( *v2 == -1073741676 )
  {
    v3 = KiOpRetrieveRegMemAddress(a1, &v10, &v9, 0LL);
    if ( v3 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 56) == 0xF6 )
      {
        v4 = 1;
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
        v4 = 2;
      }
      else
      {
        v4 = (*(_BYTE *)(a1 + 64) & 8) != 0 ? 8 : 4;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 2 )
            v7 = *v10;
          else
            v7 = *(_QWORD *)v10;
        }
        else
        {
          v7 = *(unsigned __int16 *)v10;
        }
      }
      else
      {
        v7 = *(unsigned __int8 *)v10;
      }
      if ( v7 )
        *v2 = -1073741675;
    }
  }
  return 0LL;
}
