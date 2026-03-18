/*
 * XREFs of ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x140056A0C
 * Callers:
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x14000B5D0 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x140011024 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Create(struct CLegacyTokenBuffer **a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 Pool2; // rax
  __int64 v7; // rdi
  __int64 v9; // rax

  v5 = 0;
  *a1 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 2112LL, 1953254740LL, a4);
  v7 = Pool2;
  if ( Pool2 )
  {
    v9 = Pool2 + 16;
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 2068) = 0;
    *(_QWORD *)(v9 + 8) = v9;
    *(_QWORD *)v9 = v9;
    *(_QWORD *)(v7 + 2088) = v9;
    *(_BYTE *)(v7 + 2108) = 0;
    CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v7);
    *a1 = (struct CLegacyTokenBuffer *)v7;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
