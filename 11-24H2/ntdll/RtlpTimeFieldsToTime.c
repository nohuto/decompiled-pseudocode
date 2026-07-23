/*
 * XREFs of RtlpTimeFieldsToTime @ 0x1800A2A70
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x1800A2200 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x1800EED00 (RtlTimeFieldsToTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x1800D3760 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__int16 *a1, __int64 *a2, __int64 *a3)
{
  unsigned int v3; // esi
  _LEAP_SECOND_DATA *LeapSecondData; // rdi
  unsigned int Count; // ebp
  unsigned int v7; // ebx
  __int64 v8; // r14
  int v9; // eax
  int v10; // edx
  unsigned int v11; // r9d
  unsigned int v12; // r13d
  unsigned int v13; // r8d
  unsigned int v14; // r11d
  int v15; // r10d
  int v16; // ecx
  __int64 v17; // r14
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 QuadPart; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  signed __int32 v29[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v30; // [rsp+20h] [rbp-48h]
  unsigned int v31; // [rsp+24h] [rbp-44h]
  __int128 v32; // [rsp+28h] [rbp-40h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v33 = 0LL;
  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return ((__int64 (*)(void))RtlpTimeFieldsToTimeNoLeapSeconds)();
  Count = LeapSecondData->Count;
  _InterlockedOr(v29, 0);
  v7 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v8 = *a3;
  else
    v8 = 0LL;
  *(_QWORD *)&v32 = v8;
  if ( v7 )
  {
    v24 = *((_QWORD *)a1 + 1) >> 16;
    v32 = *(_OWORD *)a1;
    if ( (_WORD)v24 == 60 )
    {
      WORD5(v32) = 59;
      v7 |= 2u;
    }
    if ( (unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(&v32, &v33) )
    {
      v20 = v33;
      while ( v3 < Count )
      {
        QuadPart = LeapSecondData->Data[v3].QuadPart;
        if ( QuadPart < 0 )
        {
          v27 = (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v8;
          if ( v20 < v27 + 10000000 )
          {
            if ( v20 >= v27 )
              return 0;
            break;
          }
          v20 -= 10000000LL;
        }
        else
        {
          v26 = QuadPart - v8;
          if ( v20 < v26 + 10000000 )
          {
            if ( v20 >= v26 )
              v7 |= 4u;
            break;
          }
          v20 += 10000000LL;
        }
        ++v3;
      }
      if ( (v7 & 2) == 0 )
        goto LABEL_25;
      if ( v7 >= 4 )
      {
        v20 += 10000000LL;
        goto LABEL_25;
      }
    }
    return 0;
  }
  v9 = a1[1];
  v10 = a1[2];
  v11 = *a1;
  v12 = a1[3];
  v13 = v9 - 1;
  LODWORD(v33) = a1[4];
  v14 = a1[5];
  v15 = v10 - 1;
  v31 = a1[6];
  v30 = v14;
  if ( v9 < 1 || v10 < 1 || v11 - 1601 > 0x722A || v13 > 0xB )
    return 0;
  if ( v11 != 400 * (v11 / 0x190) && (v11 == 100 * (v11 / 0x64) || (v11 & 3) != 0) )
  {
    v16 = NormalYearDaysPrecedingMonth[v9];
    v17 = v13;
    v18 = NormalYearDaysPrecedingMonth[v17];
  }
  else
  {
    v16 = LeapYearDaysPrecedingMonth[v9];
    v17 = v13;
    v18 = LeapYearDaysPrecedingMonth[v17];
  }
  if ( (__int16)v15 >= v16 - v18 || v12 > 0x17 || (unsigned int)v33 > 0x3B || v30 > 0x3B || v31 > 0x3E7 )
    return 0;
  if ( v11 - 1600 != 400 * ((v11 - 1600) / 0x190) && (v11 - 1600 == 100 * ((v11 - 1600) / 0x64) || (v11 & 3) != 0) )
    v19 = NormalYearDaysPrecedingMonth[v17];
  else
    v19 = LeapYearDaysPrecedingMonth[v17];
  v20 = 10000
      * (86400000LL
       * (int)(v19 + (v11 - 1601) / 0x190 + ((v11 - 1601) >> 2) + 365 * (v11 - 1601) - (v11 - 1601) / 0x64 + v15)
       + v31
       + 1000 * (v30 + 60 * ((_DWORD)v33 + 60 * v12)));
  while ( v3 < Count )
  {
    v22 = LeapSecondData->Data[v3].QuadPart;
    if ( v22 >= 0 )
    {
      v28 = v22 - v32;
      if ( v20 < v28 + 10000000 )
      {
        if ( v20 < v28 )
          break;
        v20 = 2 * v20 - v28;
      }
      else
      {
        v20 += 10000000LL;
      }
    }
    else
    {
      v23 = (v22 & 0x7FFFFFFFFFFFFFFFLL) - v32;
      if ( v20 < v23 + 10000000 )
      {
        if ( v20 < v23 )
          break;
        return 0;
      }
      v20 -= 10000000LL;
    }
    ++v3;
  }
LABEL_25:
  *a2 = v20;
  return 1;
}
