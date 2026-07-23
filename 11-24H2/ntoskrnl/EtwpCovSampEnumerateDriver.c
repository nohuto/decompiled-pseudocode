/*
 * XREFs of EtwpCovSampEnumerateDriver @ 0x140A9E5D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampImageNotify @ 0x1409228E0 (EtwpCovSampImageNotify.c)
 */

__int64 __fastcall EtwpCovSampEnumerateDriver(__int64 a1)
{
  _DWORD v2[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v3; // [rsp+30h] [rbp-38h]
  __int64 v4; // [rsp+38h] [rbp-30h]
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int128 v6; // [rsp+48h] [rbp-20h]

  v2[1] = 0;
  v4 = 0LL;
  v6 = 0LL;
  v2[0] = 1280;
  v3 = *(_QWORD *)(a1 + 48);
  v5 = *(unsigned int *)(a1 + 64);
  EtwpCovSampImageNotify((PUNICODE_STRING)(a1 + 72), 0LL, (char *)v2);
  return 0LL;
}
