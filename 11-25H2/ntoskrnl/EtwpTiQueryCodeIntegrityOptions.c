/*
 * XREFs of EtwpTiQueryCodeIntegrityOptions @ 0x140A7E240
 * Callers:
 *     EtwTiLogDriverObjectLoad @ 0x140A7E124 (EtwTiLogDriverObjectLoad.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x14069B800 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall EtwpTiQueryCodeIntegrityOptions(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 8LL;
  result = ZwQuerySystemInformation(103LL, (__int64)&v3);
  if ( (int)result >= 0 )
  {
    *a1 = HIDWORD(v3);
    return (unsigned int)result;
  }
  return result;
}
