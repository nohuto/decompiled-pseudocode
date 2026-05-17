/*
 * XREFs of RtlVirtualUnwind2 @ 0x180077D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxVirtualUnwind @ 0x180078D20 (RtlpxVirtualUnwind.c)
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
  unsigned int v17; // r10d
  bool v18; // dl
  int v19; // ecx
  int v20; // r8d
  unsigned int v21; // r9d
  unsigned int v22; // r11d
  _QWORD v24[4]; // [rsp+60h] [rbp-28h] BYREF

  if ( !a13 )
  {
    v17 = a5[12];
    if ( (v17 & 0x27FFFF80) != 0x10000
      && (v17 & 0x7FFFF20) != 0x100000
      && (v17 & 0x7FFFFF0) != 0x200000
      && (v17 & 0x7FFFFC0) != 0x400000 )
    {
      goto LABEL_20;
    }
    v18 = 0;
    if ( (v17 & 0x400020) != 0x400020 )
      v18 = (v17 & 0x10040) != 65600 && (v17 & 0x100040) != 1048640;
    if ( !v18 && !MEMORY[0x7FFE03D8] || (v17 & 0x100080) == 0x100080 )
    {
      a5[12] = 1048587;
LABEL_16:
      v24[2] = a9;
      v24[0] = a10;
      v24[1] = a11;
      return RtlpxVirtualUnwind(a1, a2, a3, a4, (__int64)a5, a6, a7, a8, a12, (__int64)v24, 0);
    }
    if ( (v17 & 0x100000) == 0 )
    {
LABEL_20:
      v17 = v17 & 0xF800001F | 0x100000;
      a5[12] = v17;
    }
    if ( (v17 & 0x100040) == 0x100040 )
    {
      v19 = a5[308];
      v20 = a5[312];
      if ( v19 > v20
        || (v21 = a5[309], v22 = a5[313], v21 < 0x530)
        || (int)(v21 + v19) < (int)(v22 + v20)
        || a5[311] != 1232
        || v22 < 0x40
        || (_DWORD *)((char *)a5 + a5[310] + 1232) != a5 )
      {
        a5[12] = v17 & 0xFFFFFFBF;
      }
    }
    goto LABEL_16;
  }
  return 3221225485LL;
}
