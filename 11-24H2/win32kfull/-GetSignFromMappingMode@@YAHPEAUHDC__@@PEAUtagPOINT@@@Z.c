/*
 * XREFs of ?GetSignFromMappingMode@@YAHPEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1402F1AFC
 * Callers:
 *     ClientFrame @ 0x1402F1B90 (ClientFrame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSignFromMappingMode(HDC a1, struct tagPOINT *a2)
{
  __int64 result; // rax
  struct _POINTL v5; // [rsp+40h] [rbp+18h] BYREF
  struct _POINTL v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  if ( !GreGetDCPoint(a1, 1u, &v6) || !GreGetDCPoint(a1, 2u, &v5) )
    return 0LL;
  result = 1LL;
  a2->x = (((v6.x ^ v5.x) >> 31) & 0xFFFFFFFE) + 1;
  a2->y = (((v6.y ^ v5.y) >> 31) & 0xFFFFFFFE) + 1;
  return result;
}
