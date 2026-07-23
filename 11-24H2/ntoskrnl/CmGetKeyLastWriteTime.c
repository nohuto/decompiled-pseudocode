/*
 * XREFs of CmGetKeyLastWriteTime @ 0x140882590
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x140880E50 (CmpQueryKeyDataFromNode.c)
 * Callees:
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 */

__int64 __fastcall CmGetKeyLastWriteTime(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v7; // rbp
  __int64 v8; // r14

  v3 = 0LL;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 4);
    if ( !a1 )
      return v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 168);
  }
  if ( a3 )
  {
    v7 = a1 + 208;
    while ( 1 )
    {
      if ( !v3 )
        v3 = *(_QWORD *)(v7 + 8);
      if ( v7 == v3 )
        break;
      v8 = v3 - 32;
      v3 = *(_QWORD *)(v3 + 8);
      if ( !v8 )
        break;
      if ( CmEqualTrans(*(_QWORD *)(v8 + 56), a3) && *(_DWORD *)(v8 + 68) == 8 )
        return *(_QWORD *)(v8 + 88);
    }
  }
  return v5;
}
