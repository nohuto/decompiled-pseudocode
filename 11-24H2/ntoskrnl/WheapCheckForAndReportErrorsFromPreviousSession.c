/*
 * XREFs of WheapCheckForAndReportErrorsFromPreviousSession @ 0x140659E94
 * Callers:
 *     WheaInitialize @ 0x140C4624C (WheaInitialize.c)
 * Callees:
 *     WheapProcessEfiBadMemoryPage @ 0x14065A0A8 (WheapProcessEfiBadMemoryPage.c)
 *     WheapReportBootError @ 0x14065A154 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14065A1F8 (WheapReportPersistedErrorRecord.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 WheapCheckForAndReportErrorsFromPreviousSession()
{
  __int64 v0; // rax
  __int64 i; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v3; // [rsp+50h] [rbp+10h] BYREF
  int v4; // [rsp+58h] [rbp+18h] BYREF
  PVOID P; // [rsp+60h] [rbp+20h] BYREF
  PVOID v6; // [rsp+68h] [rbp+28h] BYREF

  v6 = 0LL;
  v4 = 0;
  v3 = 0;
  P = 0LL;
  if ( (int)PshedGetBootErrorPacket(&v4, &v6) < 0 )
    v6 = 0LL;
  v0 = 0LL;
  for ( i = 0LL; i != -1; v0 = i )
  {
    if ( (int)PshedReadErrorRecord(0LL, v0, &i, &v3, &P) < 0 )
      break;
    if ( P )
    {
      if ( *(_DWORD *)P == 1380274243 && *((_DWORD *)P + 5) <= v3 )
      {
        if ( (unsigned __int8)WheapReportPersistedErrorRecord(P) == 1 )
          PshedClearErrorRecord(
            (unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)((char *)P + 108)) >> 8),
            *((_QWORD *)P + 12));
        ExFreePoolWithTag(P, 0x44485350u);
      }
      else
      {
        ExFreePoolWithTag(P, 0x44485350u);
        P = 0LL;
      }
    }
  }
  if ( v6 )
  {
    WheapReportBootError();
    ExFreePoolWithTag(v6, 0x44485350u);
    v6 = 0LL;
  }
  return WheapProcessEfiBadMemoryPage();
}
