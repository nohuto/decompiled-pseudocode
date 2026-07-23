/*
 * XREFs of PspReadIFEOMitigationAuditOptions @ 0x140A17214
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspReadOptionsMapFromIFEO @ 0x140A17320 (PspReadOptionsMapFromIFEO.c)
 *     PspValidateMitigationAuditOptions @ 0x140A979C0 (PspValidateMitigationAuditOptions.c)
 */

__int64 __fastcall PspReadIFEOMitigationAuditOptions(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // xmm2
  __int64 v5; // xmm3_8
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  result = PspReadOptionsMapFromIFEO(a1, L"MitigationAuditOptions", &v8);
  if ( (int)result >= 0 )
  {
    v4 = v8;
    v5 = v9;
    v6 = v8;
    v7 = v9;
    result = PspValidateMitigationAuditOptions(&v6);
    if ( (int)result >= 0 )
    {
      *(_OWORD *)a2 = v4;
      *(_QWORD *)(a2 + 16) = v5;
    }
  }
  return result;
}
