/*
 * XREFs of RtlTimeToElapsedTimeFields @ 0x1800EC090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTimeToElapsedTimeFields(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  signed __int64 v5; // rcx
  unsigned __int128 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // ecx
  unsigned int v9; // r9d
  __int64 result; // rax

  v3 = *a1;
  if ( v3 < 0 )
    v3 = -v3;
  v5 = (unsigned __int64)(((unsigned __int64)v3 * (unsigned __int128)(unsigned __int64)Magic10000) >> 64) >> 13;
  if ( *a1 < 0 )
    v5 = -v5;
  if ( v5 < 0 )
    v6 = (unsigned __int64)-v5 * (unsigned __int128)(unsigned __int64)Magic86400000;
  else
    v6 = (unsigned __int64)v5 * (unsigned __int128)(unsigned __int64)Magic86400000;
  v7 = *((_QWORD *)&v6 + 1) >> 26;
  if ( v5 < 0 )
    v7 = -v7;
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 4) = v7;
  v8 = v5 - 86400000 * v7;
  v9 = v8 / 0x3E8 / 0x3C;
  *(_WORD *)(a2 + 6) = v9 / 0x3C;
  *(_WORD *)(a2 + 8) = v9 % 0x3C;
  *(_WORD *)(a2 + 10) = v8 / 0x3E8 % 0x3C;
  result = 1000LL;
  *(_WORD *)(a2 + 12) = v8 % 0x3E8;
  return result;
}
