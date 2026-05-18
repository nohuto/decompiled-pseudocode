/*
 * XREFs of sub_180020080 @ 0x180020080
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_18001F454 @ 0x18001F454 (sub_18001F454.c)
 */

void __fastcall sub_180020080(__int64 a1, __int64 a2, wchar_t *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+58h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp-20h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h] BYREF
  __int64 v14; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801B8188 > 5 )
  {
    v10 = a6;
    v11 = a5;
    v12 = a4;
    v13 = sub_18001F454(a3);
    v14 = v6;
    sub_180001010(v7, (__int64)&unk_18019B8FE, v8, v9, &v14, (__int64)&v13, (__int64)&v12, &v11, &v10);
  }
}
