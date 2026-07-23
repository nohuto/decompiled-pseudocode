/*
 * XREFs of RtlVirtualUnwind2 @ 0x180042920
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180043630 (RtlpxVirtualUnwind.c)
 *     RtlpValidateContextFlags @ 0x180044820 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlVirtualUnwind2(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13)
{
  int v17; // eax
  int v18; // eax
  int v19; // edx
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  _QWORD v23[4]; // [rsp+60h] [rbp-28h] BYREF

  if ( !a13 )
  {
    v17 = RtlpValidateContextFlags((unsigned int)a5[12], 0LL);
    if ( v17 < 0 )
    {
      if ( v17 != -1073741811 )
      {
LABEL_4:
        if ( v17 < 0 )
        {
          a5[12] = 1048587;
LABEL_12:
          v23[2] = a9;
          v23[0] = a10;
          v23[1] = a11;
          return RtlpxVirtualUnwind(a1, a2, a3, a4, (__int64)a5, a6, a7, a8, a12, (__int64)v23, 0);
        }
LABEL_5:
        if ( (a5[12] & 0x100040) == 0x100040 )
        {
          v18 = a5[308];
          v19 = a5[312];
          if ( v18 > v19
            || (v20 = a5[309], v21 = a5[313], v20 < 0x530)
            || (int)(v20 + v18) < (int)(v21 + v19)
            || a5[311] != 1232
            || v21 < 0x40
            || (_DWORD *)((char *)a5 + a5[310] + 1232) != a5 )
          {
            a5[12] &= ~0x40u;
          }
        }
        goto LABEL_12;
      }
    }
    else if ( (a5[12] & 0x100000) != 0 )
    {
      goto LABEL_4;
    }
    a5[12] = a5[12] & 0xF800001F | 0x100000;
    goto LABEL_5;
  }
  return 3221225485LL;
}
