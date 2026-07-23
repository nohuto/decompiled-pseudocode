/*
 * XREFs of SymCryptSha1Init @ 0x180158490
 * Callers:
 *     RtlCreateServiceSid @ 0x1800CD9A0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800CDAF0 (RtlCreateVirtualAccountSid.c)
 *     A_SHAInit @ 0x180117E20 (A_SHAInit.c)
 *     SymCryptSha1Result @ 0x1801584C0 (SymCryptSha1Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha1Init(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_180199590;
  result = 3285377520LL;
  *(_DWORD *)(a1 + 112) = -1009589776;
  return result;
}
