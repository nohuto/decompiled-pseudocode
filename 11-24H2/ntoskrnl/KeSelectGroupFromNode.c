/*
 * XREFs of KeSelectGroupFromNode @ 0x140480DC0
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KeFindNextSetRightGroupMask @ 0x140480E28 (KeFindNextSetRightGroupMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeSelectGroupFromNode(__int64 a1)
{
  __int128 v1; // xmm0
  char v2; // dl
  __int64 result; // rax
  unsigned __int16 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF

  v1 = *(_OWORD *)(a1 + 16);
  v2 = *(_BYTE *)(a1 + 11) + 1;
  v5 = 0;
  v6 = v1;
  KeFindNextSetRightGroupMask(&v6, v2 & 0x7F, &v5);
  result = v5;
  *(_BYTE *)(a1 + 11) = v5;
  return result;
}
