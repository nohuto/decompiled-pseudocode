/*
 * XREFs of sub_140034144 @ 0x140034144
 * Callers:
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     sub_140009398 @ 0x140009398 (sub_140009398.c)
 *     sub_140028380 @ 0x140028380 (sub_140028380.c)
 *     sub_140033F84 @ 0x140033F84 (sub_140033F84.c)
 */

void __fastcall sub_140034144(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // r8
  __int64 v3; // r9
  const char **v4; // rdi
  __int64 v5; // rbp
  unsigned __int8 *v6; // rsi
  unsigned int *v7; // rdx
  unsigned int i; // edi
  __int64 v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+28h] [rbp-40h]
  unsigned int v11; // [rsp+70h] [rbp+8h] BYREF
  const char **v12; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 )
  {
    v12 = 0LL;
    v11 = 0;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        sub_140003D28(off_140018050->DeviceExtension, 5, 2, 153, (__int64)&unk_140012FE8);
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        if ( LOWORD(off_140018050->DeviceType) )
          sub_140003D28(off_140018050->DeviceExtension, 5, 2, 154, (__int64)&unk_140012FE8);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          if ( LOWORD(off_140018050->DeviceType) )
          {
            v10 = *(_DWORD *)a1;
            sub_140005F24((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x9Bu, (__int64)&unk_140012FE8, v10);
          }
          if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
          {
            LODWORD(v9) = *(_DWORD *)(a1 + 4);
            sub_140005F24((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x9Cu, (__int64)&unk_140012FE8, v9);
          }
        }
      }
    }
    sub_140009398(a1, &v12, &v11);
    if ( v11 )
    {
      v4 = v12;
      v5 = v11;
      do
      {
        v6 = (unsigned __int8 *)(a1 + *(unsigned int *)v4);
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
          sub_140003BC4((__int64)off_140018050->DeviceExtension, 5u, 2u, 0x9Du, (__int64)&unk_140012FE8, v4[1]);
        sub_140028380(v6, "  ", v2, v3);
        v4 += 3;
        --v5;
      }
      while ( v5 );
    }
    if ( *(_QWORD *)(a1 + 536) )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
        sub_140003D28(off_140018050->DeviceExtension, 5, 2, 158, (__int64)&unk_140012FE8);
      v7 = *(unsigned int **)(a1 + 536);
      for ( i = 0; i < *v7; ++i )
      {
        sub_140033F84(&v7[26 * i + 2], i, v2, v3);
        v7 = *(unsigned int **)(a1 + 536);
      }
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        sub_140003D28(off_140018050->DeviceExtension, 5, 2, 159, (__int64)&unk_140012FE8);
    }
  }
}
