/*
 * XREFs of ValidatePepPerformanceSymmetry @ 0x140030D3C
 * Callers:
 *     ValidatePerfDomainSymmetry @ 0x140030F30 (ValidatePerfDomainSymmetry.c)
 * Callees:
 *     WPP_RECORDER_SF_SS @ 0x1400085E8 (WPP_RECORDER_SF_SS.c)
 *     WPP_RECORDER_SF_SSd @ 0x140008D98 (WPP_RECORDER_SF_SSd.c)
 *     WPP_RECORDER_SF_SSs @ 0x140009550 (WPP_RECORDER_SF_SSs.c)
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 */

__int64 __fastcall ValidatePepPerformanceSymmetry(const wchar_t *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  const char **v4; // rsi
  __int64 v5; // rbx
  __int64 v7; // r13
  unsigned int v10; // edi
  char v11; // al
  __int64 v12; // r8
  __int64 v13; // rdx
  int v15; // [rsp+20h] [rbp-89h]
  __int64 v16; // [rsp+40h] [rbp-69h]
  int v17; // [rsp+50h] [rbp-59h]
  const char *v18; // [rsp+58h] [rbp-51h] BYREF
  int v19; // [rsp+60h] [rbp-49h]
  const char *v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+70h] [rbp-39h]
  const char *v22; // [rsp+78h] [rbp-31h]
  int v23; // [rsp+80h] [rbp-29h]
  const char *v24; // [rsp+88h] [rbp-21h]
  int v25; // [rsp+90h] [rbp-19h]
  const char *v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+A0h] [rbp-9h]
  const char *v28; // [rsp+A8h] [rbp-1h]
  int v29; // [rsp+B0h] [rbp+7h]
  const char *v30; // [rsp+B8h] [rbp+Fh]

  v16 = a4;
  v18 = "HighestPerformance";
  v4 = &v18;
  v17 = 4;
  v20 = "NominalPerformance";
  v19 = 8;
  v22 = "LowestNonlinearPerformance";
  v5 = 0LL;
  v21 = 12;
  v24 = "LowestPerformance";
  v23 = 16;
  v26 = "NominalFrequency";
  v7 = 7LL;
  v25 = 20;
  v28 = "FrequencyCounterIndex";
  v27 = 48;
  v30 = "PerformanceCounterIndex";
  v29 = 52;
  v10 = 0;
  do
  {
    if ( *(_DWORD *)(*((unsigned int *)v4 - 2) + a2) != *(_DWORD *)(*((unsigned int *)v4 - 2) + a4) )
    {
      v10 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_SSs((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, 0x4Fu, v15, a1, a3, *v4);
        a4 = v16;
      }
    }
    v4 += 2;
    --v7;
  }
  while ( v7 );
  v11 = *(_BYTE *)(a2 + 37);
  if ( v11 == *(_BYTE *)(a4 + 37) )
  {
    if ( v11 )
    {
      do
      {
        v12 = *(_QWORD *)(a4 + 40);
        v13 = *(_QWORD *)(a2 + 40);
        if ( *(_DWORD *)(v13 + 24 * v5) != *(_DWORD *)(v12 + 24 * v5)
          || *(_DWORD *)(v13 + 24 * v5 + 4) != *(_DWORD *)(v12 + 24 * v5 + 4) )
        {
          v10 = -1073741823;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_SSd((__int64)WPP_GLOBAL_Control->DeviceExtension, v13, v12, a4, v15, a1, a3);
            a4 = v16;
          }
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(unsigned __int8 *)(a2 + 37) );
    }
  }
  else
  {
    v10 = -1073741823;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_SS((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, (__int64)a3, 0x50u, v15, a1, a3);
  }
  return v10;
}
