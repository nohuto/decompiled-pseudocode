/*
 * XREFs of sub_1409DAF88 @ 0x1409DAF88
 * Callers:
 *     sub_1409DA1F4 @ 0x1409DA1F4 (sub_1409DA1F4.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     sub_1409DB02C @ 0x1409DB02C (sub_1409DB02C.c)
 */

__int64 __fastcall sub_1409DAF88(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v8; // edi
  unsigned __int64 v9; // r15

  v4 = 0LL;
  v5 = 0;
  if ( (_DWORD)a2 )
  {
    v8 = (unsigned int)(a2 + 63) >> 6;
    if ( v8 + 1 > 0x400 )
      return (unsigned int)-1073741675;
    v9 = (ExGenRandom(1, a2, (__int64)a3, a4) & 0x7FFFFFFFuLL) % (1024 - v8);
    v4 = sub_1409DB02C(a1, v9, 1024 - (v8 + 1), v8);
    if ( !v4 )
      v4 = sub_1409DB02C(a1, 0LL, (unsigned int)v9, v8);
  }
  if ( a3 )
    *a3 = v4;
  return v5;
}
