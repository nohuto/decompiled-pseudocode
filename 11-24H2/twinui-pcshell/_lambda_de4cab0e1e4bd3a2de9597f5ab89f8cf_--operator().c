/*
 * XREFs of _lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator() @ 0x18043F114
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___::Run @ 0x1804423D0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf___--.c)
 * Callees:
 *     ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x18043FCA4 (-CommitImportanceVector@WindowWrapperBase@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_de4cab0e1e4bd3a2de9597f5ab89f8cf_::operator()(int **a1)
{
  int v2; // r8d
  int *v3; // rcx
  __int16 v4; // dx

  v2 = **a1;
  v3 = a1[1];
  if ( v2 == 1 )
    v3[45] |= 0x100u;
  else
    v3[45] &= ~0x100u;
  if ( (v3[45] & 0x40) == 0 )
  {
    v4 = 0;
    if ( v2 == 1 )
      v4 = 64;
    *((_WORD *)v3 + 126) = v3[63] & 0xFFBF | v4;
    goto LABEL_10;
  }
  if ( !v2 )
  {
    *((_WORD *)v3 + 126) &= ~0x80u;
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v3);
    v3 = a1[1];
    *((_WORD *)v3 + 126) |= 0x80u;
LABEL_10:
    WindowWrapperBase::CommitImportanceVector((WindowWrapperBase *)v3);
  }
  return 0LL;
}
