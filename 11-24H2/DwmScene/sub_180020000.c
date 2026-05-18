/*
 * XREFs of sub_180020000 @ 0x180020000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800012B8 @ 0x1800012B8 (sub_1800012B8.c)
 *     sub_18001F5B4 @ 0x18001F5B4 (sub_18001F5B4.c)
 */

void __fastcall sub_180020000(__int64 a1, __int64 a2, wchar_t *a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+54h] [rbp-2Ch] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1801B9188 > 5 )
  {
    v11 = a6;
    v12 = a5;
    v10 = a4;
    v13 = sub_18001F5B4(a3);
    v14 = v6;
    sub_1800012B8(v7, (__int64)&unk_18019C894, v8, v9, &v14, (__int64)&v13, (__int64)&v10, &v12, &v11);
  }
}
