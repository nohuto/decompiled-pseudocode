/*
 * XREFs of VmpProcessUpdateSlat @ 0x14039A3E4
 * Callers:
 *     VmpAccessFaultBatch @ 0x140399920 (VmpAccessFaultBatch.c)
 * Callees:
 *     VmpFillSlat @ 0x14039CC40 (VmpFillSlat.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall VmpProcessUpdateSlat(int a1, unsigned __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  char *v6; // rdi
  int v7; // ebp
  unsigned int v8; // r9d
  int v9; // r11d
  __int64 v10; // rcx
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r10
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // r15d
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+30h] [rbp-148h] BYREF
  char v21; // [rsp+40h] [rbp-138h] BYREF

  v20[0] = 0LL;
  if ( a4 )
  {
    v6 = *(char **)(a4 + 24);
    v7 = *(_DWORD *)a4;
  }
  else
  {
    v6 = &v21;
    v7 = 16;
  }
  v8 = 0;
  v9 = 0;
  v10 = 48LL * a3;
  if ( a2 < v10 + a2 )
  {
    v11 = (unsigned __int64 *)(a2 + 32);
    v12 = (v10 - 1) / 0x30uLL + 1;
    do
    {
      v13 = *v11;
      if ( (*v11 & 0x100000000000000LL) == 0 )
      {
        v14 = (v13 >> 51) & 2 | 0xD;
        if ( (v13 & 0x20000000000000LL) == 0 )
          v14 = (v13 >> 51) & 2 | 1;
        v15 = v14 | 0x200000;
        if ( (v13 & 0x40000000000000LL) == 0 )
          v15 = v14;
        v16 = v15 | 0x8000;
        if ( (v13 & 0x80000000000000LL) == 0 )
          v16 = v15;
        v17 = v16 | 0x2000000;
        if ( (a5 & 0x20) != 0 )
          v17 = v16;
        if ( v9 != v17 || v8 == v7 )
        {
          if ( v8 )
          {
            VmpFillSlat(a1, v9, v8, (_DWORD)v6, (__int64)v20);
            v13 = *v11;
            v8 = 0;
          }
          v9 = v17;
        }
        v18 = 2LL * v8++;
        *(_QWORD *)&v6[8 * v18] = v13 & 0xFFFFFFFFFFFFFLL;
        *(_QWORD *)&v6[8 * v18 + 8] = v11[1];
      }
      v11 += 6;
      --v12;
    }
    while ( v12 );
    if ( v8 )
      VmpFillSlat(a1, v9, v8, (_DWORD)v6, (__int64)v20);
  }
  return 0LL;
}
