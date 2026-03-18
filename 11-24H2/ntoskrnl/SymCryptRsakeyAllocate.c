/*
 * XREFs of SymCryptRsakeyAllocate @ 0x140521014
 * Callers:
 *     SymCryptRsaSelftest @ 0x140529908 (SymCryptRsaSelftest.c)
 * Callees:
 *     SymCryptRsakeyCreate @ 0x140521830 (SymCryptRsakeyCreate.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x140522290 (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptCallbackAlloc @ 0x1406A5810 (SymCryptCallbackAlloc.c)
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
