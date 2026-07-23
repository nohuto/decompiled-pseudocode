/*
 * XREFs of RtlpTimeToTimeFields @ 0x140419FC0
 * Callers:
 *     HalSetRealTimeClock @ 0x1404191C0 (HalSetRealTimeClock.c)
 *     HalQueryRealTimeClock @ 0x1404196C0 (HalQueryRealTimeClock.c)
 *     HalpSetVirtualRtc @ 0x140419DE0 (HalpSetVirtualRtc.c)
 *     WheapGetTimestamp @ 0x140419F0C (WheapGetTimestamp.c)
 *     RtlTimeToTimeFields @ 0x140419FA0 (RtlTimeToTimeFields.c)
 *     HalpQueryVirtualRtc @ 0x140548660 (HalpQueryVirtualRtc.c)
 *     HalEfiSetTime @ 0x14054A014 (HalEfiSetTime.c)
 *     HalpCheckWakeupTimeAndAdjust @ 0x1405580C4 (HalpCheckWakeupTimeAndAdjust.c)
 *     GetBootSystemTime @ 0x140C0CA8C (GetBootSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x14041A300 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2)
{
  char *v2; // rax
  int v3; // r10d
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned int v7; // ecx
  int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // rcx
  signed __int64 v11; // rcx
  unsigned __int128 v12; // rax
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // edi
  unsigned int v16; // ebx
  __int64 v17; // r11
  __int64 v18; // rbx
  __int16 v19; // ax
  __int16 result; // ax
  __int16 v21; // r8
  __int16 v22; // cx
  __int64 *v23; // rbx
  __int64 v24; // r11
  signed __int32 v25[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v26; // [rsp+20h] [rbp-18h]

  v2 = (char *)ExLeapSecondData;
  v3 = 0;
  WORD6(v26) = 0;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
    return RtlpTimeToTimeFieldsNoLeapSeconds();
  v5 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v25, 0);
  v6 = *a1;
  v7 = 0;
  v8 = 0;
  if ( v5 )
  {
    v23 = (__int64 *)(v2 + 8);
    do
    {
      v24 = *v23;
      if ( *v23 < 0 )
      {
        if ( v6 < (v24 & 0x7FFFFFFFFFFFFFFFLL) )
          break;
        --v3;
      }
      else if ( v6 < v24 + 20000000 )
      {
        if ( v6 < v24 + 10000000 )
        {
          if ( v6 < v24 )
            break;
          v8 |= 4u;
        }
        else
        {
          v8 |= 2u;
        }
      }
      else
      {
        ++v3;
      }
      ++v7;
      ++v23;
    }
    while ( v7 < v5 );
  }
  v9 = -10000000LL * v3 + v6;
  if ( (v8 & 2) != 0 )
    v9 -= 10000000LL;
  v10 = -v9;
  if ( v9 > 0 )
    v10 = v9;
  v11 = (unsigned __int64)(((unsigned __int64)v10 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v9 < 0 )
    v11 = -v11;
  if ( v11 < 0 )
    v12 = (unsigned __int64)-v11 * (unsigned __int128)(unsigned __int64)Magic86400000;
  else
    v12 = (unsigned __int64)v11 * (unsigned __int128)(unsigned __int64)Magic86400000;
  v13 = *((_QWORD *)&v12 + 1) >> 26;
  if ( v11 < 0 )
    LODWORD(v13) = -(int)v13;
  v14 = v11 - 86400000 * v13;
  HIWORD(v26) = ((int)v13 + 1) % 7u;
  v15 = (100
       * ((-36524 * ((100 * ((unsigned int)v13 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v13 % 0x23AB1) % 0x5B5)
       + 75)
      / 0x8EAD
      + 4
      * ((-36524 * ((100 * ((unsigned int)v13 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v13 % 0x23AB1) / 0x5B5
       + 25 * ((100 * ((unsigned int)v13 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v13 / 0x23AB1)));
  v16 = v15 + 1;
  v17 = (_DWORD)v13 + -365 * v15 - v15 / 0x190 - (v15 >> 2) + v15 / 0x64;
  if ( v15 + 1 != 400 * ((v15 + 1) / 0x190) && (v16 == 100 * (v16 / 0x64) || (v16 & 3) != 0) )
  {
    v18 = *((unsigned __int8 *)NormalYearDayToMonth + v17);
    v19 = NormalYearDaysPrecedingMonth[v18];
  }
  else
  {
    v18 = *((unsigned __int8 *)LeapYearDayToMonth + v17);
    v19 = LeapYearDaysPrecedingMonth[v18];
  }
  WORD1(v26) = v18 + 1;
  WORD2(v26) = v13 + -365 * v15 - v15 / 0x190 - (v15 >> 2) + v15 / 0x64 - v19 + 1;
  LOWORD(v26) = v15 + 1601;
  WORD3(v26) = v14 / 0x3E8 / 0x3C / 0x3C;
  WORD4(v26) = v14 / 0x3E8 / 0x3C % 0x3C;
  result = 1000;
  v21 = v14 / 0x3E8 % 0x3C;
  WORD5(v26) = v21;
  v22 = v14 % 0x3E8;
  WORD6(v26) = v22;
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 2) != 0 )
      WORD5(v26) = v21 + 1;
  }
  else
  {
    if ( (v8 & 4) != 0 )
    {
      v22 /= 2;
      result = v22;
      WORD6(v26) = v22;
    }
    if ( (v8 & 2) != 0 )
    {
      result = v22 / 2 + 500;
      WORD6(v26) = result;
    }
  }
  *a2 = v26;
  return result;
}
