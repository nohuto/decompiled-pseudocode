/*
 * XREFs of SymCryptRsakeyAllocate @ 0x14051E8E4
 * Callers:
 *     SymCryptRsaSelftest @ 0x140527228 (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptRsakeyCreate @ 0x14051F184 (SymCryptRsakeyCreate.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x14051FBD4 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptCallbackAlloc @ 0x1406A6810 (SymCryptCallbackAlloc.c)
 */

__int64 __fastcall SymCryptRsakeyAllocate(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax

  v2 = 0LL;
  v3 = (unsigned int)SymCryptSizeofRsakeyFromParams();
  v4 = SymCryptCallbackAlloc(v3);
  if ( v4 )
    return SymCryptRsakeyCreate(v4, (unsigned int)v3, a1);
  return v2;
}
