/*
 * XREFs of WdipSemWriteInflightLimitExceededEvent @ 0x1407A2D74
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2478 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WdipSemWriteEvent @ 0x140A7DEF4 (WdipSemWriteEvent.c)
 */

__int64 __fastcall WdipSemWriteInflightLimitExceededEvent(__int64 a1, __int16 a2, __int64 a3, __int64 *a4)
{
  char *v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+30h] [rbp-D0h] BYREF
  char v12; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v13; // [rsp+858h] [rbp+758h] BYREF

  v13 = a2;
  if ( !a1 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v6 = (char *)(a4 + 125);
  v7 = *((_DWORD *)a4 + 250);
  if ( v7 > 0x7D )
    return 3221225485LL;
  v11[0] = a1;
  v11[2] = &v13;
  v8 = v7 + 3;
  v11[1] = 16LL;
  v11[3] = 2LL;
  v11[4] = a4 + 125;
  v11[5] = 4LL;
  if ( v7 )
  {
    v6 = &v12;
    v9 = v7;
    do
    {
      v10 = *a4++;
      *(_QWORD *)(v6 - 12) = v10;
      *(_QWORD *)(v6 - 4) = 24LL;
      v6 += 16;
      --v9;
    }
    while ( v9 );
  }
  return WdipSemWriteEvent(v6, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX, a3, v8, v11);
}
