/*
 * XREFs of ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x140035694
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x14000B4BC (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z @ 0x1400356E4 (-Create@TokenBlock@CLegacyTokenBuffer@@SAJAEAU12@PEAPEAU12@@Z.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Grow(CLegacyTokenBuffer *this)
{
  __int64 result; // rax
  struct CLegacyTokenBuffer::TokenBlock *v3; // rdx
  struct CLegacyTokenBuffer::TokenBlock *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  result = CLegacyTokenBuffer::TokenBlock::Create((CLegacyTokenBuffer *)((char *)this + 16), &v4);
  if ( (int)result >= 0 )
  {
    v3 = v4;
    *((_QWORD *)this + 261) = v4;
    *((_QWORD *)this + 262) = (char *)v3 + 20;
    *((_DWORD *)this + 526) = 2048;
  }
  return result;
}
