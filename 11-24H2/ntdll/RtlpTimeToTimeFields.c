/*
 * XREFs of RtlpTimeToTimeFields @ 0x1800A2440
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x1800A2200 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeToTimeFields @ 0x1800EA0A0 (RtlTimeToTimeFields.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800A2820 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2, __int64 *a3)
{
  int v3; // r9d
  _LEAP_SECOND_DATA *LeapSecondData; // r10
  unsigned int Count; // ebx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // rcx
  signed __int64 v14; // rcx
  unsigned __int128 v15; // rax
  __int64 v16; // r9
  unsigned int v17; // ecx
  unsigned int v18; // edi
  unsigned int v19; // ebx
  __int64 v20; // r11
  __int64 v21; // rbx
  __int16 v22; // ax
  __int16 result; // ax
  __int16 v24; // r9
  __int16 v25; // cx
  _LARGE_INTEGER *Data; // rdi
  __int64 QuadPart; // r10
  __int64 v28; // r10
  signed __int32 v29[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v30; // [rsp+20h] [rbp-18h]

  v3 = 0;
  WORD6(v30) = 0;
  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return RtlpTimeToTimeFieldsNoLeapSeconds();
  Count = LeapSecondData->Count;
  _InterlockedOr(v29, 0);
  v8 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v9 = *a3;
  else
    v9 = 0LL;
  v10 = *a1;
  v11 = 0;
  if ( Count )
  {
    Data = LeapSecondData->Data;
    do
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        if ( v10 < (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v9 )
          break;
        --v3;
      }
      else
      {
        v28 = QuadPart - v9;
        if ( v10 >= v28 + 20000000 )
        {
          ++v3;
        }
        else if ( v10 >= v28 + 10000000 )
        {
          v8 |= 2u;
        }
        else
        {
          if ( v10 < v28 )
            break;
          v8 |= 4u;
        }
      }
      ++v11;
      ++Data;
    }
    while ( v11 < Count );
  }
  v12 = v10 - 10000000LL * v3;
  v13 = v12 - 10000000;
  if ( (v8 & 2) == 0 )
    v13 = v12;
  if ( v13 < 0 )
    v14 = -(__int64)((unsigned __int64)(((unsigned __int64)-v13 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13);
  else
    v14 = (unsigned __int64)(((unsigned __int64)v13 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v14 < 0 )
    v15 = (unsigned __int64)-v14 * (unsigned __int128)(unsigned __int64)Magic86400000;
  else
    v15 = (unsigned __int64)v14 * (unsigned __int128)(unsigned __int64)Magic86400000;
  v16 = *((_QWORD *)&v15 + 1) >> 26;
  if ( v14 < 0 )
    LODWORD(v16) = -(int)v16;
  v17 = v14 - 86400000 * v16;
  HIWORD(v30) = ((int)v16 + 1) % 7u;
  v18 = (100
       * ((-36524 * ((100 * ((unsigned int)v16 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v16 % 0x23AB1) % 0x5B5)
       + 75)
      / 0x8EAD
      + 4
      * ((-36524 * ((100 * ((unsigned int)v16 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v16 % 0x23AB1) / 0x5B5
       + 25 * ((100 * ((unsigned int)v16 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v16 / 0x23AB1)));
  v19 = v18 + 1;
  v20 = (_DWORD)v16 + -365 * v18 - v18 / 0x190 - (v18 >> 2) + v18 / 0x64;
  if ( v18 + 1 != 400 * ((v18 + 1) / 0x190) && (v19 == 100 * (v19 / 0x64) || (v19 & 3) != 0) )
  {
    v21 = NormalYearDayToMonth[v20];
    v22 = NormalYearDaysPrecedingMonth[v21];
  }
  else
  {
    v21 = LeapYearDayToMonth[v20];
    v22 = LeapYearDaysPrecedingMonth[v21];
  }
  WORD1(v30) = v21 + 1;
  WORD2(v30) = v16 + -365 * v18 - v18 / 0x190 - (v18 >> 2) + v18 / 0x64 - v22 + 1;
  LOWORD(v30) = v18 + 1601;
  WORD3(v30) = v17 / 0x3E8 / 0x3C / 0x3C;
  WORD4(v30) = v17 / 0x3E8 / 0x3C % 0x3C;
  result = 1000;
  v24 = v17 / 0x3E8 % 0x3C;
  WORD5(v30) = v24;
  v25 = v17 % 0x3E8;
  WORD6(v30) = v25;
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 2) != 0 )
      WORD5(v30) = v24 + 1;
    goto LABEL_22;
  }
  if ( (v8 & 4) != 0 )
  {
    v25 /= 2;
    result = v25;
    WORD6(v30) = v25;
  }
  if ( (v8 & 2) == 0 )
  {
LABEL_22:
    *a2 = v30;
    return result;
  }
  result = v25 / 2 + 500;
  WORD6(v30) = result;
  *a2 = v30;
  return result;
}
