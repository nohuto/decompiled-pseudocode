/*
 * XREFs of PfSnLogIdentifier @ 0x140A630D0
 * Callers:
 *     PfSnBeginScenario @ 0x140960CB0 (PfSnBeginScenario.c)
 * Callees:
 *     PfSnTraceGetLogEntry @ 0x140276790 (PfSnTraceGetLogEntry.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall PfSnLogIdentifier(__int64 a1, const void **a2)
{
  int v2; // edi
  unsigned int v4; // edi
  __int64 result; // rax
  _QWORD *v6; // rbx
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(unsigned __int16 *)a2;
  v7 = 0LL;
  v4 = (unsigned int)(v2 + 35) >> 4;
  result = PfSnTraceGetLogEntry(a1, v4, &v7);
  if ( (int)result >= 0 )
  {
    v6 = v7;
    memset_0(v7, 0, 16LL * v4);
    *v6 = (16LL * (v4 - 1)) | 6;
    memmove(v6 + 2, a2[1], *(unsigned __int16 *)a2);
    return 0LL;
  }
  return result;
}
