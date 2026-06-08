/*
 * XREFs of sub_14002DD48 @ 0x14002DD48
 * Callers:
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 * Callees:
 *     sub_140006020 @ 0x140006020 (sub_140006020.c)
 *     sub_140009398 @ 0x140009398 (sub_140009398.c)
 *     sub_140009A48 @ 0x140009A48 (sub_140009A48.c)
 *     sub_14000A1EC @ 0x14000A1EC (sub_14000A1EC.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14002DEE4 @ 0x14002DEE4 (sub_14002DEE4.c)
 *     sub_14002EADC @ 0x14002EADC (sub_14002EADC.c)
 */

__int64 __fastcall sub_14002DD48(__int64 a1, const wchar_t *a2, __int64 a3)
{
  unsigned int v5; // ecx
  int v6; // eax
  bool v7; // cc
  __int64 result; // rax
  int v9; // r8d
  __int64 v10; // rbp
  __int64 i; // rdi
  int v12; // edx
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = 0LL;
  v15 = 0;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 == 1 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 17 )
      goto LABEL_8;
  }
  else if ( v5 == 2 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 21 )
      goto LABEL_8;
    goto LABEL_13;
  }
  if ( v5 != 3 )
  {
LABEL_13:
    v7 = v5 <= 4;
    if ( v5 != 4 )
      goto LABEL_6;
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 25 )
      goto LABEL_15;
LABEL_8:
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_14000A1EC((__int64)off_140018050->DeviceExtension, (__int64)a2, a3, 0x33u, (__int64)&unk_1400145E8, a2, v6);
    return 3221225473LL;
  }
  v6 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 23 )
    goto LABEL_8;
  v7 = 1;
LABEL_6:
  if ( !v7 )
  {
    v6 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 < 0x19u )
      goto LABEL_8;
  }
LABEL_15:
  sub_140009398(a1, &v16, &v15);
  v10 = v16;
  for ( i = 0LL; (unsigned int)i < v15; i = (unsigned int)(i + 1) )
  {
    v12 = 3 * i;
    LOBYTE(v9) = *(_BYTE *)(v10 + 24 * i + 17);
    LOBYTE(v12) = *(_BYTE *)(v10 + 24 * i + 16);
    result = sub_14002DEE4((int)a1 + *(_DWORD *)(v10 + 24 * i), v12, v9, *(_QWORD *)(v10 + 24 * i + 8), (__int64)a2);
    if ( (int)result < 0 )
      return result;
  }
  v13 = *(_QWORD *)(a1 + 536);
  if ( !v13 || (result = sub_14002EADC(v13, a2), (int)result >= 0) )
  {
    if ( !sub_140006020(a1 + 128) && *v14 != 126 && *(_QWORD *)(a1 + 132) != 1LL )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_140009A48((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x34u, (__int64)&unk_1400145E8, a2);
      return 3221225473LL;
    }
    if ( !qword_140019388 )
      return 0LL;
    result = qword_140019388(a1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
