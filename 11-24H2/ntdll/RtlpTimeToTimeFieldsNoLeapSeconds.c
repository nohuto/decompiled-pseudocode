/*
 * XREFs of RtlpTimeToTimeFieldsNoLeapSeconds @ 0x1800A2820
 * Callers:
 *     RtlpTimeToTimeFields @ 0x1800A2440 (RtlpTimeToTimeFields.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTimeToTimeFieldsNoLeapSeconds(__int64 *a1, _WORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  signed __int64 v5; // r8
  unsigned __int128 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // edi
  unsigned int v10; // r11d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int16 v13; // ax
  unsigned int v14; // r10d
  __int64 result; // rax

  v2 = *a1;
  v4 = v2;
  if ( v2 < 0 )
    v4 = -v2;
  v5 = (unsigned __int64)(((unsigned __int64)v4 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( v2 < 0 )
    v5 = -v5;
  if ( v5 < 0 )
    v6 = (unsigned __int64)-v5 * (unsigned __int128)(unsigned __int64)Magic86400000;
  else
    v6 = (unsigned __int64)v5 * (unsigned __int128)(unsigned __int64)Magic86400000;
  v7 = *((_QWORD *)&v6 + 1) >> 26;
  if ( v5 < 0 )
    LODWORD(v7) = -(int)v7;
  v8 = v5 - 86400000 * v7;
  a2[7] = ((int)v7 + 1) % 7u;
  v9 = (100 * ((-36524 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v7 % 0x23AB1) % 0x5B5)
      + 75)
     / 0x8EAD
     + 4
     * ((-36524 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49) + (unsigned int)v7 % 0x23AB1) / 0x5B5
      + 25 * ((100 * ((unsigned int)v7 % 0x23AB1) + 75) / 0x37BB49 + 4 * ((unsigned int)v7 / 0x23AB1)));
  v10 = v9 + 1;
  v11 = (_DWORD)v7 + -365 * v9 - v9 / 0x190 - (v9 >> 2) + v9 / 0x64;
  if ( v9 + 1 != 400 * ((v9 + 1) / 0x190) && (v10 == 100 * (v10 / 0x64) || (v10 & 3) != 0) )
  {
    v12 = NormalYearDayToMonth[v11];
    v13 = NormalYearDaysPrecedingMonth[v12];
  }
  else
  {
    v12 = LeapYearDayToMonth[v11];
    v13 = LeapYearDaysPrecedingMonth[v12];
  }
  a2[1] = v12 + 1;
  a2[2] = v11 - v13 + 1;
  v14 = v8 / 0x3E8 / 0x3C;
  *a2 = v9 + 1601;
  a2[3] = v14 / 0x3C;
  a2[4] = v14 % 0x3C;
  a2[5] = v8 / 0x3E8 % 0x3C;
  result = 1000LL;
  a2[6] = v8 % 0x3E8;
  return result;
}
