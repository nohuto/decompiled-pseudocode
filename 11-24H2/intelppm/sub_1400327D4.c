/*
 * XREFs of sub_1400327D4 @ 0x1400327D4
 * Callers:
 *     sub_140037EB4 @ 0x140037EB4 (sub_140037EB4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003382C @ 0x14003382C (sub_14003382C.c)
 *     sub_140034388 @ 0x140034388 (sub_140034388.c)
 */

__int64 __fastcall sub_1400327D4(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  __int64 Pool2; // rax
  unsigned int *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edi
  __int64 v11; // r14
  __int64 i; // r14
  __int64 v13; // rcx
  __int64 j; // rsi
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+64h] [rbp-Ch]
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF

  v22 = 0LL;
  v20 = 0;
  v19 = 0LL;
  v4 = 32;
  v5 = 0LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v4, 1919119952LL);
    v7 = (unsigned int *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v21 = 0;
    v8 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v19 + 1) = Pool2;
    *(_QWORD *)&v19 = 1LL;
    v20 = v4;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, __int128 *, _QWORD, __int64 *))(qword_140019120 + 1488))(
           qword_140019128,
           v8,
           0LL,
           2703748LL,
           0LL,
           &v19,
           0LL,
           &v22);
    v10 = v9;
    if ( v9 != -2147483643 )
      break;
    v4 = *v7;
    ExFreePoolWithTag(v7, 0);
  }
  if ( v9 >= 0 && v22 )
  {
    v5 = (_DWORD *)ExAllocatePool2(64LL, 40 * v7[1] + 8, 1919119952LL);
    if ( v5 )
    {
      v11 = 0LL;
      *v5 = v7[1];
      while ( (unsigned int)v11 < v7[1] )
      {
        v10 = sub_14003382C(v7, (unsigned int)v11, &v5[8 * v11 + 2 + 2 * (unsigned int)v11]);
        if ( v10 < 0 )
          goto LABEL_18;
        v11 = (unsigned int)(v11 + 1);
      }
      for ( i = 0LL; (unsigned int)i < *v5; i = (unsigned int)(i + 1) )
      {
        v13 = *(_QWORD *)&v5[10 * i + 6];
        if ( v13 )
          sub_140034388(v13, *(_QWORD *)&v5[10 * i + 4]);
      }
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      v10 = -1073741670;
    }
  }
LABEL_18:
  ExFreePoolWithTag(v7, 0);
  if ( v5 )
  {
    for ( j = 0LL; (unsigned int)j < *v5; j = (unsigned int)(j + 1) )
    {
      v15 = *(void **)&v5[10 * j + 4];
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      v16 = *(void **)&v5[10 * j + 10];
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      v17 = *(void **)&v5[10 * j + 6];
      if ( v17 )
        ExFreePoolWithTag(v17, 0);
    }
    ExFreePoolWithTag(v5, 0);
  }
  return (unsigned int)v10;
}
