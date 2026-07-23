/*
 * XREFs of StEtaInitialize @ 0x1404B5E44
 * Callers:
 *     SmcProcessCreateRequest @ 0x140798F8C (SmcProcessCreateRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StEtaInitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
