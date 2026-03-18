/*
 * XREFs of PfSnNameRemoveAll @ 0x140962980
 * Callers:
 *     PfFileInfoNotify @ 0x140275220 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x140276790 (PfSnTraceGetLogEntry.c)
 *     PfSnActiveTraceGetNext @ 0x140434970 (PfSnActiveTraceGetNext.c)
 *     PfSnNameRemove @ 0x1404376C0 (PfSnNameRemove.c)
 *     PfSnGetNLLogEntry @ 0x140962A28 (PfSnGetNLLogEntry.c)
 *     PfSnFailProcessTrace @ 0x140962AA0 (PfSnFailProcessTrace.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 NLLogEntry; // rax
  __int64 *result; // rax
  __int64 v7; // rbx
  _OWORD *v8; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v7 )
  {
    result = PfSnActiveTraceGetNext(i);
    v7 = (__int64)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_QWORD *)(a1 + 16)) )
    {
      v8 = 0LL;
      if ( (int)PfSnTraceGetLogEntry(v7, 4u, &v8) < 0 )
      {
        PfSnFailProcessTrace(v7);
      }
      else
      {
        v3 = *(_QWORD *)(a1 + 16);
        v4 = v8;
        *v8 = 0LL;
        *v4 = 53LL;
        v4[1] = v3;
        NLLogEntry = PfSnGetNLLogEntry(v4, 3LL, 40LL, *(unsigned int *)(a1 + 40), *(_DWORD *)(a1 + 44));
        *(_DWORD *)(NLLogEntry + 16) &= 0xFFFFFFFC;
        *(_QWORD *)(NLLogEntry + 24) = *(_QWORD *)(a1 + 16);
      }
    }
  }
  return result;
}
