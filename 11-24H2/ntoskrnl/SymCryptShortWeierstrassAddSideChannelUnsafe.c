/*
 * XREFs of SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140533D78
 * Callers:
 *     SymCryptShortWeierstrassAdd @ 0x1405337B0 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     SymCryptModAdd @ 0x140521458 (SymCryptModAdd.c)
 *     SymCryptModElementCopy @ 0x1405214D8 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x1405214F0 (SymCryptModElementCreate.c)
 *     SymCryptModElementIsZero @ 0x140521554 (SymCryptModElementIsZero.c)
 *     SymCryptModMul @ 0x140521798 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x140521874 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x1405218A8 (SymCryptModSub.c)
 *     SymCryptEcpointCopy @ 0x140528154 (SymCryptEcpointCopy.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall SymCryptShortWeierstrassAddSideChannelUnsafe(__int64 a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, __int64 a5)
{
  _DWORD *v5; // rdi
  __int64 v8; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rdx
  __int64 *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r12
  int IsZero; // ebx
  bool v20; // zf
  __int64 v21; // rbx
  __int64 v22; // [rsp+30h] [rbp-89h]
  __int64 v23; // [rsp+38h] [rbp-81h]
  __int64 v24; // [rsp+40h] [rbp-79h]
  __int64 v25; // [rsp+48h] [rbp-71h]
  __int64 v26; // [rsp+58h] [rbp-61h]
  __int64 v27; // [rsp+60h] [rbp-59h]
  __int64 v28; // [rsp+70h] [rbp-49h] BYREF
  __int64 v29; // [rsp+78h] [rbp-41h]
  __int64 v30; // [rsp+80h] [rbp-39h]
  __int64 v31; // [rsp+88h] [rbp-31h]
  __int64 v32; // [rsp+90h] [rbp-29h]
  __int64 v33; // [rsp+98h] [rbp-21h]
  __int64 v34; // [rsp+A0h] [rbp-19h]
  __int64 v35; // [rsp+A8h] [rbp-11h]

  v5 = *(_DWORD **)(a1 + 616);
  v23 = (__int64)(a2 + 32);
  v8 = *(unsigned int *)(a1 + 36);
  v12 = (unsigned int)(2 * v8);
  v24 = (__int64)&a2[v8 + 32];
  v25 = (__int64)&a3[v12 + 32];
  v22 = (__int64)&a2[v12 + 32];
  v26 = (__int64)(a3 + 32);
  v27 = (__int64)&a3[v8 + 32];
  memset_0(&v28, 0, 0x40uLL);
  if ( (unsigned int)SymCryptModElementIsZero() )
  {
    v13 = a3;
    return SymCryptEcpointCopy(a1, v13, a4);
  }
  if ( (unsigned int)SymCryptModElementIsZero() )
  {
    v13 = a2;
    return SymCryptEcpointCopy(a1, v13, a4);
  }
  v15 = &v28;
  v16 = 8LL;
  do
  {
    *v15++ = SymCryptModElementCreate();
    a5 += *(unsigned int *)(a1 + 36);
    --v16;
  }
  while ( v16 );
  SymCryptModSquare(v5);
  SymCryptModMul(v5, v22);
  SymCryptModSquare(v5);
  v17 = v30;
  SymCryptModMul(v5, v23);
  v18 = v31;
  SymCryptModMul(v5, v26);
  SymCryptModSub(v5, v18);
  SymCryptModMul(v5, v27);
  SymCryptModMul(v5, v25);
  SymCryptModMul(v5, v24);
  SymCryptModSub(v5, v35);
  IsZero = SymCryptModElementIsZero();
  v20 = (IsZero & (unsigned int)SymCryptModElementIsZero()) == 0;
  v21 = v32;
  if ( v20 )
  {
    SymCryptModAdd(v5, v22);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v21);
    SymCryptModSub(v5, v21);
    SymCryptModMul(v5, v21);
    SymCryptModAdd(v5, v35);
    SymCryptModAdd(v5, v33);
    SymCryptModSquare(v5);
    SymCryptModMul(v5, v18);
    SymCryptModMul(v5, v17);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v18);
    SymCryptModMul(v5, v18);
    SymCryptModMul(v5, v29);
    SymCryptModAdd(v5, v34);
    SymCryptModSub(v5, v18);
  }
  else
  {
    SymCryptModElementCopy();
    SymCryptModSquare(v5);
    SymCryptModSquare(v5);
    SymCryptModSquare(v5);
    SymCryptModAdd(v5, v23);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v29);
    SymCryptModSub(v5, v29);
    SymCryptModAdd(v5, v29);
    SymCryptModSquare(v5);
    SymCryptModMul(v5, v17);
    SymCryptModAdd(v5, v17);
    SymCryptModAdd(v5, v28);
    SymCryptModAdd(v5, v17);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v28);
    SymCryptModSub(v5, v28);
    SymCryptModSub(v5, v29);
    SymCryptModMul(v5, v17);
    SymCryptModAdd(v5, v33);
    SymCryptModAdd(v5, v33);
    SymCryptModAdd(v5, v33);
    SymCryptModSub(v5, v29);
    SymCryptModAdd(v5, v24);
    SymCryptModSquare(v5);
    SymCryptModSub(v5, v17);
    SymCryptModSub(v5, v17);
  }
  SymCryptModElementCopy();
  SymCryptModElementCopy();
  return (void *)SymCryptModElementCopy();
}
