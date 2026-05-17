/*
 * XREFs of RtlpOpenSystemSessionKey @ 0x180115410
 * Callers:
 *     RtlSetImageMitigationPolicy @ 0x1801385F0 (RtlSetImageMitigationPolicy.c)
 * Callees:
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 */

__int64 __fastcall RtlpOpenSystemSessionKey(unsigned int a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v4; // [rsp+40h] [rbp-18h]

  v3[0] = 48LL;
  v3[3] = 576LL;
  v3[1] = 0LL;
  v3[2] = &unk_180176050;
  v4 = 0LL;
  return NtOpenKey(a2, a1, v3);
}
