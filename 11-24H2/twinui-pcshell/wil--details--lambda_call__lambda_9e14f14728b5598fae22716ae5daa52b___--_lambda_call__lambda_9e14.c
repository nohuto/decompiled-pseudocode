/*
 * XREFs of wil::details::lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___::_lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___ @ 0x18068AD28
 * Callers:
 *     _CPinnedList::ApplyPrependDefaultTaskbarLayout_::_1_::dtor$2 @ 0x18070428A (_CPinnedList--ApplyPrependDefaultTaskbarLayout_--_1_--dtor$2.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$2 @ 0x18070431A (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___::_lambda_call__lambda_9e14f14728b5598fae22716ae5daa52b___(
        _BYTE *a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rdx

  v1 = 0;
  if ( a1[8] )
  {
    a1[8] = 0;
    v3 = *(_QWORD **)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
    {
      v4 = 0LL;
      do
      {
        ILFree(*(LPITEMIDLIST *)(*v3 + 8 * v4));
        v3 = *(_QWORD **)a1;
        v4 = ++v1;
      }
      while ( (unsigned __int64)v1 < *(_QWORD *)(*(_QWORD *)a1 + 8LL) );
    }
  }
}
