/*
 * XREFs of sub_18002DC6C @ 0x18002DC6C
 * Callers:
 *     sub_180034CF0 @ 0x180034CF0 (sub_180034CF0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18002DC6C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  char v6; // r9
  int v7; // r8d
  __int128 v8; // rax
  char result; // al

  v4 = 100 * Xtime_get_ticks();
  if ( (double)(int)*a2 <= 864000.0 )
  {
    v6 = 0;
    v5 = 1000000000LL * *a2;
    v7 = v5 + v4;
  }
  else
  {
    v5 = 864000000000000LL;
    v6 = 1;
    v7 = v4 - 1391067136;
  }
  v8 = (v4 + v5) * (__int128)0x112E0BE826D694B3LL;
  result = v6;
  *((_QWORD *)&v8 + 1) = (*((_QWORD *)&v8 + 1) >> 63) + (*((__int64 *)&v8 + 1) >> 26);
  *(_QWORD *)a1 = *((_QWORD *)&v8 + 1);
  *(_DWORD *)(a1 + 8) = v7 - 1000000000 * DWORD2(v8);
  return result;
}
