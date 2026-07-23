/*
 * XREFs of AuthzBasepCopyoutClaimAttributes @ 0x140A03A24
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A037C0 (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x1403CC204 (RtlStringCbCopyNW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x140A03BAC (AuthzBasepCopyoutClaimAttributeValues.c)
 */

__int64 __fastcall AuthzBasepCopyoutClaimAttributes(unsigned int *a1, _OWORD *a2, size_t a3)
{
  unsigned __int64 v6; // rbp
  _OWORD *v7; // r14
  int v8; // r9d
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  int v12; // ecx
  unsigned int *v13; // r12
  char *v14; // r15
  _DWORD *v15; // r14
  unsigned int *v16; // rdi
  wchar_t *v17; // r15
  size_t v18; // r9
  size_t v19; // r13
  char *v20; // r15
  size_t v22; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 || !a3 || (v6 = (unsigned __int64)a2 + a3, (_OWORD *)((char *)a2 + a3) < a2) )
  {
    v12 = -1073741811;
LABEL_16:
    if ( a3 >= 0x10 )
      *a2 = 0LL;
    return (unsigned int)v12;
  }
  memset_0(a2, 0, a3);
  v7 = a2 + 1;
  if ( (unsigned __int64)(a2 + 1) > v6 )
  {
    v12 = -1073741789;
    goto LABEL_16;
  }
  v8 = *a1;
  v9 = *a1;
  v22 = 0LL;
  v11 = v9;
  v10 = 2 * v9;
  if ( !is_mul_ok(0x20uLL, v11) )
  {
    v12 = -1073741675;
    goto LABEL_16;
  }
  v12 = 0;
  if ( (unsigned __int64)&v7[v10] > v6 )
  {
LABEL_14:
    v12 = -2147483643;
    goto LABEL_16;
  }
  *((_QWORD *)a2 + 1) = v7;
  v13 = a1 + 2;
  v14 = (char *)&v7[v10];
  *(_DWORD *)a2 = 1;
  *((_DWORD *)a2 + 1) = v8;
  v15 = a2 + 2;
  v16 = (unsigned int *)*((_QWORD *)a1 + 1);
  while ( v16 != v13 )
  {
    *((_WORD *)v15 - 4) = *((_WORD *)v16 + 24);
    v17 = (wchar_t *)((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
    *v15 = v16[15];
    *((_WORD *)v15 - 3) = 0;
    *(v15 - 1) = v16[13];
    v18 = *((unsigned __int16 *)v16 + 16);
    v19 = v18 + 2;
    v22 = v18 + 2;
    if ( (unsigned __int64)v17 + v18 + 2 > v6 )
      goto LABEL_14;
    *((_QWORD *)v15 - 2) = v17;
    RtlStringCbCopyNW(v17, v18 + 2, *((STRSAFE_PCNZWCH *)v16 + 5), v18);
    v20 = (char *)v17 + v19;
    v12 = AuthzBasepCopyoutClaimAttributeValues(
            (_DWORD)v16,
            (int)v15 - 16,
            (_DWORD)v20,
            (int)v6 - (int)v20,
            (__int64)&v22);
    if ( v12 < 0 )
      goto LABEL_16;
    v14 = &v20[v22];
    v16 = *(unsigned int **)v16;
    v15 += 8;
  }
  return (unsigned int)v12;
}
