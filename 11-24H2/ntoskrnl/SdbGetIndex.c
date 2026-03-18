/*
 * XREFs of SdbGetIndex @ 0x14095D914
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14095D844 (SdbFindFirstStringIndexedTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14095FB48 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140A08258 (SdbpSearchDB.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x14095F8F0 (RtlRunOnceExecuteOnce.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(union _RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
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
  if ( RtlRunOnceExecuteOnce(Parameter + 327, InitOnceScanIndexes, Parameter, &Context) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGetIndex",
      1329,
      (unsigned int)"RtlRunOnceExecuteOnce failed for InitOnceScanIndexes [%x]");
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
