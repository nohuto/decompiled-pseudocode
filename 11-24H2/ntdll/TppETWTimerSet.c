/*
 * XREFs of TppETWTimerSet @ 0x18006B718
 * Callers:
 *     TppSetTimer @ 0x18006B410 (TppSetTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall TppETWTimerSet(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  _BYTE v7[6]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v8; // [rsp+26h] [rbp-62h]
  __int64 v9; // [rsp+40h] [rbp-48h]
  __int64 v10; // [rsp+48h] [rbp-40h]
  __int64 v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  int v14; // [rsp+60h] [rbp-28h]

  memset_thunk_772440563353939046(v7, 0, 0x44uLL);
  v10 = a1;
  v8 = 7210;
  v9 = *(_QWORD *)(a2 + 328);
  v12 = *(_DWORD *)(a2 + 348);
  v13 = *(_DWORD *)(a2 + 344);
  v4 = (*(unsigned __int8 *)(a2 + 354) >> 1) & 1;
  v11 = a2;
  v14 = v4;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v5 = 2147353478LL;
  return NtTraceEvent(*(unsigned __int8 *)v5, 132098LL, 36LL, v7);
}
