/*
 * XREFs of sub_14002EF8C @ 0x14002EF8C
 * Callers:
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 * Callees:
 *     sub_140009398 @ 0x140009398 (sub_140009398.c)
 *     sub_14000AFD8 @ 0x14000AFD8 (sub_14000AFD8.c)
 *     sub_14000B5C4 @ 0x14000B5C4 (sub_14000B5C4.c)
 *     sub_14002ED8C @ 0x14002ED8C (sub_14002ED8C.c)
 *     sub_14002FD44 @ 0x14002FD44 (sub_14002FD44.c)
 */

__int64 __fastcall sub_14002EF8C(const wchar_t *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  int v4; // eax
  __int64 v8; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  const char **v13; // rbx
  __int64 v14; // rbp
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-58h]
  unsigned int v17; // [rsp+88h] [rbp+10h] BYREF
  const char **v18; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_DWORD *)(a2 + 4);
  v18 = 0LL;
  v17 = 0;
  v8 = *(unsigned int *)(a4 + 4);
  if ( v4 == (_DWORD)v8 )
  {
    sub_140009398(a2, &v18, &v17);
    if ( v17 )
    {
      v13 = v18;
      v14 = v17;
      do
      {
        if ( !(unsigned __int8)sub_14002FD44(*(unsigned int *)v13 + a2, *(unsigned int *)v13 + a4, v11, v12)
          && off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          sub_14000B5C4((__int64)off_140018050->DeviceExtension, v15, v11, 0x4Eu, v16, a1, a3, v13[1]);
        }
        v13 += 3;
        --v14;
      }
      while ( v14 );
    }
    return sub_14002ED8C(a1, *(unsigned int **)(a2 + 536), (__int64)a3, *(_DWORD **)(a4 + 536));
  }
  else
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_14000AFD8((__int64)off_140018050->DeviceExtension, v8, (__int64)a3, 0x4Du, v16, a1, a3);
    return 3221225473LL;
  }
}
