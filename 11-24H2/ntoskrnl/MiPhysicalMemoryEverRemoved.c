/*
 * XREFs of MiPhysicalMemoryEverRemoved @ 0x14066F818
 * Callers:
 *     MiMapNewPfns @ 0x1407E9C7C (MiMapNewPfns.c)
 *     MiUnmapPfns @ 0x1407EA6E0 (MiUnmapPfns.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiPhysicalMemoryEverRemoved(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  unsigned __int64 v6; // r8
  char v7; // bl
  unsigned __int64 v8; // r11
  ULONG *v9; // rdx
  __int64 v10; // r10
  ULONG *v11; // r11
  bool v12; // zf
  bool i; // zf
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1 >> 18;
  v4 = (a2 + a1 + 0x3FFFF) >> 18;
  if ( v4 <= 0x8000 || !a3 && (v4 = 0x8000LL, v3 < 0x8000) )
  {
    v16[0] = 0x8000LL;
    v6 = v4 - v3;
    v16[1] = &unk_140E2DD30;
    if ( a3 )
    {
      if ( v3 < v16[0] )
      {
        if ( v6 > 1 )
        {
          if ( v16[0] - v3 >= v6 )
          {
            v7 = v4 - 1;
            v8 = ((v4 - 1) >> 6) + 566;
            v9 = &MiState + 2 * (a1 >> 24) + 1132;
            v10 = *(_QWORD *)v9;
            v11 = &MiState + 2 * v8;
            if ( v9 == v11 )
            {
              v12 = (v10 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v6) << v3)) == 0;
LABEL_18:
              if ( v12 )
                return 0LL;
            }
            else
            {
              for ( i = (v10 & (-1LL << v3)) == 0; i; i = v14 == 0 )
              {
                v9 += 2;
                v14 = *(_QWORD *)v9;
                if ( v9 == v11 )
                {
                  v12 = (v14 & (0xFFFFFFFFFFFFFFFFuLL >> ~v7)) == 0;
                  goto LABEL_18;
                }
              }
            }
          }
        }
        else if ( v6 == 1 && !_bittest64((const signed __int64 *)&MiState + (a1 >> 24) + 566, (a1 >> 18) & 0x3F) )
        {
          return 0LL;
        }
      }
    }
    else
    {
      RtlSetBitsEx((__int64)v16, v3, v6);
    }
  }
  return 1LL;
}
