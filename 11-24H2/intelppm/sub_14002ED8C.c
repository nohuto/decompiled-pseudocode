/*
 * XREFs of sub_14002ED8C @ 0x14002ED8C
 * Callers:
 *     sub_14002EF8C @ 0x14002EF8C (sub_14002EF8C.c)
 * Callees:
 *     sub_14000A65C @ 0x14000A65C (sub_14000A65C.c)
 *     sub_14000A7F4 @ 0x14000A7F4 (sub_14000A7F4.c)
 *     sub_14000A9B8 @ 0x14000A9B8 (sub_14000A9B8.c)
 *     sub_14002FD44 @ 0x14002FD44 (sub_14002FD44.c)
 */

__int64 __fastcall sub_14002ED8C(const wchar_t *a1, unsigned int *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  _DWORD *v5; // r12
  const wchar_t *v6; // rbp
  unsigned __int16 v9; // r9
  unsigned int i; // esi
  __int64 v12; // rcx
  _DWORD *v13; // rax
  char *v14; // rdx
  __int64 v15; // rcx
  int *v16; // r10
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r11
  int v20; // ecx
  __int64 *v21; // r14
  __int64 v22; // r12
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-58h]

  v4 = 0;
  v5 = a4;
  v6 = (const wchar_t *)a3;
  if ( !a2 )
  {
    if ( !a4 )
      return v4;
    goto LABEL_3;
  }
  if ( !a4 )
  {
LABEL_3:
    v4 = -1073741823;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v9 = 82;
LABEL_5:
      sub_14000A65C((__int64)off_140018050->DeviceExtension, (__int64)a2, a3, v9, v24, a1, (const wchar_t *)a3);
      return v4;
    }
    return v4;
  }
  if ( *a2 != *a4 )
  {
    v4 = -1073741823;
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v4;
    v9 = 83;
    goto LABEL_5;
  }
  for ( i = 0; i < *a2; ++i )
  {
    v12 = 26LL * i;
    v13 = *(_DWORD **)&v5[v12 + 2];
    v14 = *(char **)&a2[v12 + 2];
    v15 = *(unsigned int *)v14;
    if ( (_DWORD)v15 == *v13 )
    {
      a3 = 0LL;
      v16 = v13 + 1;
      v17 = 0LL;
      if ( (_DWORD)v15 )
      {
        v18 = v14 - (char *)v13;
        v19 = v15;
        do
        {
          v20 = *v16;
          a3 = (1 << *(int *)((char *)v16++ + v18)) | (unsigned int)a3;
          v17 = (1 << v20) | (unsigned int)v17;
          --v19;
        }
        while ( v19 );
        if ( (_DWORD)a3 != (_DWORD)v17 )
        {
          v4 = -1073741823;
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            sub_14000A7F4((__int64)off_140018050->DeviceExtension, v18, a3, 0x55u, v24, a1, v6);
        }
      }
      v21 = (__int64 *)&off_140012348;
      v22 = 4LL;
      do
      {
        if ( !(unsigned __int8)sub_14002FD44(
                                 (char *)a2 + *((unsigned int *)v21 - 2),
                                 (char *)a2 + *((unsigned int *)v21 - 2),
                                 a3,
                                 v17) )
        {
          v4 = -1073741823;
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            sub_14000A9B8((__int64)off_140018050->DeviceExtension, v23, a3, v17, v24, a1, v6, i, *v21);
        }
        v21 += 3;
        --v22;
      }
      while ( v22 );
      v5 = a4;
    }
    else
    {
      v4 = -1073741823;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_14000A7F4((__int64)off_140018050->DeviceExtension, (__int64)v14, a3, 0x54u, v24, a1, v6);
    }
  }
  return v4;
}
