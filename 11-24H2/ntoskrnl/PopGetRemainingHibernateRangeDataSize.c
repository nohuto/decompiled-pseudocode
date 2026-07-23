/*
 * XREFs of PopGetRemainingHibernateRangeDataSize @ 0x140B5F0A0
 * Callers:
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140377850 (RtlNumberOfClearBits.c)
 *     RtlFindNextForwardRunClear @ 0x1403C3BB0 (RtlFindNextForwardRunClear.c)
 */

__int64 __fastcall PopGetRemainingHibernateRangeDataSize(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rdx
  __int64 v3; // rdi
  __int64 v5; // rcx
  ULONG v6; // edx
  ULONG NextForwardRunClear; // eax
  ULONG StartingRunIndex; // [rsp+30h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  v1 = (_QWORD *)(a1 + 80);
  v2 = *(_QWORD **)(a1 + 120);
  v3 = 0LL;
  if ( v2 != (_QWORD *)(a1 + 80) )
  {
    do
    {
      v5 = (v2[4] - v2[3]) << 12;
      v2 = (_QWORD *)*v2;
      v3 += v5;
      *(_QWORD *)(a1 + 120) = v2;
    }
    while ( v2 != v1 );
  }
  v6 = *(_DWORD *)(a1 + 128);
  do
  {
    NextForwardRunClear = RtlFindNextForwardRunClear(*(PRTL_BITMAP *)(a1 + 112), v6, &StartingRunIndex);
    v6 = NextForwardRunClear + StartingRunIndex;
    v3 += (unsigned __int64)NextForwardRunClear << 12;
  }
  while ( NextForwardRunClear );
  if ( *(_QWORD *)(a1 + 112) == a1 + 48 )
    v3 += (unsigned __int64)RtlNumberOfClearBits((PRTL_BITMAP)(a1 + 64)) << 12;
  return v3;
}
