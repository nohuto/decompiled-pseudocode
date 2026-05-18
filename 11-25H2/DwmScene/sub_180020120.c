/*
 * XREFs of sub_180020120 @ 0x180020120
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_18001F454 @ 0x18001F454 (sub_18001F454.c)
 */

void __fastcall sub_180020120(__int64 a1, __int64 a2, __int64 a3, wchar_t *a4, __int64 a5, __int64 a6)
{
  wchar_t *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h] BYREF
  __int64 v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  __int64 v15; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801B8188 > 5 )
  {
    v11 = a6;
    v12 = a5;
    v13 = sub_18001F454(a4);
    v14 = sub_18001F454(v6);
    v15 = v7;
    sub_180001010(v8, (__int64)&unk_18019B7C9, v9, v10, &v15, (__int64)&v14, (__int64)&v13, &v12, &v11);
  }
}
