/*
 * XREFs of SepSetTrustLevelForProcessToken @ 0x14036B140
 * Callers:
 *     SeExchangePrimaryToken @ 0x14078384C (SeExchangePrimaryToken.c)
 *     SeSubProcessToken @ 0x140A0C9E8 (SeSubProcessToken.c)
 * Callees:
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     SepSidFromProcessProtection @ 0x14036B1C0 (SepSidFromProcessProtection.c)
 *     SepSetTokenTrust @ 0x140998BB0 (SepSetTokenTrust.c)
 */

__int64 __fastcall SepSetTrustLevelForProcessToken(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  void *v6; // rax
  void *v7; // rcx
  void *v8; // rbx
  __int64 result; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = *(_BYTE *)(a2 + 1530);
  *a3 = 0;
  v6 = (void *)SepSidFromProcessProtection(&v10, a2, a3, a4);
  v7 = *(void **)(a1 + 1104);
  v8 = v6;
  if ( v7 )
  {
    if ( !v6 || !RtlEqualSid(v7, v6) )
      goto LABEL_3;
    return 0LL;
  }
  if ( !v6 )
    return 0LL;
LABEL_3:
  result = SepSetTokenTrust(a1, v8);
  if ( (int)result >= 0 )
    *a3 = 1;
  return result;
}
