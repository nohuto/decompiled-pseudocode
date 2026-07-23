/*
 * XREFs of HalpWdatArmTimer @ 0x1404BB990
 * Callers:
 *     <none>
 * Callees:
 *     WdInstrExecuteAction @ 0x1404BFD9C (WdInstrExecuteAction.c)
 */

__int64 __fastcall HalpWdatArmTimer(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rtt
  bool v13; // zf
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9

  if ( a2 != 3 )
    return 3221225485LL;
  if ( *(_BYTE *)(a1 + 40) )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 )
    {
      if ( a3 == v6 )
      {
        v7 = a1 + 48;
        return WdInstrExecuteAction(v7, *(unsigned int *)(a1 + 44), 1LL, 0LL);
      }
    }
  }
  *(_QWORD *)(a1 + 32) = a3;
  v8 = a3 / 0x37E;
  v9 = v8 + 1;
  v10 = *(unsigned int *)(a1 + 24);
  if ( a3 == 894 * v8 )
    v9 = v8;
  v12 = v9;
  v11 = v9 / v10;
  v13 = v12 % v10 == 0;
  v14 = *(unsigned int *)(a1 + 44);
  v15 = v11 + 1;
  if ( v13 )
    v15 = v11;
  if ( v15 > *(unsigned int *)(a1 + 16) )
  {
    WdInstrExecuteAction(a1 + 48, v14, 11LL, 0LL);
    return 3221225485LL;
  }
  v16 = *(unsigned int *)(a1 + 20);
  if ( v15 >= v16 )
    v16 = (unsigned int)v15;
  result = WdInstrExecuteAction(a1 + 48, v14, 6LL, v16);
  if ( (int)result >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 40) )
    {
      result = WdInstrExecuteAction(a1 + 48, *(unsigned int *)(a1 + 44), 9LL, 0LL);
      if ( (int)result < 0 )
        return result;
      *(_BYTE *)(a1 + 40) = 1;
    }
    v7 = a1 + 48;
    return WdInstrExecuteAction(v7, *(unsigned int *)(a1 + 44), 1LL, 0LL);
  }
  return result;
}
