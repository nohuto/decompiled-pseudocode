/*
 * XREFs of ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1400562BC
 * Callers:
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x14001AB00 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14001C630 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1400204B4 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Create(struct CLegacyTokenBuffer **a1)
{
  unsigned int v2; // ebx
  __int64 Pool2; // rax
  __int64 v4; // rdi
  __int64 v6; // rax

  v2 = 0;
  *a1 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 2112LL, 1953254740LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    v6 = Pool2 + 16;
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 2068) = 0;
    *(_QWORD *)(v6 + 8) = v6;
    *(_QWORD *)v6 = v6;
    *(_QWORD *)(v4 + 2088) = v6;
    *(_BYTE *)(v4 + 2108) = 0;
    CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v4);
    *a1 = (struct CLegacyTokenBuffer *)v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
