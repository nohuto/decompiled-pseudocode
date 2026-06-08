/*
 * XREFs of ValidateAcpi_PSD_TSD @ 0x140030B7C
 * Callers:
 *     InitAcpiPerfDomain @ 0x140037C7C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140037EF8 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_SsD @ 0x14000AAD4 (WPP_RECORDER_SF_SsD.c)
 */

__int64 __fastcall ValidateAcpi_PSD_TSD(unsigned int *a1, char a2, const wchar_t *a3)
{
  __int64 v4; // rdx
  bool v5; // zf
  unsigned __int16 v6; // r9
  __int64 result; // rax
  const char *v8; // rcx
  int v9; // [rsp+20h] [rbp-28h]

  v4 = *a1;
  if ( (_DWORD)v4 == 1 )
  {
    if ( a1[1] == 5 )
    {
      v4 = a1[4];
      if ( (_DWORD)v4 == 1 || (unsigned int)(v4 - 252) <= 2 )
      {
        v4 = a1[5];
        if ( (unsigned int)v4 <= 0x800 )
        {
          result = 0LL;
          if ( (_DWORD)v4 )
            return result;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v5 = a2 == 0;
            v6 = 33;
            goto LABEL_17;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v5 = a2 == 0;
          v6 = 32;
          goto LABEL_17;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = a2 == 0;
        v6 = 31;
        goto LABEL_17;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = a2 == 0;
      v6 = 30;
LABEL_17:
      v8 = "_PSD";
      if ( v5 )
        v8 = "_TSD";
      WPP_RECORDER_SF_SsD((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, (__int64)"_TSD", v6, v9, a3, v8);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = a2 == 0;
    v6 = 29;
    goto LABEL_17;
  }
  return 3221225473LL;
}
