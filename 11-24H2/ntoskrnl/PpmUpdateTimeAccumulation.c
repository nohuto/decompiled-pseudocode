/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x1403700D0
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x14037009C (PpmContinueActiveTimeAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x140371B70 (PpmEndActiveTimeAccumulation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx

  result = __rdtsc();
  v5 = *(_QWORD *)(a1 + 36768);
  v6 = result;
  if ( (v5 & 0x8000000000LL) != 0 )
  {
    result = __readmsr(0xDB2u);
    v7 = result;
  }
  else
  {
    v7 = 0LL;
  }
  if ( a3
    && (v8 = a2 - *(_QWORD *)(a1 + 35000),
        _InterlockedAdd64((volatile signed __int64 *)(a1 + 35016), v8),
        v5 = *(_QWORD *)(a1 + 36768),
        (v5 & 0x8000000000LL) != 0) )
  {
    v9 = v6 - *(_QWORD *)(a1 + 34968);
    if ( v8 )
    {
      if ( v9 )
      {
        v10 = v7 - *(_QWORD *)(a1 + 35080);
        if ( v9 != v10 )
        {
          if ( is_mul_ok(v8, v10) )
          {
            result = v8 * (unsigned __int128)v10 / v9;
            v8 = result;
          }
          else
          {
            result = v10 * (v8 % v9) / v9;
            v8 = v10 * (v8 / v9) + result;
          }
        }
      }
    }
    *(_QWORD *)(a1 + 35088) += v8;
    *(_QWORD *)(a1 + 35000) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 35000) = a2;
    if ( !a3 )
      goto LABEL_14;
  }
  v11 = *(_QWORD *)(a1 + 34968);
  if ( v6 > v11 )
  {
    result = v6 - v11;
    *(_QWORD *)(a1 + 34976) += v6 - v11;
  }
LABEL_14:
  *(_QWORD *)(a1 + 34968) = v6;
  if ( (v5 & 0x8000000000LL) != 0 )
    *(_QWORD *)(a1 + 35080) = v7;
  return result;
}
