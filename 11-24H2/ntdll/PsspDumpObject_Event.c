/*
 * XREFs of PsspDumpObject_Event @ 0x18010A9F0
 * Callers:
 *     PsspWalkHandleTable @ 0x1800C425C (PsspWalkHandleTable.c)
 * Callees:
 *     NtQueryEvent @ 0x180162750 (NtQueryEvent.c)
 */

__int64 __fastcall PsspDumpObject_Event(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 < 8 )
    return 3221225507LL;
  else
    return NtQueryEvent(a1, 0LL, a2, 8LL, a4);
}
