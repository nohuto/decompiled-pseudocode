/*
 * XREFs of KiVerifyXcpt10 @ 0x140C19550
 * Callers:
 *     <none>
 * Callees:
 *     _local_unwind @ 0x1404FB6F0 (_local_unwind.c)
 *     KiVerifyXcptFilter @ 0x140C19B20 (KiVerifyXcptFilter.c)
 */

__int64 __fastcall KiVerifyXcpt10(_DWORD **a1)
{
  int *v1; // rax
  int *v2; // rcx
  int v3; // eax
  _DWORD **v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+20h] [rbp-18h]
  _DWORD **v11; // [rsp+40h] [rbp+8h]
  int *v12; // [rsp+48h] [rbp+10h]

  v11 = a1;
  v10 = &v9;
  v1 = (int *)a1 + 3;
  v12 = (int *)a1 + 3;
  if ( *((_DWORD *)a1 + 2) == 1 )
  {
    *v1 = 1;
    while ( 1 )
    {
      v2 = v12;
      v3 = *v12;
      if ( !*v12 )
        break;
      if ( v3 == 11 )
        local_unwind(v10, &loc_140C196A1);
      if ( v3 == 1 )
        local_unwind(v10, &loc_140C19582);
      *v2 = 0;
    }
    *v12 = 11;
    v4 = v11;
    ++**v11;
    v5 = *v12 + 11;
    *v12 = v5;
    if ( v5 == 99 )
      local_unwind(v10, &loc_140C196A1);
    ++**v4;
    *v2 += 11;
    if ( *v2 == 55 )
      *v2 = 66;
    else
      ++**v4;
    v6 = *v2 + 11;
    *v2 = v6;
    if ( v6 == 99 )
    {
      ++**v4;
      v7 = *v2 + 11;
      *v2 = v7;
      if ( v7 == 99 )
        ++**v4;
      else
        KiVerifyXcptFilter(v4);
    }
    else
    {
      local_unwind(v10, &loc_140C196A1);
    }
    a1 = v11;
    v1 = v12;
  }
  else
  {
    *v1 = -1;
    *((_DWORD *)a1 + 4) = 1;
  }
  result = *v1;
  a1[3] = (_DWORD *)((char *)a1[3] + result);
  return result;
}
