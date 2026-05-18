/*
 * XREFs of sub_18004C404 @ 0x18004C404
 * Callers:
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 * Callees:
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18005B618 @ 0x18005B618 (sub_18005B618.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_18004C404(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *j; // rbx
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 18560);
  v10 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    sub_18005B618(*(_QWORD *)(v4 + 64), a2);
    sub_18001C2C0(&v10);
    v4 = v10;
  }
  j = **(__int64 ***)(a1 + 18576);
  while ( !*((_BYTE *)j + 25) )
  {
    v6 = j[11];
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, a2);
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
}
