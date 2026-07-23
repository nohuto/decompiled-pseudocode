/*
 * XREFs of DbgLoadImageSymbols @ 0x14049EEC0
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14049ED5C (DbgLoadImageSymbolsUnicode.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     InitLoadDebuggerSymbols @ 0x140C0D7D0 (InitLoadDebuggerSymbols.c)
 * Callees:
 *     DebugService2 @ 0x1404FA120 (DebugService2.c)
 */

__int64 __fastcall DbgLoadImageSymbols(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _DWORD *v4; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v6[0] = a2;
  v6[1] = a3;
  if ( a2 - 1 <= 0xFFFFFFFFFFFFFFFDuLL
    && *(_WORD *)a2 == 23117
    && (v4 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 60)), (unsigned __int64)v4 >= a2)
    && (a2 > 0x7FFFFFFEFFFFLL || (_DWORD *)((char *)v4 + 263) >= v4 && (unsigned __int64)v4 + 263 <= 0x7FFFFFFEFFFFLL)
    && *v4 == 17744
    && v4 )
  {
    v7 = v4[22];
    v8 = v4[20];
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  return DebugService2(a1, v6, 3LL);
}
