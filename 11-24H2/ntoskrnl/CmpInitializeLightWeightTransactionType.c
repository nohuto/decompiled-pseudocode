/*
 * XREFs of CmpInitializeLightWeightTransactionType @ 0x1407DE984
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 */

__int64 CmpInitializeLightWeightTransactionType()
{
  __int16 Src; // [rsp+30h] [rbp-39h] BYREF
  char v2; // [rsp+32h] [rbp-37h]
  int v3; // [rsp+38h] [rbp-31h]
  int v4; // [rsp+3Ch] [rbp-2Dh]
  int v5; // [rsp+40h] [rbp-29h]
  int v6; // [rsp+44h] [rbp-25h]
  int v7; // [rsp+48h] [rbp-21h]
  int v8; // [rsp+4Ch] [rbp-1Dh]
  int v9; // [rsp+54h] [rbp-15h]
  int v10; // [rsp+58h] [rbp-11h]
  __int64 v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int64 (__fastcall *v13)(); // [rsp+70h] [rbp+7h]
  __int64 (__fastcall *v14)(); // [rsp+78h] [rbp+Fh]

  memset_0(&Src, 0, 0x78uLL);
  v11 = 0LL;
  v7 = 2031679;
  v8 = 2031679;
  Src = 120;
  v3 = 48;
  v12 = 0LL;
  v2 = v2 & 0xE3 | 0xC;
  v13 = CmpCloseLightWeightTransaction;
  v14 = CmpDeleteLightWeightTransaction;
  v4 = 1179649;
  v5 = 1179710;
  v6 = 1179672;
  v10 = 32;
  v9 = 1;
  return ObCreateObjectTypeEx(&CmpTransactionTypeNameString, &Src, (__int64)&CmRegistryTransactionType);
}
