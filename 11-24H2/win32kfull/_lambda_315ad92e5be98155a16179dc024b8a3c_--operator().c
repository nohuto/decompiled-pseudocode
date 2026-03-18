/*
 * XREFs of _lambda_315ad92e5be98155a16179dc024b8a3c_::operator() @ 0x140149630
 * Callers:
 *     ?ArrangementParameterInfo@WindowArrangementSPI@@YA?AW4ParamInfoResult@1@IKPEAX_N1@Z @ 0x140149014 (-ArrangementParameterInfo@WindowArrangementSPI@@YA-AW4ParamInfoResult@1@IKPEAX_N1@Z.c)
 *     _lambda_315ad92e5be98155a16179dc024b8a3c_::_lambda_invoker_cdecl_ @ 0x1402DC870 (_lambda_315ad92e5be98155a16179dc024b8a3c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

bool __fastcall lambda_315ad92e5be98155a16179dc024b8a3c_::operator()(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool result; // al

  v3 = a3;
  v4 = (unsigned __int8)a2;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 57008);
  result = 0;
  if ( v4 <= *(_DWORD *)(v6 + 144) )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 63488);
    if ( (unsigned __int8)v4 >= *(_BYTE *)(v3 + v8) )
    {
      v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63488);
      if ( (unsigned __int8)v4 <= *(_BYTE *)(v3 + v10 + 12)
        && (unsigned __int8)v4 <= *(_BYTE *)(v3 + *(_QWORD *)(W32GetUserSessionState(v10, v9) + 63488) + 20) )
      {
        return 1;
      }
    }
  }
  return result;
}
