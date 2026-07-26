/*
 * XREFs of ndisValidateNdisVarDataDescInputBufferBounds @ 0x140141090
 * Callers:
 *     ndisValidateNdisVarDataDescInputString @ 0x140174860 (ndisValidateNdisVarDataDescInputString.c)
 * Callees:
 *     ndisValidateEmbeddedBufferBounds @ 0x140173000 (ndisValidateEmbeddedBufferBounds.c)
 */

char __fastcall ndisValidateNdisVarDataDescInputBufferBounds(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        __int64 a4,
        _QWORD *a5)
{
  *a5 = 0LL;
  if ( (unsigned __int64)a3 < a1 || (unsigned __int64)(a3 + 8) > a1 + a2 )
    return 0;
  else
    return ndisValidateEmbeddedBufferBounds(a1, a2, (_DWORD)a3, 16, *((_DWORD *)a3 + 2), *a3, 2, (__int64)a5);
}
