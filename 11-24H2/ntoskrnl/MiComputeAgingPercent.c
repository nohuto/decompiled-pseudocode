/*
 * XREFs of MiComputeAgingPercent @ 0x1402F3B30
 * Callers:
 *     MiProcessWorkingSets @ 0x1402F2D10 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesForTrimPass @ 0x1402F51C4 (MiGetAvailablePagesForTrimPass.c)
 *     Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline @ 0x14067998C (Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall MiComputeAgingPercent(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 AvailablePagesForTrimPass; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  bool v9; // cf
  __int64 result; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx

  v1 = *(_QWORD *)(a1 + 17600);
  LOWORD(v2) = 0;
  AvailablePagesForTrimPass = MiGetAvailablePagesForTrimPass();
  v4 = 0LL;
  v5 = (unsigned __int64 *)(v1 + 200);
  v6 = 8LL;
  do
  {
    v7 = *v5;
    if ( *v5 < AvailablePagesForTrimPass )
    {
      v7 = AvailablePagesForTrimPass;
      *v5 = AvailablePagesForTrimPass;
    }
    v4 += v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  v8 = v4 >> 3;
  *(_QWORD *)(v1 + 264) = (AvailablePagesForTrimPass + 7 * v8) >> 3;
  *(_QWORD *)(v1 + 8LL * ((*(_DWORD *)(v1 + 120))++ & 7) + 200) = AvailablePagesForTrimPass;
  if ( (unsigned int)Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !AvailablePagesForTrimPass || AvailablePagesForTrimPass < v8 )
      goto LABEL_12;
    v9 = AvailablePagesForTrimPass < *(_QWORD *)(v1 + 328);
  }
  else
  {
    v9 = AvailablePagesForTrimPass < v8;
  }
  if ( !v9 )
  {
    result = 3600LL;
    goto LABEL_22;
  }
LABEL_12:
  v11 = *(_QWORD *)(v1 + 328);
  v12 = v8 - AvailablePagesForTrimPass;
  if ( AvailablePagesForTrimPass <= v11 )
  {
    result = 0LL;
LABEL_21:
    LOWORD(v2) = 1000;
    goto LABEL_22;
  }
  v13 = AvailablePagesForTrimPass - v11;
  if ( v12 < 8 )
    v12 = 8LL;
  v14 = v13 / (v12 >> 3);
  v15 = v14 - 2;
  if ( v14 < 2 )
    v15 = v13 / (v12 >> 3);
  result = v15;
  if ( !v15 )
    goto LABEL_21;
  v2 = 0x1B58 / v15;
  result = v15;
  if ( (unsigned int)(0x1B58 / v15) > 0x3E8 )
    goto LABEL_21;
LABEL_22:
  *(_QWORD *)(v1 + 280) = result;
  *(_WORD *)(v1 + 274) = v2;
  return result;
}
