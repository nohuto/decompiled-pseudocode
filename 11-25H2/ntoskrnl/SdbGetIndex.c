/*
 * XREFs of SdbGetIndex @ 0x14082B1C4
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1408253D8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x14082B0F4 (SdbFindFirstStringIndexedTag.c)
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140825180 (RtlRunOnceExecuteOnce.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(_RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v7; // edi
  int v8; // r8d
  __int64 v9; // rcx
  _WORD *i; // rax
  __int16 v11; // r9
  PVOID Context; // [rsp+50h] [rbp+8h] BYREF

  Context = 0LL;
  v7 = 0;
  if ( a4 )
    *a4 = 0;
  if ( RtlRunOnceExecuteOnce(Parameter + 327, (PRTL_RUN_ONCE_INIT_FN)InitOnceScanIndexes, Parameter, &Context) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    for ( i = (char *)Context + 6; v9 < 64; i += 20 )
    {
      v11 = *(i - 1);
      if ( !v11 )
        break;
      if ( v11 == a2 && *i == a3 )
      {
        v7 = *((_DWORD *)Context + 10 * v8);
        if ( a4 )
          *a4 = *((_DWORD *)Context + 10 * v8 + 8);
        return v7;
      }
      ++v8;
      ++v9;
    }
  }
  return v7;
}
