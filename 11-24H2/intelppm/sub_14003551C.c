/*
 * XREFs of sub_14003551C @ 0x14003551C
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003BEA0 @ 0x14003BEA0 (sub_14003BEA0.c)
 */

char __fastcall sub_14003551C(_QWORD *a1)
{
  _DWORD *v1; // rdi
  _DWORD *v3; // r14
  char v4; // bp
  char v5; // bl
  __int64 i; // rdx
  __int64 v8; // rdx
  __int64 Pool2; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  _QWORD *v12; // r8
  _QWORD *v13; // rcx

  v1 = (_DWORD *)a1[69];
  v3 = (_DWORD *)a1[150];
  v4 = v1 == v3;
  v5 = 0;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  for ( i = qword_1400191A8; (__int64 *)i != &qword_1400191A8; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 36) == v1[3] )
    {
      if ( v4 != *(_BYTE *)(i + 48) )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(i) = 2;
          sub_140003D28(off_140018050->DeviceExtension, i, 1, 19, (__int64)&unk_140012BC0);
        }
        goto LABEL_8;
      }
LABEL_14:
      a1[70] = i;
      v12 = *(_QWORD **)(i + 24);
      v13 = a1 + 71;
      if ( *v12 == i + 16 )
      {
        *v13 = i + 16;
        a1[72] = v12;
        *v12 = v13;
        *(_QWORD *)(i + 24) = v13;
        if ( ++*(_DWORD *)(i + 32) == *(_DWORD *)(i + 44) && (!*(_BYTE *)(i + 48) || (int)sub_14003BEA0(a1) >= 0) )
          v5 = 1;
        goto LABEL_8;
      }
LABEL_19:
      __fastfail(3u);
    }
  }
  v8 = 56LL;
  if ( v1 == v3 )
    v8 = 72LL;
  Pool2 = ExAllocatePool2(64LL, v8, 1919119952LL);
  i = Pool2;
  if ( Pool2 )
  {
    v10 = (_QWORD *)(Pool2 + 16);
    v10[1] = v10;
    *v10 = v10;
    v11 = (__int64 *)qword_1400191B0;
    if ( *(__int64 **)qword_1400191B0 == &qword_1400191A8 )
    {
      *(_QWORD *)i = &qword_1400191A8;
      *(_QWORD *)(i + 8) = v11;
      *v11 = i;
      qword_1400191B0 = i;
      *(_DWORD *)(i + 36) = v1[3];
      *(_DWORD *)(i + 40) = v1[4];
      *(_DWORD *)(i + 44) = v1[5];
      *(_BYTE *)(i + 48) = v4;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
LABEL_8:
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  return v5;
}
