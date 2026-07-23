/*
 * XREFs of PfSnNameRemoveAll @ 0x14094A440
 * Callers:
 *     PfFileInfoNotify @ 0x14022A7B0 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x14022BD20 (PfSnTraceGetLogEntry.c)
 *     PfSnActiveTraceGetNext @ 0x1402F4C40 (PfSnActiveTraceGetNext.c)
 *     PfSnNameRemove @ 0x14042A140 (PfSnNameRemove.c)
 *     PfSnGetNLLogEntry @ 0x14094A4E8 (PfSnGetNLLogEntry.c)
 *     PfSnFailProcessTrace @ 0x14094A560 (PfSnFailProcessTrace.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 NLLogEntry; // rax
  __int64 *result; // rax
  __int64 v10; // rbx
  _OWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v10 )
  {
    result = PfSnActiveTraceGetNext(i, a2, a3, a4);
    v10 = (__int64)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_RTL_BALANCED_NODE **)(a1 + 16)) )
    {
      v11 = 0LL;
      if ( (int)PfSnTraceGetLogEntry(v10, 4u, &v11) < 0 )
      {
        PfSnFailProcessTrace(v10);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 16);
        v7 = v11;
        *v11 = 0LL;
        *v7 = 53LL;
        v7[1] = v6;
        NLLogEntry = PfSnGetNLLogEntry(v7, 3LL, 40LL, *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 44));
        *(_DWORD *)(NLLogEntry + 16) &= 0xFFFFFFFC;
        *(_QWORD *)(NLLogEntry + 24) = *(_QWORD *)(a1 + 16);
      }
    }
  }
  return result;
}
