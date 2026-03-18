/*
 * XREFs of MiComputeAgingPercent @ 0x1402D1414
 * Callers:
 *     MiProcessWorkingSets @ 0x140378690 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesForTrimPass @ 0x1402D15A8 (MiGetAvailablePagesForTrimPass.c)
 */

__int64 __fastcall MiComputeAgingPercent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 AvailablePagesForTrimPass; // rax
  __int64 v5; // r10
  __int16 v6; // r8
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 *v9; // rax
  __int64 v10; // r11
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r9
  __int64 result; // rax
  unsigned __int64 v19; // rcx

  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass(a1, a2, a3, a4);
  v6 = 0;
  v7 = AvailablePagesForTrimPass;
  v8 = 0LL;
  v9 = (unsigned __int64 *)(v5 + 200);
  v10 = 8LL;
  do
  {
    v11 = *v9;
    if ( *v9 < v7 )
    {
      v11 = v7;
      *v9 = v7;
    }
    v8 += v11;
    ++v9;
    --v10;
  }
  while ( v10 );
  v12 = v8 >> 3;
  *(_QWORD *)(v5 + 264) = (v7 + 7 * v12) >> 3;
  *(_QWORD *)(v5 + 8LL * ((*(_DWORD *)(v5 + 120))++ & 7) + 200) = v7;
  if ( v7 >= v12 )
  {
    result = 3600LL;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(v5 + 328);
  v14 = v12 - v7;
  if ( v7 <= v13 )
  {
    result = 0LL;
  }
  else
  {
    v15 = v7 - v13;
    if ( v14 < 8 )
      v14 = 8LL;
    v16 = v15 / (v14 >> 3);
    v17 = v16 - 2;
    if ( v16 < 2 )
      v17 = v16;
    result = v17;
    if ( v17 )
    {
      v19 = 0x1B58 / v17;
      result = v17;
      if ( (unsigned int)(0x1B58 / v17) <= 0x3E8 )
        goto LABEL_14;
    }
  }
  LOWORD(v19) = 1000;
LABEL_14:
  v6 = v19;
LABEL_15:
  *(_QWORD *)(v5 + 280) = result;
  *(_WORD *)(v5 + 274) = v6;
  return result;
}
