/*
 * XREFs of InitOnceGetStringTableOffset @ 0x180097C50
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v8; // rsi

  v3 = 0;
  if ( a2 && a3 )
  {
    FirstTag = SdbFindFirstTag(a2, 0, 30721);
    v8 = (_DWORD *)(a2 + 2632);
    *v8 = FirstTag;
    if ( FirstTag )
    {
      *a3 = v8;
      return 1;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
