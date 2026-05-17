/*
 * XREFs of TpSetPoolThreadBasePriority @ 0x18010CCD0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpSetPoolThreadBasePriority(__int64 a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( a2 < 15 )
  {
    if ( a2 <= -15 )
      v3 = -16;
  }
  else
  {
    v3 = 16;
  }
  return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 11LL, &v3);
}
