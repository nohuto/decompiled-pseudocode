/*
 * XREFs of sub_18001FFE0 @ 0x18001FFE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_18001F454 @ 0x18001F454 (sub_18001F454.c)
 */

void __fastcall sub_18001FFE0(__int64 a1, __int64 a2, wchar_t *a3, double a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // [rsp+58h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-20h] BYREF
  double v11; // [rsp+68h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp-10h] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801B8188 > 5 )
  {
    v9 = a6;
    v10 = a5;
    v11 = a4;
    v12 = sub_18001F454(a3);
    v13 = v6;
    sub_180001010(v7, (__int64)&unk_18019B833, v8, v6, &v13, (__int64)&v12, (__int64)&v11, &v10, &v9);
  }
}
