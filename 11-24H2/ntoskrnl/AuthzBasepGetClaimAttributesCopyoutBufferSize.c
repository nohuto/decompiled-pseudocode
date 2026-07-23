/*
 * XREFs of AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A03874
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x140A037C0 (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A03924 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetClaimAttributesCopyoutBufferSize(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // kr00_8
  unsigned __int64 v7; // rcx
  __int64 **v8; // rdi
  __int64 result; // rax
  __int64 **v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v13 = 0LL;
  v6 = v2;
  v5 = 32 * v2;
  if ( !is_mul_ok(0x20uLL, v6) )
    return 3221225621LL;
  v7 = v5 + 16;
  if ( v5 >= 0xFFFFFFFFFFFFFFF0uLL )
    return 3221225621LL;
  v8 = (__int64 **)(a1 + 2);
  result = 0LL;
  v10 = (__int64 **)*v8;
  while ( v10 != v8 )
  {
    v11 = (v7 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 < v7 )
      return 3221225621LL;
    v12 = *((unsigned __int16 *)v10 + 16) + v11;
    if ( v12 < v11 || v12 + 2 < v12 )
      return 3221225621LL;
    v13 = v12 + 2;
    result = AuthzBasepGetClaimAttributeValueCopyoutBufferSize(v10, &v13);
    if ( (int)result < 0 )
      return result;
    v10 = (__int64 **)*v10;
    v7 = v13;
  }
  *a2 = v7;
  return result;
}
