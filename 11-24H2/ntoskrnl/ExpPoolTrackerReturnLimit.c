/*
 * XREFs of ExpPoolTrackerReturnLimit @ 0x14035BA20
 * Callers:
 *     ExInsertPoolTag @ 0x14021B9D0 (ExInsertPoolTag.c)
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExRemovePoolTag @ 0x1403985B4 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140398994 (ExpFreeHeapSpecialPool.c)
 *     ExPoolCleanupExpansionTable @ 0x1406528C4 (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExpPoolTrackerReturnLimit(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  signed __int64 result; // rax
  signed __int64 v6; // rcx
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  signed __int64 v10; // rdx
  signed __int64 v11; // rtt
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8

  v3 = a1;
  v4 = 8LL;
  result = 24LL;
  if ( a1 != 1 )
  {
    v4 = 32LL;
    result = 48LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(result + a3));
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + a3), -a2);
  if ( *(_QWORD *)(a3 + 72) )
  {
    v7 = v3;
    if ( (*(_BYTE *)(a3 + 8 * v3 + 56) & 1) == 0 )
    {
      result = *(_QWORD *)(a3 + 8 * v3 + 56);
      v8 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      v9 = 128LL;
      if ( v8 != 64 )
        v9 = v8;
      while ( 1 )
      {
        v10 = v9 + v6;
        if ( v6 >= result || v10 >= result )
          break;
        v11 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v7 + 56), v10, result);
        if ( v11 == result )
        {
          v12 = result - v10;
          v13 = -v12;
          if ( v12 > 0 )
            v13 = v12;
          v14 = *(_QWORD *)(a3 + 72) + 24 * v7;
          result = *(_QWORD *)(v14 + 16);
          if ( result || *(_QWORD *)(v14 + 24) )
            _InterlockedAdd64((volatile signed __int64 *)(v14 + 32), -v13);
          return result;
        }
        v6 = *(_QWORD *)(v4 + a3);
      }
    }
  }
  return result;
}
